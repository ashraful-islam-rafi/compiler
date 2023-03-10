#include <iostream>
#include <cstdint>
#include <string>

using namespace std;

// Some helpful Macros



/**
 * 
 * @param val value for performing the masking
 * @return This macro masks off the three least significant bits of the input value 
 *          by performing a bitwise AND operation with the complement of a 7 - bit mask.
 */
#define MASK(val) ((val) & ~(7ULL))

#define NULL_VALUE 0
#define ENV_ARRAY 1

                                                                                                                                           extern "C"
{
   typedef uint64_t u64;
   typedef int64_t s64;
   typedef uint32_t u32;
   typedef int32_t s32;

   /*
   //encoding and decoding process : example for interger

   // 7ULL     = 0000000000000000000000000000000000000000000000000000000000000111
   // ~(7ULL)  = 1111111111111111111111111111111111111111111111111111111111111000

   val = 3
   encode_int(val) 		 			   = 0000000000000000000000000000001100000000000000000000000000000000

   //decoding
   7ULL                     			= 0000000000000000000000000000000000000000000000000000000000000111
   ~7ULL                    			= 1111111111111111111111111111111111111111111111111111111111111000
   mask(val)          		 			= val & ~(7ULL)
                                    = 0000000000000000000000000000001100000000000000000000000000000000
                                    & 1111111111111111111111111111111111111111111111111111111111111000
                                    ------------------------------------------------------------------
                                    = 0000000000000000000000000000001100000000000000000000000000000000

   mask(val) >> 32 	     			   = 0000000000000000000000000000000000000000000000000000000000000011
   ((u32)(mask(val) >> 32)) 			= 00000000000000000000000000000011
   ((s32)((u32)(mask(val) >> 32)))	= 11, which is 3
   */

   enum DataType
   {
      INT = 0x1,
      BOOLEAN = 0x2,
      STRING = 0x3,
      FLOAT = 0x4,
      CLO = 0x5,
      ENV = 0x6,
      CONS = 0x7
   };

   s32 decode_int(u64 v)
   {
      return ((s32)((u32)(MASK(v) >> 32)));
   }

   u64 encode_int(s32 v)
   {
      return ((((u64)((u32)(v))) << 32) | INT);
   }

   u64 *decode_cons(u64 v)
   {
      return ((u64 *)MASK(v));
   }

   u64 encode_cons(u64 * v)
   {
      return (((u64)(v)) | CONS);
   }

   u64 *decode_clo(u64 v)
   {
      return ((u64 *)MASK(v));
   }

   u64 encode_clo(u64 * v)
   {
      return (((u64)(v)) | CLO);
   }

   u64 *decode_env_arr(u64 v)
   {
      return ((u64 *)MASK(v));
   }

   u64 encode_env_arr(u64 * v)
   {
      return (((u64)(v)) | ENV);
   }

   /* --- old encoding-decoding----
   s32 decode_int(u64 v)
   {
      return (s32)(v >> 32);
   }

   u64 encode_int(s32 v)
   {
      return ((u64)v << 32) | INT;
   }

   u64 *decode_cons(u64 v)
   {
      return (u64 *)(v & ~CONS);
   }

   u64 encode_cons(u64 *v)
   {
      return (((u64)(v)) | CONS);
   }

   u64 *decode_clo(u64 v)
   {
      return (u64 *)(v & ~CLO);
   }

   u64 encode_clo(u64 *v)
   {
      return (((u64)(v)) | CLO);
   }

   u64 *decode_env_arr(u64 v)
   {
      return (u64 *)(v & ~ENV);
   }

   u64 encode_env_arr(u64 *v)
   {
      return (((u64)(v)) | ENV);
   }
 */

   /**
    * This function recursively prints a give value
    * @param v value we are trying to print
    * @return value type
    */
   void recursive_prim_print(u64 v)
   {
      switch (v & 7)
      {
      case NULL_VALUE:
         cout << "()";
         break;
      case INT:
         cout << decode_int(v);
         break;
      case CLO:
         cout << "#<procedure>";
         break;
      case CONS:
      {
         u64 *p = decode_cons(v);
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

   /**
    *
    * @param val value we are trying to print
    * @return void
    */
   void print_val(void *val)
   {
      u64 value = reinterpret_cast<u64>(val);
      cout << endl;
      recursive_prim_print(value);
      cout << endl;
   }

   /**
    * This function prints the value and and halt
    * @param v value we are trying to print
    * @return void
    */
   void *print_and_halt(void *v)
   {
      u64 val = reinterpret_cast<u64>(v);
      switch (val & 7)
      {
      case CONS:
      {
         u64 *p = decode_cons(val);
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

   /**
    * @return NULL_VALUE that is 0
    */
   void *encode_null()
   {
      return NULL_VALUE;
   }

   /**
    * This function creates a cons cell
    * @param arg1 represents the car value
    * @param arg2 represents the cdr value
    * @return the encoded cons cell.
    */
   void *prim_cons(void *arg1, void *arg2)
   {
      u64 car = reinterpret_cast<u64>(arg1);
      u64 cdr = reinterpret_cast<u64>(arg2);

      u64 *ptr = (u64 *)(malloc(2 * sizeof(u64)));
      ptr[0] = car;
      ptr[1] = cdr;

      return reinterpret_cast<void *>(encode_cons(ptr));
   }

   /**
    *
    * @param p is the cons cell
    * @return the car value of a cons cell
    */
   void *prim_car(void *p)
   {
      u64 ptr = reinterpret_cast<u64>(p);

      if ((ptr & 7) != CONS)
      {
         cout << "Error-car: expected a cons cell!" << endl;
         exit(0);
      }

      u64 *pp = decode_cons(ptr);
      return reinterpret_cast<void *>(pp[0]);
   }

   /**
    *
    * @param p is the cons cell
    * @return the cdr value of a cons cell
    */
   void *prim_cdr(void *p)
   {
      u64 ptr = reinterpret_cast<u64>(p);

      if ((ptr & 7) != CONS)
      {
         cout << "Error-cdr: expected a cons cell!" << endl;
         exit(0);
      }

      u64 *pp = decode_cons(ptr);
      return reinterpret_cast<void *>(pp[1]);
   }

   /**
    *
    * @param p is the cons cell
    * @return the summation of values in the cons cell
    */
   void *apply_prim__u43(void *p)
   {
      u64 ptr = reinterpret_cast<u64>(p);
      u64 sum = 0;

      while ((ptr & 7) == CONS)
      {
         u64 *pp = decode_cons(ptr);

         // cout << "in apply prim > Car: " << decode_int(pp[0]) << endl;
         // cout << "in apply prim > Cdr: " << decode_int(pp[1]) << endl;

         sum += decode_int(pp[0]);

         // cout << "sum: " << sum << endl;
         ptr = pp[1];
      }

      return reinterpret_cast<void *>(encode_int((s32)sum));
   }

   /**
    *
    * @param p is the cons cell
    * @return the summation of values in the cons cell
    */
   void *apply_prim__u45(void *p)
   {
      u64 ptr = reinterpret_cast<u64>(p);

      u64 *cell = decode_cons(ptr);
      u64 car = cell[0];
      u64 cdr = cell[1];

      u64 car_value = decode_int(car);

      cout << "car value: " << car_value << endl;

      if (cdr == NULL_VALUE)
      {
         // fix error when (- 5), check builtin implementation
         u64 res = car_value * -1;
         // cout << "herer..." << res << endl;
         return reinterpret_cast<void *>(encode_int((s32)res));
      }

      u64 result = car_value;

      while (cdr != NULL_VALUE)
      {
         u64 *pp = decode_cons(cdr);

         // cout << "in apply prim > Car: " << decode_int(pp[0]) << endl;
         // cout << "in apply prim > Cdr: " << decode_int(pp[1]) << endl;

         result -= decode_int(pp[0]);

         cout << "result: " << result << endl;
         cdr = pp[1];
      }

      return reinterpret_cast<void *>(encode_int((s32)result));
   }

   /**
    * This function allocates space the environment
    * @param envlength space length.
    * @return the encoded env array.
    */
   void *allocate_env_space(u64 envlength)
   {
      // const u64 temp_env_len = decode_int(envlength);
      u64 temp_env_len = decode_int(envlength);

      u64 *env_array = (u64 *)(malloc((temp_env_len + 1) * sizeof(u64)));

      // to distinguish env array from other data types
      env_array[0] = (temp_env_len << 3) | ENV_ARRAY;

      for (u64 i = 1; i <= temp_env_len; i++)
      {
         env_array[i] = ((u64)0); // initial assignment with a dummy value: 0
      }

      return reinterpret_cast<void *>(encode_env_arr(env_array));
   }

   /**
    * This function creates a closure instance (ptr + env)
    * @param fptr is assigned to index 0
    * @param env is assigned to index 1
    * @return the encoded closure object.
    */
   void *make_closure(void *fptr, void *env)
   {
      // assgning closure pointer
      u64 *obj = (u64 *)(malloc(2 * sizeof(u64))); // new u64[2];

      u64 ptr = reinterpret_cast<u64>(fptr);
      u64 temp_env = reinterpret_cast<u64>(env);

      obj[0] = ptr;
      obj[1] = temp_env;

      return reinterpret_cast<void *>(encode_clo(obj));
   }

   /**
    * This function sets up the environment part of a closure instance
    * @param arr is the environment array
    * @param idx the index where we will assign the value
    * @param val the value we will assign
    * @return null pointer
    */
   void *set_env(void *arr, u64 idx, void *val)
   {
      // cout << "position: " << idx << " val: " << val << endl;

      u64 env_arr = reinterpret_cast<u64>(arr);
      u64 value = reinterpret_cast<u64>(val);

      u64 idx_val = decode_int(idx) + 1;

      // using a pointer to access the element and set its value
      u64 *elem_ptr = &(decode_env_arr(env_arr))[idx_val];
      *elem_ptr = value;

      // return NULL_VALUE;
      return nullptr; // reinterpret_cast<void *>(NULL_VALUE);
   }

   /**
    * This function creates a closure instance (ptr + env)
    * @param env environment of closure instance
    * @param idx specific index value that we will return
    * @return the actual value that was assignemnt to the index
    */
   void *get_env_value(void *env, u64 idx)
   {
      u64 env_arr = reinterpret_cast<u64>(env);
      u64 idx_val = decode_int(idx) + 1;

      // cout<<"ArrLen: "<<sizeof(decode_env_arr(env_arr))/sizeof(decode_env_arr(env_arr)[0]) <<endl;

      u64 val = decode_env_arr(env_arr)[idx_val];

      // return reinterpret_cast<void *>(((u64*)decode_env_arr(env_arr))[1+(decode_int(idx))]);
      return reinterpret_cast<void *>(val);
   }

   /**
    *
    * @param val is the closure pointer
    * @return the environment of a closure instance
    */
   void *get_env(void *val)
   {
      u64 temp_val = reinterpret_cast<u64>(val);

      u64 *env = decode_clo(temp_val);
      return reinterpret_cast<void *>(env[1]);

      // cout<< "tag2: " <<(((u64 *)decode_env_arr(obj))[0] & 7) << endl;
   }

   /**
    *
    * @param val is the closure object
    * @return the pointer of a closure instance
    */
   void *get_closure_ptr(void *val)
   {
      u64 obj = reinterpret_cast<u64>(val);
      u64 *clo_obj = decode_clo(obj);

      return reinterpret_cast<void *>(clo_obj[0]);
   }

   /**
    * If this function is called, when have our final result in the arglist
    * @param arglist final output list
    * @return prints the (car arglist) and exits out of the program
    */
   void *apply_prim_halt(void *arglist)
   {
      cout << "Final return value: ";
      print_val(prim_car(arglist));

      exit(0);

      return reinterpret_cast<void *>(prim_car(arglist));
   }

   // void *halt;

   /**
    * This function is no longer needed!
    * The function should be called as the last function in our program
    * @param env environment we don't care about
    * @param arglist final output list
    * @return prints the (car (cdr arglist)) and exits out of the program
    */
   void fhalt(void *env, void *arglist)
   {
      cout << "in fhalt";
      print_val(arglist);

      cout << "Final return value: ";
      print_val(prim_car(prim_cdr(arglist)));

      exit(0);
   }

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