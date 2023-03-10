#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void ptr5083(void* env5084, void* arglst5049)
{
cout<<"In ptr5083";
print_val(arglst5049);

void* kkont4925 = get_env_value(env5084, encode_int((s32)2));
void* vs = get_env_value(env5084, encode_int((s32)1));
void* letk4928 = prim_car(arglst5049);
void* arg_u45lst5050 = prim_cdr(arglst5049);
void* t4900 = prim_car(arg_u45lst5050);
void* arg_u45lst5051 = prim_cdr(arg_u45lst5050);
void* lst4929 = prim_cons(kkont4925, vs);

//app-clo
void* cloPtr5107 = get_closure_ptr(t4900);
void* procEnv5108 = get_env(t4900);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5107);
function_ptr(procEnv5108, lst4929);
}

void ptr5081(void* env5082, void* arglst5046)
{
cout<<"In ptr5081";
print_val(arglst5046);

void* kkont4925 = get_env_value(env5082, encode_int((s32)3));
void* vs = get_env_value(env5082, encode_int((s32)2));
void* f = get_env_value(env5082, encode_int((s32)1));
void* letk4927 = prim_car(arglst5046);
void* arg_u45lst5047 = prim_cdr(arglst5046);
void* t4899 = prim_car(arg_u45lst5047);
void* arg_u45lst5048 = prim_cdr(arg_u45lst5047);

//creating new closure instance
auto ptr5109 = reinterpret_cast<void (*)(void *, void *)>(&ptr5083);
env5082 = allocate_env_space(encode_int((s32)2));
void* id4939 = make_closure(reinterpret_cast<void *>(ptr5109), env5082);

//setting env list
set_env(env5082, encode_int((s32)1), vs);
set_env(env5082, encode_int((s32)2), kkont4925);


void* oldarg5052 = encode_null();
void* newarg5053 = prim_cons(f, oldarg5052);
void* newarg5054 = prim_cons(id4939, newarg5053);

//app-clo
void* cloPtr5110 = get_closure_ptr(t4899);
void* procEnv5111 = get_env(t4899);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5110);
function_ptr(procEnv5111, newarg5054);
}

void ptr5079(void* env5080, void* vs4926)
{
cout<<"In ptr5079";
print_val(vs4926);

void* g = get_env_value(env5080, encode_int((s32)2));
void* f = get_env_value(env5080, encode_int((s32)1));
void* kkont4925 = prim_car(vs4926);
void* vs = prim_cdr(vs4926);

//creating new closure instance
auto ptr5112 = reinterpret_cast<void (*)(void *, void *)>(&ptr5081);
env5080 = allocate_env_space(encode_int((s32)3));
void* id4938 = make_closure(reinterpret_cast<void *>(ptr5112), env5080);

//setting env list
set_env(env5080, encode_int((s32)1), f);
set_env(env5080, encode_int((s32)2), vs);
set_env(env5080, encode_int((s32)3), kkont4925);


void* oldarg5055 = encode_null();
void* newarg5056 = prim_cons(g, oldarg5055);
void* newarg5057 = prim_cons(id4938, newarg5056);

//app-clo
void* cloPtr5113 = get_closure_ptr(g);
void* procEnv5114 = get_env(g);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5113);
function_ptr(procEnv5114, newarg5057);
}

void ptr5077(void* env5078, void* arglst5043)
{
cout<<"In ptr5077";
print_val(arglst5043);

void* g = get_env_value(env5078, encode_int((s32)1));
void* kont4924 = prim_car(arglst5043);
void* arg_u45lst5044 = prim_cdr(arglst5043);
void* f = prim_car(arg_u45lst5044);
void* arg_u45lst5045 = prim_cdr(arg_u45lst5044);

//creating new closure instance
auto ptr5115 = reinterpret_cast<void (*)(void *, void *)>(&ptr5079);
env5078 = allocate_env_space(encode_int((s32)2));
void* id4937 = make_closure(reinterpret_cast<void *>(ptr5115), env5078);

//setting env list
set_env(env5078, encode_int((s32)1), f);
set_env(env5078, encode_int((s32)2), g);


void* oldarg5058 = encode_null();
void* newarg5059 = prim_cons(id4937, oldarg5058);
void* newarg5060 = prim_cons(kont4924, newarg5059);

//app-clo
void* cloPtr5116 = get_closure_ptr(f);
void* procEnv5117 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5116);
function_ptr(procEnv5117, newarg5060);
}

void ptr5075(void* env5076, void* arglst5040)
{
cout<<"In ptr5075";
print_val(arglst5040);

void* kont4923 = prim_car(arglst5040);
void* arg_u45lst5041 = prim_cdr(arglst5040);
void* g = prim_car(arg_u45lst5041);
void* arg_u45lst5042 = prim_cdr(arg_u45lst5041);
void* id4935 = encode_null();

//creating new closure instance
auto ptr5118 = reinterpret_cast<void (*)(void *, void *)>(&ptr5077);
env5076 = allocate_env_space(encode_int((s32)1));
void* id4936 = make_closure(reinterpret_cast<void *>(ptr5118), env5076);

//setting env list
set_env(env5076, encode_int((s32)1), g);


void* oldarg5061 = encode_null();
void* newarg5062 = prim_cons(id4936, oldarg5061);
void* newarg5063 = prim_cons(id4935, newarg5062);

//app-clo
void* cloPtr5119 = get_closure_ptr(kont4923);
void* procEnv5120 = get_env(kont4923);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5119);
function_ptr(procEnv5120, newarg5063);
}

void ptr5089(void* env5090, void* args4920)
{
cout<<"In ptr5089";
print_val(args4920);

void* kkont4919 = prim_car(args4920);
void* args = prim_cdr(args4920);
void* prm4921 = apply_prim_halt(args);
void* id4944 = encode_null();
void* oldarg5031 = encode_null();
void* newarg5032 = prim_cons(prm4921, oldarg5031);
void* newarg5033 = prim_cons(id4944, newarg5032);

//app-clo
void* cloPtr5121 = get_closure_ptr(kkont4919);
void* procEnv5122 = get_env(kkont4919);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5121);
function_ptr(procEnv5122, newarg5033);
}

void ptr5087(void* env5088, void* arglst5028)
{
cout<<"In ptr5087";
print_val(arglst5028);

void* kont4918 = prim_car(arglst5028);
void* arg_u45lst5029 = prim_cdr(arglst5028);
void* halt = prim_car(arg_u45lst5029);
void* arg_u45lst5030 = prim_cdr(arg_u45lst5029);
void* id4942 = encode_null();

//creating new closure instance
auto ptr5123 = reinterpret_cast<void (*)(void *, void *)>(&ptr5089);
env5088 = allocate_env_space(encode_int((s32)0));
void* id4943 = make_closure(reinterpret_cast<void *>(ptr5123), env5088);


void* oldarg5034 = encode_null();
void* newarg5035 = prim_cons(id4943, oldarg5034);
void* newarg5036 = prim_cons(id4942, newarg5035);

//app-clo
void* cloPtr5124 = get_closure_ptr(kont4918);
void* procEnv5125 = get_env(kont4918);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5124);
function_ptr(procEnv5125, newarg5036);
}

void ptr5103(void* env5104, void* arglst5000)
{
cout<<"In ptr5103";
print_val(arglst5000);

void* c = get_env_value(env5104, encode_int((s32)2));
void* kont4915 = get_env_value(env5104, encode_int((s32)1));
void* letk4917 = prim_car(arglst5000);
void* arg_u45lst5001 = prim_cdr(arglst5000);
void* t4902 = prim_car(arg_u45lst5001);
void* arg_u45lst5002 = prim_cdr(arg_u45lst5001);
void* oldarg5003 = encode_null();
void* newarg5004 = prim_cons(t4902, oldarg5003);
void* newarg5005 = prim_cons(kont4915, newarg5004);

//app-clo
void* cloPtr5126 = get_closure_ptr(c);
void* procEnv5127 = get_env(c);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5126);
function_ptr(procEnv5127, newarg5005);
}

void ptr5101(void* env5102, void* arglst4997)
{
cout<<"In ptr5101";
print_val(arglst4997);

void* c = get_env_value(env5102, encode_int((s32)2));
void* kont4915 = get_env_value(env5102, encode_int((s32)1));
void* letk4916 = prim_car(arglst4997);
void* arg_u45lst4998 = prim_cdr(arglst4997);
void* t4901 = prim_car(arg_u45lst4998);
void* arg_u45lst4999 = prim_cdr(arg_u45lst4998);

//creating new closure instance
auto ptr5128 = reinterpret_cast<void (*)(void *, void *)>(&ptr5103);
env5102 = allocate_env_space(encode_int((s32)2));
void* id4955 = make_closure(reinterpret_cast<void *>(ptr5128), env5102);

//setting env list
set_env(env5102, encode_int((s32)1), kont4915);
set_env(env5102, encode_int((s32)2), c);


void* oldarg5006 = encode_null();
void* newarg5007 = prim_cons(t4901, oldarg5006);
void* newarg5008 = prim_cons(id4955, newarg5007);

//app-clo
void* cloPtr5129 = get_closure_ptr(c);
void* procEnv5130 = get_env(c);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5129);
function_ptr(procEnv5130, newarg5008);
}

void ptr5099(void* env5100, void* arglst4993)
{
cout<<"In ptr5099";
print_val(arglst4993);

void* c = get_env_value(env5100, encode_int((s32)4));
void* e = get_env_value(env5100, encode_int((s32)3));
void* d = get_env_value(env5100, encode_int((s32)2));
void* _u43 = get_env_value(env5100, encode_int((s32)1));
void* kont4915 = prim_car(arglst4993);
void* arg_u45lst4994 = prim_cdr(arglst4993);
void* a = prim_car(arg_u45lst4994);
void* arg_u45lst4995 = prim_cdr(arg_u45lst4994);
void* b = prim_car(arg_u45lst4995);
void* arg_u45lst4996 = prim_cdr(arg_u45lst4995);

//creating new closure instance
auto ptr5131 = reinterpret_cast<void (*)(void *, void *)>(&ptr5101);
env5100 = allocate_env_space(encode_int((s32)2));
void* id4954 = make_closure(reinterpret_cast<void *>(ptr5131), env5100);

//setting env list
set_env(env5100, encode_int((s32)1), kont4915);
set_env(env5100, encode_int((s32)2), c);


void* oldarg5009 = encode_null();
void* newarg5010 = prim_cons(b, oldarg5009);
void* newarg5011 = prim_cons(a, newarg5010);
void* newarg5012 = prim_cons(d, newarg5011);
void* newarg5013 = prim_cons(e, newarg5012);
void* newarg5014 = prim_cons(id4954, newarg5013);

//app-clo
void* cloPtr5132 = get_closure_ptr(_u43);
void* procEnv5133 = get_env(_u43);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5132);
function_ptr(procEnv5133, newarg5014);
}

void ptr5097(void* env5098, void* arglst4985)
{
cout<<"In ptr5097";
print_val(arglst4985);

void* a = get_env_value(env5098, encode_int((s32)3));
void* d = get_env_value(env5098, encode_int((s32)2));
void* _u43 = get_env_value(env5098, encode_int((s32)1));
void* kont4914 = prim_car(arglst4985);
void* arg_u45lst4986 = prim_cdr(arglst4985);
void* x = prim_car(arg_u45lst4986);
void* arg_u45lst4987 = prim_cdr(arg_u45lst4986);
void* oldarg4988 = encode_null();
void* newarg4989 = prim_cons(d, oldarg4988);
void* newarg4990 = prim_cons(a, newarg4989);
void* newarg4991 = prim_cons(x, newarg4990);
void* newarg4992 = prim_cons(kont4914, newarg4991);

//app-clo
void* cloPtr5134 = get_closure_ptr(_u43);
void* procEnv5135 = get_env(_u43);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5134);
function_ptr(procEnv5135, newarg4992);
}

void ptr5095(void* env5096, void* arglst4982)
{
cout<<"In ptr5095";
print_val(arglst4982);

void* a = get_env_value(env5096, encode_int((s32)4));
void* halt = get_env_value(env5096, encode_int((s32)3));
void* d = get_env_value(env5096, encode_int((s32)2));
void* _u43 = get_env_value(env5096, encode_int((s32)1));
void* letk4913 = prim_car(arglst4982);
void* arg_u45lst4983 = prim_cdr(arglst4982);
void* e = prim_car(arg_u45lst4983);
void* arg_u45lst4984 = prim_cdr(arg_u45lst4983);

//creating new closure instance
auto ptr5136 = reinterpret_cast<void (*)(void *, void *)>(&ptr5097);
env5096 = allocate_env_space(encode_int((s32)3));
void* c = make_closure(reinterpret_cast<void *>(ptr5136), env5096);

//setting env list
set_env(env5096, encode_int((s32)1), _u43);
set_env(env5096, encode_int((s32)2), d);
set_env(env5096, encode_int((s32)3), a);



//creating new closure instance
auto ptr5137 = reinterpret_cast<void (*)(void *, void *)>(&ptr5099);
env5096 = allocate_env_space(encode_int((s32)4));
void* f = make_closure(reinterpret_cast<void *>(ptr5137), env5096);

//setting env list
set_env(env5096, encode_int((s32)1), _u43);
set_env(env5096, encode_int((s32)2), d);
set_env(env5096, encode_int((s32)3), e);
set_env(env5096, encode_int((s32)4), c);


void* id4956 = reinterpret_cast<void *>(encode_int((s32)4));
void* id4957 = reinterpret_cast<void *>(encode_int((s32)5));
void* oldarg5015 = encode_null();
void* newarg5016 = prim_cons(id4957, oldarg5015);
void* newarg5017 = prim_cons(id4956, newarg5016);
void* newarg5018 = prim_cons(halt, newarg5017);

//app-clo
void* cloPtr5138 = get_closure_ptr(f);
void* procEnv5139 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5138);
function_ptr(procEnv5139, newarg5018);
}

void ptr5093(void* env5094, void* arglst4979)
{
cout<<"In ptr5093";
print_val(arglst4979);

void* a = get_env_value(env5094, encode_int((s32)3));
void* halt = get_env_value(env5094, encode_int((s32)2));
void* _u43 = get_env_value(env5094, encode_int((s32)1));
void* letk4912 = prim_car(arglst4979);
void* arg_u45lst4980 = prim_cdr(arglst4979);
void* d = prim_car(arg_u45lst4980);
void* arg_u45lst4981 = prim_cdr(arg_u45lst4980);

//creating new closure instance
auto ptr5140 = reinterpret_cast<void (*)(void *, void *)>(&ptr5095);
env5094 = allocate_env_space(encode_int((s32)4));
void* id4951 = make_closure(reinterpret_cast<void *>(ptr5140), env5094);

//setting env list
set_env(env5094, encode_int((s32)1), _u43);
set_env(env5094, encode_int((s32)2), d);
set_env(env5094, encode_int((s32)3), halt);
set_env(env5094, encode_int((s32)4), a);


void* id4952 = encode_null();
void* id4953 = reinterpret_cast<void *>(encode_int((s32)3));
void* oldarg5019 = encode_null();
void* newarg5020 = prim_cons(id4953, oldarg5019);
void* newarg5021 = prim_cons(id4952, newarg5020);

//app-clo
void* cloPtr5141 = get_closure_ptr(id4951);
void* procEnv5142 = get_env(id4951);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5141);
function_ptr(procEnv5142, newarg5021);
}

void ptr5091(void* env5092, void* arglst4976)
{
cout<<"In ptr5091";
print_val(arglst4976);

void* halt = get_env_value(env5092, encode_int((s32)2));
void* _u43 = get_env_value(env5092, encode_int((s32)1));
void* letk4911 = prim_car(arglst4976);
void* arg_u45lst4977 = prim_cdr(arglst4976);
void* a = prim_car(arg_u45lst4977);
void* arg_u45lst4978 = prim_cdr(arg_u45lst4977);

//creating new closure instance
auto ptr5143 = reinterpret_cast<void (*)(void *, void *)>(&ptr5093);
env5092 = allocate_env_space(encode_int((s32)3));
void* id4948 = make_closure(reinterpret_cast<void *>(ptr5143), env5092);

//setting env list
set_env(env5092, encode_int((s32)1), _u43);
set_env(env5092, encode_int((s32)2), halt);
set_env(env5092, encode_int((s32)3), a);


void* id4949 = encode_null();
void* id4950 = reinterpret_cast<void *>(encode_int((s32)2));
void* oldarg5022 = encode_null();
void* newarg5023 = prim_cons(id4950, oldarg5022);
void* newarg5024 = prim_cons(id4949, newarg5023);

//app-clo
void* cloPtr5144 = get_closure_ptr(id4948);
void* procEnv5145 = get_env(id4948);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5144);
function_ptr(procEnv5145, newarg5024);
}

void ptr5085(void* env5086, void* arglst4973)
{
cout<<"In ptr5085";
print_val(arglst4973);

void* _u43 = get_env_value(env5086, encode_int((s32)1));
void* letk4910 = prim_car(arglst4973);
void* arg_u45lst4974 = prim_cdr(arglst4973);
void* halt = prim_car(arg_u45lst4974);
void* arg_u45lst4975 = prim_cdr(arg_u45lst4974);

//creating new closure instance
auto ptr5146 = reinterpret_cast<void (*)(void *, void *)>(&ptr5091);
env5086 = allocate_env_space(encode_int((s32)2));
void* id4945 = make_closure(reinterpret_cast<void *>(ptr5146), env5086);

//setting env list
set_env(env5086, encode_int((s32)1), _u43);
set_env(env5086, encode_int((s32)2), halt);


void* id4946 = encode_null();
void* id4947 = reinterpret_cast<void *>(encode_int((s32)6));
void* oldarg5025 = encode_null();
void* newarg5026 = prim_cons(id4947, oldarg5025);
void* newarg5027 = prim_cons(id4946, newarg5026);

//app-clo
void* cloPtr5147 = get_closure_ptr(id4945);
void* procEnv5148 = get_env(id4945);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5147);
function_ptr(procEnv5148, newarg5027);
}

void ptr5073(void* env5074, void* arglst4970)
{
cout<<"In ptr5073";
print_val(arglst4970);

void* _u43 = get_env_value(env5074, encode_int((s32)1));
void* letk4909 = prim_car(arglst4970);
void* arg_u45lst4971 = prim_cdr(arglst4970);
void* Ycomb = prim_car(arg_u45lst4971);
void* arg_u45lst4972 = prim_cdr(arg_u45lst4971);

//creating new closure instance
auto ptr5149 = reinterpret_cast<void (*)(void *, void *)>(&ptr5085);
env5074 = allocate_env_space(encode_int((s32)1));
void* id4940 = make_closure(reinterpret_cast<void *>(ptr5149), env5074);

//setting env list
set_env(env5074, encode_int((s32)1), _u43);



//creating new closure instance
auto ptr5150 = reinterpret_cast<void (*)(void *, void *)>(&ptr5087);
env5074 = allocate_env_space(encode_int((s32)0));
void* id4941 = make_closure(reinterpret_cast<void *>(ptr5150), env5074);


void* oldarg5037 = encode_null();
void* newarg5038 = prim_cons(id4941, oldarg5037);
void* newarg5039 = prim_cons(id4940, newarg5038);

//app-clo
void* cloPtr5151 = get_closure_ptr(Ycomb);
void* procEnv5152 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5151);
function_ptr(procEnv5152, newarg5039);
}

void ptr5071(void* env5072, void* arglst4964)
{
cout<<"In ptr5071";
print_val(arglst4964);

void* kont4922 = prim_car(arglst4964);
void* arg_u45lst4965 = prim_cdr(arglst4964);
void* x = prim_car(arg_u45lst4965);
void* arg_u45lst4966 = prim_cdr(arg_u45lst4965);
void* oldarg4967 = encode_null();
void* newarg4968 = prim_cons(x, oldarg4967);
void* newarg4969 = prim_cons(kont4922, newarg4968);

//app-clo
void* cloPtr5153 = get_closure_ptr(x);
void* procEnv5154 = get_env(x);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5153);
function_ptr(procEnv5154, newarg4969);
}

void ptr5069(void* env5070, void* args4907)
{
cout<<"In ptr5069";
print_val(args4907);

void* kkont4906 = prim_car(args4907);
void* args = prim_cdr(args4907);
void* prm4908 = apply_prim__u43(args);
void* id4931 = encode_null();
void* oldarg4961 = encode_null();
void* newarg4962 = prim_cons(prm4908, oldarg4961);
void* newarg4963 = prim_cons(id4931, newarg4962);

//app-clo
void* cloPtr5155 = get_closure_ptr(kkont4906);
void* procEnv5156 = get_env(kkont4906);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5155);
function_ptr(procEnv5156, newarg4963);
}

void ptr5067(void* env5068, void* args4904)
{
cout<<"In ptr5067";
print_val(args4904);

void* kkont4903 = prim_car(args4904);
void* args = prim_cdr(args4904);
void* prm4905 = apply_prim__u45(args);
void* id4930 = encode_null();
void* oldarg4958 = encode_null();
void* newarg4959 = prim_cons(prm4905, oldarg4958);
void* newarg4960 = prim_cons(id4930, newarg4959);

//app-clo
void* cloPtr5157 = get_closure_ptr(kkont4903);
void* procEnv5158 = get_env(kkont4903);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5157);
function_ptr(procEnv5158, newarg4960);
}

void root(void* rootenv5105, void* rootarg5106)
{
cout<<"In root";
print_val(rootarg5106);


//creating new closure instance
auto ptr5159 = reinterpret_cast<void (*)(void *, void *)>(&ptr5067);
rootenv5105 = allocate_env_space(encode_int((s32)0));
void* _u45 = make_closure(reinterpret_cast<void *>(ptr5159), rootenv5105);



//creating new closure instance
auto ptr5160 = reinterpret_cast<void (*)(void *, void *)>(&ptr5069);
rootenv5105 = allocate_env_space(encode_int((s32)0));
void* _u43 = make_closure(reinterpret_cast<void *>(ptr5160), rootenv5105);



//creating new closure instance
auto ptr5161 = reinterpret_cast<void (*)(void *, void *)>(&ptr5071);
rootenv5105 = allocate_env_space(encode_int((s32)0));
void* id4932 = make_closure(reinterpret_cast<void *>(ptr5161), rootenv5105);



//creating new closure instance
auto ptr5162 = reinterpret_cast<void (*)(void *, void *)>(&ptr5073);
rootenv5105 = allocate_env_space(encode_int((s32)1));
void* id4933 = make_closure(reinterpret_cast<void *>(ptr5162), rootenv5105);

//setting env list
set_env(rootenv5105, encode_int((s32)1), _u43);



//creating new closure instance
auto ptr5163 = reinterpret_cast<void (*)(void *, void *)>(&ptr5075);
rootenv5105 = allocate_env_space(encode_int((s32)0));
void* id4934 = make_closure(reinterpret_cast<void *>(ptr5163), rootenv5105);


void* oldarg5064 = encode_null();
void* newarg5065 = prim_cons(id4934, oldarg5064);
void* newarg5066 = prim_cons(id4933, newarg5065);

//app-clo
void* cloPtr5164 = get_closure_ptr(id4932);
void* procEnv5165 = get_env(id4932);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5164);
function_ptr(procEnv5165, newarg5066);
}

int main(int argc, char **argv)
{
//making a call to the root function to kick off our c++ emission.
root(0,0);
}

