#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void ptr5013(void* env5014, void* arglst4979)
{
cout<<"In ptr5013";
print_val(arglst4979);

void* vs = get_env_value(env5014, encode_int((u32)2));
void* kkont4916 = get_env_value(env5014, encode_int((u32)1));
void* letk4919 = prim_car(arglst4979);
void* arg_u45lst4980 = prim_cdr(arglst4979);
void* t4900 = prim_car(arg_u45lst4980);
void* arg_u45lst4981 = prim_cdr(arg_u45lst4980);
void* lst4920 = prim_cons(kkont4916, vs);

//app-clo
void* cloPtr5023 = get_closure_ptr(t4900);
void* procEnv5024 = get_env(t4900);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5023);
function_ptr(procEnv5024, lst4920);
}

void ptr5011(void* env5012, void* arglst4976)
{
cout<<"In ptr5011";
print_val(arglst4976);

void* kkont4916 = get_env_value(env5012, encode_int((u32)3));
void* vs = get_env_value(env5012, encode_int((u32)2));
void* f = get_env_value(env5012, encode_int((u32)1));
void* letk4918 = prim_car(arglst4976);
void* arg_u45lst4977 = prim_cdr(arglst4976);
void* t4899 = prim_car(arg_u45lst4977);
void* arg_u45lst4978 = prim_cdr(arg_u45lst4977);

//creating new closure instance
auto ptr5025 = reinterpret_cast<void (*)(void *, void *)>(&ptr5013);
env5012 = allocate_env_space(encode_int((u32)2));
void* id4930 = make_closure(reinterpret_cast<void *>(ptr5025), env5012);

//setting env list
set_env(env5012, encode_int((u32)1), kkont4916);
set_env(env5012, encode_int((u32)2), vs);


void* oldarg4982 = encode_null();
void* newarg4983 = prim_cons(f, oldarg4982);
void* newarg4984 = prim_cons(id4930, newarg4983);

//app-clo
void* cloPtr5026 = get_closure_ptr(t4899);
void* procEnv5027 = get_env(t4899);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5026);
function_ptr(procEnv5027, newarg4984);
}

void ptr5009(void* env5010, void* vs4917)
{
cout<<"In ptr5009";
print_val(vs4917);

void* g = get_env_value(env5010, encode_int((u32)2));
void* f = get_env_value(env5010, encode_int((u32)1));
void* kkont4916 = prim_car(vs4917);
void* vs = prim_cdr(vs4917);

//creating new closure instance
auto ptr5028 = reinterpret_cast<void (*)(void *, void *)>(&ptr5011);
env5010 = allocate_env_space(encode_int((u32)3));
void* id4929 = make_closure(reinterpret_cast<void *>(ptr5028), env5010);

//setting env list
set_env(env5010, encode_int((u32)1), f);
set_env(env5010, encode_int((u32)2), vs);
set_env(env5010, encode_int((u32)3), kkont4916);


void* oldarg4985 = encode_null();
void* newarg4986 = prim_cons(g, oldarg4985);
void* newarg4987 = prim_cons(id4929, newarg4986);

//app-clo
void* cloPtr5029 = get_closure_ptr(g);
void* procEnv5030 = get_env(g);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5029);
function_ptr(procEnv5030, newarg4987);
}

void ptr5007(void* env5008, void* arglst4973)
{
cout<<"In ptr5007";
print_val(arglst4973);

void* g = get_env_value(env5008, encode_int((u32)1));
void* kont4915 = prim_car(arglst4973);
void* arg_u45lst4974 = prim_cdr(arglst4973);
void* f = prim_car(arg_u45lst4974);
void* arg_u45lst4975 = prim_cdr(arg_u45lst4974);

//creating new closure instance
auto ptr5031 = reinterpret_cast<void (*)(void *, void *)>(&ptr5009);
env5008 = allocate_env_space(encode_int((u32)2));
void* id4928 = make_closure(reinterpret_cast<void *>(ptr5031), env5008);

//setting env list
set_env(env5008, encode_int((u32)1), f);
set_env(env5008, encode_int((u32)2), g);


void* oldarg4988 = encode_null();
void* newarg4989 = prim_cons(id4928, oldarg4988);
void* newarg4990 = prim_cons(kont4915, newarg4989);

//app-clo
void* cloPtr5032 = get_closure_ptr(f);
void* procEnv5033 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5032);
function_ptr(procEnv5033, newarg4990);
}

void ptr5005(void* env5006, void* arglst4970)
{
cout<<"In ptr5005";
print_val(arglst4970);

void* kont4914 = prim_car(arglst4970);
void* arg_u45lst4971 = prim_cdr(arglst4970);
void* g = prim_car(arg_u45lst4971);
void* arg_u45lst4972 = prim_cdr(arg_u45lst4971);
void* id4926 = encode_null();

//creating new closure instance
auto ptr5034 = reinterpret_cast<void (*)(void *, void *)>(&ptr5007);
env5006 = allocate_env_space(encode_int((u32)1));
void* id4927 = make_closure(reinterpret_cast<void *>(ptr5034), env5006);

//setting env list
set_env(env5006, encode_int((u32)1), g);


void* oldarg4991 = encode_null();
void* newarg4992 = prim_cons(id4927, oldarg4991);
void* newarg4993 = prim_cons(id4926, newarg4992);

//app-clo
void* cloPtr5035 = get_closure_ptr(kont4914);
void* procEnv5036 = get_env(kont4914);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5035);
function_ptr(procEnv5036, newarg4993);
}

void ptr5019(void* env5020, void* args4911)
{
cout<<"In ptr5019";
print_val(args4911);

void* kkont4910 = prim_car(args4911);
void* args = prim_cdr(args4911);
void* prm4912 = apply_prim_halt(args);
void* id4935 = encode_null();
void* oldarg4961 = encode_null();
void* newarg4962 = prim_cons(prm4912, oldarg4961);
void* newarg4963 = prim_cons(id4935, newarg4962);

//app-clo
void* cloPtr5037 = get_closure_ptr(kkont4910);
void* procEnv5038 = get_env(kkont4910);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5037);
function_ptr(procEnv5038, newarg4963);
}

void ptr5017(void* env5018, void* arglst4958)
{
cout<<"In ptr5017";
print_val(arglst4958);

void* kont4909 = prim_car(arglst4958);
void* arg_u45lst4959 = prim_cdr(arglst4958);
void* halt = prim_car(arg_u45lst4959);
void* arg_u45lst4960 = prim_cdr(arg_u45lst4959);
void* id4933 = encode_null();

//creating new closure instance
auto ptr5039 = reinterpret_cast<void (*)(void *, void *)>(&ptr5019);
env5018 = allocate_env_space(encode_int((u32)0));
void* id4934 = make_closure(reinterpret_cast<void *>(ptr5039), env5018);


void* oldarg4964 = encode_null();
void* newarg4965 = prim_cons(id4934, oldarg4964);
void* newarg4966 = prim_cons(id4933, newarg4965);

//app-clo
void* cloPtr5040 = get_closure_ptr(kont4909);
void* procEnv5041 = get_env(kont4909);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5040);
function_ptr(procEnv5041, newarg4966);
}

void ptr5015(void* env5016, void* arglst4952)
{
cout<<"In ptr5015";
print_val(arglst4952);

void* _u45 = get_env_value(env5016, encode_int((u32)1));
void* letk4908 = prim_car(arglst4952);
void* arg_u45lst4953 = prim_cdr(arglst4952);
void* halt = prim_car(arg_u45lst4953);
void* arg_u45lst4954 = prim_cdr(arg_u45lst4953);
void* id4936 = reinterpret_cast<void *>(encode_int((u32)5));
void* oldarg4955 = encode_null();
void* newarg4956 = prim_cons(id4936, oldarg4955);
void* newarg4957 = prim_cons(halt, newarg4956);

//app-clo
void* cloPtr5042 = get_closure_ptr(_u45);
void* procEnv5043 = get_env(_u45);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5042);
function_ptr(procEnv5043, newarg4957);
}

void ptr5003(void* env5004, void* arglst4949)
{
cout<<"In ptr5003";
print_val(arglst4949);

void* _u45 = get_env_value(env5004, encode_int((u32)1));
void* letk4907 = prim_car(arglst4949);
void* arg_u45lst4950 = prim_cdr(arglst4949);
void* Ycomb = prim_car(arg_u45lst4950);
void* arg_u45lst4951 = prim_cdr(arg_u45lst4950);

//creating new closure instance
auto ptr5044 = reinterpret_cast<void (*)(void *, void *)>(&ptr5015);
env5004 = allocate_env_space(encode_int((u32)1));
void* id4931 = make_closure(reinterpret_cast<void *>(ptr5044), env5004);

//setting env list
set_env(env5004, encode_int((u32)1), _u45);



//creating new closure instance
auto ptr5045 = reinterpret_cast<void (*)(void *, void *)>(&ptr5017);
env5004 = allocate_env_space(encode_int((u32)0));
void* id4932 = make_closure(reinterpret_cast<void *>(ptr5045), env5004);


void* oldarg4967 = encode_null();
void* newarg4968 = prim_cons(id4932, oldarg4967);
void* newarg4969 = prim_cons(id4931, newarg4968);

//app-clo
void* cloPtr5046 = get_closure_ptr(Ycomb);
void* procEnv5047 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5046);
function_ptr(procEnv5047, newarg4969);
}

void ptr5001(void* env5002, void* arglst4943)
{
cout<<"In ptr5001";
print_val(arglst4943);

void* kont4913 = prim_car(arglst4943);
void* arg_u45lst4944 = prim_cdr(arglst4943);
void* x = prim_car(arg_u45lst4944);
void* arg_u45lst4945 = prim_cdr(arg_u45lst4944);
void* oldarg4946 = encode_null();
void* newarg4947 = prim_cons(x, oldarg4946);
void* newarg4948 = prim_cons(kont4913, newarg4947);

//app-clo
void* cloPtr5048 = get_closure_ptr(x);
void* procEnv5049 = get_env(x);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5048);
function_ptr(procEnv5049, newarg4948);
}

void ptr4999(void* env5000, void* args4905)
{
cout<<"In ptr4999";
print_val(args4905);

void* kkont4904 = prim_car(args4905);
void* args = prim_cdr(args4905);
void* prm4906 = apply_prim__u43(args);
void* id4922 = encode_null();
void* oldarg4940 = encode_null();
void* newarg4941 = prim_cons(prm4906, oldarg4940);
void* newarg4942 = prim_cons(id4922, newarg4941);

//app-clo
void* cloPtr5050 = get_closure_ptr(kkont4904);
void* procEnv5051 = get_env(kkont4904);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5050);
function_ptr(procEnv5051, newarg4942);
}

void ptr4997(void* env4998, void* args4902)
{
cout<<"In ptr4997";
print_val(args4902);

void* kkont4901 = prim_car(args4902);
void* args = prim_cdr(args4902);
void* prm4903 = apply_prim__u45(args);
void* id4921 = encode_null();
void* oldarg4937 = encode_null();
void* newarg4938 = prim_cons(prm4903, oldarg4937);
void* newarg4939 = prim_cons(id4921, newarg4938);

//app-clo
void* cloPtr5052 = get_closure_ptr(kkont4901);
void* procEnv5053 = get_env(kkont4901);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5052);
function_ptr(procEnv5053, newarg4939);
}

void root(void* rootenv5021, void* rootarg5022)
{
cout<<"In root";
print_val(rootarg5022);


//creating new closure instance
auto ptr5054 = reinterpret_cast<void (*)(void *, void *)>(&ptr4997);
rootenv5021 = allocate_env_space(encode_int((u32)0));
void* _u45 = make_closure(reinterpret_cast<void *>(ptr5054), rootenv5021);



//creating new closure instance
auto ptr5055 = reinterpret_cast<void (*)(void *, void *)>(&ptr4999);
rootenv5021 = allocate_env_space(encode_int((u32)0));
void* _u43 = make_closure(reinterpret_cast<void *>(ptr5055), rootenv5021);



//creating new closure instance
auto ptr5056 = reinterpret_cast<void (*)(void *, void *)>(&ptr5001);
rootenv5021 = allocate_env_space(encode_int((u32)0));
void* id4923 = make_closure(reinterpret_cast<void *>(ptr5056), rootenv5021);



//creating new closure instance
auto ptr5057 = reinterpret_cast<void (*)(void *, void *)>(&ptr5003);
rootenv5021 = allocate_env_space(encode_int((u32)1));
void* id4924 = make_closure(reinterpret_cast<void *>(ptr5057), rootenv5021);

//setting env list
set_env(rootenv5021, encode_int((u32)1), _u45);



//creating new closure instance
auto ptr5058 = reinterpret_cast<void (*)(void *, void *)>(&ptr5005);
rootenv5021 = allocate_env_space(encode_int((u32)0));
void* id4925 = make_closure(reinterpret_cast<void *>(ptr5058), rootenv5021);


void* oldarg4994 = encode_null();
void* newarg4995 = prim_cons(id4925, oldarg4994);
void* newarg4996 = prim_cons(id4924, newarg4995);

//app-clo
void* cloPtr5059 = get_closure_ptr(id4923);
void* procEnv5060 = get_env(id4923);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5059);
function_ptr(procEnv5060, newarg4996);
}

int main(int argc, char **argv)
{
//making a call to the root function to kick off our c++ emission.
root(0,0);
}

