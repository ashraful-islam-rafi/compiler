#include <iostream>
#include <cstdint>
#include <string>

using namespace std;

extern "C"
{
   typedef unsigned long long u64;
   typedef signed long long s64;
   typedef unsigned long u32;
   typedef signed long s32;

   enum DataType
   {
      INT = 0x1,
      BOOLEAN = 0x2,
      STRING = 0x3,
      FLOAT = 0x4,
      CLO = 0x5,
      CONS = 0x7
   };

// Macros
#define NULL_VALUE 0
#define ENV 9
#define ENV_ARRAY 8

#define DECODE_INT(v) ((s32)((v) >> 32))
#define ENCODE_INT(v) (((u64)(v) << 32) | INT)
#define DECODE_CONS(v) ((u64 *)((v) & ~CONS))
#define ENCODE_CONS(v) (((u64)(v)) | CONS)
#define DECODE_CLO(v) ((u64 *)((v) & ~CLO))
#define ENCODE_CLO(v) (((u64)(v)) | CLO)

#define DECODE_ENV_ARR(v) ((u64 *)((v) & ~ENV_ARRAY))
#define ENCODE_ENV_ARR(v) (((u64)(v)) | ENV_ARRAY)

   void recursive_prim_print(u64 v)
   {
      switch (v & 7)
      {
      case NULL_VALUE:
         cout << "()";
         break;
      case INT:
         cout << DECODE_INT(v);
         break;
      case CLO:
         cout << "#<procedure>";
         break;
      case CONS:
      {
         u64 *p = DECODE_CONS(v);
         cout << "(";
         recursive_prim_print(p[0]);
         cout << " . ";
         recursive_prim_print(p[1]);
         cout << ")";
         break;
      }
      default:
         cout << "Error: unknown prim value: " << v << endl;
      }
   }

   void *print_halt(void *v) // halt
   {
      u64 val = reinterpret_cast<u64>(v);
      switch (val & 7)
      {
      case CONS:
      {
         u64 *p = DECODE_CONS(val);
         cout << "'(";
         recursive_prim_print(p[0]);
         cout << " . ";
         recursive_prim_print(p[1]);
         cout << ")";
         cout << endl;
         exit(0);
         return NULL_VALUE;
      }
      default:
      {
         cout << "Error: expected a cons cell!" << endl;
         exit(0);
         return NULL_VALUE;
      }
      }
   }

   // start new

   u64 encodeNull()
   {
      return NULL_VALUE;
   }

   void *prim_cons(void *arg1, void *arg2)
   {
      u64 car = reinterpret_cast<u64>(arg1);
      u64 cdr = reinterpret_cast<u64>(arg2);

      u64 *ptr = (u64 *)(malloc(2 * sizeof(u64)));
      ptr[0] = car;
      ptr[1] = cdr;

      return reinterpret_cast<void *>(ENCODE_CONS(ptr));
   }

   void *prim_car(void *p)
   {
      u64 ptr = reinterpret_cast<u64>(p);

      if ((ptr & 7) != CONS)
      {
         cout << "Error-car: expected a cons cell!" << endl;
         exit(0);
      }

      u64 *pp = DECODE_CONS(ptr);
      return reinterpret_cast<void *>(pp[0]);
   }

   void *prim_cdr(void *p)
   {
      u64 ptr = reinterpret_cast<u64>(p);

      if ((ptr & 7) != CONS)
      {
         cout << "Error-cdr: expected a cons cell!" << endl;
         exit(0);
      }

      u64 *pp = DECODE_CONS(ptr);
      return reinterpret_cast<void *>(pp[1]);
   }

   void *apply_prim__u43(void *p)
   {
      u64 ptr = reinterpret_cast<u64>(p);
      u64 sum = 0;

      while ((ptr & 7) == CONS)
      {
         u64 *pp = DECODE_CONS(ptr);

         // cout << "in apply prim > Car: " << DECODE_INT(pp[0]) << endl;
         // cout << "in apply prim > Cdr: " << DECODE_INT(pp[1]) << endl;

         sum += DECODE_INT(pp[0]);

         // cout << "sum: " << sum << endl;
         ptr = pp[1];
      }

      return reinterpret_cast<void *>(ENCODE_INT((s32)sum));
   }

   // build envlist
   u64 allocate_env_space(u64 envlength, u64 tempval)
   {
      const u64 temp_len = DECODE_INT(envlength);
      // u64 temp_len = static_cast<u64>(DECODE_INT(envlength)) + 1;

      u64 *env_array = (u64 *)(malloc((temp_len + 1) * sizeof(u64)));

      // to distinguish env array from other data types
      env_array[0] = (temp_len << 3) | ENV;

      for (u64 i = 1; i <= temp_len; ++i)
      {
         env_array[i] = tempval;
      }

      return ENCODE_ENV_ARR(env_array);
   }

   u64 set_env_value(u64 arr, u64 idx, u64 val)
   {
      // cout << "position: " << idx << " val: " << val << endl;

      u64 *env_arr = DECODE_ENV_ARR(arr);
      u64 idx_val = DECODE_INT(idx) + 1;

      // using a pointer to access the element and set its value
      u64 *elem_ptr = &env_arr[idx_val];
      *elem_ptr = val;

      return NULL_VALUE;
   }

   void *get_env_value(void *v, void *idx)
   {
      u64 obj = reinterpret_cast<u64>(v);
      u64 index = reinterpret_cast<u64>(idx);

      // cout<< "tag2: " <<(((u64 *)DECODE_ENV_ARR(obj))[0] & 7) << endl;

      return reinterpret_cast<void *>(((u64 *)DECODE_ENV_ARR(obj))[1 + (DECODE_INT(index))]);
   }

   void *build_env_list(void *clo_obj, u64 var, u64 position)
   {
      u64 *obj = DECODE_CLO(reinterpret_cast<u64>(clo_obj));

      u64 ptr = obj[1];

      return reinterpret_cast<void *>(set_env_value(ptr, DECODE_INT(reinterpret_cast<u64>(position)), reinterpret_cast<u64>(var)));
   }

   void *make_closure(u64 envCount, u64 *tempptr)
   {
      // assgning closure pointer
      u64 *obj = (u64 *)(malloc(2 * sizeof(u64))); // new u64[2];
      obj[0] = reinterpret_cast<u64>(tempptr);

      obj[1] = reinterpret_cast<u64>(allocate_env_space(ENCODE_INT((s32)envCount), ENCODE_INT((s32)0)));

      return reinterpret_cast<void *>(ENCODE_CLO(obj));
   }

   void *get_closure_ptr(void *c)
   {
      u64 ptr = reinterpret_cast<u64>(c);
      u64 *cc = DECODE_CLO(ptr);
      return (u64 *)cc[0];
   }

   void **halt; // = (void **)malloc(sizeof(void *) * 1);

   void fhalt(void *arglist)
   {
      cout << "\nin fhalt" << endl;
      recursive_prim_print(reinterpret_cast<u64>(arglist));
      cout << endl;
      cout << prim_car(arglist) << endl;
      exit(0);
   }

   // void fhalt(void *env, void *arglist)
   // {
   //   cout << prim_car(arglist) << endl;
   //   exit(0);
   // }

   // end new

   // u64 halt;
   // void fhalt(void *env, u64 arglist)
   // {
   //   u64 car = prim_car(arglist);
   //   cout<< car << endl;

   //   exit(0);
   // }

   /* int main() {
     int value = 1001;
     void* encodedInt = encodeInt(value);
     int decodedInt = decodeInt(encodedInt);
     cout << "Encoded int value: " << encodedInt << endl;
     cout << "Decoded int value: " << decodedInt << endl;

     bool bvalue = true;
     void* encodedBool = encodeBool(bvalue);
     bool decodedBool = decodeBool(encodedBool);
     cout << "Encoded boolean value: " << encodedBool << endl;
     cout << "Decoded boolean value: " << decodedBool << endl;

     string svalue = "is this working?";

     void* encodedString = encodeString(svalue);
     string decodedString = decodeString(encodedString);
     cout << "Encoded string value: " << encodedString << endl;
     cout << "Decoded string value: " << decodedString << endl;

     float fvalue = 42.203;
     void* encodedFloat = encodeFloat(fvalue);
     float decodedFloat = decodeFloat(encodedFloat);
     cout << "Encoded float value: " << encodedFloat << endl;
     cout << "Decoded float value: " << decodedFloat << endl;
   } */
}