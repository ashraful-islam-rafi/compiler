#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void ptr10056(void* env10057, void* arglst9984)
{
void* vs = get_env_value(env10057, encode_int((s32)2));
void* kkont8538 = get_env_value(env10057, encode_int((s32)1));
void* letk8541 = prim_car(arglst9984);
void* arg_lst9985 = prim_cdr(arglst9984);
void* t8243 = prim_car(arg_lst9985);
void* arg_lst9986 = prim_cdr(arg_lst9985);
void* lst8542 = prim_cons(kkont8538, vs);

//app-clo
void* cloPtr10396 = get_closure_ptr(t8243);
void* procEnv10397 = get_env(t8243);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10396);
function_ptr(procEnv10397, lst8542);
}

void ptr10054(void* env10055, void* arglst9981)
{
void* kkont8538 = get_env_value(env10055, encode_int((s32)3));
void* vs = get_env_value(env10055, encode_int((s32)2));
void* f = get_env_value(env10055, encode_int((s32)1));
void* letk8540 = prim_car(arglst9981);
void* arg_lst9982 = prim_cdr(arglst9981);
void* t8242 = prim_car(arg_lst9982);
void* arg_lst9983 = prim_cdr(arg_lst9982);

//creating new closure instance
auto ptr10398 = reinterpret_cast<void (*)(void *, void *)>(&ptr10056);
env10055 = allocate_env_space(encode_int((s32)2));
void* id8571 = make_closure(reinterpret_cast<void *>(ptr10398), env10055);

//setting env list
set_env(env10055, encode_int((s32)1), kkont8538);
set_env(env10055, encode_int((s32)2), vs);


void* oldarg9987 = encode_null();
void* newarg9988 = prim_cons(f, oldarg9987);
void* newarg9989 = prim_cons(id8571, newarg9988);

//app-clo
void* cloPtr10399 = get_closure_ptr(t8242);
void* procEnv10400 = get_env(t8242);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10399);
function_ptr(procEnv10400, newarg9989);
}

void ptr10052(void* env10053, void* vs8539)
{
void* g = get_env_value(env10053, encode_int((s32)2));
void* f = get_env_value(env10053, encode_int((s32)1));
void* kkont8538 = prim_car(vs8539);
void* vs = prim_cdr(vs8539);

//creating new closure instance
auto ptr10401 = reinterpret_cast<void (*)(void *, void *)>(&ptr10054);
env10053 = allocate_env_space(encode_int((s32)3));
void* id8570 = make_closure(reinterpret_cast<void *>(ptr10401), env10053);

//setting env list
set_env(env10053, encode_int((s32)1), f);
set_env(env10053, encode_int((s32)2), vs);
set_env(env10053, encode_int((s32)3), kkont8538);


void* oldarg9990 = encode_null();
void* newarg9991 = prim_cons(g, oldarg9990);
void* newarg9992 = prim_cons(id8570, newarg9991);

//app-clo
void* cloPtr10402 = get_closure_ptr(g);
void* procEnv10403 = get_env(g);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10402);
function_ptr(procEnv10403, newarg9992);
}

void ptr10050(void* env10051, void* arglst9978)
{
void* g = get_env_value(env10051, encode_int((s32)1));
void* kont8537 = prim_car(arglst9978);
void* arg_lst9979 = prim_cdr(arglst9978);
void* f = prim_car(arg_lst9979);
void* arg_lst9980 = prim_cdr(arg_lst9979);

//creating new closure instance
auto ptr10404 = reinterpret_cast<void (*)(void *, void *)>(&ptr10052);
env10051 = allocate_env_space(encode_int((s32)2));
void* id8569 = make_closure(reinterpret_cast<void *>(ptr10404), env10051);

//setting env list
set_env(env10051, encode_int((s32)1), f);
set_env(env10051, encode_int((s32)2), g);


void* oldarg9993 = encode_null();
void* newarg9994 = prim_cons(id8569, oldarg9993);
void* newarg9995 = prim_cons(kont8537, newarg9994);

//app-clo
void* cloPtr10405 = get_closure_ptr(f);
void* procEnv10406 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10405);
function_ptr(procEnv10406, newarg9995);
}

void ptr10048(void* env10049, void* arglst9975)
{
void* kont8536 = prim_car(arglst9975);
void* arg_lst9976 = prim_cdr(arglst9975);
void* g = prim_car(arg_lst9976);
void* arg_lst9977 = prim_cdr(arg_lst9976);
void* id8567 = encode_null();

//creating new closure instance
auto ptr10407 = reinterpret_cast<void (*)(void *, void *)>(&ptr10050);
env10049 = allocate_env_space(encode_int((s32)1));
void* id8568 = make_closure(reinterpret_cast<void *>(ptr10407), env10049);

//setting env list
set_env(env10049, encode_int((s32)1), g);


void* oldarg9996 = encode_null();
void* newarg9997 = prim_cons(id8568, oldarg9996);
void* newarg9998 = prim_cons(id8567, newarg9997);

//app-clo
void* cloPtr10408 = get_closure_ptr(kont8536);
void* procEnv10409 = get_env(kont8536);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10408);
function_ptr(procEnv10409, newarg9998);
}

void ptr10062(void* env10063, void* args8533)
{
void* kkont8532 = prim_car(args8533);
void* args = prim_cdr(args8533);
void* prm8534 = apply_prim_halt(args);
void* id8576 = encode_null();
void* oldarg9966 = encode_null();
void* newarg9967 = prim_cons(prm8534, oldarg9966);
void* newarg9968 = prim_cons(id8576, newarg9967);

//app-clo
void* cloPtr10410 = get_closure_ptr(kkont8532);
void* procEnv10411 = get_env(kkont8532);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10410);
function_ptr(procEnv10411, newarg9968);
}

void ptr10060(void* env10061, void* arglst9963)
{
void* kont8531 = prim_car(arglst9963);
void* arg_lst9964 = prim_cdr(arglst9963);
void* halt = prim_car(arg_lst9964);
void* arg_lst9965 = prim_cdr(arg_lst9964);
void* id8574 = encode_null();

//creating new closure instance
auto ptr10412 = reinterpret_cast<void (*)(void *, void *)>(&ptr10062);
env10061 = allocate_env_space(encode_int((s32)0));
void* id8575 = make_closure(reinterpret_cast<void *>(ptr10412), env10061);


void* oldarg9969 = encode_null();
void* newarg9970 = prim_cons(id8575, oldarg9969);
void* newarg9971 = prim_cons(id8574, newarg9970);

//app-clo
void* cloPtr10413 = get_closure_ptr(kont8531);
void* procEnv10414 = get_env(kont8531);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10413);
function_ptr(procEnv10414, newarg9971);
}

void ptr10076(void* env10077, void* arglst9937)
{
void* kont8526 = get_env_value(env10077, encode_int((s32)3));
void* t8245 = get_env_value(env10077, encode_int((s32)2));
void* cons = get_env_value(env10077, encode_int((s32)1));
void* letk8530 = prim_car(arglst9937);
void* arg_lst9938 = prim_cdr(arglst9937);
void* t8247 = prim_car(arg_lst9938);
void* arg_lst9939 = prim_cdr(arg_lst9938);
void* oldarg9940 = encode_null();
void* newarg9941 = prim_cons(t8247, oldarg9940);
void* newarg9942 = prim_cons(t8245, newarg9941);
void* newarg9943 = prim_cons(kont8526, newarg9942);

//app-clo
void* cloPtr10415 = get_closure_ptr(cons);
void* procEnv10416 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10415);
function_ptr(procEnv10416, newarg9943);
}

void ptr10074(void* env10075, void* arglst9934)
{
void* kont8526 = get_env_value(env10075, encode_int((s32)5));
void* t8245 = get_env_value(env10075, encode_int((s32)4));
void* append1 = get_env_value(env10075, encode_int((s32)3));
void* rhs = get_env_value(env10075, encode_int((s32)2));
void* cons = get_env_value(env10075, encode_int((s32)1));
void* letk8529 = prim_car(arglst9934);
void* arg_lst9935 = prim_cdr(arglst9934);
void* t8246 = prim_car(arg_lst9935);
void* arg_lst9936 = prim_cdr(arg_lst9935);

//creating new closure instance
auto ptr10417 = reinterpret_cast<void (*)(void *, void *)>(&ptr10076);
env10075 = allocate_env_space(encode_int((s32)3));
void* id8585 = make_closure(reinterpret_cast<void *>(ptr10417), env10075);

//setting env list
set_env(env10075, encode_int((s32)1), cons);
set_env(env10075, encode_int((s32)2), t8245);
set_env(env10075, encode_int((s32)3), kont8526);


void* oldarg9944 = encode_null();
void* newarg9945 = prim_cons(rhs, oldarg9944);
void* newarg9946 = prim_cons(t8246, newarg9945);
void* newarg9947 = prim_cons(id8585, newarg9946);

//app-clo
void* cloPtr10418 = get_closure_ptr(append1);
void* procEnv10419 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10418);
function_ptr(procEnv10419, newarg9947);
}

void ptr10072(void* env10073, void* arglst9931)
{
void* lhs = get_env_value(env10073, encode_int((s32)6));
void* append1 = get_env_value(env10073, encode_int((s32)5));
void* rhs = get_env_value(env10073, encode_int((s32)4));
void* cons = get_env_value(env10073, encode_int((s32)3));
void* kont8526 = get_env_value(env10073, encode_int((s32)2));
void* cdr = get_env_value(env10073, encode_int((s32)1));
void* letk8528 = prim_car(arglst9931);
void* arg_lst9932 = prim_cdr(arglst9931);
void* t8245 = prim_car(arg_lst9932);
void* arg_lst9933 = prim_cdr(arg_lst9932);

//creating new closure instance
auto ptr10420 = reinterpret_cast<void (*)(void *, void *)>(&ptr10074);
env10073 = allocate_env_space(encode_int((s32)5));
void* id8584 = make_closure(reinterpret_cast<void *>(ptr10420), env10073);

//setting env list
set_env(env10073, encode_int((s32)1), cons);
set_env(env10073, encode_int((s32)2), rhs);
set_env(env10073, encode_int((s32)3), append1);
set_env(env10073, encode_int((s32)4), t8245);
set_env(env10073, encode_int((s32)5), kont8526);


void* oldarg9948 = encode_null();
void* newarg9949 = prim_cons(lhs, oldarg9948);
void* newarg9950 = prim_cons(id8584, newarg9949);

//app-clo
void* cloPtr10421 = get_closure_ptr(cdr);
void* procEnv10422 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10421);
function_ptr(procEnv10422, newarg9950);
}

void ptr10070(void* env10071, void* arglst9925)
{
void* lhs = get_env_value(env10071, encode_int((s32)7));
void* append1 = get_env_value(env10071, encode_int((s32)6));
void* cons = get_env_value(env10071, encode_int((s32)5));
void* kont8526 = get_env_value(env10071, encode_int((s32)4));
void* cdr = get_env_value(env10071, encode_int((s32)3));
void* rhs = get_env_value(env10071, encode_int((s32)2));
void* car = get_env_value(env10071, encode_int((s32)1));
void* letk8527 = prim_car(arglst9925);
void* arg_lst9926 = prim_cdr(arglst9925);
void* t8244 = prim_car(arg_lst9926);
void* arg_lst9927 = prim_cdr(arg_lst9926);

//if-clause
u64 if_guard10423 = reinterpret_cast<u64>(is_true(t8244));
if(if_guard10423 == 1)
{
void* id8582 = encode_null();
void* oldarg9928 = encode_null();
void* newarg9929 = prim_cons(rhs, oldarg9928);
void* newarg9930 = prim_cons(id8582, newarg9929);

//app-clo
void* cloPtr10424 = get_closure_ptr(kont8526);
void* procEnv10425 = get_env(kont8526);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10424);
function_ptr(procEnv10425, newarg9930);
}
else
{

//creating new closure instance
auto ptr10426 = reinterpret_cast<void (*)(void *, void *)>(&ptr10072);
env10071 = allocate_env_space(encode_int((s32)6));
void* id8583 = make_closure(reinterpret_cast<void *>(ptr10426), env10071);

//setting env list
set_env(env10071, encode_int((s32)1), cdr);
set_env(env10071, encode_int((s32)2), kont8526);
set_env(env10071, encode_int((s32)3), cons);
set_env(env10071, encode_int((s32)4), rhs);
set_env(env10071, encode_int((s32)5), append1);
set_env(env10071, encode_int((s32)6), lhs);


void* oldarg9951 = encode_null();
void* newarg9952 = prim_cons(lhs, oldarg9951);
void* newarg9953 = prim_cons(id8583, newarg9952);

//app-clo
void* cloPtr10427 = get_closure_ptr(car);
void* procEnv10428 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10427);
function_ptr(procEnv10428, newarg9953);
}

}

void ptr10068(void* env10069, void* arglst9921)
{
void* cdr = get_env_value(env10069, encode_int((s32)5));
void* null_u63 = get_env_value(env10069, encode_int((s32)4));
void* append1 = get_env_value(env10069, encode_int((s32)3));
void* car = get_env_value(env10069, encode_int((s32)2));
void* cons = get_env_value(env10069, encode_int((s32)1));
void* kont8526 = prim_car(arglst9921);
void* arg_lst9922 = prim_cdr(arglst9921);
void* lhs = prim_car(arg_lst9922);
void* arg_lst9923 = prim_cdr(arg_lst9922);
void* rhs = prim_car(arg_lst9923);
void* arg_lst9924 = prim_cdr(arg_lst9923);

//creating new closure instance
auto ptr10429 = reinterpret_cast<void (*)(void *, void *)>(&ptr10070);
env10069 = allocate_env_space(encode_int((s32)7));
void* id8581 = make_closure(reinterpret_cast<void *>(ptr10429), env10069);

//setting env list
set_env(env10069, encode_int((s32)1), car);
set_env(env10069, encode_int((s32)2), rhs);
set_env(env10069, encode_int((s32)3), cdr);
set_env(env10069, encode_int((s32)4), kont8526);
set_env(env10069, encode_int((s32)5), cons);
set_env(env10069, encode_int((s32)6), append1);
set_env(env10069, encode_int((s32)7), lhs);


void* oldarg9954 = encode_null();
void* newarg9955 = prim_cons(lhs, oldarg9954);
void* newarg9956 = prim_cons(id8581, newarg9955);

//app-clo
void* cloPtr10430 = get_closure_ptr(null_u63);
void* procEnv10431 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10430);
function_ptr(procEnv10431, newarg9956);
}

void ptr10066(void* env10067, void* arglst9918)
{
void* cdr = get_env_value(env10067, encode_int((s32)4));
void* null_u63 = get_env_value(env10067, encode_int((s32)3));
void* car = get_env_value(env10067, encode_int((s32)2));
void* cons = get_env_value(env10067, encode_int((s32)1));
void* kont8525 = prim_car(arglst9918);
void* arg_lst9919 = prim_cdr(arglst9918);
void* append1 = prim_car(arg_lst9919);
void* arg_lst9920 = prim_cdr(arg_lst9919);
void* id8579 = encode_null();

//creating new closure instance
auto ptr10432 = reinterpret_cast<void (*)(void *, void *)>(&ptr10068);
env10067 = allocate_env_space(encode_int((s32)5));
void* id8580 = make_closure(reinterpret_cast<void *>(ptr10432), env10067);

//setting env list
set_env(env10067, encode_int((s32)1), cons);
set_env(env10067, encode_int((s32)2), car);
set_env(env10067, encode_int((s32)3), append1);
set_env(env10067, encode_int((s32)4), null_u63);
set_env(env10067, encode_int((s32)5), cdr);


void* oldarg9957 = encode_null();
void* newarg9958 = prim_cons(id8580, oldarg9957);
void* newarg9959 = prim_cons(id8579, newarg9958);

//app-clo
void* cloPtr10433 = get_closure_ptr(kont8525);
void* procEnv10434 = get_env(kont8525);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10433);
function_ptr(procEnv10434, newarg9959);
}

void ptr10092(void* env10093, void* arglst9889)
{
void* kont8519 = get_env_value(env10093, encode_int((s32)3));
void* t8250 = get_env_value(env10093, encode_int((s32)2));
void* cons = get_env_value(env10093, encode_int((s32)1));
void* letk8524 = prim_car(arglst9889);
void* arg_lst9890 = prim_cdr(arglst9889);
void* t8252 = prim_car(arg_lst9890);
void* arg_lst9891 = prim_cdr(arg_lst9890);
void* oldarg9892 = encode_null();
void* newarg9893 = prim_cons(t8252, oldarg9892);
void* newarg9894 = prim_cons(t8250, newarg9893);
void* newarg9895 = prim_cons(kont8519, newarg9894);

//app-clo
void* cloPtr10435 = get_closure_ptr(cons);
void* procEnv10436 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10435);
function_ptr(procEnv10436, newarg9895);
}

void ptr10090(void* env10091, void* arglst9886)
{
void* op = get_env_value(env10091, encode_int((s32)5));
void* kont8519 = get_env_value(env10091, encode_int((s32)4));
void* cons = get_env_value(env10091, encode_int((s32)3));
void* map1 = get_env_value(env10091, encode_int((s32)2));
void* t8250 = get_env_value(env10091, encode_int((s32)1));
void* letk8523 = prim_car(arglst9886);
void* arg_lst9887 = prim_cdr(arglst9886);
void* t8251 = prim_car(arg_lst9887);
void* arg_lst9888 = prim_cdr(arg_lst9887);

//creating new closure instance
auto ptr10437 = reinterpret_cast<void (*)(void *, void *)>(&ptr10092);
env10091 = allocate_env_space(encode_int((s32)3));
void* id8596 = make_closure(reinterpret_cast<void *>(ptr10437), env10091);

//setting env list
set_env(env10091, encode_int((s32)1), cons);
set_env(env10091, encode_int((s32)2), t8250);
set_env(env10091, encode_int((s32)3), kont8519);


void* oldarg9896 = encode_null();
void* newarg9897 = prim_cons(t8251, oldarg9896);
void* newarg9898 = prim_cons(op, newarg9897);
void* newarg9899 = prim_cons(id8596, newarg9898);

//app-clo
void* cloPtr10438 = get_closure_ptr(map1);
void* procEnv10439 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10438);
function_ptr(procEnv10439, newarg9899);
}

void ptr10088(void* env10089, void* arglst9883)
{
void* cdr = get_env_value(env10089, encode_int((s32)6));
void* lst = get_env_value(env10089, encode_int((s32)5));
void* op = get_env_value(env10089, encode_int((s32)4));
void* kont8519 = get_env_value(env10089, encode_int((s32)3));
void* map1 = get_env_value(env10089, encode_int((s32)2));
void* cons = get_env_value(env10089, encode_int((s32)1));
void* letk8522 = prim_car(arglst9883);
void* arg_lst9884 = prim_cdr(arglst9883);
void* t8250 = prim_car(arg_lst9884);
void* arg_lst9885 = prim_cdr(arg_lst9884);

//creating new closure instance
auto ptr10440 = reinterpret_cast<void (*)(void *, void *)>(&ptr10090);
env10089 = allocate_env_space(encode_int((s32)5));
void* id8595 = make_closure(reinterpret_cast<void *>(ptr10440), env10089);

//setting env list
set_env(env10089, encode_int((s32)1), t8250);
set_env(env10089, encode_int((s32)2), map1);
set_env(env10089, encode_int((s32)3), cons);
set_env(env10089, encode_int((s32)4), kont8519);
set_env(env10089, encode_int((s32)5), op);


void* oldarg9900 = encode_null();
void* newarg9901 = prim_cons(lst, oldarg9900);
void* newarg9902 = prim_cons(id8595, newarg9901);

//app-clo
void* cloPtr10441 = get_closure_ptr(cdr);
void* procEnv10442 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10441);
function_ptr(procEnv10442, newarg9902);
}

void ptr10086(void* env10087, void* arglst9880)
{
void* cdr = get_env_value(env10087, encode_int((s32)6));
void* lst = get_env_value(env10087, encode_int((s32)5));
void* op = get_env_value(env10087, encode_int((s32)4));
void* kont8519 = get_env_value(env10087, encode_int((s32)3));
void* map1 = get_env_value(env10087, encode_int((s32)2));
void* cons = get_env_value(env10087, encode_int((s32)1));
void* letk8521 = prim_car(arglst9880);
void* arg_lst9881 = prim_cdr(arglst9880);
void* t8249 = prim_car(arg_lst9881);
void* arg_lst9882 = prim_cdr(arg_lst9881);

//creating new closure instance
auto ptr10443 = reinterpret_cast<void (*)(void *, void *)>(&ptr10088);
env10087 = allocate_env_space(encode_int((s32)6));
void* id8594 = make_closure(reinterpret_cast<void *>(ptr10443), env10087);

//setting env list
set_env(env10087, encode_int((s32)1), cons);
set_env(env10087, encode_int((s32)2), map1);
set_env(env10087, encode_int((s32)3), kont8519);
set_env(env10087, encode_int((s32)4), op);
set_env(env10087, encode_int((s32)5), lst);
set_env(env10087, encode_int((s32)6), cdr);


void* oldarg9903 = encode_null();
void* newarg9904 = prim_cons(t8249, oldarg9903);
void* newarg9905 = prim_cons(id8594, newarg9904);

//app-clo
void* cloPtr10444 = get_closure_ptr(op);
void* procEnv10445 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10444);
function_ptr(procEnv10445, newarg9905);
}

void ptr10084(void* env10085, void* arglst9874)
{
void* cdr = get_env_value(env10085, encode_int((s32)7));
void* lst = get_env_value(env10085, encode_int((s32)6));
void* op = get_env_value(env10085, encode_int((s32)5));
void* kont8519 = get_env_value(env10085, encode_int((s32)4));
void* map1 = get_env_value(env10085, encode_int((s32)3));
void* car = get_env_value(env10085, encode_int((s32)2));
void* cons = get_env_value(env10085, encode_int((s32)1));
void* letk8520 = prim_car(arglst9874);
void* arg_lst9875 = prim_cdr(arglst9874);
void* t8248 = prim_car(arg_lst9875);
void* arg_lst9876 = prim_cdr(arg_lst9875);

//if-clause
u64 if_guard10446 = reinterpret_cast<u64>(is_true(t8248));
if(if_guard10446 == 1)
{
void* id8591 = encode_null();
void* id8592 = encode_null();
void* oldarg9877 = encode_null();
void* newarg9878 = prim_cons(id8592, oldarg9877);
void* newarg9879 = prim_cons(id8591, newarg9878);

//app-clo
void* cloPtr10447 = get_closure_ptr(kont8519);
void* procEnv10448 = get_env(kont8519);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10447);
function_ptr(procEnv10448, newarg9879);
}
else
{

//creating new closure instance
auto ptr10449 = reinterpret_cast<void (*)(void *, void *)>(&ptr10086);
env10085 = allocate_env_space(encode_int((s32)6));
void* id8593 = make_closure(reinterpret_cast<void *>(ptr10449), env10085);

//setting env list
set_env(env10085, encode_int((s32)1), cons);
set_env(env10085, encode_int((s32)2), map1);
set_env(env10085, encode_int((s32)3), kont8519);
set_env(env10085, encode_int((s32)4), op);
set_env(env10085, encode_int((s32)5), lst);
set_env(env10085, encode_int((s32)6), cdr);


void* oldarg9906 = encode_null();
void* newarg9907 = prim_cons(lst, oldarg9906);
void* newarg9908 = prim_cons(id8593, newarg9907);

//app-clo
void* cloPtr10450 = get_closure_ptr(car);
void* procEnv10451 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10450);
function_ptr(procEnv10451, newarg9908);
}

}

void ptr10082(void* env10083, void* arglst9870)
{
void* cdr = get_env_value(env10083, encode_int((s32)5));
void* null_u63 = get_env_value(env10083, encode_int((s32)4));
void* map1 = get_env_value(env10083, encode_int((s32)3));
void* car = get_env_value(env10083, encode_int((s32)2));
void* cons = get_env_value(env10083, encode_int((s32)1));
void* kont8519 = prim_car(arglst9870);
void* arg_lst9871 = prim_cdr(arglst9870);
void* op = prim_car(arg_lst9871);
void* arg_lst9872 = prim_cdr(arg_lst9871);
void* lst = prim_car(arg_lst9872);
void* arg_lst9873 = prim_cdr(arg_lst9872);

//creating new closure instance
auto ptr10452 = reinterpret_cast<void (*)(void *, void *)>(&ptr10084);
env10083 = allocate_env_space(encode_int((s32)7));
void* id8590 = make_closure(reinterpret_cast<void *>(ptr10452), env10083);

//setting env list
set_env(env10083, encode_int((s32)1), cons);
set_env(env10083, encode_int((s32)2), car);
set_env(env10083, encode_int((s32)3), map1);
set_env(env10083, encode_int((s32)4), kont8519);
set_env(env10083, encode_int((s32)5), op);
set_env(env10083, encode_int((s32)6), lst);
set_env(env10083, encode_int((s32)7), cdr);


void* oldarg9909 = encode_null();
void* newarg9910 = prim_cons(lst, oldarg9909);
void* newarg9911 = prim_cons(id8590, newarg9910);

//app-clo
void* cloPtr10453 = get_closure_ptr(null_u63);
void* procEnv10454 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10453);
function_ptr(procEnv10454, newarg9911);
}

void ptr10080(void* env10081, void* arglst9867)
{
void* cdr = get_env_value(env10081, encode_int((s32)4));
void* null_u63 = get_env_value(env10081, encode_int((s32)3));
void* car = get_env_value(env10081, encode_int((s32)2));
void* cons = get_env_value(env10081, encode_int((s32)1));
void* kont8518 = prim_car(arglst9867);
void* arg_lst9868 = prim_cdr(arglst9867);
void* map1 = prim_car(arg_lst9868);
void* arg_lst9869 = prim_cdr(arg_lst9868);
void* id8588 = encode_null();

//creating new closure instance
auto ptr10455 = reinterpret_cast<void (*)(void *, void *)>(&ptr10082);
env10081 = allocate_env_space(encode_int((s32)5));
void* id8589 = make_closure(reinterpret_cast<void *>(ptr10455), env10081);

//setting env list
set_env(env10081, encode_int((s32)1), cons);
set_env(env10081, encode_int((s32)2), car);
set_env(env10081, encode_int((s32)3), map1);
set_env(env10081, encode_int((s32)4), null_u63);
set_env(env10081, encode_int((s32)5), cdr);


void* oldarg9912 = encode_null();
void* newarg9913 = prim_cons(id8589, oldarg9912);
void* newarg9914 = prim_cons(id8588, newarg9913);

//app-clo
void* cloPtr10456 = get_closure_ptr(kont8518);
void* procEnv10457 = get_env(kont8518);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10456);
function_ptr(procEnv10457, newarg9914);
}

void ptr10124(void* env10125, void* arglst9817)
{
void* t8256 = get_env_value(env10125, encode_int((s32)3));
void* kkont8501 = get_env_value(env10125, encode_int((s32)2));
void* cons = get_env_value(env10125, encode_int((s32)1));
void* letk8515 = prim_car(arglst9817);
void* arg_lst9818 = prim_cdr(arglst9817);
void* t8259 = prim_car(arg_lst9818);
void* arg_lst9819 = prim_cdr(arg_lst9818);
void* oldarg9820 = encode_null();
void* newarg9821 = prim_cons(t8259, oldarg9820);
void* newarg9822 = prim_cons(t8256, newarg9821);
void* newarg9823 = prim_cons(kkont8501, newarg9822);

//app-clo
void* cloPtr10458 = get_closure_ptr(cons);
void* procEnv10459 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10458);
function_ptr(procEnv10459, newarg9823);
}

void ptr10122(void* env10123, void* arglst9814)
{
void* t8256 = get_env_value(env10123, encode_int((s32)4));
void* map = get_env_value(env10123, encode_int((s32)3));
void* kkont8501 = get_env_value(env10123, encode_int((s32)2));
void* cons = get_env_value(env10123, encode_int((s32)1));
void* letk8514 = prim_car(arglst9814);
void* arg_lst9815 = prim_cdr(arglst9814);
void* t8258 = prim_car(arg_lst9815);
void* arg_lst9816 = prim_cdr(arg_lst9815);

//creating new closure instance
auto ptr10460 = reinterpret_cast<void (*)(void *, void *)>(&ptr10124);
env10123 = allocate_env_space(encode_int((s32)3));
void* id8616 = make_closure(reinterpret_cast<void *>(ptr10460), env10123);

//setting env list
set_env(env10123, encode_int((s32)1), cons);
set_env(env10123, encode_int((s32)2), kkont8501);
set_env(env10123, encode_int((s32)3), t8256);


void* lst8516 = prim_cons(id8616, t8258);

//app-clo
void* cloPtr10461 = get_closure_ptr(map);
void* procEnv10462 = get_env(map);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10461);
function_ptr(procEnv10462, lst8516);
}

void ptr10120(void* env10121, void* arglst9811)
{
void* t8256 = get_env_value(env10121, encode_int((s32)5));
void* map = get_env_value(env10121, encode_int((s32)4));
void* cons = get_env_value(env10121, encode_int((s32)3));
void* kkont8501 = get_env_value(env10121, encode_int((s32)2));
void* op = get_env_value(env10121, encode_int((s32)1));
void* letk8513 = prim_car(arglst9811);
void* arg_lst9812 = prim_cdr(arglst9811);
void* t8257 = prim_car(arg_lst9812);
void* arg_lst9813 = prim_cdr(arg_lst9812);

//creating new closure instance
auto ptr10463 = reinterpret_cast<void (*)(void *, void *)>(&ptr10122);
env10121 = allocate_env_space(encode_int((s32)4));
void* id8615 = make_closure(reinterpret_cast<void *>(ptr10463), env10121);

//setting env list
set_env(env10121, encode_int((s32)1), cons);
set_env(env10121, encode_int((s32)2), kkont8501);
set_env(env10121, encode_int((s32)3), map);
set_env(env10121, encode_int((s32)4), t8256);


void* oldarg9824 = encode_null();
void* newarg9825 = prim_cons(t8257, oldarg9824);
void* newarg9826 = prim_cons(op, newarg9825);
void* newarg9827 = prim_cons(id8615, newarg9826);

//app-clo
void* cloPtr10464 = get_closure_ptr(cons);
void* procEnv10465 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10464);
function_ptr(procEnv10465, newarg9827);
}

void ptr10118(void* env10119, void* arglst9808)
{
void* cdr = get_env_value(env10119, encode_int((s32)7));
void* map = get_env_value(env10119, encode_int((s32)6));
void* combined_lst = get_env_value(env10119, encode_int((s32)5));
void* map1 = get_env_value(env10119, encode_int((s32)4));
void* cons = get_env_value(env10119, encode_int((s32)3));
void* kkont8501 = get_env_value(env10119, encode_int((s32)2));
void* op = get_env_value(env10119, encode_int((s32)1));
void* letk8512 = prim_car(arglst9808);
void* arg_lst9809 = prim_cdr(arglst9808);
void* t8256 = prim_car(arg_lst9809);
void* arg_lst9810 = prim_cdr(arg_lst9809);

//creating new closure instance
auto ptr10466 = reinterpret_cast<void (*)(void *, void *)>(&ptr10120);
env10119 = allocate_env_space(encode_int((s32)5));
void* id8614 = make_closure(reinterpret_cast<void *>(ptr10466), env10119);

//setting env list
set_env(env10119, encode_int((s32)1), op);
set_env(env10119, encode_int((s32)2), kkont8501);
set_env(env10119, encode_int((s32)3), cons);
set_env(env10119, encode_int((s32)4), map);
set_env(env10119, encode_int((s32)5), t8256);


void* oldarg9828 = encode_null();
void* newarg9829 = prim_cons(combined_lst, oldarg9828);
void* newarg9830 = prim_cons(cdr, newarg9829);
void* newarg9831 = prim_cons(id8614, newarg9830);

//app-clo
void* cloPtr10467 = get_closure_ptr(map1);
void* procEnv10468 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10467);
function_ptr(procEnv10468, newarg9831);
}

void ptr10116(void* env10117, void* arglst9805)
{
void* cdr = get_env_value(env10117, encode_int((s32)7));
void* map = get_env_value(env10117, encode_int((s32)6));
void* combined_lst = get_env_value(env10117, encode_int((s32)5));
void* map1 = get_env_value(env10117, encode_int((s32)4));
void* cons = get_env_value(env10117, encode_int((s32)3));
void* kkont8501 = get_env_value(env10117, encode_int((s32)2));
void* op = get_env_value(env10117, encode_int((s32)1));
void* letk8511 = prim_car(arglst9805);
void* arg_lst9806 = prim_cdr(arglst9805);
void* t8255 = prim_car(arg_lst9806);
void* arg_lst9807 = prim_cdr(arg_lst9806);

//creating new closure instance
auto ptr10469 = reinterpret_cast<void (*)(void *, void *)>(&ptr10118);
env10117 = allocate_env_space(encode_int((s32)7));
void* id8613 = make_closure(reinterpret_cast<void *>(ptr10469), env10117);

//setting env list
set_env(env10117, encode_int((s32)1), op);
set_env(env10117, encode_int((s32)2), kkont8501);
set_env(env10117, encode_int((s32)3), cons);
set_env(env10117, encode_int((s32)4), map1);
set_env(env10117, encode_int((s32)5), combined_lst);
set_env(env10117, encode_int((s32)6), map);
set_env(env10117, encode_int((s32)7), cdr);


void* lst8517 = prim_cons(id8613, t8255);

//app-clo
void* cloPtr10470 = get_closure_ptr(op);
void* procEnv10471 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10470);
function_ptr(procEnv10471, lst8517);
}

void ptr10114(void* env10115, void* arglst9799)
{
void* cdr = get_env_value(env10115, encode_int((s32)8));
void* map = get_env_value(env10115, encode_int((s32)7));
void* combined_lst = get_env_value(env10115, encode_int((s32)6));
void* map1 = get_env_value(env10115, encode_int((s32)5));
void* car = get_env_value(env10115, encode_int((s32)4));
void* cons = get_env_value(env10115, encode_int((s32)3));
void* kkont8501 = get_env_value(env10115, encode_int((s32)2));
void* op = get_env_value(env10115, encode_int((s32)1));
void* letk8510 = prim_car(arglst9799);
void* arg_lst9800 = prim_cdr(arglst9799);
void* t8254 = prim_car(arg_lst9800);
void* arg_lst9801 = prim_cdr(arg_lst9800);

//if-clause
u64 if_guard10472 = reinterpret_cast<u64>(is_true(t8254));
if(if_guard10472 == 1)
{
void* id8610 = encode_null();
void* id8611 = encode_null();
void* oldarg9802 = encode_null();
void* newarg9803 = prim_cons(id8611, oldarg9802);
void* newarg9804 = prim_cons(id8610, newarg9803);

//app-clo
void* cloPtr10473 = get_closure_ptr(kkont8501);
void* procEnv10474 = get_env(kkont8501);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10473);
function_ptr(procEnv10474, newarg9804);
}
else
{

//creating new closure instance
auto ptr10475 = reinterpret_cast<void (*)(void *, void *)>(&ptr10116);
env10115 = allocate_env_space(encode_int((s32)7));
void* id8612 = make_closure(reinterpret_cast<void *>(ptr10475), env10115);

//setting env list
set_env(env10115, encode_int((s32)1), op);
set_env(env10115, encode_int((s32)2), kkont8501);
set_env(env10115, encode_int((s32)3), cons);
set_env(env10115, encode_int((s32)4), map1);
set_env(env10115, encode_int((s32)5), combined_lst);
set_env(env10115, encode_int((s32)6), map);
set_env(env10115, encode_int((s32)7), cdr);


void* oldarg9832 = encode_null();
void* newarg9833 = prim_cons(combined_lst, oldarg9832);
void* newarg9834 = prim_cons(car, newarg9833);
void* newarg9835 = prim_cons(id8612, newarg9834);

//app-clo
void* cloPtr10476 = get_closure_ptr(map1);
void* procEnv10477 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10476);
function_ptr(procEnv10477, newarg9835);
}

}

void ptr10112(void* env10113, void* arglst9796)
{
void* cdr = get_env_value(env10113, encode_int((s32)9));
void* combined_lst = get_env_value(env10113, encode_int((s32)8));
void* map1 = get_env_value(env10113, encode_int((s32)7));
void* car = get_env_value(env10113, encode_int((s32)6));
void* cons = get_env_value(env10113, encode_int((s32)5));
void* map = get_env_value(env10113, encode_int((s32)4));
void* null_u63 = get_env_value(env10113, encode_int((s32)3));
void* kkont8501 = get_env_value(env10113, encode_int((s32)2));
void* op = get_env_value(env10113, encode_int((s32)1));
void* letk8509 = prim_car(arglst9796);
void* arg_lst9797 = prim_cdr(arglst9796);
void* t8253 = prim_car(arg_lst9797);
void* arg_lst9798 = prim_cdr(arg_lst9797);

//creating new closure instance
auto ptr10478 = reinterpret_cast<void (*)(void *, void *)>(&ptr10114);
env10113 = allocate_env_space(encode_int((s32)8));
void* id8609 = make_closure(reinterpret_cast<void *>(ptr10478), env10113);

//setting env list
set_env(env10113, encode_int((s32)1), op);
set_env(env10113, encode_int((s32)2), kkont8501);
set_env(env10113, encode_int((s32)3), cons);
set_env(env10113, encode_int((s32)4), car);
set_env(env10113, encode_int((s32)5), map1);
set_env(env10113, encode_int((s32)6), combined_lst);
set_env(env10113, encode_int((s32)7), map);
set_env(env10113, encode_int((s32)8), cdr);


void* oldarg9836 = encode_null();
void* newarg9837 = prim_cons(t8253, oldarg9836);
void* newarg9838 = prim_cons(id8609, newarg9837);

//app-clo
void* cloPtr10479 = get_closure_ptr(null_u63);
void* procEnv10480 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10479);
function_ptr(procEnv10480, newarg9838);
}

void ptr10110(void* env10111, void* arglst9793)
{
void* cdr = get_env_value(env10111, encode_int((s32)8));
void* map1 = get_env_value(env10111, encode_int((s32)7));
void* car = get_env_value(env10111, encode_int((s32)6));
void* cons = get_env_value(env10111, encode_int((s32)5));
void* map = get_env_value(env10111, encode_int((s32)4));
void* null_u63 = get_env_value(env10111, encode_int((s32)3));
void* kkont8501 = get_env_value(env10111, encode_int((s32)2));
void* op = get_env_value(env10111, encode_int((s32)1));
void* letk8508 = prim_car(arglst9793);
void* arg_lst9794 = prim_cdr(arglst9793);
void* combined_lst = prim_car(arg_lst9794);
void* arg_lst9795 = prim_cdr(arg_lst9794);

//creating new closure instance
auto ptr10481 = reinterpret_cast<void (*)(void *, void *)>(&ptr10112);
env10111 = allocate_env_space(encode_int((s32)9));
void* id8608 = make_closure(reinterpret_cast<void *>(ptr10481), env10111);

//setting env list
set_env(env10111, encode_int((s32)1), op);
set_env(env10111, encode_int((s32)2), kkont8501);
set_env(env10111, encode_int((s32)3), null_u63);
set_env(env10111, encode_int((s32)4), map);
set_env(env10111, encode_int((s32)5), cons);
set_env(env10111, encode_int((s32)6), car);
set_env(env10111, encode_int((s32)7), map1);
set_env(env10111, encode_int((s32)8), combined_lst);
set_env(env10111, encode_int((s32)9), cdr);


void* oldarg9839 = encode_null();
void* newarg9840 = prim_cons(combined_lst, oldarg9839);
void* newarg9841 = prim_cons(id8608, newarg9840);

//app-clo
void* cloPtr10482 = get_closure_ptr(car);
void* procEnv10483 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10482);
function_ptr(procEnv10483, newarg9841);
}

void ptr10108(void* env10109, void* arglst9790)
{
void* cdr = get_env_value(env10109, encode_int((s32)9));
void* map1 = get_env_value(env10109, encode_int((s32)8));
void* cons = get_env_value(env10109, encode_int((s32)7));
void* map = get_env_value(env10109, encode_int((s32)6));
void* null_u63 = get_env_value(env10109, encode_int((s32)5));
void* kkont8501 = get_env_value(env10109, encode_int((s32)4));
void* op = get_env_value(env10109, encode_int((s32)3));
void* lst1 = get_env_value(env10109, encode_int((s32)2));
void* car = get_env_value(env10109, encode_int((s32)1));
void* letk8507 = prim_car(arglst9790);
void* arg_lst9791 = prim_cdr(arglst9790);
void* list_u45of_u45lists = prim_car(arg_lst9791);
void* arg_lst9792 = prim_cdr(arg_lst9791);

//creating new closure instance
auto ptr10484 = reinterpret_cast<void (*)(void *, void *)>(&ptr10110);
env10109 = allocate_env_space(encode_int((s32)8));
void* id8607 = make_closure(reinterpret_cast<void *>(ptr10484), env10109);

//setting env list
set_env(env10109, encode_int((s32)1), op);
set_env(env10109, encode_int((s32)2), kkont8501);
set_env(env10109, encode_int((s32)3), null_u63);
set_env(env10109, encode_int((s32)4), map);
set_env(env10109, encode_int((s32)5), cons);
set_env(env10109, encode_int((s32)6), car);
set_env(env10109, encode_int((s32)7), map1);
set_env(env10109, encode_int((s32)8), cdr);


void* oldarg9842 = encode_null();
void* newarg9843 = prim_cons(list_u45of_u45lists, oldarg9842);
void* newarg9844 = prim_cons(lst1, newarg9843);
void* newarg9845 = prim_cons(id8607, newarg9844);

//app-clo
void* cloPtr10485 = get_closure_ptr(cons);
void* procEnv10486 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10485);
function_ptr(procEnv10486, newarg9845);
}

void ptr10106(void* env10107, void* arglst9787)
{
void* cdr = get_env_value(env10107, encode_int((s32)9));
void* map1 = get_env_value(env10107, encode_int((s32)8));
void* cons = get_env_value(env10107, encode_int((s32)7));
void* map = get_env_value(env10107, encode_int((s32)6));
void* null_u63 = get_env_value(env10107, encode_int((s32)5));
void* kkont8501 = get_env_value(env10107, encode_int((s32)4));
void* op = get_env_value(env10107, encode_int((s32)3));
void* lst1 = get_env_value(env10107, encode_int((s32)2));
void* car = get_env_value(env10107, encode_int((s32)1));
void* letk8506 = prim_car(arglst9787);
void* arg_lst9788 = prim_cdr(arglst9787);
void* param_lst8234 = prim_car(arg_lst9788);
void* arg_lst9789 = prim_cdr(arg_lst9788);

//creating new closure instance
auto ptr10487 = reinterpret_cast<void (*)(void *, void *)>(&ptr10108);
env10107 = allocate_env_space(encode_int((s32)9));
void* id8605 = make_closure(reinterpret_cast<void *>(ptr10487), env10107);

//setting env list
set_env(env10107, encode_int((s32)1), car);
set_env(env10107, encode_int((s32)2), lst1);
set_env(env10107, encode_int((s32)3), op);
set_env(env10107, encode_int((s32)4), kkont8501);
set_env(env10107, encode_int((s32)5), null_u63);
set_env(env10107, encode_int((s32)6), map);
set_env(env10107, encode_int((s32)7), cons);
set_env(env10107, encode_int((s32)8), map1);
set_env(env10107, encode_int((s32)9), cdr);


void* id8606 = encode_null();
void* oldarg9846 = encode_null();
void* newarg9847 = prim_cons(param_lst8234, oldarg9846);
void* newarg9848 = prim_cons(id8606, newarg9847);

//app-clo
void* cloPtr10488 = get_closure_ptr(id8605);
void* procEnv10489 = get_env(id8605);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10488);
function_ptr(procEnv10489, newarg9848);
}

void ptr10104(void* env10105, void* arglst9784)
{
void* cdr = get_env_value(env10105, encode_int((s32)9));
void* car = get_env_value(env10105, encode_int((s32)8));
void* cons = get_env_value(env10105, encode_int((s32)7));
void* map = get_env_value(env10105, encode_int((s32)6));
void* null_u63 = get_env_value(env10105, encode_int((s32)5));
void* kkont8501 = get_env_value(env10105, encode_int((s32)4));
void* op = get_env_value(env10105, encode_int((s32)3));
void* map1 = get_env_value(env10105, encode_int((s32)2));
void* param_lst8234 = get_env_value(env10105, encode_int((s32)1));
void* letk8505 = prim_car(arglst9784);
void* arg_lst9785 = prim_cdr(arglst9784);
void* lst1 = prim_car(arg_lst9785);
void* arg_lst9786 = prim_cdr(arg_lst9785);

//creating new closure instance
auto ptr10490 = reinterpret_cast<void (*)(void *, void *)>(&ptr10106);
env10105 = allocate_env_space(encode_int((s32)9));
void* id8604 = make_closure(reinterpret_cast<void *>(ptr10490), env10105);

//setting env list
set_env(env10105, encode_int((s32)1), car);
set_env(env10105, encode_int((s32)2), lst1);
set_env(env10105, encode_int((s32)3), op);
set_env(env10105, encode_int((s32)4), kkont8501);
set_env(env10105, encode_int((s32)5), null_u63);
set_env(env10105, encode_int((s32)6), map);
set_env(env10105, encode_int((s32)7), cons);
set_env(env10105, encode_int((s32)8), map1);
set_env(env10105, encode_int((s32)9), cdr);


void* oldarg9849 = encode_null();
void* newarg9850 = prim_cons(param_lst8234, oldarg9849);
void* newarg9851 = prim_cons(id8604, newarg9850);

//app-clo
void* cloPtr10491 = get_closure_ptr(cdr);
void* procEnv10492 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10491);
function_ptr(procEnv10492, newarg9851);
}

void ptr10102(void* env10103, void* arglst9781)
{
void* cdr = get_env_value(env10103, encode_int((s32)8));
void* map1 = get_env_value(env10103, encode_int((s32)7));
void* car = get_env_value(env10103, encode_int((s32)6));
void* cons = get_env_value(env10103, encode_int((s32)5));
void* map = get_env_value(env10103, encode_int((s32)4));
void* null_u63 = get_env_value(env10103, encode_int((s32)3));
void* kkont8501 = get_env_value(env10103, encode_int((s32)2));
void* op = get_env_value(env10103, encode_int((s32)1));
void* letk8504 = prim_car(arglst9781);
void* arg_lst9782 = prim_cdr(arglst9781);
void* param_lst8234 = prim_car(arg_lst9782);
void* arg_lst9783 = prim_cdr(arg_lst9782);

//creating new closure instance
auto ptr10493 = reinterpret_cast<void (*)(void *, void *)>(&ptr10104);
env10103 = allocate_env_space(encode_int((s32)9));
void* id8603 = make_closure(reinterpret_cast<void *>(ptr10493), env10103);

//setting env list
set_env(env10103, encode_int((s32)1), param_lst8234);
set_env(env10103, encode_int((s32)2), map1);
set_env(env10103, encode_int((s32)3), op);
set_env(env10103, encode_int((s32)4), kkont8501);
set_env(env10103, encode_int((s32)5), null_u63);
set_env(env10103, encode_int((s32)6), map);
set_env(env10103, encode_int((s32)7), cons);
set_env(env10103, encode_int((s32)8), car);
set_env(env10103, encode_int((s32)9), cdr);


void* oldarg9852 = encode_null();
void* newarg9853 = prim_cons(param_lst8234, oldarg9852);
void* newarg9854 = prim_cons(id8603, newarg9853);

//app-clo
void* cloPtr10494 = get_closure_ptr(car);
void* procEnv10495 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10494);
function_ptr(procEnv10495, newarg9854);
}

void ptr10100(void* env10101, void* arglst9778)
{
void* cdr = get_env_value(env10101, encode_int((s32)8));
void* kkont8501 = get_env_value(env10101, encode_int((s32)7));
void* car = get_env_value(env10101, encode_int((s32)6));
void* cons = get_env_value(env10101, encode_int((s32)5));
void* map = get_env_value(env10101, encode_int((s32)4));
void* null_u63 = get_env_value(env10101, encode_int((s32)3));
void* map1 = get_env_value(env10101, encode_int((s32)2));
void* param_lst8234 = get_env_value(env10101, encode_int((s32)1));
void* letk8503 = prim_car(arglst9778);
void* arg_lst9779 = prim_cdr(arglst9778);
void* op = prim_car(arg_lst9779);
void* arg_lst9780 = prim_cdr(arg_lst9779);

//creating new closure instance
auto ptr10496 = reinterpret_cast<void (*)(void *, void *)>(&ptr10102);
env10101 = allocate_env_space(encode_int((s32)8));
void* id8602 = make_closure(reinterpret_cast<void *>(ptr10496), env10101);

//setting env list
set_env(env10101, encode_int((s32)1), op);
set_env(env10101, encode_int((s32)2), kkont8501);
set_env(env10101, encode_int((s32)3), null_u63);
set_env(env10101, encode_int((s32)4), map);
set_env(env10101, encode_int((s32)5), cons);
set_env(env10101, encode_int((s32)6), car);
set_env(env10101, encode_int((s32)7), map1);
set_env(env10101, encode_int((s32)8), cdr);


void* oldarg9855 = encode_null();
void* newarg9856 = prim_cons(param_lst8234, oldarg9855);
void* newarg9857 = prim_cons(id8602, newarg9856);

//app-clo
void* cloPtr10497 = get_closure_ptr(cdr);
void* procEnv10498 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10497);
function_ptr(procEnv10498, newarg9857);
}

void ptr10098(void* env10099, void* param_lst82348502)
{
void* cdr = get_env_value(env10099, encode_int((s32)6));
void* map1 = get_env_value(env10099, encode_int((s32)5));
void* car = get_env_value(env10099, encode_int((s32)4));
void* cons = get_env_value(env10099, encode_int((s32)3));
void* map = get_env_value(env10099, encode_int((s32)2));
void* null_u63 = get_env_value(env10099, encode_int((s32)1));
void* kkont8501 = prim_car(param_lst82348502);
void* param_lst8234 = prim_cdr(param_lst82348502);

//creating new closure instance
auto ptr10499 = reinterpret_cast<void (*)(void *, void *)>(&ptr10100);
env10099 = allocate_env_space(encode_int((s32)8));
void* id8601 = make_closure(reinterpret_cast<void *>(ptr10499), env10099);

//setting env list
set_env(env10099, encode_int((s32)1), param_lst8234);
set_env(env10099, encode_int((s32)2), map1);
set_env(env10099, encode_int((s32)3), null_u63);
set_env(env10099, encode_int((s32)4), map);
set_env(env10099, encode_int((s32)5), cons);
set_env(env10099, encode_int((s32)6), car);
set_env(env10099, encode_int((s32)7), kkont8501);
set_env(env10099, encode_int((s32)8), cdr);


void* oldarg9858 = encode_null();
void* newarg9859 = prim_cons(param_lst8234, oldarg9858);
void* newarg9860 = prim_cons(id8601, newarg9859);

//app-clo
void* cloPtr10500 = get_closure_ptr(car);
void* procEnv10501 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10500);
function_ptr(procEnv10501, newarg9860);
}

void ptr10096(void* env10097, void* arglst9775)
{
void* cdr = get_env_value(env10097, encode_int((s32)5));
void* null_u63 = get_env_value(env10097, encode_int((s32)4));
void* map1 = get_env_value(env10097, encode_int((s32)3));
void* car = get_env_value(env10097, encode_int((s32)2));
void* cons = get_env_value(env10097, encode_int((s32)1));
void* kont8500 = prim_car(arglst9775);
void* arg_lst9776 = prim_cdr(arglst9775);
void* map = prim_car(arg_lst9776);
void* arg_lst9777 = prim_cdr(arg_lst9776);
void* id8599 = encode_null();

//creating new closure instance
auto ptr10502 = reinterpret_cast<void (*)(void *, void *)>(&ptr10098);
env10097 = allocate_env_space(encode_int((s32)6));
void* id8600 = make_closure(reinterpret_cast<void *>(ptr10502), env10097);

//setting env list
set_env(env10097, encode_int((s32)1), null_u63);
set_env(env10097, encode_int((s32)2), map);
set_env(env10097, encode_int((s32)3), cons);
set_env(env10097, encode_int((s32)4), car);
set_env(env10097, encode_int((s32)5), map1);
set_env(env10097, encode_int((s32)6), cdr);


void* oldarg9861 = encode_null();
void* newarg9862 = prim_cons(id8600, oldarg9861);
void* newarg9863 = prim_cons(id8599, newarg9862);

//app-clo
void* cloPtr10503 = get_closure_ptr(kont8500);
void* procEnv10504 = get_env(kont8500);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10503);
function_ptr(procEnv10504, newarg9863);
}

void ptr10154(void* env10155, void* arglst9550)
{
void* kont8483 = get_env_value(env10155, encode_int((s32)2));
void* op = get_env_value(env10155, encode_int((s32)1));
void* letk8488 = prim_car(arglst9550);
void* arg_lst9551 = prim_cdr(arglst9550);
void* t8265 = prim_car(arg_lst9551);
void* arg_lst9552 = prim_cdr(arg_lst9551);
void* lst8489 = prim_cons(kont8483, t8265);

//app-clo
void* cloPtr10505 = get_closure_ptr(op);
void* procEnv10506 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10505);
function_ptr(procEnv10506, lst8489);
}

void ptr10164(void* env10165, void* arglst9569)
{
void* kont8483 = get_env_value(env10165, encode_int((s32)2));
void* op = get_env_value(env10165, encode_int((s32)1));
void* letk8494 = prim_car(arglst9569);
void* arg_lst9570 = prim_cdr(arglst9569);
void* t8270 = prim_car(arg_lst9570);
void* arg_lst9571 = prim_cdr(arg_lst9570);
void* lst8495 = prim_cons(kont8483, t8270);

//app-clo
void* cloPtr10507 = get_closure_ptr(op);
void* procEnv10508 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10507);
function_ptr(procEnv10508, lst8495);
}

void ptr10166(void* env10167, void* arglst9576)
{
void* loop = get_env_value(env10167, encode_int((s32)2));
void* kont8483 = get_env_value(env10167, encode_int((s32)1));
void* letk8496 = prim_car(arglst9576);
void* arg_lst9577 = prim_cdr(arglst9576);
void* t8271 = prim_car(arg_lst9577);
void* arg_lst9578 = prim_cdr(arg_lst9577);
void* oldarg9579 = encode_null();
void* newarg9580 = prim_cons(t8271, oldarg9579);
void* newarg9581 = prim_cons(kont8483, newarg9580);

//app-clo
void* cloPtr10509 = get_closure_ptr(loop);
void* procEnv10510 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10509);
function_ptr(procEnv10510, newarg9581);
}

void ptr10162(void* env10163, void* arglst9566)
{
void* lst = get_env_value(env10163, encode_int((s32)7));
void* kont8483 = get_env_value(env10163, encode_int((s32)6));
void* op = get_env_value(env10163, encode_int((s32)5));
void* map1 = get_env_value(env10163, encode_int((s32)4));
void* car = get_env_value(env10163, encode_int((s32)3));
void* loop = get_env_value(env10163, encode_int((s32)2));
void* cdr = get_env_value(env10163, encode_int((s32)1));
void* letk8493 = prim_car(arglst9566);
void* arg_lst9567 = prim_cdr(arglst9566);
void* t8269 = prim_car(arg_lst9567);
void* arg_lst9568 = prim_cdr(arg_lst9567);

//if-clause
u64 if_guard10511 = reinterpret_cast<u64>(is_true(t8269));
if(if_guard10511 == 1)
{

//creating new closure instance
auto ptr10512 = reinterpret_cast<void (*)(void *, void *)>(&ptr10164);
env10163 = allocate_env_space(encode_int((s32)2));
void* id8646 = make_closure(reinterpret_cast<void *>(ptr10512), env10163);

//setting env list
set_env(env10163, encode_int((s32)1), op);
set_env(env10163, encode_int((s32)2), kont8483);


void* oldarg9572 = encode_null();
void* newarg9573 = prim_cons(lst, oldarg9572);
void* newarg9574 = prim_cons(car, newarg9573);
void* newarg9575 = prim_cons(id8646, newarg9574);

//app-clo
void* cloPtr10513 = get_closure_ptr(map1);
void* procEnv10514 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10513);
function_ptr(procEnv10514, newarg9575);
}
else
{

//creating new closure instance
auto ptr10515 = reinterpret_cast<void (*)(void *, void *)>(&ptr10166);
env10163 = allocate_env_space(encode_int((s32)2));
void* id8647 = make_closure(reinterpret_cast<void *>(ptr10515), env10163);

//setting env list
set_env(env10163, encode_int((s32)1), kont8483);
set_env(env10163, encode_int((s32)2), loop);


void* oldarg9582 = encode_null();
void* newarg9583 = prim_cons(lst, oldarg9582);
void* newarg9584 = prim_cons(cdr, newarg9583);
void* newarg9585 = prim_cons(id8647, newarg9584);

//app-clo
void* cloPtr10516 = get_closure_ptr(map1);
void* procEnv10517 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10516);
function_ptr(procEnv10517, newarg9585);
}

}

void ptr10160(void* env10161, void* arglst9563)
{
void* lst = get_env_value(env10161, encode_int((s32)8));
void* kont8483 = get_env_value(env10161, encode_int((s32)7));
void* op = get_env_value(env10161, encode_int((s32)6));
void* equal_u63 = get_env_value(env10161, encode_int((s32)5));
void* map1 = get_env_value(env10161, encode_int((s32)4));
void* car = get_env_value(env10161, encode_int((s32)3));
void* loop = get_env_value(env10161, encode_int((s32)2));
void* cdr = get_env_value(env10161, encode_int((s32)1));
void* letk8492 = prim_car(arglst9563);
void* arg_lst9564 = prim_cdr(arglst9563);
void* t8268 = prim_car(arg_lst9564);
void* arg_lst9565 = prim_cdr(arg_lst9564);

//creating new closure instance
auto ptr10518 = reinterpret_cast<void (*)(void *, void *)>(&ptr10162);
env10161 = allocate_env_space(encode_int((s32)7));
void* id8644 = make_closure(reinterpret_cast<void *>(ptr10518), env10161);

//setting env list
set_env(env10161, encode_int((s32)1), cdr);
set_env(env10161, encode_int((s32)2), loop);
set_env(env10161, encode_int((s32)3), car);
set_env(env10161, encode_int((s32)4), map1);
set_env(env10161, encode_int((s32)5), op);
set_env(env10161, encode_int((s32)6), kont8483);
set_env(env10161, encode_int((s32)7), lst);


void* id8645 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9586 = encode_null();
void* newarg9587 = prim_cons(t8268, oldarg9586);
void* newarg9588 = prim_cons(id8645, newarg9587);
void* newarg9589 = prim_cons(id8644, newarg9588);

//app-clo
void* cloPtr10519 = get_closure_ptr(equal_u63);
void* procEnv10520 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10519);
function_ptr(procEnv10520, newarg9589);
}

void ptr10172(void* env10173, void* arglst9599)
{
void* kont8483 = get_env_value(env10173, encode_int((s32)2));
void* op = get_env_value(env10173, encode_int((s32)1));
void* letk8494 = prim_car(arglst9599);
void* arg_lst9600 = prim_cdr(arglst9599);
void* t8270 = prim_car(arg_lst9600);
void* arg_lst9601 = prim_cdr(arg_lst9600);
void* lst8495 = prim_cons(kont8483, t8270);

//app-clo
void* cloPtr10521 = get_closure_ptr(op);
void* procEnv10522 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10521);
function_ptr(procEnv10522, lst8495);
}

void ptr10174(void* env10175, void* arglst9606)
{
void* loop = get_env_value(env10175, encode_int((s32)2));
void* kont8483 = get_env_value(env10175, encode_int((s32)1));
void* letk8496 = prim_car(arglst9606);
void* arg_lst9607 = prim_cdr(arglst9606);
void* t8271 = prim_car(arg_lst9607);
void* arg_lst9608 = prim_cdr(arg_lst9607);
void* oldarg9609 = encode_null();
void* newarg9610 = prim_cons(t8271, oldarg9609);
void* newarg9611 = prim_cons(kont8483, newarg9610);

//app-clo
void* cloPtr10523 = get_closure_ptr(loop);
void* procEnv10524 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10523);
function_ptr(procEnv10524, newarg9611);
}

void ptr10170(void* env10171, void* arglst9596)
{
void* lst = get_env_value(env10171, encode_int((s32)7));
void* kont8483 = get_env_value(env10171, encode_int((s32)6));
void* op = get_env_value(env10171, encode_int((s32)5));
void* map1 = get_env_value(env10171, encode_int((s32)4));
void* car = get_env_value(env10171, encode_int((s32)3));
void* loop = get_env_value(env10171, encode_int((s32)2));
void* cdr = get_env_value(env10171, encode_int((s32)1));
void* letk8493 = prim_car(arglst9596);
void* arg_lst9597 = prim_cdr(arglst9596);
void* t8269 = prim_car(arg_lst9597);
void* arg_lst9598 = prim_cdr(arg_lst9597);

//if-clause
u64 if_guard10525 = reinterpret_cast<u64>(is_true(t8269));
if(if_guard10525 == 1)
{

//creating new closure instance
auto ptr10526 = reinterpret_cast<void (*)(void *, void *)>(&ptr10172);
env10171 = allocate_env_space(encode_int((s32)2));
void* id8653 = make_closure(reinterpret_cast<void *>(ptr10526), env10171);

//setting env list
set_env(env10171, encode_int((s32)1), op);
set_env(env10171, encode_int((s32)2), kont8483);


void* oldarg9602 = encode_null();
void* newarg9603 = prim_cons(lst, oldarg9602);
void* newarg9604 = prim_cons(car, newarg9603);
void* newarg9605 = prim_cons(id8653, newarg9604);

//app-clo
void* cloPtr10527 = get_closure_ptr(map1);
void* procEnv10528 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10527);
function_ptr(procEnv10528, newarg9605);
}
else
{

//creating new closure instance
auto ptr10529 = reinterpret_cast<void (*)(void *, void *)>(&ptr10174);
env10171 = allocate_env_space(encode_int((s32)2));
void* id8654 = make_closure(reinterpret_cast<void *>(ptr10529), env10171);

//setting env list
set_env(env10171, encode_int((s32)1), kont8483);
set_env(env10171, encode_int((s32)2), loop);


void* oldarg9612 = encode_null();
void* newarg9613 = prim_cons(lst, oldarg9612);
void* newarg9614 = prim_cons(cdr, newarg9613);
void* newarg9615 = prim_cons(id8654, newarg9614);

//app-clo
void* cloPtr10530 = get_closure_ptr(map1);
void* procEnv10531 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10530);
function_ptr(procEnv10531, newarg9615);
}

}

void ptr10168(void* env10169, void* arglst9593)
{
void* lst = get_env_value(env10169, encode_int((s32)8));
void* kont8483 = get_env_value(env10169, encode_int((s32)7));
void* op = get_env_value(env10169, encode_int((s32)6));
void* equal_u63 = get_env_value(env10169, encode_int((s32)5));
void* map1 = get_env_value(env10169, encode_int((s32)4));
void* car = get_env_value(env10169, encode_int((s32)3));
void* loop = get_env_value(env10169, encode_int((s32)2));
void* cdr = get_env_value(env10169, encode_int((s32)1));
void* letk8492 = prim_car(arglst9593);
void* arg_lst9594 = prim_cdr(arglst9593);
void* t8268 = prim_car(arg_lst9594);
void* arg_lst9595 = prim_cdr(arg_lst9594);

//creating new closure instance
auto ptr10532 = reinterpret_cast<void (*)(void *, void *)>(&ptr10170);
env10169 = allocate_env_space(encode_int((s32)7));
void* id8651 = make_closure(reinterpret_cast<void *>(ptr10532), env10169);

//setting env list
set_env(env10169, encode_int((s32)1), cdr);
set_env(env10169, encode_int((s32)2), loop);
set_env(env10169, encode_int((s32)3), car);
set_env(env10169, encode_int((s32)4), map1);
set_env(env10169, encode_int((s32)5), op);
set_env(env10169, encode_int((s32)6), kont8483);
set_env(env10169, encode_int((s32)7), lst);


void* id8652 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9616 = encode_null();
void* newarg9617 = prim_cons(t8268, oldarg9616);
void* newarg9618 = prim_cons(id8652, newarg9617);
void* newarg9619 = prim_cons(id8651, newarg9618);

//app-clo
void* cloPtr10533 = get_closure_ptr(equal_u63);
void* procEnv10534 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10533);
function_ptr(procEnv10534, newarg9619);
}

void ptr10158(void* env10159, void* arglst9560)
{
void* lst = get_env_value(env10159, encode_int((s32)8));
void* kont8483 = get_env_value(env10159, encode_int((s32)7));
void* op = get_env_value(env10159, encode_int((s32)6));
void* equal_u63 = get_env_value(env10159, encode_int((s32)5));
void* map1 = get_env_value(env10159, encode_int((s32)4));
void* car = get_env_value(env10159, encode_int((s32)3));
void* loop = get_env_value(env10159, encode_int((s32)2));
void* cdr = get_env_value(env10159, encode_int((s32)1));
void* letk8491 = prim_car(arglst9560);
void* arg_lst9561 = prim_cdr(arglst9560);
void* t8267 = prim_car(arg_lst9561);
void* arg_lst9562 = prim_cdr(arg_lst9561);

//if-clause
u64 if_guard10535 = reinterpret_cast<u64>(is_true(t8267));
if(if_guard10535 == 1)
{

//creating new closure instance
auto ptr10536 = reinterpret_cast<void (*)(void *, void *)>(&ptr10160);
env10159 = allocate_env_space(encode_int((s32)8));
void* id8641 = make_closure(reinterpret_cast<void *>(ptr10536), env10159);

//setting env list
set_env(env10159, encode_int((s32)1), cdr);
set_env(env10159, encode_int((s32)2), loop);
set_env(env10159, encode_int((s32)3), car);
set_env(env10159, encode_int((s32)4), map1);
set_env(env10159, encode_int((s32)5), equal_u63);
set_env(env10159, encode_int((s32)6), op);
set_env(env10159, encode_int((s32)7), kont8483);
set_env(env10159, encode_int((s32)8), lst);


void* id8642 = encode_null();
void* id8643 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9590 = encode_null();
void* newarg9591 = prim_cons(id8643, oldarg9590);
void* newarg9592 = prim_cons(id8642, newarg9591);

//app-clo
void* cloPtr10537 = get_closure_ptr(id8641);
void* procEnv10538 = get_env(id8641);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10537);
function_ptr(procEnv10538, newarg9592);
}
else
{

//creating new closure instance
auto ptr10539 = reinterpret_cast<void (*)(void *, void *)>(&ptr10168);
env10159 = allocate_env_space(encode_int((s32)8));
void* id8648 = make_closure(reinterpret_cast<void *>(ptr10539), env10159);

//setting env list
set_env(env10159, encode_int((s32)1), cdr);
set_env(env10159, encode_int((s32)2), loop);
set_env(env10159, encode_int((s32)3), car);
set_env(env10159, encode_int((s32)4), map1);
set_env(env10159, encode_int((s32)5), equal_u63);
set_env(env10159, encode_int((s32)6), op);
set_env(env10159, encode_int((s32)7), kont8483);
set_env(env10159, encode_int((s32)8), lst);


void* id8649 = encode_null();
void* id8650 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9620 = encode_null();
void* newarg9621 = prim_cons(id8650, oldarg9620);
void* newarg9622 = prim_cons(id8649, newarg9621);

//app-clo
void* cloPtr10540 = get_closure_ptr(id8648);
void* procEnv10541 = get_env(id8648);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10540);
function_ptr(procEnv10541, newarg9622);
}

}

void ptr10156(void* env10157, void* arglst9557)
{
void* lst = get_env_value(env10157, encode_int((s32)8));
void* kont8483 = get_env_value(env10157, encode_int((s32)7));
void* op = get_env_value(env10157, encode_int((s32)6));
void* equal_u63 = get_env_value(env10157, encode_int((s32)5));
void* map1 = get_env_value(env10157, encode_int((s32)4));
void* car = get_env_value(env10157, encode_int((s32)3));
void* loop = get_env_value(env10157, encode_int((s32)2));
void* cdr = get_env_value(env10157, encode_int((s32)1));
void* letk8490 = prim_car(arglst9557);
void* arg_lst9558 = prim_cdr(arglst9557);
void* t8266 = prim_car(arg_lst9558);
void* arg_lst9559 = prim_cdr(arg_lst9558);

//creating new closure instance
auto ptr10542 = reinterpret_cast<void (*)(void *, void *)>(&ptr10158);
env10157 = allocate_env_space(encode_int((s32)8));
void* id8640 = make_closure(reinterpret_cast<void *>(ptr10542), env10157);

//setting env list
set_env(env10157, encode_int((s32)1), cdr);
set_env(env10157, encode_int((s32)2), loop);
set_env(env10157, encode_int((s32)3), car);
set_env(env10157, encode_int((s32)4), map1);
set_env(env10157, encode_int((s32)5), equal_u63);
set_env(env10157, encode_int((s32)6), op);
set_env(env10157, encode_int((s32)7), kont8483);
set_env(env10157, encode_int((s32)8), lst);


void* lst8497 = prim_cons(id8640, t8266);

//app-clo
void* cloPtr10543 = get_closure_ptr(op);
void* procEnv10544 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10543);
function_ptr(procEnv10544, lst8497);
}

void ptr10152(void* env10153, void* arglst9547)
{
void* lst = get_env_value(env10153, encode_int((s32)8));
void* kont8483 = get_env_value(env10153, encode_int((s32)7));
void* op = get_env_value(env10153, encode_int((s32)6));
void* equal_u63 = get_env_value(env10153, encode_int((s32)5));
void* map1 = get_env_value(env10153, encode_int((s32)4));
void* car = get_env_value(env10153, encode_int((s32)3));
void* loop = get_env_value(env10153, encode_int((s32)2));
void* cdr = get_env_value(env10153, encode_int((s32)1));
void* letk8487 = prim_car(arglst9547);
void* arg_lst9548 = prim_cdr(arglst9547);
void* t8264 = prim_car(arg_lst9548);
void* arg_lst9549 = prim_cdr(arg_lst9548);

//if-clause
u64 if_guard10545 = reinterpret_cast<u64>(is_true(t8264));
if(if_guard10545 == 1)
{

//creating new closure instance
auto ptr10546 = reinterpret_cast<void (*)(void *, void *)>(&ptr10154);
env10153 = allocate_env_space(encode_int((s32)2));
void* id8638 = make_closure(reinterpret_cast<void *>(ptr10546), env10153);

//setting env list
set_env(env10153, encode_int((s32)1), op);
set_env(env10153, encode_int((s32)2), kont8483);


void* oldarg9553 = encode_null();
void* newarg9554 = prim_cons(lst, oldarg9553);
void* newarg9555 = prim_cons(car, newarg9554);
void* newarg9556 = prim_cons(id8638, newarg9555);

//app-clo
void* cloPtr10547 = get_closure_ptr(map1);
void* procEnv10548 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10547);
function_ptr(procEnv10548, newarg9556);
}
else
{

//creating new closure instance
auto ptr10549 = reinterpret_cast<void (*)(void *, void *)>(&ptr10156);
env10153 = allocate_env_space(encode_int((s32)8));
void* id8639 = make_closure(reinterpret_cast<void *>(ptr10549), env10153);

//setting env list
set_env(env10153, encode_int((s32)1), cdr);
set_env(env10153, encode_int((s32)2), loop);
set_env(env10153, encode_int((s32)3), car);
set_env(env10153, encode_int((s32)4), map1);
set_env(env10153, encode_int((s32)5), equal_u63);
set_env(env10153, encode_int((s32)6), op);
set_env(env10153, encode_int((s32)7), kont8483);
set_env(env10153, encode_int((s32)8), lst);


void* oldarg9623 = encode_null();
void* newarg9624 = prim_cons(lst, oldarg9623);
void* newarg9625 = prim_cons(car, newarg9624);
void* newarg9626 = prim_cons(id8639, newarg9625);

//app-clo
void* cloPtr10550 = get_closure_ptr(map1);
void* procEnv10551 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10550);
function_ptr(procEnv10551, newarg9626);
}

}

void ptr10150(void* env10151, void* arglst9544)
{
void* lst = get_env_value(env10151, encode_int((s32)9));
void* kont8483 = get_env_value(env10151, encode_int((s32)8));
void* op = get_env_value(env10151, encode_int((s32)7));
void* equal_u63 = get_env_value(env10151, encode_int((s32)6));
void* map1 = get_env_value(env10151, encode_int((s32)5));
void* car = get_env_value(env10151, encode_int((s32)4));
void* _u61 = get_env_value(env10151, encode_int((s32)3));
void* loop = get_env_value(env10151, encode_int((s32)2));
void* cdr = get_env_value(env10151, encode_int((s32)1));
void* letk8486 = prim_car(arglst9544);
void* arg_lst9545 = prim_cdr(arglst9544);
void* t8263 = prim_car(arg_lst9545);
void* arg_lst9546 = prim_cdr(arg_lst9545);

//creating new closure instance
auto ptr10552 = reinterpret_cast<void (*)(void *, void *)>(&ptr10152);
env10151 = allocate_env_space(encode_int((s32)8));
void* id8636 = make_closure(reinterpret_cast<void *>(ptr10552), env10151);

//setting env list
set_env(env10151, encode_int((s32)1), cdr);
set_env(env10151, encode_int((s32)2), loop);
set_env(env10151, encode_int((s32)3), car);
set_env(env10151, encode_int((s32)4), map1);
set_env(env10151, encode_int((s32)5), equal_u63);
set_env(env10151, encode_int((s32)6), op);
set_env(env10151, encode_int((s32)7), kont8483);
set_env(env10151, encode_int((s32)8), lst);


void* id8637 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9627 = encode_null();
void* newarg9628 = prim_cons(t8263, oldarg9627);
void* newarg9629 = prim_cons(id8637, newarg9628);
void* newarg9630 = prim_cons(id8636, newarg9629);

//app-clo
void* cloPtr10553 = get_closure_ptr(_u61);
void* procEnv10554 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10553);
function_ptr(procEnv10554, newarg9630);
}

void ptr10148(void* env10149, void* arglst9541)
{
void* lst = get_env_value(env10149, encode_int((s32)10));
void* op = get_env_value(env10149, encode_int((s32)9));
void* equal_u63 = get_env_value(env10149, encode_int((s32)8));
void* map1 = get_env_value(env10149, encode_int((s32)7));
void* car = get_env_value(env10149, encode_int((s32)6));
void* _u61 = get_env_value(env10149, encode_int((s32)5));
void* loop = get_env_value(env10149, encode_int((s32)4));
void* cdr = get_env_value(env10149, encode_int((s32)3));
void* kont8483 = get_env_value(env10149, encode_int((s32)2));
void* length = get_env_value(env10149, encode_int((s32)1));
void* letk8485 = prim_car(arglst9541);
void* arg_lst9542 = prim_cdr(arglst9541);
void* t8262 = prim_car(arg_lst9542);
void* arg_lst9543 = prim_cdr(arg_lst9542);

//creating new closure instance
auto ptr10555 = reinterpret_cast<void (*)(void *, void *)>(&ptr10150);
env10149 = allocate_env_space(encode_int((s32)9));
void* id8635 = make_closure(reinterpret_cast<void *>(ptr10555), env10149);

//setting env list
set_env(env10149, encode_int((s32)1), cdr);
set_env(env10149, encode_int((s32)2), loop);
set_env(env10149, encode_int((s32)3), _u61);
set_env(env10149, encode_int((s32)4), car);
set_env(env10149, encode_int((s32)5), map1);
set_env(env10149, encode_int((s32)6), equal_u63);
set_env(env10149, encode_int((s32)7), op);
set_env(env10149, encode_int((s32)8), kont8483);
set_env(env10149, encode_int((s32)9), lst);


void* oldarg9631 = encode_null();
void* newarg9632 = prim_cons(t8262, oldarg9631);
void* newarg9633 = prim_cons(id8635, newarg9632);

//app-clo
void* cloPtr10556 = get_closure_ptr(length);
void* procEnv10557 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10556);
function_ptr(procEnv10557, newarg9633);
}

void ptr10146(void* env10147, void* arglst9535)
{
void* lst = get_env_value(env10147, encode_int((s32)11));
void* op = get_env_value(env10147, encode_int((s32)10));
void* equal_u63 = get_env_value(env10147, encode_int((s32)9));
void* map1 = get_env_value(env10147, encode_int((s32)8));
void* car = get_env_value(env10147, encode_int((s32)7));
void* loop = get_env_value(env10147, encode_int((s32)6));
void* cdr = get_env_value(env10147, encode_int((s32)5));
void* kont8483 = get_env_value(env10147, encode_int((s32)4));
void* length = get_env_value(env10147, encode_int((s32)3));
void* cdar = get_env_value(env10147, encode_int((s32)2));
void* _u61 = get_env_value(env10147, encode_int((s32)1));
void* letk8484 = prim_car(arglst9535);
void* arg_lst9536 = prim_cdr(arglst9535);
void* t8261 = prim_car(arg_lst9536);
void* arg_lst9537 = prim_cdr(arg_lst9536);

//if-clause
u64 if_guard10558 = reinterpret_cast<u64>(is_true(t8261));
if(if_guard10558 == 1)
{
void* id8632 = encode_null();
void* id8633 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9538 = encode_null();
void* newarg9539 = prim_cons(id8633, oldarg9538);
void* newarg9540 = prim_cons(id8632, newarg9539);

//app-clo
void* cloPtr10559 = get_closure_ptr(kont8483);
void* procEnv10560 = get_env(kont8483);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10559);
function_ptr(procEnv10560, newarg9540);
}
else
{

//creating new closure instance
auto ptr10561 = reinterpret_cast<void (*)(void *, void *)>(&ptr10148);
env10147 = allocate_env_space(encode_int((s32)10));
void* id8634 = make_closure(reinterpret_cast<void *>(ptr10561), env10147);

//setting env list
set_env(env10147, encode_int((s32)1), length);
set_env(env10147, encode_int((s32)2), kont8483);
set_env(env10147, encode_int((s32)3), cdr);
set_env(env10147, encode_int((s32)4), loop);
set_env(env10147, encode_int((s32)5), _u61);
set_env(env10147, encode_int((s32)6), car);
set_env(env10147, encode_int((s32)7), map1);
set_env(env10147, encode_int((s32)8), equal_u63);
set_env(env10147, encode_int((s32)9), op);
set_env(env10147, encode_int((s32)10), lst);


void* oldarg9634 = encode_null();
void* newarg9635 = prim_cons(lst, oldarg9634);
void* newarg9636 = prim_cons(id8634, newarg9635);

//app-clo
void* cloPtr10562 = get_closure_ptr(cdar);
void* procEnv10563 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10562);
function_ptr(procEnv10563, newarg9636);
}

}

void ptr10186(void* env10187, void* arglst9658)
{
void* kont8483 = get_env_value(env10187, encode_int((s32)2));
void* op = get_env_value(env10187, encode_int((s32)1));
void* letk8488 = prim_car(arglst9658);
void* arg_lst9659 = prim_cdr(arglst9658);
void* t8265 = prim_car(arg_lst9659);
void* arg_lst9660 = prim_cdr(arg_lst9659);
void* lst8489 = prim_cons(kont8483, t8265);

//app-clo
void* cloPtr10564 = get_closure_ptr(op);
void* procEnv10565 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10564);
function_ptr(procEnv10565, lst8489);
}

void ptr10196(void* env10197, void* arglst9677)
{
void* kont8483 = get_env_value(env10197, encode_int((s32)2));
void* op = get_env_value(env10197, encode_int((s32)1));
void* letk8494 = prim_car(arglst9677);
void* arg_lst9678 = prim_cdr(arglst9677);
void* t8270 = prim_car(arg_lst9678);
void* arg_lst9679 = prim_cdr(arg_lst9678);
void* lst8495 = prim_cons(kont8483, t8270);

//app-clo
void* cloPtr10566 = get_closure_ptr(op);
void* procEnv10567 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10566);
function_ptr(procEnv10567, lst8495);
}

void ptr10198(void* env10199, void* arglst9684)
{
void* loop = get_env_value(env10199, encode_int((s32)2));
void* kont8483 = get_env_value(env10199, encode_int((s32)1));
void* letk8496 = prim_car(arglst9684);
void* arg_lst9685 = prim_cdr(arglst9684);
void* t8271 = prim_car(arg_lst9685);
void* arg_lst9686 = prim_cdr(arg_lst9685);
void* oldarg9687 = encode_null();
void* newarg9688 = prim_cons(t8271, oldarg9687);
void* newarg9689 = prim_cons(kont8483, newarg9688);

//app-clo
void* cloPtr10568 = get_closure_ptr(loop);
void* procEnv10569 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10568);
function_ptr(procEnv10569, newarg9689);
}

void ptr10194(void* env10195, void* arglst9674)
{
void* lst = get_env_value(env10195, encode_int((s32)7));
void* kont8483 = get_env_value(env10195, encode_int((s32)6));
void* op = get_env_value(env10195, encode_int((s32)5));
void* map1 = get_env_value(env10195, encode_int((s32)4));
void* car = get_env_value(env10195, encode_int((s32)3));
void* loop = get_env_value(env10195, encode_int((s32)2));
void* cdr = get_env_value(env10195, encode_int((s32)1));
void* letk8493 = prim_car(arglst9674);
void* arg_lst9675 = prim_cdr(arglst9674);
void* t8269 = prim_car(arg_lst9675);
void* arg_lst9676 = prim_cdr(arg_lst9675);

//if-clause
u64 if_guard10570 = reinterpret_cast<u64>(is_true(t8269));
if(if_guard10570 == 1)
{

//creating new closure instance
auto ptr10571 = reinterpret_cast<void (*)(void *, void *)>(&ptr10196);
env10195 = allocate_env_space(encode_int((s32)2));
void* id8671 = make_closure(reinterpret_cast<void *>(ptr10571), env10195);

//setting env list
set_env(env10195, encode_int((s32)1), op);
set_env(env10195, encode_int((s32)2), kont8483);


void* oldarg9680 = encode_null();
void* newarg9681 = prim_cons(lst, oldarg9680);
void* newarg9682 = prim_cons(car, newarg9681);
void* newarg9683 = prim_cons(id8671, newarg9682);

//app-clo
void* cloPtr10572 = get_closure_ptr(map1);
void* procEnv10573 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10572);
function_ptr(procEnv10573, newarg9683);
}
else
{

//creating new closure instance
auto ptr10574 = reinterpret_cast<void (*)(void *, void *)>(&ptr10198);
env10195 = allocate_env_space(encode_int((s32)2));
void* id8672 = make_closure(reinterpret_cast<void *>(ptr10574), env10195);

//setting env list
set_env(env10195, encode_int((s32)1), kont8483);
set_env(env10195, encode_int((s32)2), loop);


void* oldarg9690 = encode_null();
void* newarg9691 = prim_cons(lst, oldarg9690);
void* newarg9692 = prim_cons(cdr, newarg9691);
void* newarg9693 = prim_cons(id8672, newarg9692);

//app-clo
void* cloPtr10575 = get_closure_ptr(map1);
void* procEnv10576 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10575);
function_ptr(procEnv10576, newarg9693);
}

}

void ptr10192(void* env10193, void* arglst9671)
{
void* lst = get_env_value(env10193, encode_int((s32)8));
void* kont8483 = get_env_value(env10193, encode_int((s32)7));
void* op = get_env_value(env10193, encode_int((s32)6));
void* equal_u63 = get_env_value(env10193, encode_int((s32)5));
void* map1 = get_env_value(env10193, encode_int((s32)4));
void* car = get_env_value(env10193, encode_int((s32)3));
void* loop = get_env_value(env10193, encode_int((s32)2));
void* cdr = get_env_value(env10193, encode_int((s32)1));
void* letk8492 = prim_car(arglst9671);
void* arg_lst9672 = prim_cdr(arglst9671);
void* t8268 = prim_car(arg_lst9672);
void* arg_lst9673 = prim_cdr(arg_lst9672);

//creating new closure instance
auto ptr10577 = reinterpret_cast<void (*)(void *, void *)>(&ptr10194);
env10193 = allocate_env_space(encode_int((s32)7));
void* id8669 = make_closure(reinterpret_cast<void *>(ptr10577), env10193);

//setting env list
set_env(env10193, encode_int((s32)1), cdr);
set_env(env10193, encode_int((s32)2), loop);
set_env(env10193, encode_int((s32)3), car);
set_env(env10193, encode_int((s32)4), map1);
set_env(env10193, encode_int((s32)5), op);
set_env(env10193, encode_int((s32)6), kont8483);
set_env(env10193, encode_int((s32)7), lst);


void* id8670 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9694 = encode_null();
void* newarg9695 = prim_cons(t8268, oldarg9694);
void* newarg9696 = prim_cons(id8670, newarg9695);
void* newarg9697 = prim_cons(id8669, newarg9696);

//app-clo
void* cloPtr10578 = get_closure_ptr(equal_u63);
void* procEnv10579 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10578);
function_ptr(procEnv10579, newarg9697);
}

void ptr10204(void* env10205, void* arglst9707)
{
void* kont8483 = get_env_value(env10205, encode_int((s32)2));
void* op = get_env_value(env10205, encode_int((s32)1));
void* letk8494 = prim_car(arglst9707);
void* arg_lst9708 = prim_cdr(arglst9707);
void* t8270 = prim_car(arg_lst9708);
void* arg_lst9709 = prim_cdr(arg_lst9708);
void* lst8495 = prim_cons(kont8483, t8270);

//app-clo
void* cloPtr10580 = get_closure_ptr(op);
void* procEnv10581 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10580);
function_ptr(procEnv10581, lst8495);
}

void ptr10206(void* env10207, void* arglst9714)
{
void* loop = get_env_value(env10207, encode_int((s32)2));
void* kont8483 = get_env_value(env10207, encode_int((s32)1));
void* letk8496 = prim_car(arglst9714);
void* arg_lst9715 = prim_cdr(arglst9714);
void* t8271 = prim_car(arg_lst9715);
void* arg_lst9716 = prim_cdr(arg_lst9715);
void* oldarg9717 = encode_null();
void* newarg9718 = prim_cons(t8271, oldarg9717);
void* newarg9719 = prim_cons(kont8483, newarg9718);

//app-clo
void* cloPtr10582 = get_closure_ptr(loop);
void* procEnv10583 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10582);
function_ptr(procEnv10583, newarg9719);
}

void ptr10202(void* env10203, void* arglst9704)
{
void* lst = get_env_value(env10203, encode_int((s32)7));
void* kont8483 = get_env_value(env10203, encode_int((s32)6));
void* op = get_env_value(env10203, encode_int((s32)5));
void* map1 = get_env_value(env10203, encode_int((s32)4));
void* car = get_env_value(env10203, encode_int((s32)3));
void* loop = get_env_value(env10203, encode_int((s32)2));
void* cdr = get_env_value(env10203, encode_int((s32)1));
void* letk8493 = prim_car(arglst9704);
void* arg_lst9705 = prim_cdr(arglst9704);
void* t8269 = prim_car(arg_lst9705);
void* arg_lst9706 = prim_cdr(arg_lst9705);

//if-clause
u64 if_guard10584 = reinterpret_cast<u64>(is_true(t8269));
if(if_guard10584 == 1)
{

//creating new closure instance
auto ptr10585 = reinterpret_cast<void (*)(void *, void *)>(&ptr10204);
env10203 = allocate_env_space(encode_int((s32)2));
void* id8678 = make_closure(reinterpret_cast<void *>(ptr10585), env10203);

//setting env list
set_env(env10203, encode_int((s32)1), op);
set_env(env10203, encode_int((s32)2), kont8483);


void* oldarg9710 = encode_null();
void* newarg9711 = prim_cons(lst, oldarg9710);
void* newarg9712 = prim_cons(car, newarg9711);
void* newarg9713 = prim_cons(id8678, newarg9712);

//app-clo
void* cloPtr10586 = get_closure_ptr(map1);
void* procEnv10587 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10586);
function_ptr(procEnv10587, newarg9713);
}
else
{

//creating new closure instance
auto ptr10588 = reinterpret_cast<void (*)(void *, void *)>(&ptr10206);
env10203 = allocate_env_space(encode_int((s32)2));
void* id8679 = make_closure(reinterpret_cast<void *>(ptr10588), env10203);

//setting env list
set_env(env10203, encode_int((s32)1), kont8483);
set_env(env10203, encode_int((s32)2), loop);


void* oldarg9720 = encode_null();
void* newarg9721 = prim_cons(lst, oldarg9720);
void* newarg9722 = prim_cons(cdr, newarg9721);
void* newarg9723 = prim_cons(id8679, newarg9722);

//app-clo
void* cloPtr10589 = get_closure_ptr(map1);
void* procEnv10590 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10589);
function_ptr(procEnv10590, newarg9723);
}

}

void ptr10200(void* env10201, void* arglst9701)
{
void* lst = get_env_value(env10201, encode_int((s32)8));
void* kont8483 = get_env_value(env10201, encode_int((s32)7));
void* op = get_env_value(env10201, encode_int((s32)6));
void* equal_u63 = get_env_value(env10201, encode_int((s32)5));
void* map1 = get_env_value(env10201, encode_int((s32)4));
void* car = get_env_value(env10201, encode_int((s32)3));
void* loop = get_env_value(env10201, encode_int((s32)2));
void* cdr = get_env_value(env10201, encode_int((s32)1));
void* letk8492 = prim_car(arglst9701);
void* arg_lst9702 = prim_cdr(arglst9701);
void* t8268 = prim_car(arg_lst9702);
void* arg_lst9703 = prim_cdr(arg_lst9702);

//creating new closure instance
auto ptr10591 = reinterpret_cast<void (*)(void *, void *)>(&ptr10202);
env10201 = allocate_env_space(encode_int((s32)7));
void* id8676 = make_closure(reinterpret_cast<void *>(ptr10591), env10201);

//setting env list
set_env(env10201, encode_int((s32)1), cdr);
set_env(env10201, encode_int((s32)2), loop);
set_env(env10201, encode_int((s32)3), car);
set_env(env10201, encode_int((s32)4), map1);
set_env(env10201, encode_int((s32)5), op);
set_env(env10201, encode_int((s32)6), kont8483);
set_env(env10201, encode_int((s32)7), lst);


void* id8677 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9724 = encode_null();
void* newarg9725 = prim_cons(t8268, oldarg9724);
void* newarg9726 = prim_cons(id8677, newarg9725);
void* newarg9727 = prim_cons(id8676, newarg9726);

//app-clo
void* cloPtr10592 = get_closure_ptr(equal_u63);
void* procEnv10593 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10592);
function_ptr(procEnv10593, newarg9727);
}

void ptr10190(void* env10191, void* arglst9668)
{
void* lst = get_env_value(env10191, encode_int((s32)8));
void* kont8483 = get_env_value(env10191, encode_int((s32)7));
void* op = get_env_value(env10191, encode_int((s32)6));
void* equal_u63 = get_env_value(env10191, encode_int((s32)5));
void* map1 = get_env_value(env10191, encode_int((s32)4));
void* car = get_env_value(env10191, encode_int((s32)3));
void* loop = get_env_value(env10191, encode_int((s32)2));
void* cdr = get_env_value(env10191, encode_int((s32)1));
void* letk8491 = prim_car(arglst9668);
void* arg_lst9669 = prim_cdr(arglst9668);
void* t8267 = prim_car(arg_lst9669);
void* arg_lst9670 = prim_cdr(arg_lst9669);

//if-clause
u64 if_guard10594 = reinterpret_cast<u64>(is_true(t8267));
if(if_guard10594 == 1)
{

//creating new closure instance
auto ptr10595 = reinterpret_cast<void (*)(void *, void *)>(&ptr10192);
env10191 = allocate_env_space(encode_int((s32)8));
void* id8666 = make_closure(reinterpret_cast<void *>(ptr10595), env10191);

//setting env list
set_env(env10191, encode_int((s32)1), cdr);
set_env(env10191, encode_int((s32)2), loop);
set_env(env10191, encode_int((s32)3), car);
set_env(env10191, encode_int((s32)4), map1);
set_env(env10191, encode_int((s32)5), equal_u63);
set_env(env10191, encode_int((s32)6), op);
set_env(env10191, encode_int((s32)7), kont8483);
set_env(env10191, encode_int((s32)8), lst);


void* id8667 = encode_null();
void* id8668 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9698 = encode_null();
void* newarg9699 = prim_cons(id8668, oldarg9698);
void* newarg9700 = prim_cons(id8667, newarg9699);

//app-clo
void* cloPtr10596 = get_closure_ptr(id8666);
void* procEnv10597 = get_env(id8666);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10596);
function_ptr(procEnv10597, newarg9700);
}
else
{

//creating new closure instance
auto ptr10598 = reinterpret_cast<void (*)(void *, void *)>(&ptr10200);
env10191 = allocate_env_space(encode_int((s32)8));
void* id8673 = make_closure(reinterpret_cast<void *>(ptr10598), env10191);

//setting env list
set_env(env10191, encode_int((s32)1), cdr);
set_env(env10191, encode_int((s32)2), loop);
set_env(env10191, encode_int((s32)3), car);
set_env(env10191, encode_int((s32)4), map1);
set_env(env10191, encode_int((s32)5), equal_u63);
set_env(env10191, encode_int((s32)6), op);
set_env(env10191, encode_int((s32)7), kont8483);
set_env(env10191, encode_int((s32)8), lst);


void* id8674 = encode_null();
void* id8675 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9728 = encode_null();
void* newarg9729 = prim_cons(id8675, oldarg9728);
void* newarg9730 = prim_cons(id8674, newarg9729);

//app-clo
void* cloPtr10599 = get_closure_ptr(id8673);
void* procEnv10600 = get_env(id8673);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10599);
function_ptr(procEnv10600, newarg9730);
}

}

void ptr10188(void* env10189, void* arglst9665)
{
void* lst = get_env_value(env10189, encode_int((s32)8));
void* kont8483 = get_env_value(env10189, encode_int((s32)7));
void* op = get_env_value(env10189, encode_int((s32)6));
void* equal_u63 = get_env_value(env10189, encode_int((s32)5));
void* map1 = get_env_value(env10189, encode_int((s32)4));
void* car = get_env_value(env10189, encode_int((s32)3));
void* loop = get_env_value(env10189, encode_int((s32)2));
void* cdr = get_env_value(env10189, encode_int((s32)1));
void* letk8490 = prim_car(arglst9665);
void* arg_lst9666 = prim_cdr(arglst9665);
void* t8266 = prim_car(arg_lst9666);
void* arg_lst9667 = prim_cdr(arg_lst9666);

//creating new closure instance
auto ptr10601 = reinterpret_cast<void (*)(void *, void *)>(&ptr10190);
env10189 = allocate_env_space(encode_int((s32)8));
void* id8665 = make_closure(reinterpret_cast<void *>(ptr10601), env10189);

//setting env list
set_env(env10189, encode_int((s32)1), cdr);
set_env(env10189, encode_int((s32)2), loop);
set_env(env10189, encode_int((s32)3), car);
set_env(env10189, encode_int((s32)4), map1);
set_env(env10189, encode_int((s32)5), equal_u63);
set_env(env10189, encode_int((s32)6), op);
set_env(env10189, encode_int((s32)7), kont8483);
set_env(env10189, encode_int((s32)8), lst);


void* lst8497 = prim_cons(id8665, t8266);

//app-clo
void* cloPtr10602 = get_closure_ptr(op);
void* procEnv10603 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10602);
function_ptr(procEnv10603, lst8497);
}

void ptr10184(void* env10185, void* arglst9655)
{
void* lst = get_env_value(env10185, encode_int((s32)8));
void* kont8483 = get_env_value(env10185, encode_int((s32)7));
void* op = get_env_value(env10185, encode_int((s32)6));
void* equal_u63 = get_env_value(env10185, encode_int((s32)5));
void* map1 = get_env_value(env10185, encode_int((s32)4));
void* car = get_env_value(env10185, encode_int((s32)3));
void* loop = get_env_value(env10185, encode_int((s32)2));
void* cdr = get_env_value(env10185, encode_int((s32)1));
void* letk8487 = prim_car(arglst9655);
void* arg_lst9656 = prim_cdr(arglst9655);
void* t8264 = prim_car(arg_lst9656);
void* arg_lst9657 = prim_cdr(arg_lst9656);

//if-clause
u64 if_guard10604 = reinterpret_cast<u64>(is_true(t8264));
if(if_guard10604 == 1)
{

//creating new closure instance
auto ptr10605 = reinterpret_cast<void (*)(void *, void *)>(&ptr10186);
env10185 = allocate_env_space(encode_int((s32)2));
void* id8663 = make_closure(reinterpret_cast<void *>(ptr10605), env10185);

//setting env list
set_env(env10185, encode_int((s32)1), op);
set_env(env10185, encode_int((s32)2), kont8483);


void* oldarg9661 = encode_null();
void* newarg9662 = prim_cons(lst, oldarg9661);
void* newarg9663 = prim_cons(car, newarg9662);
void* newarg9664 = prim_cons(id8663, newarg9663);

//app-clo
void* cloPtr10606 = get_closure_ptr(map1);
void* procEnv10607 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10606);
function_ptr(procEnv10607, newarg9664);
}
else
{

//creating new closure instance
auto ptr10608 = reinterpret_cast<void (*)(void *, void *)>(&ptr10188);
env10185 = allocate_env_space(encode_int((s32)8));
void* id8664 = make_closure(reinterpret_cast<void *>(ptr10608), env10185);

//setting env list
set_env(env10185, encode_int((s32)1), cdr);
set_env(env10185, encode_int((s32)2), loop);
set_env(env10185, encode_int((s32)3), car);
set_env(env10185, encode_int((s32)4), map1);
set_env(env10185, encode_int((s32)5), equal_u63);
set_env(env10185, encode_int((s32)6), op);
set_env(env10185, encode_int((s32)7), kont8483);
set_env(env10185, encode_int((s32)8), lst);


void* oldarg9731 = encode_null();
void* newarg9732 = prim_cons(lst, oldarg9731);
void* newarg9733 = prim_cons(car, newarg9732);
void* newarg9734 = prim_cons(id8664, newarg9733);

//app-clo
void* cloPtr10609 = get_closure_ptr(map1);
void* procEnv10610 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10609);
function_ptr(procEnv10610, newarg9734);
}

}

void ptr10182(void* env10183, void* arglst9652)
{
void* lst = get_env_value(env10183, encode_int((s32)9));
void* kont8483 = get_env_value(env10183, encode_int((s32)8));
void* op = get_env_value(env10183, encode_int((s32)7));
void* equal_u63 = get_env_value(env10183, encode_int((s32)6));
void* map1 = get_env_value(env10183, encode_int((s32)5));
void* car = get_env_value(env10183, encode_int((s32)4));
void* _u61 = get_env_value(env10183, encode_int((s32)3));
void* loop = get_env_value(env10183, encode_int((s32)2));
void* cdr = get_env_value(env10183, encode_int((s32)1));
void* letk8486 = prim_car(arglst9652);
void* arg_lst9653 = prim_cdr(arglst9652);
void* t8263 = prim_car(arg_lst9653);
void* arg_lst9654 = prim_cdr(arg_lst9653);

//creating new closure instance
auto ptr10611 = reinterpret_cast<void (*)(void *, void *)>(&ptr10184);
env10183 = allocate_env_space(encode_int((s32)8));
void* id8661 = make_closure(reinterpret_cast<void *>(ptr10611), env10183);

//setting env list
set_env(env10183, encode_int((s32)1), cdr);
set_env(env10183, encode_int((s32)2), loop);
set_env(env10183, encode_int((s32)3), car);
set_env(env10183, encode_int((s32)4), map1);
set_env(env10183, encode_int((s32)5), equal_u63);
set_env(env10183, encode_int((s32)6), op);
set_env(env10183, encode_int((s32)7), kont8483);
set_env(env10183, encode_int((s32)8), lst);


void* id8662 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9735 = encode_null();
void* newarg9736 = prim_cons(t8263, oldarg9735);
void* newarg9737 = prim_cons(id8662, newarg9736);
void* newarg9738 = prim_cons(id8661, newarg9737);

//app-clo
void* cloPtr10612 = get_closure_ptr(_u61);
void* procEnv10613 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10612);
function_ptr(procEnv10613, newarg9738);
}

void ptr10180(void* env10181, void* arglst9649)
{
void* lst = get_env_value(env10181, encode_int((s32)10));
void* op = get_env_value(env10181, encode_int((s32)9));
void* equal_u63 = get_env_value(env10181, encode_int((s32)8));
void* map1 = get_env_value(env10181, encode_int((s32)7));
void* car = get_env_value(env10181, encode_int((s32)6));
void* _u61 = get_env_value(env10181, encode_int((s32)5));
void* loop = get_env_value(env10181, encode_int((s32)4));
void* cdr = get_env_value(env10181, encode_int((s32)3));
void* kont8483 = get_env_value(env10181, encode_int((s32)2));
void* length = get_env_value(env10181, encode_int((s32)1));
void* letk8485 = prim_car(arglst9649);
void* arg_lst9650 = prim_cdr(arglst9649);
void* t8262 = prim_car(arg_lst9650);
void* arg_lst9651 = prim_cdr(arg_lst9650);

//creating new closure instance
auto ptr10614 = reinterpret_cast<void (*)(void *, void *)>(&ptr10182);
env10181 = allocate_env_space(encode_int((s32)9));
void* id8660 = make_closure(reinterpret_cast<void *>(ptr10614), env10181);

//setting env list
set_env(env10181, encode_int((s32)1), cdr);
set_env(env10181, encode_int((s32)2), loop);
set_env(env10181, encode_int((s32)3), _u61);
set_env(env10181, encode_int((s32)4), car);
set_env(env10181, encode_int((s32)5), map1);
set_env(env10181, encode_int((s32)6), equal_u63);
set_env(env10181, encode_int((s32)7), op);
set_env(env10181, encode_int((s32)8), kont8483);
set_env(env10181, encode_int((s32)9), lst);


void* oldarg9739 = encode_null();
void* newarg9740 = prim_cons(t8262, oldarg9739);
void* newarg9741 = prim_cons(id8660, newarg9740);

//app-clo
void* cloPtr10615 = get_closure_ptr(length);
void* procEnv10616 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10615);
function_ptr(procEnv10616, newarg9741);
}

void ptr10178(void* env10179, void* arglst9643)
{
void* lst = get_env_value(env10179, encode_int((s32)11));
void* op = get_env_value(env10179, encode_int((s32)10));
void* equal_u63 = get_env_value(env10179, encode_int((s32)9));
void* map1 = get_env_value(env10179, encode_int((s32)8));
void* car = get_env_value(env10179, encode_int((s32)7));
void* loop = get_env_value(env10179, encode_int((s32)6));
void* cdr = get_env_value(env10179, encode_int((s32)5));
void* kont8483 = get_env_value(env10179, encode_int((s32)4));
void* length = get_env_value(env10179, encode_int((s32)3));
void* cdar = get_env_value(env10179, encode_int((s32)2));
void* _u61 = get_env_value(env10179, encode_int((s32)1));
void* letk8484 = prim_car(arglst9643);
void* arg_lst9644 = prim_cdr(arglst9643);
void* t8261 = prim_car(arg_lst9644);
void* arg_lst9645 = prim_cdr(arg_lst9644);

//if-clause
u64 if_guard10617 = reinterpret_cast<u64>(is_true(t8261));
if(if_guard10617 == 1)
{
void* id8657 = encode_null();
void* id8658 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9646 = encode_null();
void* newarg9647 = prim_cons(id8658, oldarg9646);
void* newarg9648 = prim_cons(id8657, newarg9647);

//app-clo
void* cloPtr10618 = get_closure_ptr(kont8483);
void* procEnv10619 = get_env(kont8483);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10618);
function_ptr(procEnv10619, newarg9648);
}
else
{

//creating new closure instance
auto ptr10620 = reinterpret_cast<void (*)(void *, void *)>(&ptr10180);
env10179 = allocate_env_space(encode_int((s32)10));
void* id8659 = make_closure(reinterpret_cast<void *>(ptr10620), env10179);

//setting env list
set_env(env10179, encode_int((s32)1), length);
set_env(env10179, encode_int((s32)2), kont8483);
set_env(env10179, encode_int((s32)3), cdr);
set_env(env10179, encode_int((s32)4), loop);
set_env(env10179, encode_int((s32)5), _u61);
set_env(env10179, encode_int((s32)6), car);
set_env(env10179, encode_int((s32)7), map1);
set_env(env10179, encode_int((s32)8), equal_u63);
set_env(env10179, encode_int((s32)9), op);
set_env(env10179, encode_int((s32)10), lst);


void* oldarg9742 = encode_null();
void* newarg9743 = prim_cons(lst, oldarg9742);
void* newarg9744 = prim_cons(id8659, newarg9743);

//app-clo
void* cloPtr10621 = get_closure_ptr(cdar);
void* procEnv10622 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10621);
function_ptr(procEnv10622, newarg9744);
}

}

void ptr10176(void* env10177, void* arglst9640)
{
void* lst = get_env_value(env10177, encode_int((s32)12));
void* op = get_env_value(env10177, encode_int((s32)11));
void* equal_u63 = get_env_value(env10177, encode_int((s32)10));
void* map1 = get_env_value(env10177, encode_int((s32)9));
void* car = get_env_value(env10177, encode_int((s32)8));
void* loop = get_env_value(env10177, encode_int((s32)7));
void* cdr = get_env_value(env10177, encode_int((s32)6));
void* kont8483 = get_env_value(env10177, encode_int((s32)5));
void* null_u63 = get_env_value(env10177, encode_int((s32)4));
void* length = get_env_value(env10177, encode_int((s32)3));
void* cdar = get_env_value(env10177, encode_int((s32)2));
void* _u61 = get_env_value(env10177, encode_int((s32)1));
void* letk8499 = prim_car(arglst9640);
void* arg_lst9641 = prim_cdr(arglst9640);
void* t8260 = prim_car(arg_lst9641);
void* arg_lst9642 = prim_cdr(arg_lst9641);

//creating new closure instance
auto ptr10623 = reinterpret_cast<void (*)(void *, void *)>(&ptr10178);
env10177 = allocate_env_space(encode_int((s32)11));
void* id8656 = make_closure(reinterpret_cast<void *>(ptr10623), env10177);

//setting env list
set_env(env10177, encode_int((s32)1), _u61);
set_env(env10177, encode_int((s32)2), cdar);
set_env(env10177, encode_int((s32)3), length);
set_env(env10177, encode_int((s32)4), kont8483);
set_env(env10177, encode_int((s32)5), cdr);
set_env(env10177, encode_int((s32)6), loop);
set_env(env10177, encode_int((s32)7), car);
set_env(env10177, encode_int((s32)8), map1);
set_env(env10177, encode_int((s32)9), equal_u63);
set_env(env10177, encode_int((s32)10), op);
set_env(env10177, encode_int((s32)11), lst);


void* oldarg9745 = encode_null();
void* newarg9746 = prim_cons(t8260, oldarg9745);
void* newarg9747 = prim_cons(id8656, newarg9746);

//app-clo
void* cloPtr10624 = get_closure_ptr(null_u63);
void* procEnv10625 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10624);
function_ptr(procEnv10625, newarg9747);
}

void ptr10144(void* env10145, void* arglst9532)
{
void* lst = get_env_value(env10145, encode_int((s32)12));
void* op = get_env_value(env10145, encode_int((s32)11));
void* equal_u63 = get_env_value(env10145, encode_int((s32)10));
void* map1 = get_env_value(env10145, encode_int((s32)9));
void* car = get_env_value(env10145, encode_int((s32)8));
void* loop = get_env_value(env10145, encode_int((s32)7));
void* cdr = get_env_value(env10145, encode_int((s32)6));
void* kont8483 = get_env_value(env10145, encode_int((s32)5));
void* null_u63 = get_env_value(env10145, encode_int((s32)4));
void* length = get_env_value(env10145, encode_int((s32)3));
void* cdar = get_env_value(env10145, encode_int((s32)2));
void* _u61 = get_env_value(env10145, encode_int((s32)1));
void* letk8498 = prim_car(arglst9532);
void* arg_lst9533 = prim_cdr(arglst9532);
void* or8236 = prim_car(arg_lst9533);
void* arg_lst9534 = prim_cdr(arg_lst9533);

//if-clause
u64 if_guard10626 = reinterpret_cast<u64>(is_true(or8236));
if(if_guard10626 == 1)
{

//creating new closure instance
auto ptr10627 = reinterpret_cast<void (*)(void *, void *)>(&ptr10146);
env10145 = allocate_env_space(encode_int((s32)11));
void* id8630 = make_closure(reinterpret_cast<void *>(ptr10627), env10145);

//setting env list
set_env(env10145, encode_int((s32)1), _u61);
set_env(env10145, encode_int((s32)2), cdar);
set_env(env10145, encode_int((s32)3), length);
set_env(env10145, encode_int((s32)4), kont8483);
set_env(env10145, encode_int((s32)5), cdr);
set_env(env10145, encode_int((s32)6), loop);
set_env(env10145, encode_int((s32)7), car);
set_env(env10145, encode_int((s32)8), map1);
set_env(env10145, encode_int((s32)9), equal_u63);
set_env(env10145, encode_int((s32)10), op);
set_env(env10145, encode_int((s32)11), lst);


void* id8631 = encode_null();
void* oldarg9637 = encode_null();
void* newarg9638 = prim_cons(or8236, oldarg9637);
void* newarg9639 = prim_cons(id8631, newarg9638);

//app-clo
void* cloPtr10628 = get_closure_ptr(id8630);
void* procEnv10629 = get_env(id8630);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10628);
function_ptr(procEnv10629, newarg9639);
}
else
{

//creating new closure instance
auto ptr10630 = reinterpret_cast<void (*)(void *, void *)>(&ptr10176);
env10145 = allocate_env_space(encode_int((s32)12));
void* id8655 = make_closure(reinterpret_cast<void *>(ptr10630), env10145);

//setting env list
set_env(env10145, encode_int((s32)1), _u61);
set_env(env10145, encode_int((s32)2), cdar);
set_env(env10145, encode_int((s32)3), length);
set_env(env10145, encode_int((s32)4), null_u63);
set_env(env10145, encode_int((s32)5), kont8483);
set_env(env10145, encode_int((s32)6), cdr);
set_env(env10145, encode_int((s32)7), loop);
set_env(env10145, encode_int((s32)8), car);
set_env(env10145, encode_int((s32)9), map1);
set_env(env10145, encode_int((s32)10), equal_u63);
set_env(env10145, encode_int((s32)11), op);
set_env(env10145, encode_int((s32)12), lst);


void* oldarg9748 = encode_null();
void* newarg9749 = prim_cons(lst, oldarg9748);
void* newarg9750 = prim_cons(id8655, newarg9749);

//app-clo
void* cloPtr10631 = get_closure_ptr(car);
void* procEnv10632 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10631);
function_ptr(procEnv10632, newarg9750);
}

}

void ptr10142(void* env10143, void* arglst9529)
{
void* op = get_env_value(env10143, encode_int((s32)10));
void* equal_u63 = get_env_value(env10143, encode_int((s32)9));
void* map1 = get_env_value(env10143, encode_int((s32)8));
void* car = get_env_value(env10143, encode_int((s32)7));
void* loop = get_env_value(env10143, encode_int((s32)6));
void* cdr = get_env_value(env10143, encode_int((s32)5));
void* null_u63 = get_env_value(env10143, encode_int((s32)4));
void* length = get_env_value(env10143, encode_int((s32)3));
void* cdar = get_env_value(env10143, encode_int((s32)2));
void* _u61 = get_env_value(env10143, encode_int((s32)1));
void* kont8483 = prim_car(arglst9529);
void* arg_lst9530 = prim_cdr(arglst9529);
void* lst = prim_car(arg_lst9530);
void* arg_lst9531 = prim_cdr(arg_lst9530);

//creating new closure instance
auto ptr10633 = reinterpret_cast<void (*)(void *, void *)>(&ptr10144);
env10143 = allocate_env_space(encode_int((s32)12));
void* id8629 = make_closure(reinterpret_cast<void *>(ptr10633), env10143);

//setting env list
set_env(env10143, encode_int((s32)1), _u61);
set_env(env10143, encode_int((s32)2), cdar);
set_env(env10143, encode_int((s32)3), length);
set_env(env10143, encode_int((s32)4), null_u63);
set_env(env10143, encode_int((s32)5), kont8483);
set_env(env10143, encode_int((s32)6), cdr);
set_env(env10143, encode_int((s32)7), loop);
set_env(env10143, encode_int((s32)8), car);
set_env(env10143, encode_int((s32)9), map1);
set_env(env10143, encode_int((s32)10), equal_u63);
set_env(env10143, encode_int((s32)11), op);
set_env(env10143, encode_int((s32)12), lst);


void* oldarg9751 = encode_null();
void* newarg9752 = prim_cons(lst, oldarg9751);
void* newarg9753 = prim_cons(id8629, newarg9752);

//app-clo
void* cloPtr10634 = get_closure_ptr(null_u63);
void* procEnv10635 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10634);
function_ptr(procEnv10635, newarg9753);
}

void ptr10140(void* env10141, void* arglst9526)
{
void* cdr = get_env_value(env10141, encode_int((s32)9));
void* op = get_env_value(env10141, encode_int((s32)8));
void* equal_u63 = get_env_value(env10141, encode_int((s32)7));
void* map1 = get_env_value(env10141, encode_int((s32)6));
void* car = get_env_value(env10141, encode_int((s32)5));
void* null_u63 = get_env_value(env10141, encode_int((s32)4));
void* length = get_env_value(env10141, encode_int((s32)3));
void* cdar = get_env_value(env10141, encode_int((s32)2));
void* _u61 = get_env_value(env10141, encode_int((s32)1));
void* kont8482 = prim_car(arglst9526);
void* arg_lst9527 = prim_cdr(arglst9526);
void* loop = prim_car(arg_lst9527);
void* arg_lst9528 = prim_cdr(arg_lst9527);
void* id8627 = encode_null();

//creating new closure instance
auto ptr10636 = reinterpret_cast<void (*)(void *, void *)>(&ptr10142);
env10141 = allocate_env_space(encode_int((s32)10));
void* id8628 = make_closure(reinterpret_cast<void *>(ptr10636), env10141);

//setting env list
set_env(env10141, encode_int((s32)1), _u61);
set_env(env10141, encode_int((s32)2), cdar);
set_env(env10141, encode_int((s32)3), length);
set_env(env10141, encode_int((s32)4), null_u63);
set_env(env10141, encode_int((s32)5), cdr);
set_env(env10141, encode_int((s32)6), loop);
set_env(env10141, encode_int((s32)7), car);
set_env(env10141, encode_int((s32)8), map1);
set_env(env10141, encode_int((s32)9), equal_u63);
set_env(env10141, encode_int((s32)10), op);


void* oldarg9754 = encode_null();
void* newarg9755 = prim_cons(id8628, oldarg9754);
void* newarg9756 = prim_cons(id8627, newarg9755);

//app-clo
void* cloPtr10637 = get_closure_ptr(kont8482);
void* procEnv10638 = get_env(kont8482);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10637);
function_ptr(procEnv10638, newarg9756);
}

void ptr10138(void* env10139, void* arglst9520)
{
void* lst = get_env_value(env10139, encode_int((s32)2));
void* kkont8476 = get_env_value(env10139, encode_int((s32)1));
void* letk8481 = prim_car(arglst9520);
void* arg_lst9521 = prim_cdr(arglst9520);
void* loop = prim_car(arg_lst9521);
void* arg_lst9522 = prim_cdr(arg_lst9521);
void* oldarg9523 = encode_null();
void* newarg9524 = prim_cons(lst, oldarg9523);
void* newarg9525 = prim_cons(kkont8476, newarg9524);

//app-clo
void* cloPtr10639 = get_closure_ptr(loop);
void* procEnv10640 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10639);
function_ptr(procEnv10640, newarg9525);
}

void ptr10136(void* env10137, void* arglst9517)
{
void* cdr = get_env_value(env10137, encode_int((s32)11));
void* Ycomb = get_env_value(env10137, encode_int((s32)10));
void* op = get_env_value(env10137, encode_int((s32)9));
void* equal_u63 = get_env_value(env10137, encode_int((s32)8));
void* map1 = get_env_value(env10137, encode_int((s32)7));
void* car = get_env_value(env10137, encode_int((s32)6));
void* kkont8476 = get_env_value(env10137, encode_int((s32)5));
void* null_u63 = get_env_value(env10137, encode_int((s32)4));
void* length = get_env_value(env10137, encode_int((s32)3));
void* cdar = get_env_value(env10137, encode_int((s32)2));
void* _u61 = get_env_value(env10137, encode_int((s32)1));
void* letk8480 = prim_car(arglst9517);
void* arg_lst9518 = prim_cdr(arglst9517);
void* lst = prim_car(arg_lst9518);
void* arg_lst9519 = prim_cdr(arg_lst9518);

//creating new closure instance
auto ptr10641 = reinterpret_cast<void (*)(void *, void *)>(&ptr10138);
env10137 = allocate_env_space(encode_int((s32)2));
void* id8625 = make_closure(reinterpret_cast<void *>(ptr10641), env10137);

//setting env list
set_env(env10137, encode_int((s32)1), kkont8476);
set_env(env10137, encode_int((s32)2), lst);



//creating new closure instance
auto ptr10642 = reinterpret_cast<void (*)(void *, void *)>(&ptr10140);
env10137 = allocate_env_space(encode_int((s32)9));
void* id8626 = make_closure(reinterpret_cast<void *>(ptr10642), env10137);

//setting env list
set_env(env10137, encode_int((s32)1), _u61);
set_env(env10137, encode_int((s32)2), cdar);
set_env(env10137, encode_int((s32)3), length);
set_env(env10137, encode_int((s32)4), null_u63);
set_env(env10137, encode_int((s32)5), car);
set_env(env10137, encode_int((s32)6), map1);
set_env(env10137, encode_int((s32)7), equal_u63);
set_env(env10137, encode_int((s32)8), op);
set_env(env10137, encode_int((s32)9), cdr);


void* oldarg9757 = encode_null();
void* newarg9758 = prim_cons(id8626, oldarg9757);
void* newarg9759 = prim_cons(id8625, newarg9758);

//app-clo
void* cloPtr10643 = get_closure_ptr(Ycomb);
void* procEnv10644 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10643);
function_ptr(procEnv10644, newarg9759);
}

void ptr10134(void* env10135, void* arglst9514)
{
void* cdr = get_env_value(env10135, encode_int((s32)11));
void* Ycomb = get_env_value(env10135, encode_int((s32)10));
void* op = get_env_value(env10135, encode_int((s32)9));
void* equal_u63 = get_env_value(env10135, encode_int((s32)8));
void* map1 = get_env_value(env10135, encode_int((s32)7));
void* car = get_env_value(env10135, encode_int((s32)6));
void* kkont8476 = get_env_value(env10135, encode_int((s32)5));
void* null_u63 = get_env_value(env10135, encode_int((s32)4));
void* length = get_env_value(env10135, encode_int((s32)3));
void* cdar = get_env_value(env10135, encode_int((s32)2));
void* _u61 = get_env_value(env10135, encode_int((s32)1));
void* letk8479 = prim_car(arglst9514);
void* arg_lst9515 = prim_cdr(arglst9514);
void* param_lst8235 = prim_car(arg_lst9515);
void* arg_lst9516 = prim_cdr(arg_lst9515);

//creating new closure instance
auto ptr10645 = reinterpret_cast<void (*)(void *, void *)>(&ptr10136);
env10135 = allocate_env_space(encode_int((s32)11));
void* id8623 = make_closure(reinterpret_cast<void *>(ptr10645), env10135);

//setting env list
set_env(env10135, encode_int((s32)1), _u61);
set_env(env10135, encode_int((s32)2), cdar);
set_env(env10135, encode_int((s32)3), length);
set_env(env10135, encode_int((s32)4), null_u63);
set_env(env10135, encode_int((s32)5), kkont8476);
set_env(env10135, encode_int((s32)6), car);
set_env(env10135, encode_int((s32)7), map1);
set_env(env10135, encode_int((s32)8), equal_u63);
set_env(env10135, encode_int((s32)9), op);
set_env(env10135, encode_int((s32)10), Ycomb);
set_env(env10135, encode_int((s32)11), cdr);


void* id8624 = encode_null();
void* oldarg9760 = encode_null();
void* newarg9761 = prim_cons(param_lst8235, oldarg9760);
void* newarg9762 = prim_cons(id8624, newarg9761);

//app-clo
void* cloPtr10646 = get_closure_ptr(id8623);
void* procEnv10647 = get_env(id8623);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10646);
function_ptr(procEnv10647, newarg9762);
}

void ptr10132(void* env10133, void* arglst9511)
{
void* cdr = get_env_value(env10133, encode_int((s32)11));
void* Ycomb = get_env_value(env10133, encode_int((s32)10));
void* equal_u63 = get_env_value(env10133, encode_int((s32)9));
void* map1 = get_env_value(env10133, encode_int((s32)8));
void* kkont8476 = get_env_value(env10133, encode_int((s32)7));
void* null_u63 = get_env_value(env10133, encode_int((s32)6));
void* length = get_env_value(env10133, encode_int((s32)5));
void* param_lst8235 = get_env_value(env10133, encode_int((s32)4));
void* car = get_env_value(env10133, encode_int((s32)3));
void* cdar = get_env_value(env10133, encode_int((s32)2));
void* _u61 = get_env_value(env10133, encode_int((s32)1));
void* letk8478 = prim_car(arglst9511);
void* arg_lst9512 = prim_cdr(arglst9511);
void* op = prim_car(arg_lst9512);
void* arg_lst9513 = prim_cdr(arg_lst9512);

//creating new closure instance
auto ptr10648 = reinterpret_cast<void (*)(void *, void *)>(&ptr10134);
env10133 = allocate_env_space(encode_int((s32)11));
void* id8622 = make_closure(reinterpret_cast<void *>(ptr10648), env10133);

//setting env list
set_env(env10133, encode_int((s32)1), _u61);
set_env(env10133, encode_int((s32)2), cdar);
set_env(env10133, encode_int((s32)3), length);
set_env(env10133, encode_int((s32)4), null_u63);
set_env(env10133, encode_int((s32)5), kkont8476);
set_env(env10133, encode_int((s32)6), car);
set_env(env10133, encode_int((s32)7), map1);
set_env(env10133, encode_int((s32)8), equal_u63);
set_env(env10133, encode_int((s32)9), op);
set_env(env10133, encode_int((s32)10), Ycomb);
set_env(env10133, encode_int((s32)11), cdr);


void* oldarg9763 = encode_null();
void* newarg9764 = prim_cons(param_lst8235, oldarg9763);
void* newarg9765 = prim_cons(id8622, newarg9764);

//app-clo
void* cloPtr10649 = get_closure_ptr(cdr);
void* procEnv10650 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10649);
function_ptr(procEnv10650, newarg9765);
}

void ptr10130(void* env10131, void* param_lst82358477)
{
void* cdr = get_env_value(env10131, encode_int((s32)9));
void* Ycomb = get_env_value(env10131, encode_int((s32)8));
void* equal_u63 = get_env_value(env10131, encode_int((s32)7));
void* map1 = get_env_value(env10131, encode_int((s32)6));
void* car = get_env_value(env10131, encode_int((s32)5));
void* null_u63 = get_env_value(env10131, encode_int((s32)4));
void* length = get_env_value(env10131, encode_int((s32)3));
void* cdar = get_env_value(env10131, encode_int((s32)2));
void* _u61 = get_env_value(env10131, encode_int((s32)1));
void* kkont8476 = prim_car(param_lst82358477);
void* param_lst8235 = prim_cdr(param_lst82358477);

//creating new closure instance
auto ptr10651 = reinterpret_cast<void (*)(void *, void *)>(&ptr10132);
env10131 = allocate_env_space(encode_int((s32)11));
void* id8621 = make_closure(reinterpret_cast<void *>(ptr10651), env10131);

//setting env list
set_env(env10131, encode_int((s32)1), _u61);
set_env(env10131, encode_int((s32)2), cdar);
set_env(env10131, encode_int((s32)3), car);
set_env(env10131, encode_int((s32)4), param_lst8235);
set_env(env10131, encode_int((s32)5), length);
set_env(env10131, encode_int((s32)6), null_u63);
set_env(env10131, encode_int((s32)7), kkont8476);
set_env(env10131, encode_int((s32)8), map1);
set_env(env10131, encode_int((s32)9), equal_u63);
set_env(env10131, encode_int((s32)10), Ycomb);
set_env(env10131, encode_int((s32)11), cdr);


void* oldarg9766 = encode_null();
void* newarg9767 = prim_cons(param_lst8235, oldarg9766);
void* newarg9768 = prim_cons(id8621, newarg9767);

//app-clo
void* cloPtr10652 = get_closure_ptr(car);
void* procEnv10653 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10652);
function_ptr(procEnv10653, newarg9768);
}

void ptr10128(void* env10129, void* arglst9508)
{
void* cdr = get_env_value(env10129, encode_int((s32)9));
void* Ycomb = get_env_value(env10129, encode_int((s32)8));
void* equal_u63 = get_env_value(env10129, encode_int((s32)7));
void* map1 = get_env_value(env10129, encode_int((s32)6));
void* car = get_env_value(env10129, encode_int((s32)5));
void* null_u63 = get_env_value(env10129, encode_int((s32)4));
void* length = get_env_value(env10129, encode_int((s32)3));
void* cdar = get_env_value(env10129, encode_int((s32)2));
void* _u61 = get_env_value(env10129, encode_int((s32)1));
void* kont8475 = prim_car(arglst9508);
void* arg_lst9509 = prim_cdr(arglst9508);
void* ormap = prim_car(arg_lst9509);
void* arg_lst9510 = prim_cdr(arg_lst9509);
void* id8619 = encode_null();

//creating new closure instance
auto ptr10654 = reinterpret_cast<void (*)(void *, void *)>(&ptr10130);
env10129 = allocate_env_space(encode_int((s32)9));
void* id8620 = make_closure(reinterpret_cast<void *>(ptr10654), env10129);

//setting env list
set_env(env10129, encode_int((s32)1), _u61);
set_env(env10129, encode_int((s32)2), cdar);
set_env(env10129, encode_int((s32)3), length);
set_env(env10129, encode_int((s32)4), null_u63);
set_env(env10129, encode_int((s32)5), car);
set_env(env10129, encode_int((s32)6), map1);
set_env(env10129, encode_int((s32)7), equal_u63);
set_env(env10129, encode_int((s32)8), Ycomb);
set_env(env10129, encode_int((s32)9), cdr);


void* oldarg9769 = encode_null();
void* newarg9770 = prim_cons(id8620, oldarg9769);
void* newarg9771 = prim_cons(id8619, newarg9770);

//app-clo
void* cloPtr10655 = get_closure_ptr(kont8475);
void* procEnv10656 = get_env(kont8475);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10655);
function_ptr(procEnv10656, newarg9771);
}

void ptr10236(void* env10237, void* arglst9363)
{
void* op = get_env_value(env10237, encode_int((s32)2));
void* kont8461 = get_env_value(env10237, encode_int((s32)1));
void* letk8466 = prim_car(arglst9363);
void* arg_lst9364 = prim_cdr(arglst9363);
void* t8277 = prim_car(arg_lst9364);
void* arg_lst9365 = prim_cdr(arg_lst9364);
void* lst8467 = prim_cons(kont8461, t8277);

//app-clo
void* cloPtr10657 = get_closure_ptr(op);
void* procEnv10658 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10657);
function_ptr(procEnv10658, lst8467);
}

void ptr10244(void* env10245, void* arglst9382)
{
void* loop = get_env_value(env10245, encode_int((s32)2));
void* kont8461 = get_env_value(env10245, encode_int((s32)1));
void* letk8471 = prim_car(arglst9382);
void* arg_lst9383 = prim_cdr(arglst9382);
void* t8281 = prim_car(arg_lst9383);
void* arg_lst9384 = prim_cdr(arg_lst9383);
void* oldarg9385 = encode_null();
void* newarg9386 = prim_cons(t8281, oldarg9385);
void* newarg9387 = prim_cons(kont8461, newarg9386);

//app-clo
void* cloPtr10659 = get_closure_ptr(loop);
void* procEnv10660 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10659);
function_ptr(procEnv10660, newarg9387);
}

void ptr10242(void* env10243, void* arglst9376)
{
void* lst = get_env_value(env10243, encode_int((s32)5));
void* map1 = get_env_value(env10243, encode_int((s32)4));
void* kont8461 = get_env_value(env10243, encode_int((s32)3));
void* loop = get_env_value(env10243, encode_int((s32)2));
void* cdr = get_env_value(env10243, encode_int((s32)1));
void* letk8470 = prim_car(arglst9376);
void* arg_lst9377 = prim_cdr(arglst9376);
void* t8280 = prim_car(arg_lst9377);
void* arg_lst9378 = prim_cdr(arg_lst9377);

//if-clause
u64 if_guard10661 = reinterpret_cast<u64>(is_true(t8280));
if(if_guard10661 == 1)
{
void* id8706 = encode_null();
void* id8707 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9379 = encode_null();
void* newarg9380 = prim_cons(id8707, oldarg9379);
void* newarg9381 = prim_cons(id8706, newarg9380);

//app-clo
void* cloPtr10662 = get_closure_ptr(kont8461);
void* procEnv10663 = get_env(kont8461);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10662);
function_ptr(procEnv10663, newarg9381);
}
else
{

//creating new closure instance
auto ptr10664 = reinterpret_cast<void (*)(void *, void *)>(&ptr10244);
env10243 = allocate_env_space(encode_int((s32)2));
void* id8708 = make_closure(reinterpret_cast<void *>(ptr10664), env10243);

//setting env list
set_env(env10243, encode_int((s32)1), kont8461);
set_env(env10243, encode_int((s32)2), loop);


void* oldarg9388 = encode_null();
void* newarg9389 = prim_cons(lst, oldarg9388);
void* newarg9390 = prim_cons(cdr, newarg9389);
void* newarg9391 = prim_cons(id8708, newarg9390);

//app-clo
void* cloPtr10665 = get_closure_ptr(map1);
void* procEnv10666 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10665);
function_ptr(procEnv10666, newarg9391);
}

}

void ptr10240(void* env10241, void* arglst9373)
{
void* lst = get_env_value(env10241, encode_int((s32)6));
void* equal_u63 = get_env_value(env10241, encode_int((s32)5));
void* map1 = get_env_value(env10241, encode_int((s32)4));
void* kont8461 = get_env_value(env10241, encode_int((s32)3));
void* loop = get_env_value(env10241, encode_int((s32)2));
void* cdr = get_env_value(env10241, encode_int((s32)1));
void* letk8469 = prim_car(arglst9373);
void* arg_lst9374 = prim_cdr(arglst9373);
void* t8279 = prim_car(arg_lst9374);
void* arg_lst9375 = prim_cdr(arg_lst9374);

//creating new closure instance
auto ptr10667 = reinterpret_cast<void (*)(void *, void *)>(&ptr10242);
env10241 = allocate_env_space(encode_int((s32)5));
void* id8704 = make_closure(reinterpret_cast<void *>(ptr10667), env10241);

//setting env list
set_env(env10241, encode_int((s32)1), cdr);
set_env(env10241, encode_int((s32)2), loop);
set_env(env10241, encode_int((s32)3), kont8461);
set_env(env10241, encode_int((s32)4), map1);
set_env(env10241, encode_int((s32)5), lst);


void* id8705 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9392 = encode_null();
void* newarg9393 = prim_cons(t8279, oldarg9392);
void* newarg9394 = prim_cons(id8705, newarg9393);
void* newarg9395 = prim_cons(id8704, newarg9394);

//app-clo
void* cloPtr10668 = get_closure_ptr(equal_u63);
void* procEnv10669 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10668);
function_ptr(procEnv10669, newarg9395);
}

void ptr10238(void* env10239, void* arglst9370)
{
void* lst = get_env_value(env10239, encode_int((s32)7));
void* op = get_env_value(env10239, encode_int((s32)6));
void* equal_u63 = get_env_value(env10239, encode_int((s32)5));
void* map1 = get_env_value(env10239, encode_int((s32)4));
void* kont8461 = get_env_value(env10239, encode_int((s32)3));
void* loop = get_env_value(env10239, encode_int((s32)2));
void* cdr = get_env_value(env10239, encode_int((s32)1));
void* letk8468 = prim_car(arglst9370);
void* arg_lst9371 = prim_cdr(arglst9370);
void* t8278 = prim_car(arg_lst9371);
void* arg_lst9372 = prim_cdr(arg_lst9371);

//creating new closure instance
auto ptr10670 = reinterpret_cast<void (*)(void *, void *)>(&ptr10240);
env10239 = allocate_env_space(encode_int((s32)6));
void* id8703 = make_closure(reinterpret_cast<void *>(ptr10670), env10239);

//setting env list
set_env(env10239, encode_int((s32)1), cdr);
set_env(env10239, encode_int((s32)2), loop);
set_env(env10239, encode_int((s32)3), kont8461);
set_env(env10239, encode_int((s32)4), map1);
set_env(env10239, encode_int((s32)5), equal_u63);
set_env(env10239, encode_int((s32)6), lst);


void* lst8472 = prim_cons(id8703, t8278);

//app-clo
void* cloPtr10671 = get_closure_ptr(op);
void* procEnv10672 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10671);
function_ptr(procEnv10672, lst8472);
}

void ptr10234(void* env10235, void* arglst9360)
{
void* lst = get_env_value(env10235, encode_int((s32)8));
void* op = get_env_value(env10235, encode_int((s32)7));
void* equal_u63 = get_env_value(env10235, encode_int((s32)6));
void* map1 = get_env_value(env10235, encode_int((s32)5));
void* car = get_env_value(env10235, encode_int((s32)4));
void* kont8461 = get_env_value(env10235, encode_int((s32)3));
void* loop = get_env_value(env10235, encode_int((s32)2));
void* cdr = get_env_value(env10235, encode_int((s32)1));
void* letk8465 = prim_car(arglst9360);
void* arg_lst9361 = prim_cdr(arglst9360);
void* t8276 = prim_car(arg_lst9361);
void* arg_lst9362 = prim_cdr(arg_lst9361);

//if-clause
u64 if_guard10673 = reinterpret_cast<u64>(is_true(t8276));
if(if_guard10673 == 1)
{

//creating new closure instance
auto ptr10674 = reinterpret_cast<void (*)(void *, void *)>(&ptr10236);
env10235 = allocate_env_space(encode_int((s32)2));
void* id8701 = make_closure(reinterpret_cast<void *>(ptr10674), env10235);

//setting env list
set_env(env10235, encode_int((s32)1), kont8461);
set_env(env10235, encode_int((s32)2), op);


void* oldarg9366 = encode_null();
void* newarg9367 = prim_cons(lst, oldarg9366);
void* newarg9368 = prim_cons(car, newarg9367);
void* newarg9369 = prim_cons(id8701, newarg9368);

//app-clo
void* cloPtr10675 = get_closure_ptr(map1);
void* procEnv10676 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10675);
function_ptr(procEnv10676, newarg9369);
}
else
{

//creating new closure instance
auto ptr10677 = reinterpret_cast<void (*)(void *, void *)>(&ptr10238);
env10235 = allocate_env_space(encode_int((s32)7));
void* id8702 = make_closure(reinterpret_cast<void *>(ptr10677), env10235);

//setting env list
set_env(env10235, encode_int((s32)1), cdr);
set_env(env10235, encode_int((s32)2), loop);
set_env(env10235, encode_int((s32)3), kont8461);
set_env(env10235, encode_int((s32)4), map1);
set_env(env10235, encode_int((s32)5), equal_u63);
set_env(env10235, encode_int((s32)6), op);
set_env(env10235, encode_int((s32)7), lst);


void* oldarg9396 = encode_null();
void* newarg9397 = prim_cons(lst, oldarg9396);
void* newarg9398 = prim_cons(car, newarg9397);
void* newarg9399 = prim_cons(id8702, newarg9398);

//app-clo
void* cloPtr10678 = get_closure_ptr(map1);
void* procEnv10679 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10678);
function_ptr(procEnv10679, newarg9399);
}

}

void ptr10232(void* env10233, void* arglst9357)
{
void* lst = get_env_value(env10233, encode_int((s32)9));
void* op = get_env_value(env10233, encode_int((s32)8));
void* equal_u63 = get_env_value(env10233, encode_int((s32)7));
void* map1 = get_env_value(env10233, encode_int((s32)6));
void* car = get_env_value(env10233, encode_int((s32)5));
void* loop = get_env_value(env10233, encode_int((s32)4));
void* cdr = get_env_value(env10233, encode_int((s32)3));
void* kont8461 = get_env_value(env10233, encode_int((s32)2));
void* _u61 = get_env_value(env10233, encode_int((s32)1));
void* letk8464 = prim_car(arglst9357);
void* arg_lst9358 = prim_cdr(arglst9357);
void* t8275 = prim_car(arg_lst9358);
void* arg_lst9359 = prim_cdr(arg_lst9358);

//creating new closure instance
auto ptr10680 = reinterpret_cast<void (*)(void *, void *)>(&ptr10234);
env10233 = allocate_env_space(encode_int((s32)8));
void* id8699 = make_closure(reinterpret_cast<void *>(ptr10680), env10233);

//setting env list
set_env(env10233, encode_int((s32)1), cdr);
set_env(env10233, encode_int((s32)2), loop);
set_env(env10233, encode_int((s32)3), kont8461);
set_env(env10233, encode_int((s32)4), car);
set_env(env10233, encode_int((s32)5), map1);
set_env(env10233, encode_int((s32)6), equal_u63);
set_env(env10233, encode_int((s32)7), op);
set_env(env10233, encode_int((s32)8), lst);


void* id8700 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9400 = encode_null();
void* newarg9401 = prim_cons(t8275, oldarg9400);
void* newarg9402 = prim_cons(id8700, newarg9401);
void* newarg9403 = prim_cons(id8699, newarg9402);

//app-clo
void* cloPtr10681 = get_closure_ptr(_u61);
void* procEnv10682 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10681);
function_ptr(procEnv10682, newarg9403);
}

void ptr10230(void* env10231, void* arglst9354)
{
void* lst = get_env_value(env10231, encode_int((s32)10));
void* length = get_env_value(env10231, encode_int((s32)9));
void* op = get_env_value(env10231, encode_int((s32)8));
void* equal_u63 = get_env_value(env10231, encode_int((s32)7));
void* map1 = get_env_value(env10231, encode_int((s32)6));
void* car = get_env_value(env10231, encode_int((s32)5));
void* loop = get_env_value(env10231, encode_int((s32)4));
void* cdr = get_env_value(env10231, encode_int((s32)3));
void* kont8461 = get_env_value(env10231, encode_int((s32)2));
void* _u61 = get_env_value(env10231, encode_int((s32)1));
void* letk8463 = prim_car(arglst9354);
void* arg_lst9355 = prim_cdr(arglst9354);
void* t8274 = prim_car(arg_lst9355);
void* arg_lst9356 = prim_cdr(arg_lst9355);

//creating new closure instance
auto ptr10683 = reinterpret_cast<void (*)(void *, void *)>(&ptr10232);
env10231 = allocate_env_space(encode_int((s32)9));
void* id8698 = make_closure(reinterpret_cast<void *>(ptr10683), env10231);

//setting env list
set_env(env10231, encode_int((s32)1), _u61);
set_env(env10231, encode_int((s32)2), kont8461);
set_env(env10231, encode_int((s32)3), cdr);
set_env(env10231, encode_int((s32)4), loop);
set_env(env10231, encode_int((s32)5), car);
set_env(env10231, encode_int((s32)6), map1);
set_env(env10231, encode_int((s32)7), equal_u63);
set_env(env10231, encode_int((s32)8), op);
set_env(env10231, encode_int((s32)9), lst);


void* oldarg9404 = encode_null();
void* newarg9405 = prim_cons(t8274, oldarg9404);
void* newarg9406 = prim_cons(id8698, newarg9405);

//app-clo
void* cloPtr10684 = get_closure_ptr(length);
void* procEnv10685 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10684);
function_ptr(procEnv10685, newarg9406);
}

void ptr10228(void* env10229, void* arglst9348)
{
void* lst = get_env_value(env10229, encode_int((s32)11));
void* length = get_env_value(env10229, encode_int((s32)10));
void* op = get_env_value(env10229, encode_int((s32)9));
void* equal_u63 = get_env_value(env10229, encode_int((s32)8));
void* map1 = get_env_value(env10229, encode_int((s32)7));
void* car = get_env_value(env10229, encode_int((s32)6));
void* loop = get_env_value(env10229, encode_int((s32)5));
void* cdr = get_env_value(env10229, encode_int((s32)4));
void* kont8461 = get_env_value(env10229, encode_int((s32)3));
void* cdar = get_env_value(env10229, encode_int((s32)2));
void* _u61 = get_env_value(env10229, encode_int((s32)1));
void* letk8462 = prim_car(arglst9348);
void* arg_lst9349 = prim_cdr(arglst9348);
void* t8273 = prim_car(arg_lst9349);
void* arg_lst9350 = prim_cdr(arg_lst9349);

//if-clause
u64 if_guard10686 = reinterpret_cast<u64>(is_true(t8273));
if(if_guard10686 == 1)
{
void* id8695 = encode_null();
void* id8696 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9351 = encode_null();
void* newarg9352 = prim_cons(id8696, oldarg9351);
void* newarg9353 = prim_cons(id8695, newarg9352);

//app-clo
void* cloPtr10687 = get_closure_ptr(kont8461);
void* procEnv10688 = get_env(kont8461);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10687);
function_ptr(procEnv10688, newarg9353);
}
else
{

//creating new closure instance
auto ptr10689 = reinterpret_cast<void (*)(void *, void *)>(&ptr10230);
env10229 = allocate_env_space(encode_int((s32)10));
void* id8697 = make_closure(reinterpret_cast<void *>(ptr10689), env10229);

//setting env list
set_env(env10229, encode_int((s32)1), _u61);
set_env(env10229, encode_int((s32)2), kont8461);
set_env(env10229, encode_int((s32)3), cdr);
set_env(env10229, encode_int((s32)4), loop);
set_env(env10229, encode_int((s32)5), car);
set_env(env10229, encode_int((s32)6), map1);
set_env(env10229, encode_int((s32)7), equal_u63);
set_env(env10229, encode_int((s32)8), op);
set_env(env10229, encode_int((s32)9), length);
set_env(env10229, encode_int((s32)10), lst);


void* oldarg9407 = encode_null();
void* newarg9408 = prim_cons(lst, oldarg9407);
void* newarg9409 = prim_cons(id8697, newarg9408);

//app-clo
void* cloPtr10690 = get_closure_ptr(cdar);
void* procEnv10691 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10690);
function_ptr(procEnv10691, newarg9409);
}

}

void ptr10256(void* env10257, void* arglst9431)
{
void* op = get_env_value(env10257, encode_int((s32)2));
void* kont8461 = get_env_value(env10257, encode_int((s32)1));
void* letk8466 = prim_car(arglst9431);
void* arg_lst9432 = prim_cdr(arglst9431);
void* t8277 = prim_car(arg_lst9432);
void* arg_lst9433 = prim_cdr(arg_lst9432);
void* lst8467 = prim_cons(kont8461, t8277);

//app-clo
void* cloPtr10692 = get_closure_ptr(op);
void* procEnv10693 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10692);
function_ptr(procEnv10693, lst8467);
}

void ptr10264(void* env10265, void* arglst9450)
{
void* loop = get_env_value(env10265, encode_int((s32)2));
void* kont8461 = get_env_value(env10265, encode_int((s32)1));
void* letk8471 = prim_car(arglst9450);
void* arg_lst9451 = prim_cdr(arglst9450);
void* t8281 = prim_car(arg_lst9451);
void* arg_lst9452 = prim_cdr(arg_lst9451);
void* oldarg9453 = encode_null();
void* newarg9454 = prim_cons(t8281, oldarg9453);
void* newarg9455 = prim_cons(kont8461, newarg9454);

//app-clo
void* cloPtr10694 = get_closure_ptr(loop);
void* procEnv10695 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10694);
function_ptr(procEnv10695, newarg9455);
}

void ptr10262(void* env10263, void* arglst9444)
{
void* lst = get_env_value(env10263, encode_int((s32)5));
void* map1 = get_env_value(env10263, encode_int((s32)4));
void* kont8461 = get_env_value(env10263, encode_int((s32)3));
void* loop = get_env_value(env10263, encode_int((s32)2));
void* cdr = get_env_value(env10263, encode_int((s32)1));
void* letk8470 = prim_car(arglst9444);
void* arg_lst9445 = prim_cdr(arglst9444);
void* t8280 = prim_car(arg_lst9445);
void* arg_lst9446 = prim_cdr(arg_lst9445);

//if-clause
u64 if_guard10696 = reinterpret_cast<u64>(is_true(t8280));
if(if_guard10696 == 1)
{
void* id8722 = encode_null();
void* id8723 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9447 = encode_null();
void* newarg9448 = prim_cons(id8723, oldarg9447);
void* newarg9449 = prim_cons(id8722, newarg9448);

//app-clo
void* cloPtr10697 = get_closure_ptr(kont8461);
void* procEnv10698 = get_env(kont8461);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10697);
function_ptr(procEnv10698, newarg9449);
}
else
{

//creating new closure instance
auto ptr10699 = reinterpret_cast<void (*)(void *, void *)>(&ptr10264);
env10263 = allocate_env_space(encode_int((s32)2));
void* id8724 = make_closure(reinterpret_cast<void *>(ptr10699), env10263);

//setting env list
set_env(env10263, encode_int((s32)1), kont8461);
set_env(env10263, encode_int((s32)2), loop);


void* oldarg9456 = encode_null();
void* newarg9457 = prim_cons(lst, oldarg9456);
void* newarg9458 = prim_cons(cdr, newarg9457);
void* newarg9459 = prim_cons(id8724, newarg9458);

//app-clo
void* cloPtr10700 = get_closure_ptr(map1);
void* procEnv10701 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10700);
function_ptr(procEnv10701, newarg9459);
}

}

void ptr10260(void* env10261, void* arglst9441)
{
void* lst = get_env_value(env10261, encode_int((s32)6));
void* equal_u63 = get_env_value(env10261, encode_int((s32)5));
void* map1 = get_env_value(env10261, encode_int((s32)4));
void* kont8461 = get_env_value(env10261, encode_int((s32)3));
void* loop = get_env_value(env10261, encode_int((s32)2));
void* cdr = get_env_value(env10261, encode_int((s32)1));
void* letk8469 = prim_car(arglst9441);
void* arg_lst9442 = prim_cdr(arglst9441);
void* t8279 = prim_car(arg_lst9442);
void* arg_lst9443 = prim_cdr(arg_lst9442);

//creating new closure instance
auto ptr10702 = reinterpret_cast<void (*)(void *, void *)>(&ptr10262);
env10261 = allocate_env_space(encode_int((s32)5));
void* id8720 = make_closure(reinterpret_cast<void *>(ptr10702), env10261);

//setting env list
set_env(env10261, encode_int((s32)1), cdr);
set_env(env10261, encode_int((s32)2), loop);
set_env(env10261, encode_int((s32)3), kont8461);
set_env(env10261, encode_int((s32)4), map1);
set_env(env10261, encode_int((s32)5), lst);


void* id8721 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9460 = encode_null();
void* newarg9461 = prim_cons(t8279, oldarg9460);
void* newarg9462 = prim_cons(id8721, newarg9461);
void* newarg9463 = prim_cons(id8720, newarg9462);

//app-clo
void* cloPtr10703 = get_closure_ptr(equal_u63);
void* procEnv10704 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10703);
function_ptr(procEnv10704, newarg9463);
}

void ptr10258(void* env10259, void* arglst9438)
{
void* lst = get_env_value(env10259, encode_int((s32)7));
void* op = get_env_value(env10259, encode_int((s32)6));
void* equal_u63 = get_env_value(env10259, encode_int((s32)5));
void* map1 = get_env_value(env10259, encode_int((s32)4));
void* kont8461 = get_env_value(env10259, encode_int((s32)3));
void* loop = get_env_value(env10259, encode_int((s32)2));
void* cdr = get_env_value(env10259, encode_int((s32)1));
void* letk8468 = prim_car(arglst9438);
void* arg_lst9439 = prim_cdr(arglst9438);
void* t8278 = prim_car(arg_lst9439);
void* arg_lst9440 = prim_cdr(arg_lst9439);

//creating new closure instance
auto ptr10705 = reinterpret_cast<void (*)(void *, void *)>(&ptr10260);
env10259 = allocate_env_space(encode_int((s32)6));
void* id8719 = make_closure(reinterpret_cast<void *>(ptr10705), env10259);

//setting env list
set_env(env10259, encode_int((s32)1), cdr);
set_env(env10259, encode_int((s32)2), loop);
set_env(env10259, encode_int((s32)3), kont8461);
set_env(env10259, encode_int((s32)4), map1);
set_env(env10259, encode_int((s32)5), equal_u63);
set_env(env10259, encode_int((s32)6), lst);


void* lst8472 = prim_cons(id8719, t8278);

//app-clo
void* cloPtr10706 = get_closure_ptr(op);
void* procEnv10707 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10706);
function_ptr(procEnv10707, lst8472);
}

void ptr10254(void* env10255, void* arglst9428)
{
void* lst = get_env_value(env10255, encode_int((s32)8));
void* op = get_env_value(env10255, encode_int((s32)7));
void* equal_u63 = get_env_value(env10255, encode_int((s32)6));
void* map1 = get_env_value(env10255, encode_int((s32)5));
void* car = get_env_value(env10255, encode_int((s32)4));
void* kont8461 = get_env_value(env10255, encode_int((s32)3));
void* loop = get_env_value(env10255, encode_int((s32)2));
void* cdr = get_env_value(env10255, encode_int((s32)1));
void* letk8465 = prim_car(arglst9428);
void* arg_lst9429 = prim_cdr(arglst9428);
void* t8276 = prim_car(arg_lst9429);
void* arg_lst9430 = prim_cdr(arg_lst9429);

//if-clause
u64 if_guard10708 = reinterpret_cast<u64>(is_true(t8276));
if(if_guard10708 == 1)
{

//creating new closure instance
auto ptr10709 = reinterpret_cast<void (*)(void *, void *)>(&ptr10256);
env10255 = allocate_env_space(encode_int((s32)2));
void* id8717 = make_closure(reinterpret_cast<void *>(ptr10709), env10255);

//setting env list
set_env(env10255, encode_int((s32)1), kont8461);
set_env(env10255, encode_int((s32)2), op);


void* oldarg9434 = encode_null();
void* newarg9435 = prim_cons(lst, oldarg9434);
void* newarg9436 = prim_cons(car, newarg9435);
void* newarg9437 = prim_cons(id8717, newarg9436);

//app-clo
void* cloPtr10710 = get_closure_ptr(map1);
void* procEnv10711 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10710);
function_ptr(procEnv10711, newarg9437);
}
else
{

//creating new closure instance
auto ptr10712 = reinterpret_cast<void (*)(void *, void *)>(&ptr10258);
env10255 = allocate_env_space(encode_int((s32)7));
void* id8718 = make_closure(reinterpret_cast<void *>(ptr10712), env10255);

//setting env list
set_env(env10255, encode_int((s32)1), cdr);
set_env(env10255, encode_int((s32)2), loop);
set_env(env10255, encode_int((s32)3), kont8461);
set_env(env10255, encode_int((s32)4), map1);
set_env(env10255, encode_int((s32)5), equal_u63);
set_env(env10255, encode_int((s32)6), op);
set_env(env10255, encode_int((s32)7), lst);


void* oldarg9464 = encode_null();
void* newarg9465 = prim_cons(lst, oldarg9464);
void* newarg9466 = prim_cons(car, newarg9465);
void* newarg9467 = prim_cons(id8718, newarg9466);

//app-clo
void* cloPtr10713 = get_closure_ptr(map1);
void* procEnv10714 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10713);
function_ptr(procEnv10714, newarg9467);
}

}

void ptr10252(void* env10253, void* arglst9425)
{
void* lst = get_env_value(env10253, encode_int((s32)9));
void* op = get_env_value(env10253, encode_int((s32)8));
void* equal_u63 = get_env_value(env10253, encode_int((s32)7));
void* map1 = get_env_value(env10253, encode_int((s32)6));
void* car = get_env_value(env10253, encode_int((s32)5));
void* loop = get_env_value(env10253, encode_int((s32)4));
void* cdr = get_env_value(env10253, encode_int((s32)3));
void* kont8461 = get_env_value(env10253, encode_int((s32)2));
void* _u61 = get_env_value(env10253, encode_int((s32)1));
void* letk8464 = prim_car(arglst9425);
void* arg_lst9426 = prim_cdr(arglst9425);
void* t8275 = prim_car(arg_lst9426);
void* arg_lst9427 = prim_cdr(arg_lst9426);

//creating new closure instance
auto ptr10715 = reinterpret_cast<void (*)(void *, void *)>(&ptr10254);
env10253 = allocate_env_space(encode_int((s32)8));
void* id8715 = make_closure(reinterpret_cast<void *>(ptr10715), env10253);

//setting env list
set_env(env10253, encode_int((s32)1), cdr);
set_env(env10253, encode_int((s32)2), loop);
set_env(env10253, encode_int((s32)3), kont8461);
set_env(env10253, encode_int((s32)4), car);
set_env(env10253, encode_int((s32)5), map1);
set_env(env10253, encode_int((s32)6), equal_u63);
set_env(env10253, encode_int((s32)7), op);
set_env(env10253, encode_int((s32)8), lst);


void* id8716 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9468 = encode_null();
void* newarg9469 = prim_cons(t8275, oldarg9468);
void* newarg9470 = prim_cons(id8716, newarg9469);
void* newarg9471 = prim_cons(id8715, newarg9470);

//app-clo
void* cloPtr10716 = get_closure_ptr(_u61);
void* procEnv10717 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10716);
function_ptr(procEnv10717, newarg9471);
}

void ptr10250(void* env10251, void* arglst9422)
{
void* lst = get_env_value(env10251, encode_int((s32)10));
void* length = get_env_value(env10251, encode_int((s32)9));
void* op = get_env_value(env10251, encode_int((s32)8));
void* equal_u63 = get_env_value(env10251, encode_int((s32)7));
void* map1 = get_env_value(env10251, encode_int((s32)6));
void* car = get_env_value(env10251, encode_int((s32)5));
void* loop = get_env_value(env10251, encode_int((s32)4));
void* cdr = get_env_value(env10251, encode_int((s32)3));
void* kont8461 = get_env_value(env10251, encode_int((s32)2));
void* _u61 = get_env_value(env10251, encode_int((s32)1));
void* letk8463 = prim_car(arglst9422);
void* arg_lst9423 = prim_cdr(arglst9422);
void* t8274 = prim_car(arg_lst9423);
void* arg_lst9424 = prim_cdr(arg_lst9423);

//creating new closure instance
auto ptr10718 = reinterpret_cast<void (*)(void *, void *)>(&ptr10252);
env10251 = allocate_env_space(encode_int((s32)9));
void* id8714 = make_closure(reinterpret_cast<void *>(ptr10718), env10251);

//setting env list
set_env(env10251, encode_int((s32)1), _u61);
set_env(env10251, encode_int((s32)2), kont8461);
set_env(env10251, encode_int((s32)3), cdr);
set_env(env10251, encode_int((s32)4), loop);
set_env(env10251, encode_int((s32)5), car);
set_env(env10251, encode_int((s32)6), map1);
set_env(env10251, encode_int((s32)7), equal_u63);
set_env(env10251, encode_int((s32)8), op);
set_env(env10251, encode_int((s32)9), lst);


void* oldarg9472 = encode_null();
void* newarg9473 = prim_cons(t8274, oldarg9472);
void* newarg9474 = prim_cons(id8714, newarg9473);

//app-clo
void* cloPtr10719 = get_closure_ptr(length);
void* procEnv10720 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10719);
function_ptr(procEnv10720, newarg9474);
}

void ptr10248(void* env10249, void* arglst9416)
{
void* lst = get_env_value(env10249, encode_int((s32)11));
void* length = get_env_value(env10249, encode_int((s32)10));
void* op = get_env_value(env10249, encode_int((s32)9));
void* equal_u63 = get_env_value(env10249, encode_int((s32)8));
void* map1 = get_env_value(env10249, encode_int((s32)7));
void* car = get_env_value(env10249, encode_int((s32)6));
void* loop = get_env_value(env10249, encode_int((s32)5));
void* cdr = get_env_value(env10249, encode_int((s32)4));
void* kont8461 = get_env_value(env10249, encode_int((s32)3));
void* cdar = get_env_value(env10249, encode_int((s32)2));
void* _u61 = get_env_value(env10249, encode_int((s32)1));
void* letk8462 = prim_car(arglst9416);
void* arg_lst9417 = prim_cdr(arglst9416);
void* t8273 = prim_car(arg_lst9417);
void* arg_lst9418 = prim_cdr(arg_lst9417);

//if-clause
u64 if_guard10721 = reinterpret_cast<u64>(is_true(t8273));
if(if_guard10721 == 1)
{
void* id8711 = encode_null();
void* id8712 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9419 = encode_null();
void* newarg9420 = prim_cons(id8712, oldarg9419);
void* newarg9421 = prim_cons(id8711, newarg9420);

//app-clo
void* cloPtr10722 = get_closure_ptr(kont8461);
void* procEnv10723 = get_env(kont8461);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10722);
function_ptr(procEnv10723, newarg9421);
}
else
{

//creating new closure instance
auto ptr10724 = reinterpret_cast<void (*)(void *, void *)>(&ptr10250);
env10249 = allocate_env_space(encode_int((s32)10));
void* id8713 = make_closure(reinterpret_cast<void *>(ptr10724), env10249);

//setting env list
set_env(env10249, encode_int((s32)1), _u61);
set_env(env10249, encode_int((s32)2), kont8461);
set_env(env10249, encode_int((s32)3), cdr);
set_env(env10249, encode_int((s32)4), loop);
set_env(env10249, encode_int((s32)5), car);
set_env(env10249, encode_int((s32)6), map1);
set_env(env10249, encode_int((s32)7), equal_u63);
set_env(env10249, encode_int((s32)8), op);
set_env(env10249, encode_int((s32)9), length);
set_env(env10249, encode_int((s32)10), lst);


void* oldarg9475 = encode_null();
void* newarg9476 = prim_cons(lst, oldarg9475);
void* newarg9477 = prim_cons(id8713, newarg9476);

//app-clo
void* cloPtr10725 = get_closure_ptr(cdar);
void* procEnv10726 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10725);
function_ptr(procEnv10726, newarg9477);
}

}

void ptr10246(void* env10247, void* arglst9413)
{
void* lst = get_env_value(env10247, encode_int((s32)12));
void* op = get_env_value(env10247, encode_int((s32)11));
void* equal_u63 = get_env_value(env10247, encode_int((s32)10));
void* map1 = get_env_value(env10247, encode_int((s32)9));
void* car = get_env_value(env10247, encode_int((s32)8));
void* loop = get_env_value(env10247, encode_int((s32)7));
void* cdr = get_env_value(env10247, encode_int((s32)6));
void* null_u63 = get_env_value(env10247, encode_int((s32)5));
void* length = get_env_value(env10247, encode_int((s32)4));
void* kont8461 = get_env_value(env10247, encode_int((s32)3));
void* cdar = get_env_value(env10247, encode_int((s32)2));
void* _u61 = get_env_value(env10247, encode_int((s32)1));
void* letk8474 = prim_car(arglst9413);
void* arg_lst9414 = prim_cdr(arglst9413);
void* t8272 = prim_car(arg_lst9414);
void* arg_lst9415 = prim_cdr(arg_lst9414);

//creating new closure instance
auto ptr10727 = reinterpret_cast<void (*)(void *, void *)>(&ptr10248);
env10247 = allocate_env_space(encode_int((s32)11));
void* id8710 = make_closure(reinterpret_cast<void *>(ptr10727), env10247);

//setting env list
set_env(env10247, encode_int((s32)1), _u61);
set_env(env10247, encode_int((s32)2), cdar);
set_env(env10247, encode_int((s32)3), kont8461);
set_env(env10247, encode_int((s32)4), cdr);
set_env(env10247, encode_int((s32)5), loop);
set_env(env10247, encode_int((s32)6), car);
set_env(env10247, encode_int((s32)7), map1);
set_env(env10247, encode_int((s32)8), equal_u63);
set_env(env10247, encode_int((s32)9), op);
set_env(env10247, encode_int((s32)10), length);
set_env(env10247, encode_int((s32)11), lst);


void* oldarg9478 = encode_null();
void* newarg9479 = prim_cons(t8272, oldarg9478);
void* newarg9480 = prim_cons(id8710, newarg9479);

//app-clo
void* cloPtr10728 = get_closure_ptr(null_u63);
void* procEnv10729 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10728);
function_ptr(procEnv10729, newarg9480);
}

void ptr10226(void* env10227, void* arglst9345)
{
void* lst = get_env_value(env10227, encode_int((s32)12));
void* op = get_env_value(env10227, encode_int((s32)11));
void* equal_u63 = get_env_value(env10227, encode_int((s32)10));
void* map1 = get_env_value(env10227, encode_int((s32)9));
void* car = get_env_value(env10227, encode_int((s32)8));
void* loop = get_env_value(env10227, encode_int((s32)7));
void* cdr = get_env_value(env10227, encode_int((s32)6));
void* null_u63 = get_env_value(env10227, encode_int((s32)5));
void* length = get_env_value(env10227, encode_int((s32)4));
void* kont8461 = get_env_value(env10227, encode_int((s32)3));
void* cdar = get_env_value(env10227, encode_int((s32)2));
void* _u61 = get_env_value(env10227, encode_int((s32)1));
void* letk8473 = prim_car(arglst9345);
void* arg_lst9346 = prim_cdr(arglst9345);
void* or8238 = prim_car(arg_lst9346);
void* arg_lst9347 = prim_cdr(arg_lst9346);

//if-clause
u64 if_guard10730 = reinterpret_cast<u64>(is_true(or8238));
if(if_guard10730 == 1)
{

//creating new closure instance
auto ptr10731 = reinterpret_cast<void (*)(void *, void *)>(&ptr10228);
env10227 = allocate_env_space(encode_int((s32)11));
void* id8693 = make_closure(reinterpret_cast<void *>(ptr10731), env10227);

//setting env list
set_env(env10227, encode_int((s32)1), _u61);
set_env(env10227, encode_int((s32)2), cdar);
set_env(env10227, encode_int((s32)3), kont8461);
set_env(env10227, encode_int((s32)4), cdr);
set_env(env10227, encode_int((s32)5), loop);
set_env(env10227, encode_int((s32)6), car);
set_env(env10227, encode_int((s32)7), map1);
set_env(env10227, encode_int((s32)8), equal_u63);
set_env(env10227, encode_int((s32)9), op);
set_env(env10227, encode_int((s32)10), length);
set_env(env10227, encode_int((s32)11), lst);


void* id8694 = encode_null();
void* oldarg9410 = encode_null();
void* newarg9411 = prim_cons(or8238, oldarg9410);
void* newarg9412 = prim_cons(id8694, newarg9411);

//app-clo
void* cloPtr10732 = get_closure_ptr(id8693);
void* procEnv10733 = get_env(id8693);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10732);
function_ptr(procEnv10733, newarg9412);
}
else
{

//creating new closure instance
auto ptr10734 = reinterpret_cast<void (*)(void *, void *)>(&ptr10246);
env10227 = allocate_env_space(encode_int((s32)12));
void* id8709 = make_closure(reinterpret_cast<void *>(ptr10734), env10227);

//setting env list
set_env(env10227, encode_int((s32)1), _u61);
set_env(env10227, encode_int((s32)2), cdar);
set_env(env10227, encode_int((s32)3), kont8461);
set_env(env10227, encode_int((s32)4), length);
set_env(env10227, encode_int((s32)5), null_u63);
set_env(env10227, encode_int((s32)6), cdr);
set_env(env10227, encode_int((s32)7), loop);
set_env(env10227, encode_int((s32)8), car);
set_env(env10227, encode_int((s32)9), map1);
set_env(env10227, encode_int((s32)10), equal_u63);
set_env(env10227, encode_int((s32)11), op);
set_env(env10227, encode_int((s32)12), lst);


void* oldarg9481 = encode_null();
void* newarg9482 = prim_cons(lst, oldarg9481);
void* newarg9483 = prim_cons(id8709, newarg9482);

//app-clo
void* cloPtr10735 = get_closure_ptr(car);
void* procEnv10736 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10735);
function_ptr(procEnv10736, newarg9483);
}

}

void ptr10224(void* env10225, void* arglst9342)
{
void* op = get_env_value(env10225, encode_int((s32)10));
void* equal_u63 = get_env_value(env10225, encode_int((s32)9));
void* map1 = get_env_value(env10225, encode_int((s32)8));
void* car = get_env_value(env10225, encode_int((s32)7));
void* loop = get_env_value(env10225, encode_int((s32)6));
void* cdr = get_env_value(env10225, encode_int((s32)5));
void* null_u63 = get_env_value(env10225, encode_int((s32)4));
void* length = get_env_value(env10225, encode_int((s32)3));
void* cdar = get_env_value(env10225, encode_int((s32)2));
void* _u61 = get_env_value(env10225, encode_int((s32)1));
void* kont8461 = prim_car(arglst9342);
void* arg_lst9343 = prim_cdr(arglst9342);
void* lst = prim_car(arg_lst9343);
void* arg_lst9344 = prim_cdr(arg_lst9343);

//creating new closure instance
auto ptr10737 = reinterpret_cast<void (*)(void *, void *)>(&ptr10226);
env10225 = allocate_env_space(encode_int((s32)12));
void* id8692 = make_closure(reinterpret_cast<void *>(ptr10737), env10225);

//setting env list
set_env(env10225, encode_int((s32)1), _u61);
set_env(env10225, encode_int((s32)2), cdar);
set_env(env10225, encode_int((s32)3), kont8461);
set_env(env10225, encode_int((s32)4), length);
set_env(env10225, encode_int((s32)5), null_u63);
set_env(env10225, encode_int((s32)6), cdr);
set_env(env10225, encode_int((s32)7), loop);
set_env(env10225, encode_int((s32)8), car);
set_env(env10225, encode_int((s32)9), map1);
set_env(env10225, encode_int((s32)10), equal_u63);
set_env(env10225, encode_int((s32)11), op);
set_env(env10225, encode_int((s32)12), lst);


void* oldarg9484 = encode_null();
void* newarg9485 = prim_cons(lst, oldarg9484);
void* newarg9486 = prim_cons(id8692, newarg9485);

//app-clo
void* cloPtr10738 = get_closure_ptr(null_u63);
void* procEnv10739 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10738);
function_ptr(procEnv10739, newarg9486);
}

void ptr10222(void* env10223, void* arglst9339)
{
void* cdr = get_env_value(env10223, encode_int((s32)9));
void* op = get_env_value(env10223, encode_int((s32)8));
void* equal_u63 = get_env_value(env10223, encode_int((s32)7));
void* map1 = get_env_value(env10223, encode_int((s32)6));
void* car = get_env_value(env10223, encode_int((s32)5));
void* null_u63 = get_env_value(env10223, encode_int((s32)4));
void* length = get_env_value(env10223, encode_int((s32)3));
void* cdar = get_env_value(env10223, encode_int((s32)2));
void* _u61 = get_env_value(env10223, encode_int((s32)1));
void* kont8460 = prim_car(arglst9339);
void* arg_lst9340 = prim_cdr(arglst9339);
void* loop = prim_car(arg_lst9340);
void* arg_lst9341 = prim_cdr(arg_lst9340);
void* id8690 = encode_null();

//creating new closure instance
auto ptr10740 = reinterpret_cast<void (*)(void *, void *)>(&ptr10224);
env10223 = allocate_env_space(encode_int((s32)10));
void* id8691 = make_closure(reinterpret_cast<void *>(ptr10740), env10223);

//setting env list
set_env(env10223, encode_int((s32)1), _u61);
set_env(env10223, encode_int((s32)2), cdar);
set_env(env10223, encode_int((s32)3), length);
set_env(env10223, encode_int((s32)4), null_u63);
set_env(env10223, encode_int((s32)5), cdr);
set_env(env10223, encode_int((s32)6), loop);
set_env(env10223, encode_int((s32)7), car);
set_env(env10223, encode_int((s32)8), map1);
set_env(env10223, encode_int((s32)9), equal_u63);
set_env(env10223, encode_int((s32)10), op);


void* oldarg9487 = encode_null();
void* newarg9488 = prim_cons(id8691, oldarg9487);
void* newarg9489 = prim_cons(id8690, newarg9488);

//app-clo
void* cloPtr10741 = get_closure_ptr(kont8460);
void* procEnv10742 = get_env(kont8460);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10741);
function_ptr(procEnv10742, newarg9489);
}

void ptr10220(void* env10221, void* arglst9333)
{
void* lst = get_env_value(env10221, encode_int((s32)2));
void* kkont8454 = get_env_value(env10221, encode_int((s32)1));
void* letk8459 = prim_car(arglst9333);
void* arg_lst9334 = prim_cdr(arglst9333);
void* loop = prim_car(arg_lst9334);
void* arg_lst9335 = prim_cdr(arg_lst9334);
void* oldarg9336 = encode_null();
void* newarg9337 = prim_cons(lst, oldarg9336);
void* newarg9338 = prim_cons(kkont8454, newarg9337);

//app-clo
void* cloPtr10743 = get_closure_ptr(loop);
void* procEnv10744 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10743);
function_ptr(procEnv10744, newarg9338);
}

void ptr10218(void* env10219, void* arglst9330)
{
void* cdr = get_env_value(env10219, encode_int((s32)11));
void* Ycomb = get_env_value(env10219, encode_int((s32)10));
void* op = get_env_value(env10219, encode_int((s32)9));
void* map1 = get_env_value(env10219, encode_int((s32)8));
void* car = get_env_value(env10219, encode_int((s32)7));
void* null_u63 = get_env_value(env10219, encode_int((s32)6));
void* length = get_env_value(env10219, encode_int((s32)5));
void* kkont8454 = get_env_value(env10219, encode_int((s32)4));
void* equal_u63 = get_env_value(env10219, encode_int((s32)3));
void* cdar = get_env_value(env10219, encode_int((s32)2));
void* _u61 = get_env_value(env10219, encode_int((s32)1));
void* letk8458 = prim_car(arglst9330);
void* arg_lst9331 = prim_cdr(arglst9330);
void* lst = prim_car(arg_lst9331);
void* arg_lst9332 = prim_cdr(arg_lst9331);

//creating new closure instance
auto ptr10745 = reinterpret_cast<void (*)(void *, void *)>(&ptr10220);
env10219 = allocate_env_space(encode_int((s32)2));
void* id8688 = make_closure(reinterpret_cast<void *>(ptr10745), env10219);

//setting env list
set_env(env10219, encode_int((s32)1), kkont8454);
set_env(env10219, encode_int((s32)2), lst);



//creating new closure instance
auto ptr10746 = reinterpret_cast<void (*)(void *, void *)>(&ptr10222);
env10219 = allocate_env_space(encode_int((s32)9));
void* id8689 = make_closure(reinterpret_cast<void *>(ptr10746), env10219);

//setting env list
set_env(env10219, encode_int((s32)1), _u61);
set_env(env10219, encode_int((s32)2), cdar);
set_env(env10219, encode_int((s32)3), length);
set_env(env10219, encode_int((s32)4), null_u63);
set_env(env10219, encode_int((s32)5), car);
set_env(env10219, encode_int((s32)6), map1);
set_env(env10219, encode_int((s32)7), equal_u63);
set_env(env10219, encode_int((s32)8), op);
set_env(env10219, encode_int((s32)9), cdr);


void* oldarg9490 = encode_null();
void* newarg9491 = prim_cons(id8689, oldarg9490);
void* newarg9492 = prim_cons(id8688, newarg9491);

//app-clo
void* cloPtr10747 = get_closure_ptr(Ycomb);
void* procEnv10748 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10747);
function_ptr(procEnv10748, newarg9492);
}

void ptr10216(void* env10217, void* arglst9327)
{
void* cdr = get_env_value(env10217, encode_int((s32)11));
void* Ycomb = get_env_value(env10217, encode_int((s32)10));
void* op = get_env_value(env10217, encode_int((s32)9));
void* map1 = get_env_value(env10217, encode_int((s32)8));
void* car = get_env_value(env10217, encode_int((s32)7));
void* null_u63 = get_env_value(env10217, encode_int((s32)6));
void* length = get_env_value(env10217, encode_int((s32)5));
void* kkont8454 = get_env_value(env10217, encode_int((s32)4));
void* equal_u63 = get_env_value(env10217, encode_int((s32)3));
void* cdar = get_env_value(env10217, encode_int((s32)2));
void* _u61 = get_env_value(env10217, encode_int((s32)1));
void* letk8457 = prim_car(arglst9327);
void* arg_lst9328 = prim_cdr(arglst9327);
void* param_lst8237 = prim_car(arg_lst9328);
void* arg_lst9329 = prim_cdr(arg_lst9328);

//creating new closure instance
auto ptr10749 = reinterpret_cast<void (*)(void *, void *)>(&ptr10218);
env10217 = allocate_env_space(encode_int((s32)11));
void* id8686 = make_closure(reinterpret_cast<void *>(ptr10749), env10217);

//setting env list
set_env(env10217, encode_int((s32)1), _u61);
set_env(env10217, encode_int((s32)2), cdar);
set_env(env10217, encode_int((s32)3), equal_u63);
set_env(env10217, encode_int((s32)4), kkont8454);
set_env(env10217, encode_int((s32)5), length);
set_env(env10217, encode_int((s32)6), null_u63);
set_env(env10217, encode_int((s32)7), car);
set_env(env10217, encode_int((s32)8), map1);
set_env(env10217, encode_int((s32)9), op);
set_env(env10217, encode_int((s32)10), Ycomb);
set_env(env10217, encode_int((s32)11), cdr);


void* id8687 = encode_null();
void* oldarg9493 = encode_null();
void* newarg9494 = prim_cons(param_lst8237, oldarg9493);
void* newarg9495 = prim_cons(id8687, newarg9494);

//app-clo
void* cloPtr10750 = get_closure_ptr(id8686);
void* procEnv10751 = get_env(id8686);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10750);
function_ptr(procEnv10751, newarg9495);
}

void ptr10214(void* env10215, void* arglst9324)
{
void* cdr = get_env_value(env10215, encode_int((s32)11));
void* Ycomb = get_env_value(env10215, encode_int((s32)10));
void* map1 = get_env_value(env10215, encode_int((s32)9));
void* car = get_env_value(env10215, encode_int((s32)8));
void* null_u63 = get_env_value(env10215, encode_int((s32)7));
void* length = get_env_value(env10215, encode_int((s32)6));
void* kkont8454 = get_env_value(env10215, encode_int((s32)5));
void* equal_u63 = get_env_value(env10215, encode_int((s32)4));
void* param_lst8237 = get_env_value(env10215, encode_int((s32)3));
void* cdar = get_env_value(env10215, encode_int((s32)2));
void* _u61 = get_env_value(env10215, encode_int((s32)1));
void* letk8456 = prim_car(arglst9324);
void* arg_lst9325 = prim_cdr(arglst9324);
void* op = prim_car(arg_lst9325);
void* arg_lst9326 = prim_cdr(arg_lst9325);

//creating new closure instance
auto ptr10752 = reinterpret_cast<void (*)(void *, void *)>(&ptr10216);
env10215 = allocate_env_space(encode_int((s32)11));
void* id8685 = make_closure(reinterpret_cast<void *>(ptr10752), env10215);

//setting env list
set_env(env10215, encode_int((s32)1), _u61);
set_env(env10215, encode_int((s32)2), cdar);
set_env(env10215, encode_int((s32)3), equal_u63);
set_env(env10215, encode_int((s32)4), kkont8454);
set_env(env10215, encode_int((s32)5), length);
set_env(env10215, encode_int((s32)6), null_u63);
set_env(env10215, encode_int((s32)7), car);
set_env(env10215, encode_int((s32)8), map1);
set_env(env10215, encode_int((s32)9), op);
set_env(env10215, encode_int((s32)10), Ycomb);
set_env(env10215, encode_int((s32)11), cdr);


void* oldarg9496 = encode_null();
void* newarg9497 = prim_cons(param_lst8237, oldarg9496);
void* newarg9498 = prim_cons(id8685, newarg9497);

//app-clo
void* cloPtr10753 = get_closure_ptr(cdr);
void* procEnv10754 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10753);
function_ptr(procEnv10754, newarg9498);
}

void ptr10212(void* env10213, void* param_lst82378455)
{
void* cdr = get_env_value(env10213, encode_int((s32)9));
void* Ycomb = get_env_value(env10213, encode_int((s32)8));
void* equal_u63 = get_env_value(env10213, encode_int((s32)7));
void* map1 = get_env_value(env10213, encode_int((s32)6));
void* car = get_env_value(env10213, encode_int((s32)5));
void* null_u63 = get_env_value(env10213, encode_int((s32)4));
void* length = get_env_value(env10213, encode_int((s32)3));
void* cdar = get_env_value(env10213, encode_int((s32)2));
void* _u61 = get_env_value(env10213, encode_int((s32)1));
void* kkont8454 = prim_car(param_lst82378455);
void* param_lst8237 = prim_cdr(param_lst82378455);

//creating new closure instance
auto ptr10755 = reinterpret_cast<void (*)(void *, void *)>(&ptr10214);
env10213 = allocate_env_space(encode_int((s32)11));
void* id8684 = make_closure(reinterpret_cast<void *>(ptr10755), env10213);

//setting env list
set_env(env10213, encode_int((s32)1), _u61);
set_env(env10213, encode_int((s32)2), cdar);
set_env(env10213, encode_int((s32)3), param_lst8237);
set_env(env10213, encode_int((s32)4), equal_u63);
set_env(env10213, encode_int((s32)5), kkont8454);
set_env(env10213, encode_int((s32)6), length);
set_env(env10213, encode_int((s32)7), null_u63);
set_env(env10213, encode_int((s32)8), car);
set_env(env10213, encode_int((s32)9), map1);
set_env(env10213, encode_int((s32)10), Ycomb);
set_env(env10213, encode_int((s32)11), cdr);


void* oldarg9499 = encode_null();
void* newarg9500 = prim_cons(param_lst8237, oldarg9499);
void* newarg9501 = prim_cons(id8684, newarg9500);

//app-clo
void* cloPtr10756 = get_closure_ptr(car);
void* procEnv10757 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10756);
function_ptr(procEnv10757, newarg9501);
}

void ptr10210(void* env10211, void* arglst9321)
{
void* cdr = get_env_value(env10211, encode_int((s32)9));
void* Ycomb = get_env_value(env10211, encode_int((s32)8));
void* equal_u63 = get_env_value(env10211, encode_int((s32)7));
void* map1 = get_env_value(env10211, encode_int((s32)6));
void* car = get_env_value(env10211, encode_int((s32)5));
void* null_u63 = get_env_value(env10211, encode_int((s32)4));
void* length = get_env_value(env10211, encode_int((s32)3));
void* cdar = get_env_value(env10211, encode_int((s32)2));
void* _u61 = get_env_value(env10211, encode_int((s32)1));
void* kont8453 = prim_car(arglst9321);
void* arg_lst9322 = prim_cdr(arglst9321);
void* andmap = prim_car(arg_lst9322);
void* arg_lst9323 = prim_cdr(arg_lst9322);
void* id8682 = encode_null();

//creating new closure instance
auto ptr10758 = reinterpret_cast<void (*)(void *, void *)>(&ptr10212);
env10211 = allocate_env_space(encode_int((s32)9));
void* id8683 = make_closure(reinterpret_cast<void *>(ptr10758), env10211);

//setting env list
set_env(env10211, encode_int((s32)1), _u61);
set_env(env10211, encode_int((s32)2), cdar);
set_env(env10211, encode_int((s32)3), length);
set_env(env10211, encode_int((s32)4), null_u63);
set_env(env10211, encode_int((s32)5), car);
set_env(env10211, encode_int((s32)6), map1);
set_env(env10211, encode_int((s32)7), equal_u63);
set_env(env10211, encode_int((s32)8), Ycomb);
set_env(env10211, encode_int((s32)9), cdr);


void* oldarg9502 = encode_null();
void* newarg9503 = prim_cons(id8683, oldarg9502);
void* newarg9504 = prim_cons(id8682, newarg9503);

//app-clo
void* cloPtr10759 = get_closure_ptr(kont8453);
void* procEnv10760 = get_env(kont8453);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10759);
function_ptr(procEnv10760, newarg9504);
}

void ptr10298(void* env10299, void* arglst9265)
{
void* kkont8435 = get_env_value(env10299, encode_int((s32)2));
void* f = get_env_value(env10299, encode_int((s32)1));
void* letk8447 = prim_car(arglst9265);
void* arg_lst9266 = prim_cdr(arglst9265);
void* t8287 = prim_car(arg_lst9266);
void* arg_lst9267 = prim_cdr(arg_lst9266);
void* lst8448 = prim_cons(kkont8435, t8287);

//app-clo
void* cloPtr10761 = get_closure_ptr(f);
void* procEnv10762 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10761);
function_ptr(procEnv10762, lst8448);
}

void ptr10296(void* env10297, void* arglst9262)
{
void* append1 = get_env_value(env10297, encode_int((s32)4));
void* xs = get_env_value(env10297, encode_int((s32)3));
void* kkont8435 = get_env_value(env10297, encode_int((s32)2));
void* f = get_env_value(env10297, encode_int((s32)1));
void* letk8446 = prim_car(arglst9262);
void* arg_lst9263 = prim_cdr(arglst9262);
void* t8286 = prim_car(arg_lst9263);
void* arg_lst9264 = prim_cdr(arg_lst9263);

//creating new closure instance
auto ptr10763 = reinterpret_cast<void (*)(void *, void *)>(&ptr10298);
env10297 = allocate_env_space(encode_int((s32)2));
void* id8746 = make_closure(reinterpret_cast<void *>(ptr10763), env10297);

//setting env list
set_env(env10297, encode_int((s32)1), f);
set_env(env10297, encode_int((s32)2), kkont8435);


void* oldarg9268 = encode_null();
void* newarg9269 = prim_cons(t8286, oldarg9268);
void* newarg9270 = prim_cons(xs, newarg9269);
void* newarg9271 = prim_cons(id8746, newarg9270);

//app-clo
void* cloPtr10764 = get_closure_ptr(append1);
void* procEnv10765 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10764);
function_ptr(procEnv10765, newarg9271);
}

void ptr10294(void* env10295, void* arglst9259)
{
void* append1 = get_env_value(env10295, encode_int((s32)5));
void* cons = get_env_value(env10295, encode_int((s32)4));
void* xs = get_env_value(env10295, encode_int((s32)3));
void* kkont8435 = get_env_value(env10295, encode_int((s32)2));
void* f = get_env_value(env10295, encode_int((s32)1));
void* letk8445 = prim_car(arglst9259);
void* arg_lst9260 = prim_cdr(arglst9259);
void* acc_u43 = prim_car(arg_lst9260);
void* arg_lst9261 = prim_cdr(arg_lst9260);

//creating new closure instance
auto ptr10766 = reinterpret_cast<void (*)(void *, void *)>(&ptr10296);
env10295 = allocate_env_space(encode_int((s32)4));
void* id8744 = make_closure(reinterpret_cast<void *>(ptr10766), env10295);

//setting env list
set_env(env10295, encode_int((s32)1), f);
set_env(env10295, encode_int((s32)2), kkont8435);
set_env(env10295, encode_int((s32)3), xs);
set_env(env10295, encode_int((s32)4), append1);


void* id8745 = encode_null();
void* oldarg9272 = encode_null();
void* newarg9273 = prim_cons(id8745, oldarg9272);
void* newarg9274 = prim_cons(acc_u43, newarg9273);
void* newarg9275 = prim_cons(id8744, newarg9274);

//app-clo
void* cloPtr10767 = get_closure_ptr(cons);
void* procEnv10768 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10767);
function_ptr(procEnv10768, newarg9275);
}

void ptr10292(void* env10293, void* arglst9256)
{
void* foldr = get_env_value(env10293, encode_int((s32)6));
void* append1 = get_env_value(env10293, encode_int((s32)5));
void* cons = get_env_value(env10293, encode_int((s32)4));
void* xs = get_env_value(env10293, encode_int((s32)3));
void* kkont8435 = get_env_value(env10293, encode_int((s32)2));
void* f = get_env_value(env10293, encode_int((s32)1));
void* letk8451 = prim_car(arglst9256);
void* arg_lst9257 = prim_cdr(arglst9256);
void* t8285 = prim_car(arg_lst9257);
void* arg_lst9258 = prim_cdr(arg_lst9257);

//creating new closure instance
auto ptr10769 = reinterpret_cast<void (*)(void *, void *)>(&ptr10294);
env10293 = allocate_env_space(encode_int((s32)5));
void* id8743 = make_closure(reinterpret_cast<void *>(ptr10769), env10293);

//setting env list
set_env(env10293, encode_int((s32)1), f);
set_env(env10293, encode_int((s32)2), kkont8435);
set_env(env10293, encode_int((s32)3), xs);
set_env(env10293, encode_int((s32)4), cons);
set_env(env10293, encode_int((s32)5), append1);


void* lst8452 = prim_cons(id8743, t8285);

//app-clo
void* cloPtr10770 = get_closure_ptr(foldr);
void* procEnv10771 = get_env(foldr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10770);
function_ptr(procEnv10771, lst8452);
}

void ptr10290(void* env10291, void* arglst9253)
{
void* foldr = get_env_value(env10291, encode_int((s32)6));
void* append1 = get_env_value(env10291, encode_int((s32)5));
void* cons = get_env_value(env10291, encode_int((s32)4));
void* xs = get_env_value(env10291, encode_int((s32)3));
void* kkont8435 = get_env_value(env10291, encode_int((s32)2));
void* f = get_env_value(env10291, encode_int((s32)1));
void* letk8450 = prim_car(arglst9253);
void* arg_lst9254 = prim_cdr(arglst9253);
void* t8284 = prim_car(arg_lst9254);
void* arg_lst9255 = prim_cdr(arg_lst9254);

//creating new closure instance
auto ptr10772 = reinterpret_cast<void (*)(void *, void *)>(&ptr10292);
env10291 = allocate_env_space(encode_int((s32)6));
void* id8742 = make_closure(reinterpret_cast<void *>(ptr10772), env10291);

//setting env list
set_env(env10291, encode_int((s32)1), f);
set_env(env10291, encode_int((s32)2), kkont8435);
set_env(env10291, encode_int((s32)3), xs);
set_env(env10291, encode_int((s32)4), cons);
set_env(env10291, encode_int((s32)5), append1);
set_env(env10291, encode_int((s32)6), foldr);


void* oldarg9276 = encode_null();
void* newarg9277 = prim_cons(t8284, oldarg9276);
void* newarg9278 = prim_cons(f, newarg9277);
void* newarg9279 = prim_cons(id8742, newarg9278);

//app-clo
void* cloPtr10773 = get_closure_ptr(cons);
void* procEnv10774 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10773);
function_ptr(procEnv10774, newarg9279);
}

void ptr10288(void* env10289, void* arglst9250)
{
void* foldr = get_env_value(env10289, encode_int((s32)7));
void* cons = get_env_value(env10289, encode_int((s32)6));
void* xs = get_env_value(env10289, encode_int((s32)5));
void* kkont8435 = get_env_value(env10289, encode_int((s32)4));
void* f = get_env_value(env10289, encode_int((s32)3));
void* acc = get_env_value(env10289, encode_int((s32)2));
void* append1 = get_env_value(env10289, encode_int((s32)1));
void* letk8449 = prim_car(arglst9250);
void* arg_lst9251 = prim_cdr(arglst9250);
void* t8283 = prim_car(arg_lst9251);
void* arg_lst9252 = prim_cdr(arg_lst9251);

//creating new closure instance
auto ptr10775 = reinterpret_cast<void (*)(void *, void *)>(&ptr10290);
env10289 = allocate_env_space(encode_int((s32)6));
void* id8741 = make_closure(reinterpret_cast<void *>(ptr10775), env10289);

//setting env list
set_env(env10289, encode_int((s32)1), f);
set_env(env10289, encode_int((s32)2), kkont8435);
set_env(env10289, encode_int((s32)3), xs);
set_env(env10289, encode_int((s32)4), cons);
set_env(env10289, encode_int((s32)5), append1);
set_env(env10289, encode_int((s32)6), foldr);


void* oldarg9280 = encode_null();
void* newarg9281 = prim_cons(t8283, oldarg9280);
void* newarg9282 = prim_cons(acc, newarg9281);
void* newarg9283 = prim_cons(id8741, newarg9282);

//app-clo
void* cloPtr10776 = get_closure_ptr(cons);
void* procEnv10777 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10776);
function_ptr(procEnv10777, newarg9283);
}

void ptr10286(void* env10287, void* arglst9247)
{
void* foldr = get_env_value(env10287, encode_int((s32)7));
void* cons = get_env_value(env10287, encode_int((s32)6));
void* xs = get_env_value(env10287, encode_int((s32)5));
void* kkont8435 = get_env_value(env10287, encode_int((s32)4));
void* f = get_env_value(env10287, encode_int((s32)3));
void* acc = get_env_value(env10287, encode_int((s32)2));
void* append1 = get_env_value(env10287, encode_int((s32)1));
void* letk8444 = prim_car(arglst9247);
void* arg_lst9248 = prim_cdr(arglst9247);
void* rsts = prim_car(arg_lst9248);
void* arg_lst9249 = prim_cdr(arg_lst9248);

//creating new closure instance
auto ptr10778 = reinterpret_cast<void (*)(void *, void *)>(&ptr10288);
env10287 = allocate_env_space(encode_int((s32)7));
void* id8739 = make_closure(reinterpret_cast<void *>(ptr10778), env10287);

//setting env list
set_env(env10287, encode_int((s32)1), append1);
set_env(env10287, encode_int((s32)2), acc);
set_env(env10287, encode_int((s32)3), f);
set_env(env10287, encode_int((s32)4), kkont8435);
set_env(env10287, encode_int((s32)5), xs);
set_env(env10287, encode_int((s32)6), cons);
set_env(env10287, encode_int((s32)7), foldr);


void* id8740 = encode_null();
void* oldarg9284 = encode_null();
void* newarg9285 = prim_cons(id8740, oldarg9284);
void* newarg9286 = prim_cons(rsts, newarg9285);
void* newarg9287 = prim_cons(id8739, newarg9286);

//app-clo
void* cloPtr10779 = get_closure_ptr(append1);
void* procEnv10780 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10779);
function_ptr(procEnv10780, newarg9287);
}

void ptr10284(void* env10285, void* arglst9244)
{
void* cdr = get_env_value(env10285, encode_int((s32)9));
void* foldr = get_env_value(env10285, encode_int((s32)8));
void* cons = get_env_value(env10285, encode_int((s32)7));
void* kkont8435 = get_env_value(env10285, encode_int((s32)6));
void* f = get_env_value(env10285, encode_int((s32)5));
void* acc = get_env_value(env10285, encode_int((s32)4));
void* append1 = get_env_value(env10285, encode_int((s32)3));
void* map1 = get_env_value(env10285, encode_int((s32)2));
void* lsts = get_env_value(env10285, encode_int((s32)1));
void* letk8443 = prim_car(arglst9244);
void* arg_lst9245 = prim_cdr(arglst9244);
void* xs = prim_car(arg_lst9245);
void* arg_lst9246 = prim_cdr(arg_lst9245);

//creating new closure instance
auto ptr10781 = reinterpret_cast<void (*)(void *, void *)>(&ptr10286);
env10285 = allocate_env_space(encode_int((s32)7));
void* id8738 = make_closure(reinterpret_cast<void *>(ptr10781), env10285);

//setting env list
set_env(env10285, encode_int((s32)1), append1);
set_env(env10285, encode_int((s32)2), acc);
set_env(env10285, encode_int((s32)3), f);
set_env(env10285, encode_int((s32)4), kkont8435);
set_env(env10285, encode_int((s32)5), xs);
set_env(env10285, encode_int((s32)6), cons);
set_env(env10285, encode_int((s32)7), foldr);


void* oldarg9288 = encode_null();
void* newarg9289 = prim_cons(lsts, oldarg9288);
void* newarg9290 = prim_cons(cdr, newarg9289);
void* newarg9291 = prim_cons(id8738, newarg9290);

//app-clo
void* cloPtr10782 = get_closure_ptr(map1);
void* procEnv10783 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10782);
function_ptr(procEnv10783, newarg9291);
}

void ptr10282(void* env10283, void* arglst9238)
{
void* cdr = get_env_value(env10283, encode_int((s32)10));
void* foldr = get_env_value(env10283, encode_int((s32)9));
void* car = get_env_value(env10283, encode_int((s32)8));
void* cons = get_env_value(env10283, encode_int((s32)7));
void* kkont8435 = get_env_value(env10283, encode_int((s32)6));
void* f = get_env_value(env10283, encode_int((s32)5));
void* acc = get_env_value(env10283, encode_int((s32)4));
void* append1 = get_env_value(env10283, encode_int((s32)3));
void* map1 = get_env_value(env10283, encode_int((s32)2));
void* lsts = get_env_value(env10283, encode_int((s32)1));
void* letk8442 = prim_car(arglst9238);
void* arg_lst9239 = prim_cdr(arglst9238);
void* t8282 = prim_car(arg_lst9239);
void* arg_lst9240 = prim_cdr(arg_lst9239);

//if-clause
u64 if_guard10784 = reinterpret_cast<u64>(is_true(t8282));
if(if_guard10784 == 1)
{
void* id8736 = encode_null();
void* oldarg9241 = encode_null();
void* newarg9242 = prim_cons(acc, oldarg9241);
void* newarg9243 = prim_cons(id8736, newarg9242);

//app-clo
void* cloPtr10785 = get_closure_ptr(kkont8435);
void* procEnv10786 = get_env(kkont8435);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10785);
function_ptr(procEnv10786, newarg9243);
}
else
{

//creating new closure instance
auto ptr10787 = reinterpret_cast<void (*)(void *, void *)>(&ptr10284);
env10283 = allocate_env_space(encode_int((s32)9));
void* id8737 = make_closure(reinterpret_cast<void *>(ptr10787), env10283);

//setting env list
set_env(env10283, encode_int((s32)1), lsts);
set_env(env10283, encode_int((s32)2), map1);
set_env(env10283, encode_int((s32)3), append1);
set_env(env10283, encode_int((s32)4), acc);
set_env(env10283, encode_int((s32)5), f);
set_env(env10283, encode_int((s32)6), kkont8435);
set_env(env10283, encode_int((s32)7), cons);
set_env(env10283, encode_int((s32)8), foldr);
set_env(env10283, encode_int((s32)9), cdr);


void* oldarg9292 = encode_null();
void* newarg9293 = prim_cons(lsts, oldarg9292);
void* newarg9294 = prim_cons(car, newarg9293);
void* newarg9295 = prim_cons(id8737, newarg9294);

//app-clo
void* cloPtr10788 = get_closure_ptr(map1);
void* procEnv10789 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10788);
function_ptr(procEnv10789, newarg9295);
}

}

void ptr10280(void* env10281, void* arglst9235)
{
void* cdr = get_env_value(env10281, encode_int((s32)11));
void* foldr = get_env_value(env10281, encode_int((s32)10));
void* ormap = get_env_value(env10281, encode_int((s32)9));
void* map1 = get_env_value(env10281, encode_int((s32)8));
void* car = get_env_value(env10281, encode_int((s32)7));
void* cons = get_env_value(env10281, encode_int((s32)6));
void* kkont8435 = get_env_value(env10281, encode_int((s32)5));
void* f = get_env_value(env10281, encode_int((s32)4));
void* null_u63 = get_env_value(env10281, encode_int((s32)3));
void* acc = get_env_value(env10281, encode_int((s32)2));
void* append1 = get_env_value(env10281, encode_int((s32)1));
void* letk8441 = prim_car(arglst9235);
void* arg_lst9236 = prim_cdr(arglst9235);
void* lsts = prim_car(arg_lst9236);
void* arg_lst9237 = prim_cdr(arg_lst9236);

//creating new closure instance
auto ptr10790 = reinterpret_cast<void (*)(void *, void *)>(&ptr10282);
env10281 = allocate_env_space(encode_int((s32)10));
void* id8735 = make_closure(reinterpret_cast<void *>(ptr10790), env10281);

//setting env list
set_env(env10281, encode_int((s32)1), lsts);
set_env(env10281, encode_int((s32)2), map1);
set_env(env10281, encode_int((s32)3), append1);
set_env(env10281, encode_int((s32)4), acc);
set_env(env10281, encode_int((s32)5), f);
set_env(env10281, encode_int((s32)6), kkont8435);
set_env(env10281, encode_int((s32)7), cons);
set_env(env10281, encode_int((s32)8), car);
set_env(env10281, encode_int((s32)9), foldr);
set_env(env10281, encode_int((s32)10), cdr);


void* oldarg9296 = encode_null();
void* newarg9297 = prim_cons(lsts, oldarg9296);
void* newarg9298 = prim_cons(null_u63, newarg9297);
void* newarg9299 = prim_cons(id8735, newarg9298);

//app-clo
void* cloPtr10791 = get_closure_ptr(ormap);
void* procEnv10792 = get_env(ormap);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10791);
function_ptr(procEnv10792, newarg9299);
}

void ptr10278(void* env10279, void* arglst9232)
{
void* cdr = get_env_value(env10279, encode_int((s32)11));
void* foldr = get_env_value(env10279, encode_int((s32)10));
void* ormap = get_env_value(env10279, encode_int((s32)9));
void* map1 = get_env_value(env10279, encode_int((s32)8));
void* car = get_env_value(env10279, encode_int((s32)7));
void* cons = get_env_value(env10279, encode_int((s32)6));
void* kkont8435 = get_env_value(env10279, encode_int((s32)5));
void* f = get_env_value(env10279, encode_int((s32)4));
void* null_u63 = get_env_value(env10279, encode_int((s32)3));
void* acc = get_env_value(env10279, encode_int((s32)2));
void* append1 = get_env_value(env10279, encode_int((s32)1));
void* letk8440 = prim_car(arglst9232);
void* arg_lst9233 = prim_cdr(arglst9232);
void* param_lst8239 = prim_car(arg_lst9233);
void* arg_lst9234 = prim_cdr(arg_lst9233);

//creating new closure instance
auto ptr10793 = reinterpret_cast<void (*)(void *, void *)>(&ptr10280);
env10279 = allocate_env_space(encode_int((s32)11));
void* id8733 = make_closure(reinterpret_cast<void *>(ptr10793), env10279);

//setting env list
set_env(env10279, encode_int((s32)1), append1);
set_env(env10279, encode_int((s32)2), acc);
set_env(env10279, encode_int((s32)3), null_u63);
set_env(env10279, encode_int((s32)4), f);
set_env(env10279, encode_int((s32)5), kkont8435);
set_env(env10279, encode_int((s32)6), cons);
set_env(env10279, encode_int((s32)7), car);
set_env(env10279, encode_int((s32)8), map1);
set_env(env10279, encode_int((s32)9), ormap);
set_env(env10279, encode_int((s32)10), foldr);
set_env(env10279, encode_int((s32)11), cdr);


void* id8734 = encode_null();
void* oldarg9300 = encode_null();
void* newarg9301 = prim_cons(param_lst8239, oldarg9300);
void* newarg9302 = prim_cons(id8734, newarg9301);

//app-clo
void* cloPtr10794 = get_closure_ptr(id8733);
void* procEnv10795 = get_env(id8733);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10794);
function_ptr(procEnv10795, newarg9302);
}

void ptr10276(void* env10277, void* arglst9229)
{
void* cdr = get_env_value(env10277, encode_int((s32)11));
void* param_lst8239 = get_env_value(env10277, encode_int((s32)10));
void* foldr = get_env_value(env10277, encode_int((s32)9));
void* ormap = get_env_value(env10277, encode_int((s32)8));
void* append1 = get_env_value(env10277, encode_int((s32)7));
void* map1 = get_env_value(env10277, encode_int((s32)6));
void* car = get_env_value(env10277, encode_int((s32)5));
void* cons = get_env_value(env10277, encode_int((s32)4));
void* kkont8435 = get_env_value(env10277, encode_int((s32)3));
void* f = get_env_value(env10277, encode_int((s32)2));
void* null_u63 = get_env_value(env10277, encode_int((s32)1));
void* letk8439 = prim_car(arglst9229);
void* arg_lst9230 = prim_cdr(arglst9229);
void* acc = prim_car(arg_lst9230);
void* arg_lst9231 = prim_cdr(arg_lst9230);

//creating new closure instance
auto ptr10796 = reinterpret_cast<void (*)(void *, void *)>(&ptr10278);
env10277 = allocate_env_space(encode_int((s32)11));
void* id8732 = make_closure(reinterpret_cast<void *>(ptr10796), env10277);

//setting env list
set_env(env10277, encode_int((s32)1), append1);
set_env(env10277, encode_int((s32)2), acc);
set_env(env10277, encode_int((s32)3), null_u63);
set_env(env10277, encode_int((s32)4), f);
set_env(env10277, encode_int((s32)5), kkont8435);
set_env(env10277, encode_int((s32)6), cons);
set_env(env10277, encode_int((s32)7), car);
set_env(env10277, encode_int((s32)8), map1);
set_env(env10277, encode_int((s32)9), ormap);
set_env(env10277, encode_int((s32)10), foldr);
set_env(env10277, encode_int((s32)11), cdr);


void* oldarg9303 = encode_null();
void* newarg9304 = prim_cons(param_lst8239, oldarg9303);
void* newarg9305 = prim_cons(id8732, newarg9304);

//app-clo
void* cloPtr10797 = get_closure_ptr(cdr);
void* procEnv10798 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10797);
function_ptr(procEnv10798, newarg9305);
}

void ptr10274(void* env10275, void* arglst9226)
{
void* cdr = get_env_value(env10275, encode_int((s32)10));
void* foldr = get_env_value(env10275, encode_int((s32)9));
void* ormap = get_env_value(env10275, encode_int((s32)8));
void* append1 = get_env_value(env10275, encode_int((s32)7));
void* map1 = get_env_value(env10275, encode_int((s32)6));
void* car = get_env_value(env10275, encode_int((s32)5));
void* cons = get_env_value(env10275, encode_int((s32)4));
void* kkont8435 = get_env_value(env10275, encode_int((s32)3));
void* f = get_env_value(env10275, encode_int((s32)2));
void* null_u63 = get_env_value(env10275, encode_int((s32)1));
void* letk8438 = prim_car(arglst9226);
void* arg_lst9227 = prim_cdr(arglst9226);
void* param_lst8239 = prim_car(arg_lst9227);
void* arg_lst9228 = prim_cdr(arg_lst9227);

//creating new closure instance
auto ptr10799 = reinterpret_cast<void (*)(void *, void *)>(&ptr10276);
env10275 = allocate_env_space(encode_int((s32)11));
void* id8731 = make_closure(reinterpret_cast<void *>(ptr10799), env10275);

//setting env list
set_env(env10275, encode_int((s32)1), null_u63);
set_env(env10275, encode_int((s32)2), f);
set_env(env10275, encode_int((s32)3), kkont8435);
set_env(env10275, encode_int((s32)4), cons);
set_env(env10275, encode_int((s32)5), car);
set_env(env10275, encode_int((s32)6), map1);
set_env(env10275, encode_int((s32)7), append1);
set_env(env10275, encode_int((s32)8), ormap);
set_env(env10275, encode_int((s32)9), foldr);
set_env(env10275, encode_int((s32)10), param_lst8239);
set_env(env10275, encode_int((s32)11), cdr);


void* oldarg9306 = encode_null();
void* newarg9307 = prim_cons(param_lst8239, oldarg9306);
void* newarg9308 = prim_cons(id8731, newarg9307);

//app-clo
void* cloPtr10800 = get_closure_ptr(car);
void* procEnv10801 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10800);
function_ptr(procEnv10801, newarg9308);
}

void ptr10272(void* env10273, void* arglst9223)
{
void* cdr = get_env_value(env10273, encode_int((s32)10));
void* param_lst8239 = get_env_value(env10273, encode_int((s32)9));
void* foldr = get_env_value(env10273, encode_int((s32)8));
void* ormap = get_env_value(env10273, encode_int((s32)7));
void* append1 = get_env_value(env10273, encode_int((s32)6));
void* map1 = get_env_value(env10273, encode_int((s32)5));
void* car = get_env_value(env10273, encode_int((s32)4));
void* cons = get_env_value(env10273, encode_int((s32)3));
void* kkont8435 = get_env_value(env10273, encode_int((s32)2));
void* null_u63 = get_env_value(env10273, encode_int((s32)1));
void* letk8437 = prim_car(arglst9223);
void* arg_lst9224 = prim_cdr(arglst9223);
void* f = prim_car(arg_lst9224);
void* arg_lst9225 = prim_cdr(arg_lst9224);

//creating new closure instance
auto ptr10802 = reinterpret_cast<void (*)(void *, void *)>(&ptr10274);
env10273 = allocate_env_space(encode_int((s32)10));
void* id8730 = make_closure(reinterpret_cast<void *>(ptr10802), env10273);

//setting env list
set_env(env10273, encode_int((s32)1), null_u63);
set_env(env10273, encode_int((s32)2), f);
set_env(env10273, encode_int((s32)3), kkont8435);
set_env(env10273, encode_int((s32)4), cons);
set_env(env10273, encode_int((s32)5), car);
set_env(env10273, encode_int((s32)6), map1);
set_env(env10273, encode_int((s32)7), append1);
set_env(env10273, encode_int((s32)8), ormap);
set_env(env10273, encode_int((s32)9), foldr);
set_env(env10273, encode_int((s32)10), cdr);


void* oldarg9309 = encode_null();
void* newarg9310 = prim_cons(param_lst8239, oldarg9309);
void* newarg9311 = prim_cons(id8730, newarg9310);

//app-clo
void* cloPtr10803 = get_closure_ptr(cdr);
void* procEnv10804 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10803);
function_ptr(procEnv10804, newarg9311);
}

void ptr10270(void* env10271, void* param_lst82398436)
{
void* cdr = get_env_value(env10271, encode_int((s32)8));
void* foldr = get_env_value(env10271, encode_int((s32)7));
void* null_u63 = get_env_value(env10271, encode_int((s32)6));
void* ormap = get_env_value(env10271, encode_int((s32)5));
void* append1 = get_env_value(env10271, encode_int((s32)4));
void* map1 = get_env_value(env10271, encode_int((s32)3));
void* car = get_env_value(env10271, encode_int((s32)2));
void* cons = get_env_value(env10271, encode_int((s32)1));
void* kkont8435 = prim_car(param_lst82398436);
void* param_lst8239 = prim_cdr(param_lst82398436);

//creating new closure instance
auto ptr10805 = reinterpret_cast<void (*)(void *, void *)>(&ptr10272);
env10271 = allocate_env_space(encode_int((s32)10));
void* id8729 = make_closure(reinterpret_cast<void *>(ptr10805), env10271);

//setting env list
set_env(env10271, encode_int((s32)1), null_u63);
set_env(env10271, encode_int((s32)2), kkont8435);
set_env(env10271, encode_int((s32)3), cons);
set_env(env10271, encode_int((s32)4), car);
set_env(env10271, encode_int((s32)5), map1);
set_env(env10271, encode_int((s32)6), append1);
set_env(env10271, encode_int((s32)7), ormap);
set_env(env10271, encode_int((s32)8), foldr);
set_env(env10271, encode_int((s32)9), param_lst8239);
set_env(env10271, encode_int((s32)10), cdr);


void* oldarg9312 = encode_null();
void* newarg9313 = prim_cons(param_lst8239, oldarg9312);
void* newarg9314 = prim_cons(id8729, newarg9313);

//app-clo
void* cloPtr10806 = get_closure_ptr(car);
void* procEnv10807 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10806);
function_ptr(procEnv10807, newarg9314);
}

void ptr10268(void* env10269, void* arglst9220)
{
void* cdr = get_env_value(env10269, encode_int((s32)7));
void* null_u63 = get_env_value(env10269, encode_int((s32)6));
void* ormap = get_env_value(env10269, encode_int((s32)5));
void* append1 = get_env_value(env10269, encode_int((s32)4));
void* map1 = get_env_value(env10269, encode_int((s32)3));
void* car = get_env_value(env10269, encode_int((s32)2));
void* cons = get_env_value(env10269, encode_int((s32)1));
void* kont8434 = prim_car(arglst9220);
void* arg_lst9221 = prim_cdr(arglst9220);
void* foldr = prim_car(arg_lst9221);
void* arg_lst9222 = prim_cdr(arg_lst9221);
void* id8727 = encode_null();

//creating new closure instance
auto ptr10808 = reinterpret_cast<void (*)(void *, void *)>(&ptr10270);
env10269 = allocate_env_space(encode_int((s32)8));
void* id8728 = make_closure(reinterpret_cast<void *>(ptr10808), env10269);

//setting env list
set_env(env10269, encode_int((s32)1), cons);
set_env(env10269, encode_int((s32)2), car);
set_env(env10269, encode_int((s32)3), map1);
set_env(env10269, encode_int((s32)4), append1);
set_env(env10269, encode_int((s32)5), ormap);
set_env(env10269, encode_int((s32)6), null_u63);
set_env(env10269, encode_int((s32)7), foldr);
set_env(env10269, encode_int((s32)8), cdr);


void* oldarg9315 = encode_null();
void* newarg9316 = prim_cons(id8728, oldarg9315);
void* newarg9317 = prim_cons(id8727, newarg9316);

//app-clo
void* cloPtr10809 = get_closure_ptr(kont8434);
void* procEnv10810 = get_env(kont8434);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10809);
function_ptr(procEnv10810, newarg9317);
}

void ptr10332(void* env10333, void* arglst9164)
{
void* kkont8416 = get_env_value(env10333, encode_int((s32)2));
void* foldl = get_env_value(env10333, encode_int((s32)1));
void* letk8429 = prim_car(arglst9164);
void* arg_lst9165 = prim_cdr(arglst9164);
void* t8293 = prim_car(arg_lst9165);
void* arg_lst9166 = prim_cdr(arg_lst9165);
void* lst8430 = prim_cons(kkont8416, t8293);

//app-clo
void* cloPtr10811 = get_closure_ptr(foldl);
void* procEnv10812 = get_env(foldl);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10811);
function_ptr(procEnv10812, lst8430);
}

void ptr10330(void* env10331, void* arglst9161)
{
void* kkont8416 = get_env_value(env10331, encode_int((s32)4));
void* f = get_env_value(env10331, encode_int((s32)3));
void* cons = get_env_value(env10331, encode_int((s32)2));
void* foldl = get_env_value(env10331, encode_int((s32)1));
void* letk8428 = prim_car(arglst9161);
void* arg_lst9162 = prim_cdr(arglst9161);
void* t8292 = prim_car(arg_lst9162);
void* arg_lst9163 = prim_cdr(arg_lst9162);

//creating new closure instance
auto ptr10813 = reinterpret_cast<void (*)(void *, void *)>(&ptr10332);
env10331 = allocate_env_space(encode_int((s32)2));
void* id8768 = make_closure(reinterpret_cast<void *>(ptr10813), env10331);

//setting env list
set_env(env10331, encode_int((s32)1), foldl);
set_env(env10331, encode_int((s32)2), kkont8416);


void* oldarg9167 = encode_null();
void* newarg9168 = prim_cons(t8292, oldarg9167);
void* newarg9169 = prim_cons(f, newarg9168);
void* newarg9170 = prim_cons(id8768, newarg9169);

//app-clo
void* cloPtr10814 = get_closure_ptr(cons);
void* procEnv10815 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10814);
function_ptr(procEnv10815, newarg9170);
}

void ptr10328(void* env10329, void* arglst9158)
{
void* kkont8416 = get_env_value(env10329, encode_int((s32)5));
void* f = get_env_value(env10329, encode_int((s32)4));
void* acc_u43 = get_env_value(env10329, encode_int((s32)3));
void* cons = get_env_value(env10329, encode_int((s32)2));
void* foldl = get_env_value(env10329, encode_int((s32)1));
void* letk8427 = prim_car(arglst9158);
void* arg_lst9159 = prim_cdr(arglst9158);
void* t8291 = prim_car(arg_lst9159);
void* arg_lst9160 = prim_cdr(arg_lst9159);

//creating new closure instance
auto ptr10816 = reinterpret_cast<void (*)(void *, void *)>(&ptr10330);
env10329 = allocate_env_space(encode_int((s32)4));
void* id8767 = make_closure(reinterpret_cast<void *>(ptr10816), env10329);

//setting env list
set_env(env10329, encode_int((s32)1), foldl);
set_env(env10329, encode_int((s32)2), cons);
set_env(env10329, encode_int((s32)3), f);
set_env(env10329, encode_int((s32)4), kkont8416);


void* oldarg9171 = encode_null();
void* newarg9172 = prim_cons(t8291, oldarg9171);
void* newarg9173 = prim_cons(acc_u43, newarg9172);
void* newarg9174 = prim_cons(id8767, newarg9173);

//app-clo
void* cloPtr10817 = get_closure_ptr(cons);
void* procEnv10818 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10817);
function_ptr(procEnv10818, newarg9174);
}

void ptr10326(void* env10327, void* arglst9155)
{
void* kkont8416 = get_env_value(env10327, encode_int((s32)6));
void* f = get_env_value(env10327, encode_int((s32)5));
void* append1 = get_env_value(env10327, encode_int((s32)4));
void* rsts = get_env_value(env10327, encode_int((s32)3));
void* cons = get_env_value(env10327, encode_int((s32)2));
void* foldl = get_env_value(env10327, encode_int((s32)1));
void* letk8426 = prim_car(arglst9155);
void* arg_lst9156 = prim_cdr(arglst9155);
void* acc_u43 = prim_car(arg_lst9156);
void* arg_lst9157 = prim_cdr(arg_lst9156);

//creating new closure instance
auto ptr10819 = reinterpret_cast<void (*)(void *, void *)>(&ptr10328);
env10327 = allocate_env_space(encode_int((s32)5));
void* id8765 = make_closure(reinterpret_cast<void *>(ptr10819), env10327);

//setting env list
set_env(env10327, encode_int((s32)1), foldl);
set_env(env10327, encode_int((s32)2), cons);
set_env(env10327, encode_int((s32)3), acc_u43);
set_env(env10327, encode_int((s32)4), f);
set_env(env10327, encode_int((s32)5), kkont8416);


void* id8766 = encode_null();
void* oldarg9175 = encode_null();
void* newarg9176 = prim_cons(id8766, oldarg9175);
void* newarg9177 = prim_cons(rsts, newarg9176);
void* newarg9178 = prim_cons(id8765, newarg9177);

//app-clo
void* cloPtr10820 = get_closure_ptr(append1);
void* procEnv10821 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10820);
function_ptr(procEnv10821, newarg9178);
}

void ptr10324(void* env10325, void* arglst9152)
{
void* kkont8416 = get_env_value(env10325, encode_int((s32)6));
void* f = get_env_value(env10325, encode_int((s32)5));
void* append1 = get_env_value(env10325, encode_int((s32)4));
void* rsts = get_env_value(env10325, encode_int((s32)3));
void* cons = get_env_value(env10325, encode_int((s32)2));
void* foldl = get_env_value(env10325, encode_int((s32)1));
void* letk8432 = prim_car(arglst9152);
void* arg_lst9153 = prim_cdr(arglst9152);
void* t8290 = prim_car(arg_lst9153);
void* arg_lst9154 = prim_cdr(arg_lst9153);

//creating new closure instance
auto ptr10822 = reinterpret_cast<void (*)(void *, void *)>(&ptr10326);
env10325 = allocate_env_space(encode_int((s32)6));
void* id8764 = make_closure(reinterpret_cast<void *>(ptr10822), env10325);

//setting env list
set_env(env10325, encode_int((s32)1), foldl);
set_env(env10325, encode_int((s32)2), cons);
set_env(env10325, encode_int((s32)3), rsts);
set_env(env10325, encode_int((s32)4), append1);
set_env(env10325, encode_int((s32)5), f);
set_env(env10325, encode_int((s32)6), kkont8416);


void* lst8433 = prim_cons(id8764, t8290);

//app-clo
void* cloPtr10823 = get_closure_ptr(f);
void* procEnv10824 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10823);
function_ptr(procEnv10824, lst8433);
}

void ptr10322(void* env10323, void* arglst9149)
{
void* kkont8416 = get_env_value(env10323, encode_int((s32)7));
void* f = get_env_value(env10323, encode_int((s32)6));
void* xs = get_env_value(env10323, encode_int((s32)5));
void* append1 = get_env_value(env10323, encode_int((s32)4));
void* rsts = get_env_value(env10323, encode_int((s32)3));
void* cons = get_env_value(env10323, encode_int((s32)2));
void* foldl = get_env_value(env10323, encode_int((s32)1));
void* letk8431 = prim_car(arglst9149);
void* arg_lst9150 = prim_cdr(arglst9149);
void* t8289 = prim_car(arg_lst9150);
void* arg_lst9151 = prim_cdr(arg_lst9150);

//creating new closure instance
auto ptr10825 = reinterpret_cast<void (*)(void *, void *)>(&ptr10324);
env10323 = allocate_env_space(encode_int((s32)6));
void* id8763 = make_closure(reinterpret_cast<void *>(ptr10825), env10323);

//setting env list
set_env(env10323, encode_int((s32)1), foldl);
set_env(env10323, encode_int((s32)2), cons);
set_env(env10323, encode_int((s32)3), rsts);
set_env(env10323, encode_int((s32)4), append1);
set_env(env10323, encode_int((s32)5), f);
set_env(env10323, encode_int((s32)6), kkont8416);


void* oldarg9179 = encode_null();
void* newarg9180 = prim_cons(t8289, oldarg9179);
void* newarg9181 = prim_cons(xs, newarg9180);
void* newarg9182 = prim_cons(id8763, newarg9181);

//app-clo
void* cloPtr10826 = get_closure_ptr(append1);
void* procEnv10827 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10826);
function_ptr(procEnv10827, newarg9182);
}

void ptr10320(void* env10321, void* arglst9146)
{
void* kkont8416 = get_env_value(env10321, encode_int((s32)7));
void* f = get_env_value(env10321, encode_int((s32)6));
void* xs = get_env_value(env10321, encode_int((s32)5));
void* acc = get_env_value(env10321, encode_int((s32)4));
void* append1 = get_env_value(env10321, encode_int((s32)3));
void* cons = get_env_value(env10321, encode_int((s32)2));
void* foldl = get_env_value(env10321, encode_int((s32)1));
void* letk8425 = prim_car(arglst9146);
void* arg_lst9147 = prim_cdr(arglst9146);
void* rsts = prim_car(arg_lst9147);
void* arg_lst9148 = prim_cdr(arg_lst9147);

//creating new closure instance
auto ptr10828 = reinterpret_cast<void (*)(void *, void *)>(&ptr10322);
env10321 = allocate_env_space(encode_int((s32)7));
void* id8761 = make_closure(reinterpret_cast<void *>(ptr10828), env10321);

//setting env list
set_env(env10321, encode_int((s32)1), foldl);
set_env(env10321, encode_int((s32)2), cons);
set_env(env10321, encode_int((s32)3), rsts);
set_env(env10321, encode_int((s32)4), append1);
set_env(env10321, encode_int((s32)5), xs);
set_env(env10321, encode_int((s32)6), f);
set_env(env10321, encode_int((s32)7), kkont8416);


void* id8762 = encode_null();
void* oldarg9183 = encode_null();
void* newarg9184 = prim_cons(id8762, oldarg9183);
void* newarg9185 = prim_cons(acc, newarg9184);
void* newarg9186 = prim_cons(id8761, newarg9185);

//app-clo
void* cloPtr10829 = get_closure_ptr(cons);
void* procEnv10830 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10829);
function_ptr(procEnv10830, newarg9186);
}

void ptr10318(void* env10319, void* arglst9143)
{
void* cdr = get_env_value(env10319, encode_int((s32)9));
void* kkont8416 = get_env_value(env10319, encode_int((s32)8));
void* f = get_env_value(env10319, encode_int((s32)7));
void* acc = get_env_value(env10319, encode_int((s32)6));
void* append1 = get_env_value(env10319, encode_int((s32)5));
void* map1 = get_env_value(env10319, encode_int((s32)4));
void* lsts = get_env_value(env10319, encode_int((s32)3));
void* cons = get_env_value(env10319, encode_int((s32)2));
void* foldl = get_env_value(env10319, encode_int((s32)1));
void* letk8424 = prim_car(arglst9143);
void* arg_lst9144 = prim_cdr(arglst9143);
void* xs = prim_car(arg_lst9144);
void* arg_lst9145 = prim_cdr(arg_lst9144);

//creating new closure instance
auto ptr10831 = reinterpret_cast<void (*)(void *, void *)>(&ptr10320);
env10319 = allocate_env_space(encode_int((s32)7));
void* id8760 = make_closure(reinterpret_cast<void *>(ptr10831), env10319);

//setting env list
set_env(env10319, encode_int((s32)1), foldl);
set_env(env10319, encode_int((s32)2), cons);
set_env(env10319, encode_int((s32)3), append1);
set_env(env10319, encode_int((s32)4), acc);
set_env(env10319, encode_int((s32)5), xs);
set_env(env10319, encode_int((s32)6), f);
set_env(env10319, encode_int((s32)7), kkont8416);


void* oldarg9187 = encode_null();
void* newarg9188 = prim_cons(lsts, oldarg9187);
void* newarg9189 = prim_cons(cdr, newarg9188);
void* newarg9190 = prim_cons(id8760, newarg9189);

//app-clo
void* cloPtr10832 = get_closure_ptr(map1);
void* procEnv10833 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10832);
function_ptr(procEnv10833, newarg9190);
}

void ptr10316(void* env10317, void* arglst9137)
{
void* cdr = get_env_value(env10317, encode_int((s32)10));
void* kkont8416 = get_env_value(env10317, encode_int((s32)9));
void* f = get_env_value(env10317, encode_int((s32)8));
void* car = get_env_value(env10317, encode_int((s32)7));
void* acc = get_env_value(env10317, encode_int((s32)6));
void* append1 = get_env_value(env10317, encode_int((s32)5));
void* map1 = get_env_value(env10317, encode_int((s32)4));
void* lsts = get_env_value(env10317, encode_int((s32)3));
void* cons = get_env_value(env10317, encode_int((s32)2));
void* foldl = get_env_value(env10317, encode_int((s32)1));
void* letk8423 = prim_car(arglst9137);
void* arg_lst9138 = prim_cdr(arglst9137);
void* t8288 = prim_car(arg_lst9138);
void* arg_lst9139 = prim_cdr(arg_lst9138);

//if-clause
u64 if_guard10834 = reinterpret_cast<u64>(is_true(t8288));
if(if_guard10834 == 1)
{
void* id8758 = encode_null();
void* oldarg9140 = encode_null();
void* newarg9141 = prim_cons(acc, oldarg9140);
void* newarg9142 = prim_cons(id8758, newarg9141);

//app-clo
void* cloPtr10835 = get_closure_ptr(kkont8416);
void* procEnv10836 = get_env(kkont8416);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10835);
function_ptr(procEnv10836, newarg9142);
}
else
{

//creating new closure instance
auto ptr10837 = reinterpret_cast<void (*)(void *, void *)>(&ptr10318);
env10317 = allocate_env_space(encode_int((s32)9));
void* id8759 = make_closure(reinterpret_cast<void *>(ptr10837), env10317);

//setting env list
set_env(env10317, encode_int((s32)1), foldl);
set_env(env10317, encode_int((s32)2), cons);
set_env(env10317, encode_int((s32)3), lsts);
set_env(env10317, encode_int((s32)4), map1);
set_env(env10317, encode_int((s32)5), append1);
set_env(env10317, encode_int((s32)6), acc);
set_env(env10317, encode_int((s32)7), f);
set_env(env10317, encode_int((s32)8), kkont8416);
set_env(env10317, encode_int((s32)9), cdr);


void* oldarg9191 = encode_null();
void* newarg9192 = prim_cons(lsts, oldarg9191);
void* newarg9193 = prim_cons(car, newarg9192);
void* newarg9194 = prim_cons(id8759, newarg9193);

//app-clo
void* cloPtr10838 = get_closure_ptr(map1);
void* procEnv10839 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10838);
function_ptr(procEnv10839, newarg9194);
}

}

void ptr10314(void* env10315, void* arglst9134)
{
void* cdr = get_env_value(env10315, encode_int((s32)11));
void* kkont8416 = get_env_value(env10315, encode_int((s32)10));
void* ormap = get_env_value(env10315, encode_int((s32)9));
void* map1 = get_env_value(env10315, encode_int((s32)8));
void* car = get_env_value(env10315, encode_int((s32)7));
void* f = get_env_value(env10315, encode_int((s32)6));
void* null_u63 = get_env_value(env10315, encode_int((s32)5));
void* acc = get_env_value(env10315, encode_int((s32)4));
void* append1 = get_env_value(env10315, encode_int((s32)3));
void* cons = get_env_value(env10315, encode_int((s32)2));
void* foldl = get_env_value(env10315, encode_int((s32)1));
void* letk8422 = prim_car(arglst9134);
void* arg_lst9135 = prim_cdr(arglst9134);
void* lsts = prim_car(arg_lst9135);
void* arg_lst9136 = prim_cdr(arg_lst9135);

//creating new closure instance
auto ptr10840 = reinterpret_cast<void (*)(void *, void *)>(&ptr10316);
env10315 = allocate_env_space(encode_int((s32)10));
void* id8757 = make_closure(reinterpret_cast<void *>(ptr10840), env10315);

//setting env list
set_env(env10315, encode_int((s32)1), foldl);
set_env(env10315, encode_int((s32)2), cons);
set_env(env10315, encode_int((s32)3), lsts);
set_env(env10315, encode_int((s32)4), map1);
set_env(env10315, encode_int((s32)5), append1);
set_env(env10315, encode_int((s32)6), acc);
set_env(env10315, encode_int((s32)7), car);
set_env(env10315, encode_int((s32)8), f);
set_env(env10315, encode_int((s32)9), kkont8416);
set_env(env10315, encode_int((s32)10), cdr);


void* oldarg9195 = encode_null();
void* newarg9196 = prim_cons(lsts, oldarg9195);
void* newarg9197 = prim_cons(null_u63, newarg9196);
void* newarg9198 = prim_cons(id8757, newarg9197);

//app-clo
void* cloPtr10841 = get_closure_ptr(ormap);
void* procEnv10842 = get_env(ormap);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10841);
function_ptr(procEnv10842, newarg9198);
}

void ptr10312(void* env10313, void* arglst9131)
{
void* cdr = get_env_value(env10313, encode_int((s32)11));
void* kkont8416 = get_env_value(env10313, encode_int((s32)10));
void* ormap = get_env_value(env10313, encode_int((s32)9));
void* map1 = get_env_value(env10313, encode_int((s32)8));
void* car = get_env_value(env10313, encode_int((s32)7));
void* f = get_env_value(env10313, encode_int((s32)6));
void* null_u63 = get_env_value(env10313, encode_int((s32)5));
void* acc = get_env_value(env10313, encode_int((s32)4));
void* append1 = get_env_value(env10313, encode_int((s32)3));
void* cons = get_env_value(env10313, encode_int((s32)2));
void* foldl = get_env_value(env10313, encode_int((s32)1));
void* letk8421 = prim_car(arglst9131);
void* arg_lst9132 = prim_cdr(arglst9131);
void* param_lst8240 = prim_car(arg_lst9132);
void* arg_lst9133 = prim_cdr(arg_lst9132);

//creating new closure instance
auto ptr10843 = reinterpret_cast<void (*)(void *, void *)>(&ptr10314);
env10313 = allocate_env_space(encode_int((s32)11));
void* id8755 = make_closure(reinterpret_cast<void *>(ptr10843), env10313);

//setting env list
set_env(env10313, encode_int((s32)1), foldl);
set_env(env10313, encode_int((s32)2), cons);
set_env(env10313, encode_int((s32)3), append1);
set_env(env10313, encode_int((s32)4), acc);
set_env(env10313, encode_int((s32)5), null_u63);
set_env(env10313, encode_int((s32)6), f);
set_env(env10313, encode_int((s32)7), car);
set_env(env10313, encode_int((s32)8), map1);
set_env(env10313, encode_int((s32)9), ormap);
set_env(env10313, encode_int((s32)10), kkont8416);
set_env(env10313, encode_int((s32)11), cdr);


void* id8756 = encode_null();
void* oldarg9199 = encode_null();
void* newarg9200 = prim_cons(param_lst8240, oldarg9199);
void* newarg9201 = prim_cons(id8756, newarg9200);

//app-clo
void* cloPtr10844 = get_closure_ptr(id8755);
void* procEnv10845 = get_env(id8755);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10844);
function_ptr(procEnv10845, newarg9201);
}

void ptr10310(void* env10311, void* arglst9128)
{
void* cdr = get_env_value(env10311, encode_int((s32)11));
void* ormap = get_env_value(env10311, encode_int((s32)10));
void* append1 = get_env_value(env10311, encode_int((s32)9));
void* map1 = get_env_value(env10311, encode_int((s32)8));
void* car = get_env_value(env10311, encode_int((s32)7));
void* kkont8416 = get_env_value(env10311, encode_int((s32)6));
void* param_lst8240 = get_env_value(env10311, encode_int((s32)5));
void* f = get_env_value(env10311, encode_int((s32)4));
void* null_u63 = get_env_value(env10311, encode_int((s32)3));
void* cons = get_env_value(env10311, encode_int((s32)2));
void* foldl = get_env_value(env10311, encode_int((s32)1));
void* letk8420 = prim_car(arglst9128);
void* arg_lst9129 = prim_cdr(arglst9128);
void* acc = prim_car(arg_lst9129);
void* arg_lst9130 = prim_cdr(arg_lst9129);

//creating new closure instance
auto ptr10846 = reinterpret_cast<void (*)(void *, void *)>(&ptr10312);
env10311 = allocate_env_space(encode_int((s32)11));
void* id8754 = make_closure(reinterpret_cast<void *>(ptr10846), env10311);

//setting env list
set_env(env10311, encode_int((s32)1), foldl);
set_env(env10311, encode_int((s32)2), cons);
set_env(env10311, encode_int((s32)3), append1);
set_env(env10311, encode_int((s32)4), acc);
set_env(env10311, encode_int((s32)5), null_u63);
set_env(env10311, encode_int((s32)6), f);
set_env(env10311, encode_int((s32)7), car);
set_env(env10311, encode_int((s32)8), map1);
set_env(env10311, encode_int((s32)9), ormap);
set_env(env10311, encode_int((s32)10), kkont8416);
set_env(env10311, encode_int((s32)11), cdr);


void* oldarg9202 = encode_null();
void* newarg9203 = prim_cons(param_lst8240, oldarg9202);
void* newarg9204 = prim_cons(id8754, newarg9203);

//app-clo
void* cloPtr10847 = get_closure_ptr(cdr);
void* procEnv10848 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10847);
function_ptr(procEnv10848, newarg9204);
}

void ptr10308(void* env10309, void* arglst9125)
{
void* cdr = get_env_value(env10309, encode_int((s32)10));
void* kkont8416 = get_env_value(env10309, encode_int((s32)9));
void* ormap = get_env_value(env10309, encode_int((s32)8));
void* append1 = get_env_value(env10309, encode_int((s32)7));
void* map1 = get_env_value(env10309, encode_int((s32)6));
void* car = get_env_value(env10309, encode_int((s32)5));
void* f = get_env_value(env10309, encode_int((s32)4));
void* null_u63 = get_env_value(env10309, encode_int((s32)3));
void* cons = get_env_value(env10309, encode_int((s32)2));
void* foldl = get_env_value(env10309, encode_int((s32)1));
void* letk8419 = prim_car(arglst9125);
void* arg_lst9126 = prim_cdr(arglst9125);
void* param_lst8240 = prim_car(arg_lst9126);
void* arg_lst9127 = prim_cdr(arg_lst9126);

//creating new closure instance
auto ptr10849 = reinterpret_cast<void (*)(void *, void *)>(&ptr10310);
env10309 = allocate_env_space(encode_int((s32)11));
void* id8753 = make_closure(reinterpret_cast<void *>(ptr10849), env10309);

//setting env list
set_env(env10309, encode_int((s32)1), foldl);
set_env(env10309, encode_int((s32)2), cons);
set_env(env10309, encode_int((s32)3), null_u63);
set_env(env10309, encode_int((s32)4), f);
set_env(env10309, encode_int((s32)5), param_lst8240);
set_env(env10309, encode_int((s32)6), kkont8416);
set_env(env10309, encode_int((s32)7), car);
set_env(env10309, encode_int((s32)8), map1);
set_env(env10309, encode_int((s32)9), append1);
set_env(env10309, encode_int((s32)10), ormap);
set_env(env10309, encode_int((s32)11), cdr);


void* oldarg9205 = encode_null();
void* newarg9206 = prim_cons(param_lst8240, oldarg9205);
void* newarg9207 = prim_cons(id8753, newarg9206);

//app-clo
void* cloPtr10850 = get_closure_ptr(car);
void* procEnv10851 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10850);
function_ptr(procEnv10851, newarg9207);
}

void ptr10306(void* env10307, void* arglst9122)
{
void* cdr = get_env_value(env10307, encode_int((s32)10));
void* null_u63 = get_env_value(env10307, encode_int((s32)9));
void* ormap = get_env_value(env10307, encode_int((s32)8));
void* append1 = get_env_value(env10307, encode_int((s32)7));
void* map1 = get_env_value(env10307, encode_int((s32)6));
void* car = get_env_value(env10307, encode_int((s32)5));
void* kkont8416 = get_env_value(env10307, encode_int((s32)4));
void* param_lst8240 = get_env_value(env10307, encode_int((s32)3));
void* cons = get_env_value(env10307, encode_int((s32)2));
void* foldl = get_env_value(env10307, encode_int((s32)1));
void* letk8418 = prim_car(arglst9122);
void* arg_lst9123 = prim_cdr(arglst9122);
void* f = prim_car(arg_lst9123);
void* arg_lst9124 = prim_cdr(arg_lst9123);

//creating new closure instance
auto ptr10852 = reinterpret_cast<void (*)(void *, void *)>(&ptr10308);
env10307 = allocate_env_space(encode_int((s32)10));
void* id8752 = make_closure(reinterpret_cast<void *>(ptr10852), env10307);

//setting env list
set_env(env10307, encode_int((s32)1), foldl);
set_env(env10307, encode_int((s32)2), cons);
set_env(env10307, encode_int((s32)3), null_u63);
set_env(env10307, encode_int((s32)4), f);
set_env(env10307, encode_int((s32)5), car);
set_env(env10307, encode_int((s32)6), map1);
set_env(env10307, encode_int((s32)7), append1);
set_env(env10307, encode_int((s32)8), ormap);
set_env(env10307, encode_int((s32)9), kkont8416);
set_env(env10307, encode_int((s32)10), cdr);


void* oldarg9208 = encode_null();
void* newarg9209 = prim_cons(param_lst8240, oldarg9208);
void* newarg9210 = prim_cons(id8752, newarg9209);

//app-clo
void* cloPtr10853 = get_closure_ptr(cdr);
void* procEnv10854 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10853);
function_ptr(procEnv10854, newarg9210);
}

void ptr10304(void* env10305, void* param_lst82408417)
{
void* cdr = get_env_value(env10305, encode_int((s32)8));
void* null_u63 = get_env_value(env10305, encode_int((s32)7));
void* ormap = get_env_value(env10305, encode_int((s32)6));
void* append1 = get_env_value(env10305, encode_int((s32)5));
void* map1 = get_env_value(env10305, encode_int((s32)4));
void* car = get_env_value(env10305, encode_int((s32)3));
void* cons = get_env_value(env10305, encode_int((s32)2));
void* foldl = get_env_value(env10305, encode_int((s32)1));
void* kkont8416 = prim_car(param_lst82408417);
void* param_lst8240 = prim_cdr(param_lst82408417);

//creating new closure instance
auto ptr10855 = reinterpret_cast<void (*)(void *, void *)>(&ptr10306);
env10305 = allocate_env_space(encode_int((s32)10));
void* id8751 = make_closure(reinterpret_cast<void *>(ptr10855), env10305);

//setting env list
set_env(env10305, encode_int((s32)1), foldl);
set_env(env10305, encode_int((s32)2), cons);
set_env(env10305, encode_int((s32)3), param_lst8240);
set_env(env10305, encode_int((s32)4), kkont8416);
set_env(env10305, encode_int((s32)5), car);
set_env(env10305, encode_int((s32)6), map1);
set_env(env10305, encode_int((s32)7), append1);
set_env(env10305, encode_int((s32)8), ormap);
set_env(env10305, encode_int((s32)9), null_u63);
set_env(env10305, encode_int((s32)10), cdr);


void* oldarg9211 = encode_null();
void* newarg9212 = prim_cons(param_lst8240, oldarg9211);
void* newarg9213 = prim_cons(id8751, newarg9212);

//app-clo
void* cloPtr10856 = get_closure_ptr(car);
void* procEnv10857 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10856);
function_ptr(procEnv10857, newarg9213);
}

void ptr10302(void* env10303, void* arglst9119)
{
void* cdr = get_env_value(env10303, encode_int((s32)7));
void* null_u63 = get_env_value(env10303, encode_int((s32)6));
void* ormap = get_env_value(env10303, encode_int((s32)5));
void* append1 = get_env_value(env10303, encode_int((s32)4));
void* map1 = get_env_value(env10303, encode_int((s32)3));
void* car = get_env_value(env10303, encode_int((s32)2));
void* cons = get_env_value(env10303, encode_int((s32)1));
void* kont8415 = prim_car(arglst9119);
void* arg_lst9120 = prim_cdr(arglst9119);
void* foldl = prim_car(arg_lst9120);
void* arg_lst9121 = prim_cdr(arg_lst9120);
void* id8749 = encode_null();

//creating new closure instance
auto ptr10858 = reinterpret_cast<void (*)(void *, void *)>(&ptr10304);
env10303 = allocate_env_space(encode_int((s32)8));
void* id8750 = make_closure(reinterpret_cast<void *>(ptr10858), env10303);

//setting env list
set_env(env10303, encode_int((s32)1), foldl);
set_env(env10303, encode_int((s32)2), cons);
set_env(env10303, encode_int((s32)3), car);
set_env(env10303, encode_int((s32)4), map1);
set_env(env10303, encode_int((s32)5), append1);
set_env(env10303, encode_int((s32)6), ormap);
set_env(env10303, encode_int((s32)7), null_u63);
set_env(env10303, encode_int((s32)8), cdr);


void* oldarg9214 = encode_null();
void* newarg9215 = prim_cons(id8750, oldarg9214);
void* newarg9216 = prim_cons(id8749, newarg9215);

//app-clo
void* cloPtr10859 = get_closure_ptr(kont8415);
void* procEnv10860 = get_env(kont8415);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10859);
function_ptr(procEnv10860, newarg9216);
}

void ptr10348(void* env10349, void* arglst9090)
{
void* t8296 = get_env_value(env10349, encode_int((s32)3));
void* kont8409 = get_env_value(env10349, encode_int((s32)2));
void* append1 = get_env_value(env10349, encode_int((s32)1));
void* letk8414 = prim_car(arglst9090);
void* arg_lst9091 = prim_cdr(arglst9090);
void* t8298 = prim_car(arg_lst9091);
void* arg_lst9092 = prim_cdr(arg_lst9091);
void* oldarg9093 = encode_null();
void* newarg9094 = prim_cons(t8298, oldarg9093);
void* newarg9095 = prim_cons(t8296, newarg9094);
void* newarg9096 = prim_cons(kont8409, newarg9095);

//app-clo
void* cloPtr10861 = get_closure_ptr(append1);
void* procEnv10862 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10861);
function_ptr(procEnv10862, newarg9096);
}

void ptr10346(void* env10347, void* arglst9087)
{
void* t8296 = get_env_value(env10347, encode_int((s32)4));
void* cons = get_env_value(env10347, encode_int((s32)3));
void* kont8409 = get_env_value(env10347, encode_int((s32)2));
void* append1 = get_env_value(env10347, encode_int((s32)1));
void* letk8413 = prim_car(arglst9087);
void* arg_lst9088 = prim_cdr(arglst9087);
void* t8297 = prim_car(arg_lst9088);
void* arg_lst9089 = prim_cdr(arg_lst9088);

//creating new closure instance
auto ptr10863 = reinterpret_cast<void (*)(void *, void *)>(&ptr10348);
env10347 = allocate_env_space(encode_int((s32)3));
void* id8778 = make_closure(reinterpret_cast<void *>(ptr10863), env10347);

//setting env list
set_env(env10347, encode_int((s32)1), append1);
set_env(env10347, encode_int((s32)2), kont8409);
set_env(env10347, encode_int((s32)3), t8296);


void* id8779 = encode_null();
void* oldarg9097 = encode_null();
void* newarg9098 = prim_cons(id8779, oldarg9097);
void* newarg9099 = prim_cons(t8297, newarg9098);
void* newarg9100 = prim_cons(id8778, newarg9099);

//app-clo
void* cloPtr10864 = get_closure_ptr(cons);
void* procEnv10865 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10864);
function_ptr(procEnv10865, newarg9100);
}

void ptr10344(void* env10345, void* arglst9084)
{
void* lst = get_env_value(env10345, encode_int((s32)5));
void* car = get_env_value(env10345, encode_int((s32)4));
void* cons = get_env_value(env10345, encode_int((s32)3));
void* kont8409 = get_env_value(env10345, encode_int((s32)2));
void* append1 = get_env_value(env10345, encode_int((s32)1));
void* letk8412 = prim_car(arglst9084);
void* arg_lst9085 = prim_cdr(arglst9084);
void* t8296 = prim_car(arg_lst9085);
void* arg_lst9086 = prim_cdr(arg_lst9085);

//creating new closure instance
auto ptr10866 = reinterpret_cast<void (*)(void *, void *)>(&ptr10346);
env10345 = allocate_env_space(encode_int((s32)4));
void* id8777 = make_closure(reinterpret_cast<void *>(ptr10866), env10345);

//setting env list
set_env(env10345, encode_int((s32)1), append1);
set_env(env10345, encode_int((s32)2), kont8409);
set_env(env10345, encode_int((s32)3), cons);
set_env(env10345, encode_int((s32)4), t8296);


void* oldarg9101 = encode_null();
void* newarg9102 = prim_cons(lst, oldarg9101);
void* newarg9103 = prim_cons(id8777, newarg9102);

//app-clo
void* cloPtr10867 = get_closure_ptr(car);
void* procEnv10868 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10867);
function_ptr(procEnv10868, newarg9103);
}

void ptr10342(void* env10343, void* arglst9081)
{
void* lst = get_env_value(env10343, encode_int((s32)6));
void* reverse = get_env_value(env10343, encode_int((s32)5));
void* car = get_env_value(env10343, encode_int((s32)4));
void* cons = get_env_value(env10343, encode_int((s32)3));
void* kont8409 = get_env_value(env10343, encode_int((s32)2));
void* append1 = get_env_value(env10343, encode_int((s32)1));
void* letk8411 = prim_car(arglst9081);
void* arg_lst9082 = prim_cdr(arglst9081);
void* t8295 = prim_car(arg_lst9082);
void* arg_lst9083 = prim_cdr(arg_lst9082);

//creating new closure instance
auto ptr10869 = reinterpret_cast<void (*)(void *, void *)>(&ptr10344);
env10343 = allocate_env_space(encode_int((s32)5));
void* id8776 = make_closure(reinterpret_cast<void *>(ptr10869), env10343);

//setting env list
set_env(env10343, encode_int((s32)1), append1);
set_env(env10343, encode_int((s32)2), kont8409);
set_env(env10343, encode_int((s32)3), cons);
set_env(env10343, encode_int((s32)4), car);
set_env(env10343, encode_int((s32)5), lst);


void* oldarg9104 = encode_null();
void* newarg9105 = prim_cons(t8295, oldarg9104);
void* newarg9106 = prim_cons(id8776, newarg9105);

//app-clo
void* cloPtr10870 = get_closure_ptr(reverse);
void* procEnv10871 = get_env(reverse);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10870);
function_ptr(procEnv10871, newarg9106);
}

void ptr10340(void* env10341, void* arglst9075)
{
void* cdr = get_env_value(env10341, encode_int((s32)7));
void* lst = get_env_value(env10341, encode_int((s32)6));
void* reverse = get_env_value(env10341, encode_int((s32)5));
void* car = get_env_value(env10341, encode_int((s32)4));
void* cons = get_env_value(env10341, encode_int((s32)3));
void* kont8409 = get_env_value(env10341, encode_int((s32)2));
void* append1 = get_env_value(env10341, encode_int((s32)1));
void* letk8410 = prim_car(arglst9075);
void* arg_lst9076 = prim_cdr(arglst9075);
void* t8294 = prim_car(arg_lst9076);
void* arg_lst9077 = prim_cdr(arg_lst9076);

//if-clause
u64 if_guard10872 = reinterpret_cast<u64>(is_true(t8294));
if(if_guard10872 == 1)
{
void* id8774 = encode_null();
void* oldarg9078 = encode_null();
void* newarg9079 = prim_cons(lst, oldarg9078);
void* newarg9080 = prim_cons(id8774, newarg9079);

//app-clo
void* cloPtr10873 = get_closure_ptr(kont8409);
void* procEnv10874 = get_env(kont8409);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10873);
function_ptr(procEnv10874, newarg9080);
}
else
{

//creating new closure instance
auto ptr10875 = reinterpret_cast<void (*)(void *, void *)>(&ptr10342);
env10341 = allocate_env_space(encode_int((s32)6));
void* id8775 = make_closure(reinterpret_cast<void *>(ptr10875), env10341);

//setting env list
set_env(env10341, encode_int((s32)1), append1);
set_env(env10341, encode_int((s32)2), kont8409);
set_env(env10341, encode_int((s32)3), cons);
set_env(env10341, encode_int((s32)4), car);
set_env(env10341, encode_int((s32)5), reverse);
set_env(env10341, encode_int((s32)6), lst);


void* oldarg9107 = encode_null();
void* newarg9108 = prim_cons(lst, oldarg9107);
void* newarg9109 = prim_cons(id8775, newarg9108);

//app-clo
void* cloPtr10876 = get_closure_ptr(cdr);
void* procEnv10877 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10876);
function_ptr(procEnv10877, newarg9109);
}

}

void ptr10338(void* env10339, void* arglst9072)
{
void* cdr = get_env_value(env10339, encode_int((s32)6));
void* null_u63 = get_env_value(env10339, encode_int((s32)5));
void* reverse = get_env_value(env10339, encode_int((s32)4));
void* append1 = get_env_value(env10339, encode_int((s32)3));
void* car = get_env_value(env10339, encode_int((s32)2));
void* cons = get_env_value(env10339, encode_int((s32)1));
void* kont8409 = prim_car(arglst9072);
void* arg_lst9073 = prim_cdr(arglst9072);
void* lst = prim_car(arg_lst9073);
void* arg_lst9074 = prim_cdr(arg_lst9073);

//creating new closure instance
auto ptr10878 = reinterpret_cast<void (*)(void *, void *)>(&ptr10340);
env10339 = allocate_env_space(encode_int((s32)7));
void* id8773 = make_closure(reinterpret_cast<void *>(ptr10878), env10339);

//setting env list
set_env(env10339, encode_int((s32)1), append1);
set_env(env10339, encode_int((s32)2), kont8409);
set_env(env10339, encode_int((s32)3), cons);
set_env(env10339, encode_int((s32)4), car);
set_env(env10339, encode_int((s32)5), reverse);
set_env(env10339, encode_int((s32)6), lst);
set_env(env10339, encode_int((s32)7), cdr);


void* oldarg9110 = encode_null();
void* newarg9111 = prim_cons(lst, oldarg9110);
void* newarg9112 = prim_cons(id8773, newarg9111);

//app-clo
void* cloPtr10879 = get_closure_ptr(null_u63);
void* procEnv10880 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10879);
function_ptr(procEnv10880, newarg9112);
}

void ptr10336(void* env10337, void* arglst9069)
{
void* cdr = get_env_value(env10337, encode_int((s32)5));
void* null_u63 = get_env_value(env10337, encode_int((s32)4));
void* append1 = get_env_value(env10337, encode_int((s32)3));
void* car = get_env_value(env10337, encode_int((s32)2));
void* cons = get_env_value(env10337, encode_int((s32)1));
void* kont8408 = prim_car(arglst9069);
void* arg_lst9070 = prim_cdr(arglst9069);
void* reverse = prim_car(arg_lst9070);
void* arg_lst9071 = prim_cdr(arg_lst9070);
void* id8771 = encode_null();

//creating new closure instance
auto ptr10881 = reinterpret_cast<void (*)(void *, void *)>(&ptr10338);
env10337 = allocate_env_space(encode_int((s32)6));
void* id8772 = make_closure(reinterpret_cast<void *>(ptr10881), env10337);

//setting env list
set_env(env10337, encode_int((s32)1), cons);
set_env(env10337, encode_int((s32)2), car);
set_env(env10337, encode_int((s32)3), append1);
set_env(env10337, encode_int((s32)4), reverse);
set_env(env10337, encode_int((s32)5), null_u63);
set_env(env10337, encode_int((s32)6), cdr);


void* oldarg9113 = encode_null();
void* newarg9114 = prim_cons(id8772, oldarg9113);
void* newarg9115 = prim_cons(id8771, newarg9114);

//app-clo
void* cloPtr10882 = get_closure_ptr(kont8408);
void* procEnv10883 = get_env(kont8408);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10882);
function_ptr(procEnv10883, newarg9115);
}

void ptr10366(void* env10367, void* arglst9035)
{
void* kkont8400 = get_env_value(env10367, encode_int((s32)3));
void* append1 = get_env_value(env10367, encode_int((s32)2));
void* foldl = get_env_value(env10367, encode_int((s32)1));
void* letk8407 = prim_car(arglst9035);
void* arg_lst9036 = prim_cdr(arglst9035);
void* t8301 = prim_car(arg_lst9036);
void* arg_lst9037 = prim_cdr(arg_lst9036);
void* id8792 = encode_null();
void* oldarg9038 = encode_null();
void* newarg9039 = prim_cons(t8301, oldarg9038);
void* newarg9040 = prim_cons(id8792, newarg9039);
void* newarg9041 = prim_cons(append1, newarg9040);
void* newarg9042 = prim_cons(kkont8400, newarg9041);

//app-clo
void* cloPtr10884 = get_closure_ptr(foldl);
void* procEnv10885 = get_env(foldl);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10884);
function_ptr(procEnv10885, newarg9042);
}

void ptr10364(void* env10365, void* arglst9032)
{
void* kkont8400 = get_env_value(env10365, encode_int((s32)4));
void* reverse = get_env_value(env10365, encode_int((s32)3));
void* append1 = get_env_value(env10365, encode_int((s32)2));
void* foldl = get_env_value(env10365, encode_int((s32)1));
void* letk8406 = prim_car(arglst9032);
void* arg_lst9033 = prim_cdr(arglst9032);
void* t8300 = prim_car(arg_lst9033);
void* arg_lst9034 = prim_cdr(arg_lst9033);

//creating new closure instance
auto ptr10886 = reinterpret_cast<void (*)(void *, void *)>(&ptr10366);
env10365 = allocate_env_space(encode_int((s32)3));
void* id8791 = make_closure(reinterpret_cast<void *>(ptr10886), env10365);

//setting env list
set_env(env10365, encode_int((s32)1), foldl);
set_env(env10365, encode_int((s32)2), append1);
set_env(env10365, encode_int((s32)3), kkont8400);


void* oldarg9043 = encode_null();
void* newarg9044 = prim_cons(t8300, oldarg9043);
void* newarg9045 = prim_cons(id8791, newarg9044);

//app-clo
void* cloPtr10887 = get_closure_ptr(reverse);
void* procEnv10888 = get_env(reverse);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10887);
function_ptr(procEnv10888, newarg9045);
}

void ptr10362(void* env10363, void* arglst9029)
{
void* kkont8400 = get_env_value(env10363, encode_int((s32)5));
void* reverse = get_env_value(env10363, encode_int((s32)4));
void* foldl = get_env_value(env10363, encode_int((s32)3));
void* x = get_env_value(env10363, encode_int((s32)2));
void* append1 = get_env_value(env10363, encode_int((s32)1));
void* letk8405 = prim_car(arglst9029);
void* arg_lst9030 = prim_cdr(arglst9029);
void* t8299 = prim_car(arg_lst9030);
void* arg_lst9031 = prim_cdr(arg_lst9030);

//creating new closure instance
auto ptr10889 = reinterpret_cast<void (*)(void *, void *)>(&ptr10364);
env10363 = allocate_env_space(encode_int((s32)4));
void* id8790 = make_closure(reinterpret_cast<void *>(ptr10889), env10363);

//setting env list
set_env(env10363, encode_int((s32)1), foldl);
set_env(env10363, encode_int((s32)2), append1);
set_env(env10363, encode_int((s32)3), reverse);
set_env(env10363, encode_int((s32)4), kkont8400);


void* oldarg9046 = encode_null();
void* newarg9047 = prim_cons(x, oldarg9046);
void* newarg9048 = prim_cons(t8299, newarg9047);
void* newarg9049 = prim_cons(id8790, newarg9048);

//app-clo
void* cloPtr10890 = get_closure_ptr(append1);
void* procEnv10891 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10890);
function_ptr(procEnv10891, newarg9049);
}

void ptr10360(void* env10361, void* arglst9026)
{
void* kkont8400 = get_env_value(env10361, encode_int((s32)6));
void* reverse = get_env_value(env10361, encode_int((s32)5));
void* append1 = get_env_value(env10361, encode_int((s32)4));
void* xs = get_env_value(env10361, encode_int((s32)3));
void* cons = get_env_value(env10361, encode_int((s32)2));
void* foldl = get_env_value(env10361, encode_int((s32)1));
void* letk8404 = prim_car(arglst9026);
void* arg_lst9027 = prim_cdr(arglst9026);
void* x = prim_car(arg_lst9027);
void* arg_lst9028 = prim_cdr(arg_lst9027);

//creating new closure instance
auto ptr10892 = reinterpret_cast<void (*)(void *, void *)>(&ptr10362);
env10361 = allocate_env_space(encode_int((s32)5));
void* id8788 = make_closure(reinterpret_cast<void *>(ptr10892), env10361);

//setting env list
set_env(env10361, encode_int((s32)1), append1);
set_env(env10361, encode_int((s32)2), x);
set_env(env10361, encode_int((s32)3), foldl);
set_env(env10361, encode_int((s32)4), reverse);
set_env(env10361, encode_int((s32)5), kkont8400);


void* id8789 = encode_null();
void* oldarg9050 = encode_null();
void* newarg9051 = prim_cons(id8789, oldarg9050);
void* newarg9052 = prim_cons(xs, newarg9051);
void* newarg9053 = prim_cons(id8788, newarg9052);

//app-clo
void* cloPtr10893 = get_closure_ptr(cons);
void* procEnv10894 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10893);
function_ptr(procEnv10894, newarg9053);
}

void ptr10358(void* env10359, void* arglst9023)
{
void* kkont8400 = get_env_value(env10359, encode_int((s32)6));
void* reverse = get_env_value(env10359, encode_int((s32)5));
void* append1 = get_env_value(env10359, encode_int((s32)4));
void* xs = get_env_value(env10359, encode_int((s32)3));
void* cons = get_env_value(env10359, encode_int((s32)2));
void* foldl = get_env_value(env10359, encode_int((s32)1));
void* letk8403 = prim_car(arglst9023);
void* arg_lst9024 = prim_cdr(arglst9023);
void* param_lst8241 = prim_car(arg_lst9024);
void* arg_lst9025 = prim_cdr(arg_lst9024);

//creating new closure instance
auto ptr10895 = reinterpret_cast<void (*)(void *, void *)>(&ptr10360);
env10359 = allocate_env_space(encode_int((s32)6));
void* id8786 = make_closure(reinterpret_cast<void *>(ptr10895), env10359);

//setting env list
set_env(env10359, encode_int((s32)1), foldl);
set_env(env10359, encode_int((s32)2), cons);
set_env(env10359, encode_int((s32)3), xs);
set_env(env10359, encode_int((s32)4), append1);
set_env(env10359, encode_int((s32)5), reverse);
set_env(env10359, encode_int((s32)6), kkont8400);


void* id8787 = encode_null();
void* oldarg9054 = encode_null();
void* newarg9055 = prim_cons(param_lst8241, oldarg9054);
void* newarg9056 = prim_cons(id8787, newarg9055);

//app-clo
void* cloPtr10896 = get_closure_ptr(id8786);
void* procEnv10897 = get_env(id8786);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10896);
function_ptr(procEnv10897, newarg9056);
}

void ptr10356(void* env10357, void* arglst9020)
{
void* cdr = get_env_value(env10357, encode_int((s32)7));
void* kkont8400 = get_env_value(env10357, encode_int((s32)6));
void* param_lst8241 = get_env_value(env10357, encode_int((s32)5));
void* reverse = get_env_value(env10357, encode_int((s32)4));
void* append1 = get_env_value(env10357, encode_int((s32)3));
void* cons = get_env_value(env10357, encode_int((s32)2));
void* foldl = get_env_value(env10357, encode_int((s32)1));
void* letk8402 = prim_car(arglst9020);
void* arg_lst9021 = prim_cdr(arglst9020);
void* xs = prim_car(arg_lst9021);
void* arg_lst9022 = prim_cdr(arg_lst9021);

//creating new closure instance
auto ptr10898 = reinterpret_cast<void (*)(void *, void *)>(&ptr10358);
env10357 = allocate_env_space(encode_int((s32)6));
void* id8785 = make_closure(reinterpret_cast<void *>(ptr10898), env10357);

//setting env list
set_env(env10357, encode_int((s32)1), foldl);
set_env(env10357, encode_int((s32)2), cons);
set_env(env10357, encode_int((s32)3), xs);
set_env(env10357, encode_int((s32)4), append1);
set_env(env10357, encode_int((s32)5), reverse);
set_env(env10357, encode_int((s32)6), kkont8400);


void* oldarg9057 = encode_null();
void* newarg9058 = prim_cons(param_lst8241, oldarg9057);
void* newarg9059 = prim_cons(id8785, newarg9058);

//app-clo
void* cloPtr10899 = get_closure_ptr(cdr);
void* procEnv10900 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10899);
function_ptr(procEnv10900, newarg9059);
}

void ptr10354(void* env10355, void* param_lst82418401)
{
void* cdr = get_env_value(env10355, encode_int((s32)6));
void* reverse = get_env_value(env10355, encode_int((s32)5));
void* append1 = get_env_value(env10355, encode_int((s32)4));
void* car = get_env_value(env10355, encode_int((s32)3));
void* cons = get_env_value(env10355, encode_int((s32)2));
void* foldl = get_env_value(env10355, encode_int((s32)1));
void* kkont8400 = prim_car(param_lst82418401);
void* param_lst8241 = prim_cdr(param_lst82418401);

//creating new closure instance
auto ptr10901 = reinterpret_cast<void (*)(void *, void *)>(&ptr10356);
env10355 = allocate_env_space(encode_int((s32)7));
void* id8784 = make_closure(reinterpret_cast<void *>(ptr10901), env10355);

//setting env list
set_env(env10355, encode_int((s32)1), foldl);
set_env(env10355, encode_int((s32)2), cons);
set_env(env10355, encode_int((s32)3), append1);
set_env(env10355, encode_int((s32)4), reverse);
set_env(env10355, encode_int((s32)5), param_lst8241);
set_env(env10355, encode_int((s32)6), kkont8400);
set_env(env10355, encode_int((s32)7), cdr);


void* oldarg9060 = encode_null();
void* newarg9061 = prim_cons(param_lst8241, oldarg9060);
void* newarg9062 = prim_cons(id8784, newarg9061);

//app-clo
void* cloPtr10902 = get_closure_ptr(car);
void* procEnv10903 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10902);
function_ptr(procEnv10903, newarg9062);
}

void ptr10352(void* env10353, void* arglst9017)
{
void* cdr = get_env_value(env10353, encode_int((s32)6));
void* reverse = get_env_value(env10353, encode_int((s32)5));
void* append1 = get_env_value(env10353, encode_int((s32)4));
void* car = get_env_value(env10353, encode_int((s32)3));
void* cons = get_env_value(env10353, encode_int((s32)2));
void* foldl = get_env_value(env10353, encode_int((s32)1));
void* kont8399 = prim_car(arglst9017);
void* arg_lst9018 = prim_cdr(arglst9017);
void* append = prim_car(arg_lst9018);
void* arg_lst9019 = prim_cdr(arg_lst9018);
void* id8782 = encode_null();

//creating new closure instance
auto ptr10904 = reinterpret_cast<void (*)(void *, void *)>(&ptr10354);
env10353 = allocate_env_space(encode_int((s32)6));
void* id8783 = make_closure(reinterpret_cast<void *>(ptr10904), env10353);

//setting env list
set_env(env10353, encode_int((s32)1), foldl);
set_env(env10353, encode_int((s32)2), cons);
set_env(env10353, encode_int((s32)3), car);
set_env(env10353, encode_int((s32)4), append1);
set_env(env10353, encode_int((s32)5), reverse);
set_env(env10353, encode_int((s32)6), cdr);


void* oldarg9063 = encode_null();
void* newarg9064 = prim_cons(id8783, oldarg9063);
void* newarg9065 = prim_cons(id8782, newarg9064);

//app-clo
void* cloPtr10905 = get_closure_ptr(kont8399);
void* procEnv10906 = get_env(kont8399);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10905);
function_ptr(procEnv10906, newarg9065);
}

void ptr10384(void* env10385, void* arglst8975)
{
void* t8305 = get_env_value(env10385, encode_int((s32)3));
void* kont8391 = get_env_value(env10385, encode_int((s32)2));
void* cons = get_env_value(env10385, encode_int((s32)1));
void* letk8397 = prim_car(arglst8975);
void* arg_lst8976 = prim_cdr(arglst8975);
void* t8307 = prim_car(arg_lst8976);
void* arg_lst8977 = prim_cdr(arg_lst8976);
void* oldarg8978 = encode_null();
void* newarg8979 = prim_cons(t8307, oldarg8978);
void* newarg8980 = prim_cons(t8305, newarg8979);
void* newarg8981 = prim_cons(kont8391, newarg8980);

//app-clo
void* cloPtr10907 = get_closure_ptr(cons);
void* procEnv10908 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10907);
function_ptr(procEnv10908, newarg8981);
}

void ptr10382(void* env10383, void* arglst8972)
{
void* t8305 = get_env_value(env10383, encode_int((s32)5));
void* op = get_env_value(env10383, encode_int((s32)4));
void* kont8391 = get_env_value(env10383, encode_int((s32)3));
void* filter = get_env_value(env10383, encode_int((s32)2));
void* cons = get_env_value(env10383, encode_int((s32)1));
void* letk8396 = prim_car(arglst8972);
void* arg_lst8973 = prim_cdr(arglst8972);
void* t8306 = prim_car(arg_lst8973);
void* arg_lst8974 = prim_cdr(arg_lst8973);

//creating new closure instance
auto ptr10909 = reinterpret_cast<void (*)(void *, void *)>(&ptr10384);
env10383 = allocate_env_space(encode_int((s32)3));
void* id8804 = make_closure(reinterpret_cast<void *>(ptr10909), env10383);

//setting env list
set_env(env10383, encode_int((s32)1), cons);
set_env(env10383, encode_int((s32)2), kont8391);
set_env(env10383, encode_int((s32)3), t8305);


void* oldarg8982 = encode_null();
void* newarg8983 = prim_cons(t8306, oldarg8982);
void* newarg8984 = prim_cons(op, newarg8983);
void* newarg8985 = prim_cons(id8804, newarg8984);

//app-clo
void* cloPtr10910 = get_closure_ptr(filter);
void* procEnv10911 = get_env(filter);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10910);
function_ptr(procEnv10911, newarg8985);
}

void ptr10380(void* env10381, void* arglst8969)
{
void* cdr = get_env_value(env10381, encode_int((s32)6));
void* lst = get_env_value(env10381, encode_int((s32)5));
void* op = get_env_value(env10381, encode_int((s32)4));
void* kont8391 = get_env_value(env10381, encode_int((s32)3));
void* filter = get_env_value(env10381, encode_int((s32)2));
void* cons = get_env_value(env10381, encode_int((s32)1));
void* letk8395 = prim_car(arglst8969);
void* arg_lst8970 = prim_cdr(arglst8969);
void* t8305 = prim_car(arg_lst8970);
void* arg_lst8971 = prim_cdr(arg_lst8970);

//creating new closure instance
auto ptr10912 = reinterpret_cast<void (*)(void *, void *)>(&ptr10382);
env10381 = allocate_env_space(encode_int((s32)5));
void* id8803 = make_closure(reinterpret_cast<void *>(ptr10912), env10381);

//setting env list
set_env(env10381, encode_int((s32)1), cons);
set_env(env10381, encode_int((s32)2), filter);
set_env(env10381, encode_int((s32)3), kont8391);
set_env(env10381, encode_int((s32)4), op);
set_env(env10381, encode_int((s32)5), t8305);


void* oldarg8986 = encode_null();
void* newarg8987 = prim_cons(lst, oldarg8986);
void* newarg8988 = prim_cons(id8803, newarg8987);

//app-clo
void* cloPtr10913 = get_closure_ptr(cdr);
void* procEnv10914 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10913);
function_ptr(procEnv10914, newarg8988);
}

void ptr10386(void* env10387, void* arglst8992)
{
void* op = get_env_value(env10387, encode_int((s32)3));
void* kont8391 = get_env_value(env10387, encode_int((s32)2));
void* filter = get_env_value(env10387, encode_int((s32)1));
void* letk8398 = prim_car(arglst8992);
void* arg_lst8993 = prim_cdr(arglst8992);
void* t8308 = prim_car(arg_lst8993);
void* arg_lst8994 = prim_cdr(arg_lst8993);
void* oldarg8995 = encode_null();
void* newarg8996 = prim_cons(t8308, oldarg8995);
void* newarg8997 = prim_cons(op, newarg8996);
void* newarg8998 = prim_cons(kont8391, newarg8997);

//app-clo
void* cloPtr10915 = get_closure_ptr(filter);
void* procEnv10916 = get_env(filter);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10915);
function_ptr(procEnv10916, newarg8998);
}

void ptr10378(void* env10379, void* arglst8966)
{
void* cdr = get_env_value(env10379, encode_int((s32)7));
void* lst = get_env_value(env10379, encode_int((s32)6));
void* op = get_env_value(env10379, encode_int((s32)5));
void* kont8391 = get_env_value(env10379, encode_int((s32)4));
void* cons = get_env_value(env10379, encode_int((s32)3));
void* filter = get_env_value(env10379, encode_int((s32)2));
void* car = get_env_value(env10379, encode_int((s32)1));
void* letk8394 = prim_car(arglst8966);
void* arg_lst8967 = prim_cdr(arglst8966);
void* t8304 = prim_car(arg_lst8967);
void* arg_lst8968 = prim_cdr(arg_lst8967);

//if-clause
u64 if_guard10917 = reinterpret_cast<u64>(is_true(t8304));
if(if_guard10917 == 1)
{

//creating new closure instance
auto ptr10918 = reinterpret_cast<void (*)(void *, void *)>(&ptr10380);
env10379 = allocate_env_space(encode_int((s32)6));
void* id8802 = make_closure(reinterpret_cast<void *>(ptr10918), env10379);

//setting env list
set_env(env10379, encode_int((s32)1), cons);
set_env(env10379, encode_int((s32)2), filter);
set_env(env10379, encode_int((s32)3), kont8391);
set_env(env10379, encode_int((s32)4), op);
set_env(env10379, encode_int((s32)5), lst);
set_env(env10379, encode_int((s32)6), cdr);


void* oldarg8989 = encode_null();
void* newarg8990 = prim_cons(lst, oldarg8989);
void* newarg8991 = prim_cons(id8802, newarg8990);

//app-clo
void* cloPtr10919 = get_closure_ptr(car);
void* procEnv10920 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10919);
function_ptr(procEnv10920, newarg8991);
}
else
{

//creating new closure instance
auto ptr10921 = reinterpret_cast<void (*)(void *, void *)>(&ptr10386);
env10379 = allocate_env_space(encode_int((s32)3));
void* id8805 = make_closure(reinterpret_cast<void *>(ptr10921), env10379);

//setting env list
set_env(env10379, encode_int((s32)1), filter);
set_env(env10379, encode_int((s32)2), kont8391);
set_env(env10379, encode_int((s32)3), op);


void* oldarg8999 = encode_null();
void* newarg9000 = prim_cons(lst, oldarg8999);
void* newarg9001 = prim_cons(id8805, newarg9000);

//app-clo
void* cloPtr10922 = get_closure_ptr(cdr);
void* procEnv10923 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10922);
function_ptr(procEnv10923, newarg9001);
}

}

void ptr10376(void* env10377, void* arglst8963)
{
void* cdr = get_env_value(env10377, encode_int((s32)7));
void* lst = get_env_value(env10377, encode_int((s32)6));
void* op = get_env_value(env10377, encode_int((s32)5));
void* kont8391 = get_env_value(env10377, encode_int((s32)4));
void* cons = get_env_value(env10377, encode_int((s32)3));
void* filter = get_env_value(env10377, encode_int((s32)2));
void* car = get_env_value(env10377, encode_int((s32)1));
void* letk8393 = prim_car(arglst8963);
void* arg_lst8964 = prim_cdr(arglst8963);
void* t8303 = prim_car(arg_lst8964);
void* arg_lst8965 = prim_cdr(arg_lst8964);

//creating new closure instance
auto ptr10924 = reinterpret_cast<void (*)(void *, void *)>(&ptr10378);
env10377 = allocate_env_space(encode_int((s32)7));
void* id8801 = make_closure(reinterpret_cast<void *>(ptr10924), env10377);

//setting env list
set_env(env10377, encode_int((s32)1), car);
set_env(env10377, encode_int((s32)2), filter);
set_env(env10377, encode_int((s32)3), cons);
set_env(env10377, encode_int((s32)4), kont8391);
set_env(env10377, encode_int((s32)5), op);
set_env(env10377, encode_int((s32)6), lst);
set_env(env10377, encode_int((s32)7), cdr);


void* oldarg9002 = encode_null();
void* newarg9003 = prim_cons(t8303, oldarg9002);
void* newarg9004 = prim_cons(id8801, newarg9003);

//app-clo
void* cloPtr10925 = get_closure_ptr(op);
void* procEnv10926 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10925);
function_ptr(procEnv10926, newarg9004);
}

void ptr10374(void* env10375, void* arglst8957)
{
void* cdr = get_env_value(env10375, encode_int((s32)7));
void* lst = get_env_value(env10375, encode_int((s32)6));
void* op = get_env_value(env10375, encode_int((s32)5));
void* kont8391 = get_env_value(env10375, encode_int((s32)4));
void* cons = get_env_value(env10375, encode_int((s32)3));
void* filter = get_env_value(env10375, encode_int((s32)2));
void* car = get_env_value(env10375, encode_int((s32)1));
void* letk8392 = prim_car(arglst8957);
void* arg_lst8958 = prim_cdr(arglst8957);
void* t8302 = prim_car(arg_lst8958);
void* arg_lst8959 = prim_cdr(arg_lst8958);

//if-clause
u64 if_guard10927 = reinterpret_cast<u64>(is_true(t8302));
if(if_guard10927 == 1)
{
void* id8798 = encode_null();
void* id8799 = encode_null();
void* oldarg8960 = encode_null();
void* newarg8961 = prim_cons(id8799, oldarg8960);
void* newarg8962 = prim_cons(id8798, newarg8961);

//app-clo
void* cloPtr10928 = get_closure_ptr(kont8391);
void* procEnv10929 = get_env(kont8391);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10928);
function_ptr(procEnv10929, newarg8962);
}
else
{

//creating new closure instance
auto ptr10930 = reinterpret_cast<void (*)(void *, void *)>(&ptr10376);
env10375 = allocate_env_space(encode_int((s32)7));
void* id8800 = make_closure(reinterpret_cast<void *>(ptr10930), env10375);

//setting env list
set_env(env10375, encode_int((s32)1), car);
set_env(env10375, encode_int((s32)2), filter);
set_env(env10375, encode_int((s32)3), cons);
set_env(env10375, encode_int((s32)4), kont8391);
set_env(env10375, encode_int((s32)5), op);
set_env(env10375, encode_int((s32)6), lst);
set_env(env10375, encode_int((s32)7), cdr);


void* oldarg9005 = encode_null();
void* newarg9006 = prim_cons(lst, oldarg9005);
void* newarg9007 = prim_cons(id8800, newarg9006);

//app-clo
void* cloPtr10931 = get_closure_ptr(car);
void* procEnv10932 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10931);
function_ptr(procEnv10932, newarg9007);
}

}

void ptr10372(void* env10373, void* arglst8953)
{
void* cdr = get_env_value(env10373, encode_int((s32)5));
void* null_u63 = get_env_value(env10373, encode_int((s32)4));
void* cons = get_env_value(env10373, encode_int((s32)3));
void* filter = get_env_value(env10373, encode_int((s32)2));
void* car = get_env_value(env10373, encode_int((s32)1));
void* kont8391 = prim_car(arglst8953);
void* arg_lst8954 = prim_cdr(arglst8953);
void* op = prim_car(arg_lst8954);
void* arg_lst8955 = prim_cdr(arg_lst8954);
void* lst = prim_car(arg_lst8955);
void* arg_lst8956 = prim_cdr(arg_lst8955);

//creating new closure instance
auto ptr10933 = reinterpret_cast<void (*)(void *, void *)>(&ptr10374);
env10373 = allocate_env_space(encode_int((s32)7));
void* id8797 = make_closure(reinterpret_cast<void *>(ptr10933), env10373);

//setting env list
set_env(env10373, encode_int((s32)1), car);
set_env(env10373, encode_int((s32)2), filter);
set_env(env10373, encode_int((s32)3), cons);
set_env(env10373, encode_int((s32)4), kont8391);
set_env(env10373, encode_int((s32)5), op);
set_env(env10373, encode_int((s32)6), lst);
set_env(env10373, encode_int((s32)7), cdr);


void* oldarg9008 = encode_null();
void* newarg9009 = prim_cons(lst, oldarg9008);
void* newarg9010 = prim_cons(id8797, newarg9009);

//app-clo
void* cloPtr10934 = get_closure_ptr(null_u63);
void* procEnv10935 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10934);
function_ptr(procEnv10935, newarg9010);
}

void ptr10370(void* env10371, void* arglst8950)
{
void* cdr = get_env_value(env10371, encode_int((s32)4));
void* null_u63 = get_env_value(env10371, encode_int((s32)3));
void* car = get_env_value(env10371, encode_int((s32)2));
void* cons = get_env_value(env10371, encode_int((s32)1));
void* kont8390 = prim_car(arglst8950);
void* arg_lst8951 = prim_cdr(arglst8950);
void* filter = prim_car(arg_lst8951);
void* arg_lst8952 = prim_cdr(arg_lst8951);
void* id8795 = encode_null();

//creating new closure instance
auto ptr10936 = reinterpret_cast<void (*)(void *, void *)>(&ptr10372);
env10371 = allocate_env_space(encode_int((s32)5));
void* id8796 = make_closure(reinterpret_cast<void *>(ptr10936), env10371);

//setting env list
set_env(env10371, encode_int((s32)1), car);
set_env(env10371, encode_int((s32)2), filter);
set_env(env10371, encode_int((s32)3), cons);
set_env(env10371, encode_int((s32)4), null_u63);
set_env(env10371, encode_int((s32)5), cdr);


void* oldarg9011 = encode_null();
void* newarg9012 = prim_cons(id8796, oldarg9011);
void* newarg9013 = prim_cons(id8795, newarg9012);

//app-clo
void* cloPtr10937 = get_closure_ptr(kont8390);
void* procEnv10938 = get_env(kont8390);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10937);
function_ptr(procEnv10938, newarg9013);
}

void ptr10392(void* env10393, void* arglst8928)
{
void* halt = get_env_value(env10393, encode_int((s32)4));
void* t8309 = get_env_value(env10393, encode_int((s32)3));
void* _u42 = get_env_value(env10393, encode_int((s32)2));
void* t8310 = get_env_value(env10393, encode_int((s32)1));
void* letk8389 = prim_car(arglst8928);
void* arg_lst8929 = prim_cdr(arglst8928);
void* t8311 = prim_car(arg_lst8929);
void* arg_lst8930 = prim_cdr(arg_lst8929);
void* id8815 = reinterpret_cast<void *>(encode_int((s32)2));
void* id8816 = reinterpret_cast<void *>(encode_int((s32)3));
void* oldarg8931 = encode_null();
void* newarg8932 = prim_cons(t8311, oldarg8931);
void* newarg8933 = prim_cons(t8310, newarg8932);
void* newarg8934 = prim_cons(t8309, newarg8933);
void* newarg8935 = prim_cons(id8816, newarg8934);
void* newarg8936 = prim_cons(id8815, newarg8935);
void* newarg8937 = prim_cons(halt, newarg8936);

//app-clo
void* cloPtr10939 = get_closure_ptr(_u42);
void* procEnv10940 = get_env(_u42);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10939);
function_ptr(procEnv10940, newarg8937);
}

void ptr10390(void* env10391, void* arglst8925)
{
void* halt = get_env_value(env10391, encode_int((s32)4));
void* t8309 = get_env_value(env10391, encode_int((s32)3));
void* _u42 = get_env_value(env10391, encode_int((s32)2));
void* _u45 = get_env_value(env10391, encode_int((s32)1));
void* letk8388 = prim_car(arglst8925);
void* arg_lst8926 = prim_cdr(arglst8925);
void* t8310 = prim_car(arg_lst8926);
void* arg_lst8927 = prim_cdr(arg_lst8926);

//creating new closure instance
auto ptr10941 = reinterpret_cast<void (*)(void *, void *)>(&ptr10392);
env10391 = allocate_env_space(encode_int((s32)4));
void* id8812 = make_closure(reinterpret_cast<void *>(ptr10941), env10391);

//setting env list
set_env(env10391, encode_int((s32)1), t8310);
set_env(env10391, encode_int((s32)2), _u42);
set_env(env10391, encode_int((s32)3), t8309);
set_env(env10391, encode_int((s32)4), halt);


void* id8813 = reinterpret_cast<void *>(encode_int((s32)4));
void* id8814 = reinterpret_cast<void *>(encode_int((s32)1));
void* oldarg8938 = encode_null();
void* newarg8939 = prim_cons(id8814, oldarg8938);
void* newarg8940 = prim_cons(id8813, newarg8939);
void* newarg8941 = prim_cons(id8812, newarg8940);

//app-clo
void* cloPtr10942 = get_closure_ptr(_u45);
void* procEnv10943 = get_env(_u45);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10942);
function_ptr(procEnv10943, newarg8941);
}

void ptr10388(void* env10389, void* arglst8922)
{
void* halt = get_env_value(env10389, encode_int((s32)4));
void* _u42 = get_env_value(env10389, encode_int((s32)3));
void* cons = get_env_value(env10389, encode_int((s32)2));
void* _u45 = get_env_value(env10389, encode_int((s32)1));
void* letk8387 = prim_car(arglst8922);
void* arg_lst8923 = prim_cdr(arglst8922);
void* t8309 = prim_car(arg_lst8923);
void* arg_lst8924 = prim_cdr(arg_lst8923);

//creating new closure instance
auto ptr10944 = reinterpret_cast<void (*)(void *, void *)>(&ptr10390);
env10389 = allocate_env_space(encode_int((s32)4));
void* id8809 = make_closure(reinterpret_cast<void *>(ptr10944), env10389);

//setting env list
set_env(env10389, encode_int((s32)1), _u45);
set_env(env10389, encode_int((s32)2), _u42);
set_env(env10389, encode_int((s32)3), t8309);
set_env(env10389, encode_int((s32)4), halt);


void* id8810 = reinterpret_cast<void *>(encode_int((s32)1));
void* id8811 = reinterpret_cast<void *>(encode_int((s32)2));
void* oldarg8942 = encode_null();
void* newarg8943 = prim_cons(id8811, oldarg8942);
void* newarg8944 = prim_cons(id8810, newarg8943);
void* newarg8945 = prim_cons(id8809, newarg8944);

//app-clo
void* cloPtr10945 = get_closure_ptr(cons);
void* procEnv10946 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10945);
function_ptr(procEnv10946, newarg8945);
}

void ptr10368(void* env10369, void* arglst8919)
{
void* halt = get_env_value(env10369, encode_int((s32)5));
void* _u42 = get_env_value(env10369, encode_int((s32)4));
void* _u43 = get_env_value(env10369, encode_int((s32)3));
void* cons = get_env_value(env10369, encode_int((s32)2));
void* _u45 = get_env_value(env10369, encode_int((s32)1));
void* letk8386 = prim_car(arglst8919);
void* arg_lst8920 = prim_cdr(arglst8919);
void* filter = prim_car(arg_lst8920);
void* arg_lst8921 = prim_cdr(arg_lst8920);

//creating new closure instance
auto ptr10947 = reinterpret_cast<void (*)(void *, void *)>(&ptr10388);
env10369 = allocate_env_space(encode_int((s32)4));
void* id8806 = make_closure(reinterpret_cast<void *>(ptr10947), env10369);

//setting env list
set_env(env10369, encode_int((s32)1), _u45);
set_env(env10369, encode_int((s32)2), cons);
set_env(env10369, encode_int((s32)3), _u42);
set_env(env10369, encode_int((s32)4), halt);


void* id8807 = reinterpret_cast<void *>(encode_int((s32)3));
void* id8808 = reinterpret_cast<void *>(encode_int((s32)2));
void* oldarg8946 = encode_null();
void* newarg8947 = prim_cons(id8808, oldarg8946);
void* newarg8948 = prim_cons(id8807, newarg8947);
void* newarg8949 = prim_cons(id8806, newarg8948);

//app-clo
void* cloPtr10948 = get_closure_ptr(_u43);
void* procEnv10949 = get_env(_u43);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10948);
function_ptr(procEnv10949, newarg8949);
}

void ptr10350(void* env10351, void* arglst8916)
{
void* cdr = get_env_value(env10351, encode_int((s32)9));
void* null_u63 = get_env_value(env10351, encode_int((s32)8));
void* _u42 = get_env_value(env10351, encode_int((s32)7));
void* _u43 = get_env_value(env10351, encode_int((s32)6));
void* car = get_env_value(env10351, encode_int((s32)5));
void* cons = get_env_value(env10351, encode_int((s32)4));
void* _u45 = get_env_value(env10351, encode_int((s32)3));
void* Ycomb = get_env_value(env10351, encode_int((s32)2));
void* halt = get_env_value(env10351, encode_int((s32)1));
void* letk8385 = prim_car(arglst8916);
void* arg_lst8917 = prim_cdr(arglst8916);
void* append = prim_car(arg_lst8917);
void* arg_lst8918 = prim_cdr(arg_lst8917);

//creating new closure instance
auto ptr10950 = reinterpret_cast<void (*)(void *, void *)>(&ptr10368);
env10351 = allocate_env_space(encode_int((s32)5));
void* id8793 = make_closure(reinterpret_cast<void *>(ptr10950), env10351);

//setting env list
set_env(env10351, encode_int((s32)1), _u45);
set_env(env10351, encode_int((s32)2), cons);
set_env(env10351, encode_int((s32)3), _u43);
set_env(env10351, encode_int((s32)4), _u42);
set_env(env10351, encode_int((s32)5), halt);



//creating new closure instance
auto ptr10951 = reinterpret_cast<void (*)(void *, void *)>(&ptr10370);
env10351 = allocate_env_space(encode_int((s32)4));
void* id8794 = make_closure(reinterpret_cast<void *>(ptr10951), env10351);

//setting env list
set_env(env10351, encode_int((s32)1), cons);
set_env(env10351, encode_int((s32)2), car);
set_env(env10351, encode_int((s32)3), null_u63);
set_env(env10351, encode_int((s32)4), cdr);


void* oldarg9014 = encode_null();
void* newarg9015 = prim_cons(id8794, oldarg9014);
void* newarg9016 = prim_cons(id8793, newarg9015);

//app-clo
void* cloPtr10952 = get_closure_ptr(Ycomb);
void* procEnv10953 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10952);
function_ptr(procEnv10953, newarg9016);
}

void ptr10334(void* env10335, void* arglst8913)
{
void* cdr = get_env_value(env10335, encode_int((s32)11));
void* null_u63 = get_env_value(env10335, encode_int((s32)10));
void* _u42 = get_env_value(env10335, encode_int((s32)9));
void* _u43 = get_env_value(env10335, encode_int((s32)8));
void* append1 = get_env_value(env10335, encode_int((s32)7));
void* car = get_env_value(env10335, encode_int((s32)6));
void* _u45 = get_env_value(env10335, encode_int((s32)5));
void* Ycomb = get_env_value(env10335, encode_int((s32)4));
void* halt = get_env_value(env10335, encode_int((s32)3));
void* cons = get_env_value(env10335, encode_int((s32)2));
void* foldl = get_env_value(env10335, encode_int((s32)1));
void* letk8384 = prim_car(arglst8913);
void* arg_lst8914 = prim_cdr(arglst8913);
void* reverse = prim_car(arg_lst8914);
void* arg_lst8915 = prim_cdr(arg_lst8914);

//creating new closure instance
auto ptr10954 = reinterpret_cast<void (*)(void *, void *)>(&ptr10350);
env10335 = allocate_env_space(encode_int((s32)9));
void* id8780 = make_closure(reinterpret_cast<void *>(ptr10954), env10335);

//setting env list
set_env(env10335, encode_int((s32)1), halt);
set_env(env10335, encode_int((s32)2), Ycomb);
set_env(env10335, encode_int((s32)3), _u45);
set_env(env10335, encode_int((s32)4), cons);
set_env(env10335, encode_int((s32)5), car);
set_env(env10335, encode_int((s32)6), _u43);
set_env(env10335, encode_int((s32)7), _u42);
set_env(env10335, encode_int((s32)8), null_u63);
set_env(env10335, encode_int((s32)9), cdr);



//creating new closure instance
auto ptr10955 = reinterpret_cast<void (*)(void *, void *)>(&ptr10352);
env10335 = allocate_env_space(encode_int((s32)6));
void* id8781 = make_closure(reinterpret_cast<void *>(ptr10955), env10335);

//setting env list
set_env(env10335, encode_int((s32)1), foldl);
set_env(env10335, encode_int((s32)2), cons);
set_env(env10335, encode_int((s32)3), car);
set_env(env10335, encode_int((s32)4), append1);
set_env(env10335, encode_int((s32)5), reverse);
set_env(env10335, encode_int((s32)6), cdr);


void* oldarg9066 = encode_null();
void* newarg9067 = prim_cons(id8781, oldarg9066);
void* newarg9068 = prim_cons(id8780, newarg9067);

//app-clo
void* cloPtr10956 = get_closure_ptr(Ycomb);
void* procEnv10957 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10956);
function_ptr(procEnv10957, newarg9068);
}

void ptr10300(void* env10301, void* arglst8910)
{
void* cdr = get_env_value(env10301, encode_int((s32)10));
void* null_u63 = get_env_value(env10301, encode_int((s32)9));
void* _u42 = get_env_value(env10301, encode_int((s32)8));
void* _u43 = get_env_value(env10301, encode_int((s32)7));
void* append1 = get_env_value(env10301, encode_int((s32)6));
void* car = get_env_value(env10301, encode_int((s32)5));
void* cons = get_env_value(env10301, encode_int((s32)4));
void* _u45 = get_env_value(env10301, encode_int((s32)3));
void* Ycomb = get_env_value(env10301, encode_int((s32)2));
void* halt = get_env_value(env10301, encode_int((s32)1));
void* letk8383 = prim_car(arglst8910);
void* arg_lst8911 = prim_cdr(arglst8910);
void* foldl = prim_car(arg_lst8911);
void* arg_lst8912 = prim_cdr(arg_lst8911);

//creating new closure instance
auto ptr10958 = reinterpret_cast<void (*)(void *, void *)>(&ptr10334);
env10301 = allocate_env_space(encode_int((s32)11));
void* id8769 = make_closure(reinterpret_cast<void *>(ptr10958), env10301);

//setting env list
set_env(env10301, encode_int((s32)1), foldl);
set_env(env10301, encode_int((s32)2), cons);
set_env(env10301, encode_int((s32)3), halt);
set_env(env10301, encode_int((s32)4), Ycomb);
set_env(env10301, encode_int((s32)5), _u45);
set_env(env10301, encode_int((s32)6), car);
set_env(env10301, encode_int((s32)7), append1);
set_env(env10301, encode_int((s32)8), _u43);
set_env(env10301, encode_int((s32)9), _u42);
set_env(env10301, encode_int((s32)10), null_u63);
set_env(env10301, encode_int((s32)11), cdr);



//creating new closure instance
auto ptr10959 = reinterpret_cast<void (*)(void *, void *)>(&ptr10336);
env10301 = allocate_env_space(encode_int((s32)5));
void* id8770 = make_closure(reinterpret_cast<void *>(ptr10959), env10301);

//setting env list
set_env(env10301, encode_int((s32)1), cons);
set_env(env10301, encode_int((s32)2), car);
set_env(env10301, encode_int((s32)3), append1);
set_env(env10301, encode_int((s32)4), null_u63);
set_env(env10301, encode_int((s32)5), cdr);


void* oldarg9116 = encode_null();
void* newarg9117 = prim_cons(id8770, oldarg9116);
void* newarg9118 = prim_cons(id8769, newarg9117);

//app-clo
void* cloPtr10960 = get_closure_ptr(Ycomb);
void* procEnv10961 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10960);
function_ptr(procEnv10961, newarg9118);
}

void ptr10266(void* env10267, void* arglst8907)
{
void* cdr = get_env_value(env10267, encode_int((s32)12));
void* null_u63 = get_env_value(env10267, encode_int((s32)11));
void* ormap = get_env_value(env10267, encode_int((s32)10));
void* _u42 = get_env_value(env10267, encode_int((s32)9));
void* _u43 = get_env_value(env10267, encode_int((s32)8));
void* append1 = get_env_value(env10267, encode_int((s32)7));
void* map1 = get_env_value(env10267, encode_int((s32)6));
void* car = get_env_value(env10267, encode_int((s32)5));
void* cons = get_env_value(env10267, encode_int((s32)4));
void* _u45 = get_env_value(env10267, encode_int((s32)3));
void* Ycomb = get_env_value(env10267, encode_int((s32)2));
void* halt = get_env_value(env10267, encode_int((s32)1));
void* letk8382 = prim_car(arglst8907);
void* arg_lst8908 = prim_cdr(arglst8907);
void* foldr = prim_car(arg_lst8908);
void* arg_lst8909 = prim_cdr(arg_lst8908);

//creating new closure instance
auto ptr10962 = reinterpret_cast<void (*)(void *, void *)>(&ptr10300);
env10267 = allocate_env_space(encode_int((s32)10));
void* id8747 = make_closure(reinterpret_cast<void *>(ptr10962), env10267);

//setting env list
set_env(env10267, encode_int((s32)1), halt);
set_env(env10267, encode_int((s32)2), Ycomb);
set_env(env10267, encode_int((s32)3), _u45);
set_env(env10267, encode_int((s32)4), cons);
set_env(env10267, encode_int((s32)5), car);
set_env(env10267, encode_int((s32)6), append1);
set_env(env10267, encode_int((s32)7), _u43);
set_env(env10267, encode_int((s32)8), _u42);
set_env(env10267, encode_int((s32)9), null_u63);
set_env(env10267, encode_int((s32)10), cdr);



//creating new closure instance
auto ptr10963 = reinterpret_cast<void (*)(void *, void *)>(&ptr10302);
env10267 = allocate_env_space(encode_int((s32)7));
void* id8748 = make_closure(reinterpret_cast<void *>(ptr10963), env10267);

//setting env list
set_env(env10267, encode_int((s32)1), cons);
set_env(env10267, encode_int((s32)2), car);
set_env(env10267, encode_int((s32)3), map1);
set_env(env10267, encode_int((s32)4), append1);
set_env(env10267, encode_int((s32)5), ormap);
set_env(env10267, encode_int((s32)6), null_u63);
set_env(env10267, encode_int((s32)7), cdr);


void* oldarg9217 = encode_null();
void* newarg9218 = prim_cons(id8748, oldarg9217);
void* newarg9219 = prim_cons(id8747, newarg9218);

//app-clo
void* cloPtr10964 = get_closure_ptr(Ycomb);
void* procEnv10965 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10964);
function_ptr(procEnv10965, newarg9219);
}

void ptr10208(void* env10209, void* arglst8904)
{
void* cdr = get_env_value(env10209, encode_int((s32)12));
void* null_u63 = get_env_value(env10209, encode_int((s32)11));
void* ormap = get_env_value(env10209, encode_int((s32)10));
void* _u42 = get_env_value(env10209, encode_int((s32)9));
void* _u43 = get_env_value(env10209, encode_int((s32)8));
void* append1 = get_env_value(env10209, encode_int((s32)7));
void* map1 = get_env_value(env10209, encode_int((s32)6));
void* car = get_env_value(env10209, encode_int((s32)5));
void* cons = get_env_value(env10209, encode_int((s32)4));
void* _u45 = get_env_value(env10209, encode_int((s32)3));
void* Ycomb = get_env_value(env10209, encode_int((s32)2));
void* halt = get_env_value(env10209, encode_int((s32)1));
void* letk8381 = prim_car(arglst8904);
void* arg_lst8905 = prim_cdr(arglst8904);
void* andmap = prim_car(arg_lst8905);
void* arg_lst8906 = prim_cdr(arg_lst8905);

//creating new closure instance
auto ptr10966 = reinterpret_cast<void (*)(void *, void *)>(&ptr10266);
env10209 = allocate_env_space(encode_int((s32)12));
void* id8725 = make_closure(reinterpret_cast<void *>(ptr10966), env10209);

//setting env list
set_env(env10209, encode_int((s32)1), halt);
set_env(env10209, encode_int((s32)2), Ycomb);
set_env(env10209, encode_int((s32)3), _u45);
set_env(env10209, encode_int((s32)4), cons);
set_env(env10209, encode_int((s32)5), car);
set_env(env10209, encode_int((s32)6), map1);
set_env(env10209, encode_int((s32)7), append1);
set_env(env10209, encode_int((s32)8), _u43);
set_env(env10209, encode_int((s32)9), _u42);
set_env(env10209, encode_int((s32)10), ormap);
set_env(env10209, encode_int((s32)11), null_u63);
set_env(env10209, encode_int((s32)12), cdr);



//creating new closure instance
auto ptr10967 = reinterpret_cast<void (*)(void *, void *)>(&ptr10268);
env10209 = allocate_env_space(encode_int((s32)7));
void* id8726 = make_closure(reinterpret_cast<void *>(ptr10967), env10209);

//setting env list
set_env(env10209, encode_int((s32)1), cons);
set_env(env10209, encode_int((s32)2), car);
set_env(env10209, encode_int((s32)3), map1);
set_env(env10209, encode_int((s32)4), append1);
set_env(env10209, encode_int((s32)5), ormap);
set_env(env10209, encode_int((s32)6), null_u63);
set_env(env10209, encode_int((s32)7), cdr);


void* oldarg9318 = encode_null();
void* newarg9319 = prim_cons(id8726, oldarg9318);
void* newarg9320 = prim_cons(id8725, newarg9319);

//app-clo
void* cloPtr10968 = get_closure_ptr(Ycomb);
void* procEnv10969 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10968);
function_ptr(procEnv10969, newarg9320);
}

void ptr10126(void* env10127, void* arglst8901)
{
void* cdr = get_env_value(env10127, encode_int((s32)15));
void* _u43 = get_env_value(env10127, encode_int((s32)14));
void* append1 = get_env_value(env10127, encode_int((s32)13));
void* map1 = get_env_value(env10127, encode_int((s32)12));
void* car = get_env_value(env10127, encode_int((s32)11));
void* cons = get_env_value(env10127, encode_int((s32)10));
void* null_u63 = get_env_value(env10127, encode_int((s32)9));
void* length = get_env_value(env10127, encode_int((s32)8));
void* Ycomb = get_env_value(env10127, encode_int((s32)7));
void* halt = get_env_value(env10127, encode_int((s32)6));
void* _u42 = get_env_value(env10127, encode_int((s32)5));
void* equal_u63 = get_env_value(env10127, encode_int((s32)4));
void* _u45 = get_env_value(env10127, encode_int((s32)3));
void* cdar = get_env_value(env10127, encode_int((s32)2));
void* _u61 = get_env_value(env10127, encode_int((s32)1));
void* letk8380 = prim_car(arglst8901);
void* arg_lst8902 = prim_cdr(arglst8901);
void* ormap = prim_car(arg_lst8902);
void* arg_lst8903 = prim_cdr(arg_lst8902);

//creating new closure instance
auto ptr10970 = reinterpret_cast<void (*)(void *, void *)>(&ptr10208);
env10127 = allocate_env_space(encode_int((s32)12));
void* id8680 = make_closure(reinterpret_cast<void *>(ptr10970), env10127);

//setting env list
set_env(env10127, encode_int((s32)1), halt);
set_env(env10127, encode_int((s32)2), Ycomb);
set_env(env10127, encode_int((s32)3), _u45);
set_env(env10127, encode_int((s32)4), cons);
set_env(env10127, encode_int((s32)5), car);
set_env(env10127, encode_int((s32)6), map1);
set_env(env10127, encode_int((s32)7), append1);
set_env(env10127, encode_int((s32)8), _u43);
set_env(env10127, encode_int((s32)9), _u42);
set_env(env10127, encode_int((s32)10), ormap);
set_env(env10127, encode_int((s32)11), null_u63);
set_env(env10127, encode_int((s32)12), cdr);



//creating new closure instance
auto ptr10971 = reinterpret_cast<void (*)(void *, void *)>(&ptr10210);
env10127 = allocate_env_space(encode_int((s32)9));
void* id8681 = make_closure(reinterpret_cast<void *>(ptr10971), env10127);

//setting env list
set_env(env10127, encode_int((s32)1), _u61);
set_env(env10127, encode_int((s32)2), cdar);
set_env(env10127, encode_int((s32)3), length);
set_env(env10127, encode_int((s32)4), null_u63);
set_env(env10127, encode_int((s32)5), car);
set_env(env10127, encode_int((s32)6), map1);
set_env(env10127, encode_int((s32)7), equal_u63);
set_env(env10127, encode_int((s32)8), Ycomb);
set_env(env10127, encode_int((s32)9), cdr);


void* oldarg9505 = encode_null();
void* newarg9506 = prim_cons(id8681, oldarg9505);
void* newarg9507 = prim_cons(id8680, newarg9506);

//app-clo
void* cloPtr10972 = get_closure_ptr(Ycomb);
void* procEnv10973 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10972);
function_ptr(procEnv10973, newarg9507);
}

void ptr10094(void* env10095, void* arglst8898)
{
void* cdr = get_env_value(env10095, encode_int((s32)15));
void* _u43 = get_env_value(env10095, encode_int((s32)14));
void* append1 = get_env_value(env10095, encode_int((s32)13));
void* map1 = get_env_value(env10095, encode_int((s32)12));
void* car = get_env_value(env10095, encode_int((s32)11));
void* cons = get_env_value(env10095, encode_int((s32)10));
void* null_u63 = get_env_value(env10095, encode_int((s32)9));
void* length = get_env_value(env10095, encode_int((s32)8));
void* Ycomb = get_env_value(env10095, encode_int((s32)7));
void* halt = get_env_value(env10095, encode_int((s32)6));
void* _u42 = get_env_value(env10095, encode_int((s32)5));
void* equal_u63 = get_env_value(env10095, encode_int((s32)4));
void* _u45 = get_env_value(env10095, encode_int((s32)3));
void* cdar = get_env_value(env10095, encode_int((s32)2));
void* _u61 = get_env_value(env10095, encode_int((s32)1));
void* letk8379 = prim_car(arglst8898);
void* arg_lst8899 = prim_cdr(arglst8898);
void* map = prim_car(arg_lst8899);
void* arg_lst8900 = prim_cdr(arg_lst8899);

//creating new closure instance
auto ptr10974 = reinterpret_cast<void (*)(void *, void *)>(&ptr10126);
env10095 = allocate_env_space(encode_int((s32)15));
void* id8617 = make_closure(reinterpret_cast<void *>(ptr10974), env10095);

//setting env list
set_env(env10095, encode_int((s32)1), _u61);
set_env(env10095, encode_int((s32)2), cdar);
set_env(env10095, encode_int((s32)3), _u45);
set_env(env10095, encode_int((s32)4), equal_u63);
set_env(env10095, encode_int((s32)5), _u42);
set_env(env10095, encode_int((s32)6), halt);
set_env(env10095, encode_int((s32)7), Ycomb);
set_env(env10095, encode_int((s32)8), length);
set_env(env10095, encode_int((s32)9), null_u63);
set_env(env10095, encode_int((s32)10), cons);
set_env(env10095, encode_int((s32)11), car);
set_env(env10095, encode_int((s32)12), map1);
set_env(env10095, encode_int((s32)13), append1);
set_env(env10095, encode_int((s32)14), _u43);
set_env(env10095, encode_int((s32)15), cdr);



//creating new closure instance
auto ptr10975 = reinterpret_cast<void (*)(void *, void *)>(&ptr10128);
env10095 = allocate_env_space(encode_int((s32)9));
void* id8618 = make_closure(reinterpret_cast<void *>(ptr10975), env10095);

//setting env list
set_env(env10095, encode_int((s32)1), _u61);
set_env(env10095, encode_int((s32)2), cdar);
set_env(env10095, encode_int((s32)3), length);
set_env(env10095, encode_int((s32)4), null_u63);
set_env(env10095, encode_int((s32)5), car);
set_env(env10095, encode_int((s32)6), map1);
set_env(env10095, encode_int((s32)7), equal_u63);
set_env(env10095, encode_int((s32)8), Ycomb);
set_env(env10095, encode_int((s32)9), cdr);


void* oldarg9772 = encode_null();
void* newarg9773 = prim_cons(id8618, oldarg9772);
void* newarg9774 = prim_cons(id8617, newarg9773);

//app-clo
void* cloPtr10976 = get_closure_ptr(Ycomb);
void* procEnv10977 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10976);
function_ptr(procEnv10977, newarg9774);
}

void ptr10078(void* env10079, void* arglst8895)
{
void* cdr = get_env_value(env10079, encode_int((s32)14));
void* _u43 = get_env_value(env10079, encode_int((s32)13));
void* append1 = get_env_value(env10079, encode_int((s32)12));
void* car = get_env_value(env10079, encode_int((s32)11));
void* cons = get_env_value(env10079, encode_int((s32)10));
void* null_u63 = get_env_value(env10079, encode_int((s32)9));
void* length = get_env_value(env10079, encode_int((s32)8));
void* Ycomb = get_env_value(env10079, encode_int((s32)7));
void* halt = get_env_value(env10079, encode_int((s32)6));
void* _u42 = get_env_value(env10079, encode_int((s32)5));
void* equal_u63 = get_env_value(env10079, encode_int((s32)4));
void* _u45 = get_env_value(env10079, encode_int((s32)3));
void* cdar = get_env_value(env10079, encode_int((s32)2));
void* _u61 = get_env_value(env10079, encode_int((s32)1));
void* letk8378 = prim_car(arglst8895);
void* arg_lst8896 = prim_cdr(arglst8895);
void* map1 = prim_car(arg_lst8896);
void* arg_lst8897 = prim_cdr(arg_lst8896);

//creating new closure instance
auto ptr10978 = reinterpret_cast<void (*)(void *, void *)>(&ptr10094);
env10079 = allocate_env_space(encode_int((s32)15));
void* id8597 = make_closure(reinterpret_cast<void *>(ptr10978), env10079);

//setting env list
set_env(env10079, encode_int((s32)1), _u61);
set_env(env10079, encode_int((s32)2), cdar);
set_env(env10079, encode_int((s32)3), _u45);
set_env(env10079, encode_int((s32)4), equal_u63);
set_env(env10079, encode_int((s32)5), _u42);
set_env(env10079, encode_int((s32)6), halt);
set_env(env10079, encode_int((s32)7), Ycomb);
set_env(env10079, encode_int((s32)8), length);
set_env(env10079, encode_int((s32)9), null_u63);
set_env(env10079, encode_int((s32)10), cons);
set_env(env10079, encode_int((s32)11), car);
set_env(env10079, encode_int((s32)12), map1);
set_env(env10079, encode_int((s32)13), append1);
set_env(env10079, encode_int((s32)14), _u43);
set_env(env10079, encode_int((s32)15), cdr);



//creating new closure instance
auto ptr10979 = reinterpret_cast<void (*)(void *, void *)>(&ptr10096);
env10079 = allocate_env_space(encode_int((s32)5));
void* id8598 = make_closure(reinterpret_cast<void *>(ptr10979), env10079);

//setting env list
set_env(env10079, encode_int((s32)1), cons);
set_env(env10079, encode_int((s32)2), car);
set_env(env10079, encode_int((s32)3), map1);
set_env(env10079, encode_int((s32)4), null_u63);
set_env(env10079, encode_int((s32)5), cdr);


void* oldarg9864 = encode_null();
void* newarg9865 = prim_cons(id8598, oldarg9864);
void* newarg9866 = prim_cons(id8597, newarg9865);

//app-clo
void* cloPtr10980 = get_closure_ptr(Ycomb);
void* procEnv10981 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10980);
function_ptr(procEnv10981, newarg9866);
}

void ptr10064(void* env10065, void* arglst8892)
{
void* cdr = get_env_value(env10065, encode_int((s32)13));
void* _u43 = get_env_value(env10065, encode_int((s32)12));
void* car = get_env_value(env10065, encode_int((s32)11));
void* cons = get_env_value(env10065, encode_int((s32)10));
void* null_u63 = get_env_value(env10065, encode_int((s32)9));
void* length = get_env_value(env10065, encode_int((s32)8));
void* Ycomb = get_env_value(env10065, encode_int((s32)7));
void* halt = get_env_value(env10065, encode_int((s32)6));
void* _u42 = get_env_value(env10065, encode_int((s32)5));
void* equal_u63 = get_env_value(env10065, encode_int((s32)4));
void* _u45 = get_env_value(env10065, encode_int((s32)3));
void* cdar = get_env_value(env10065, encode_int((s32)2));
void* _u61 = get_env_value(env10065, encode_int((s32)1));
void* letk8377 = prim_car(arglst8892);
void* arg_lst8893 = prim_cdr(arglst8892);
void* append1 = prim_car(arg_lst8893);
void* arg_lst8894 = prim_cdr(arg_lst8893);

//creating new closure instance
auto ptr10982 = reinterpret_cast<void (*)(void *, void *)>(&ptr10078);
env10065 = allocate_env_space(encode_int((s32)14));
void* id8586 = make_closure(reinterpret_cast<void *>(ptr10982), env10065);

//setting env list
set_env(env10065, encode_int((s32)1), _u61);
set_env(env10065, encode_int((s32)2), cdar);
set_env(env10065, encode_int((s32)3), _u45);
set_env(env10065, encode_int((s32)4), equal_u63);
set_env(env10065, encode_int((s32)5), _u42);
set_env(env10065, encode_int((s32)6), halt);
set_env(env10065, encode_int((s32)7), Ycomb);
set_env(env10065, encode_int((s32)8), length);
set_env(env10065, encode_int((s32)9), null_u63);
set_env(env10065, encode_int((s32)10), cons);
set_env(env10065, encode_int((s32)11), car);
set_env(env10065, encode_int((s32)12), append1);
set_env(env10065, encode_int((s32)13), _u43);
set_env(env10065, encode_int((s32)14), cdr);



//creating new closure instance
auto ptr10983 = reinterpret_cast<void (*)(void *, void *)>(&ptr10080);
env10065 = allocate_env_space(encode_int((s32)4));
void* id8587 = make_closure(reinterpret_cast<void *>(ptr10983), env10065);

//setting env list
set_env(env10065, encode_int((s32)1), cons);
set_env(env10065, encode_int((s32)2), car);
set_env(env10065, encode_int((s32)3), null_u63);
set_env(env10065, encode_int((s32)4), cdr);


void* oldarg9915 = encode_null();
void* newarg9916 = prim_cons(id8587, oldarg9915);
void* newarg9917 = prim_cons(id8586, newarg9916);

//app-clo
void* cloPtr10984 = get_closure_ptr(Ycomb);
void* procEnv10985 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10984);
function_ptr(procEnv10985, newarg9917);
}

void ptr10058(void* env10059, void* arglst8889)
{
void* cdr = get_env_value(env10059, encode_int((s32)12));
void* Ycomb = get_env_value(env10059, encode_int((s32)11));
void* _u43 = get_env_value(env10059, encode_int((s32)10));
void* car = get_env_value(env10059, encode_int((s32)9));
void* cons = get_env_value(env10059, encode_int((s32)8));
void* null_u63 = get_env_value(env10059, encode_int((s32)7));
void* length = get_env_value(env10059, encode_int((s32)6));
void* _u42 = get_env_value(env10059, encode_int((s32)5));
void* equal_u63 = get_env_value(env10059, encode_int((s32)4));
void* _u45 = get_env_value(env10059, encode_int((s32)3));
void* cdar = get_env_value(env10059, encode_int((s32)2));
void* _u61 = get_env_value(env10059, encode_int((s32)1));
void* letk8376 = prim_car(arglst8889);
void* arg_lst8890 = prim_cdr(arglst8889);
void* halt = prim_car(arg_lst8890);
void* arg_lst8891 = prim_cdr(arg_lst8890);

//creating new closure instance
auto ptr10986 = reinterpret_cast<void (*)(void *, void *)>(&ptr10064);
env10059 = allocate_env_space(encode_int((s32)13));
void* id8577 = make_closure(reinterpret_cast<void *>(ptr10986), env10059);

//setting env list
set_env(env10059, encode_int((s32)1), _u61);
set_env(env10059, encode_int((s32)2), cdar);
set_env(env10059, encode_int((s32)3), _u45);
set_env(env10059, encode_int((s32)4), equal_u63);
set_env(env10059, encode_int((s32)5), _u42);
set_env(env10059, encode_int((s32)6), halt);
set_env(env10059, encode_int((s32)7), Ycomb);
set_env(env10059, encode_int((s32)8), length);
set_env(env10059, encode_int((s32)9), null_u63);
set_env(env10059, encode_int((s32)10), cons);
set_env(env10059, encode_int((s32)11), car);
set_env(env10059, encode_int((s32)12), _u43);
set_env(env10059, encode_int((s32)13), cdr);



//creating new closure instance
auto ptr10987 = reinterpret_cast<void (*)(void *, void *)>(&ptr10066);
env10059 = allocate_env_space(encode_int((s32)4));
void* id8578 = make_closure(reinterpret_cast<void *>(ptr10987), env10059);

//setting env list
set_env(env10059, encode_int((s32)1), cons);
set_env(env10059, encode_int((s32)2), car);
set_env(env10059, encode_int((s32)3), null_u63);
set_env(env10059, encode_int((s32)4), cdr);


void* oldarg9960 = encode_null();
void* newarg9961 = prim_cons(id8578, oldarg9960);
void* newarg9962 = prim_cons(id8577, newarg9961);

//app-clo
void* cloPtr10988 = get_closure_ptr(Ycomb);
void* procEnv10989 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10988);
function_ptr(procEnv10989, newarg9962);
}

void ptr10046(void* env10047, void* arglst8886)
{
void* cdr = get_env_value(env10047, encode_int((s32)11));
void* _u43 = get_env_value(env10047, encode_int((s32)10));
void* car = get_env_value(env10047, encode_int((s32)9));
void* cons = get_env_value(env10047, encode_int((s32)8));
void* null_u63 = get_env_value(env10047, encode_int((s32)7));
void* length = get_env_value(env10047, encode_int((s32)6));
void* _u42 = get_env_value(env10047, encode_int((s32)5));
void* equal_u63 = get_env_value(env10047, encode_int((s32)4));
void* _u45 = get_env_value(env10047, encode_int((s32)3));
void* cdar = get_env_value(env10047, encode_int((s32)2));
void* _u61 = get_env_value(env10047, encode_int((s32)1));
void* letk8375 = prim_car(arglst8886);
void* arg_lst8887 = prim_cdr(arglst8886);
void* Ycomb = prim_car(arg_lst8887);
void* arg_lst8888 = prim_cdr(arg_lst8887);

//creating new closure instance
auto ptr10990 = reinterpret_cast<void (*)(void *, void *)>(&ptr10058);
env10047 = allocate_env_space(encode_int((s32)12));
void* id8572 = make_closure(reinterpret_cast<void *>(ptr10990), env10047);

//setting env list
set_env(env10047, encode_int((s32)1), _u61);
set_env(env10047, encode_int((s32)2), cdar);
set_env(env10047, encode_int((s32)3), _u45);
set_env(env10047, encode_int((s32)4), equal_u63);
set_env(env10047, encode_int((s32)5), _u42);
set_env(env10047, encode_int((s32)6), length);
set_env(env10047, encode_int((s32)7), null_u63);
set_env(env10047, encode_int((s32)8), cons);
set_env(env10047, encode_int((s32)9), car);
set_env(env10047, encode_int((s32)10), _u43);
set_env(env10047, encode_int((s32)11), Ycomb);
set_env(env10047, encode_int((s32)12), cdr);



//creating new closure instance
auto ptr10991 = reinterpret_cast<void (*)(void *, void *)>(&ptr10060);
env10047 = allocate_env_space(encode_int((s32)0));
void* id8573 = make_closure(reinterpret_cast<void *>(ptr10991), env10047);


void* oldarg9972 = encode_null();
void* newarg9973 = prim_cons(id8573, oldarg9972);
void* newarg9974 = prim_cons(id8572, newarg9973);

//app-clo
void* cloPtr10992 = get_closure_ptr(Ycomb);
void* procEnv10993 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10992);
function_ptr(procEnv10993, newarg9974);
}

void ptr10044(void* env10045, void* arglst8880)
{
void* kont8535 = prim_car(arglst8880);
void* arg_lst8881 = prim_cdr(arglst8880);
void* x = prim_car(arg_lst8881);
void* arg_lst8882 = prim_cdr(arg_lst8881);
void* oldarg8883 = encode_null();
void* newarg8884 = prim_cons(x, oldarg8883);
void* newarg8885 = prim_cons(kont8535, newarg8884);

//app-clo
void* cloPtr10994 = get_closure_ptr(x);
void* procEnv10995 = get_env(x);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10994);
function_ptr(procEnv10995, newarg8885);
}

void ptr10042(void* env10043, void* args8373)
{
void* kkont8372 = prim_car(args8373);
void* args = prim_cdr(args8373);
void* prm8374 = apply_prim__u43(args);
void* id8563 = encode_null();
void* oldarg8877 = encode_null();
void* newarg8878 = prim_cons(prm8374, oldarg8877);
void* newarg8879 = prim_cons(id8563, newarg8878);

//app-clo
void* cloPtr10996 = get_closure_ptr(kkont8372);
void* procEnv10997 = get_env(kkont8372);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10996);
function_ptr(procEnv10997, newarg8879);
}

void ptr10040(void* env10041, void* args8370)
{
void* kkont8369 = prim_car(args8370);
void* args = prim_cdr(args8370);
void* prm8371 = apply_prim__u45(args);
void* id8562 = encode_null();
void* oldarg8874 = encode_null();
void* newarg8875 = prim_cons(prm8371, oldarg8874);
void* newarg8876 = prim_cons(id8562, newarg8875);

//app-clo
void* cloPtr10998 = get_closure_ptr(kkont8369);
void* procEnv10999 = get_env(kkont8369);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10998);
function_ptr(procEnv10999, newarg8876);
}

void ptr10038(void* env10039, void* args8367)
{
void* kkont8366 = prim_car(args8367);
void* args = prim_cdr(args8367);
void* prm8368 = apply_prim__u42(args);
void* id8561 = encode_null();
void* oldarg8871 = encode_null();
void* newarg8872 = prim_cons(prm8368, oldarg8871);
void* newarg8873 = prim_cons(id8561, newarg8872);

//app-clo
void* cloPtr11000 = get_closure_ptr(kkont8366);
void* procEnv11001 = get_env(kkont8366);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11000);
function_ptr(procEnv11001, newarg8873);
}

void ptr10036(void* env10037, void* args8364)
{
void* kkont8363 = prim_car(args8364);
void* args = prim_cdr(args8364);
void* prm8365 = apply_prim__u61(args);
void* id8560 = encode_null();
void* oldarg8868 = encode_null();
void* newarg8869 = prim_cons(prm8365, oldarg8868);
void* newarg8870 = prim_cons(id8560, newarg8869);

//app-clo
void* cloPtr11002 = get_closure_ptr(kkont8363);
void* procEnv11003 = get_env(kkont8363);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11002);
function_ptr(procEnv11003, newarg8870);
}

void ptr10034(void* env10035, void* args8361)
{
void* kkont8360 = prim_car(args8361);
void* args = prim_cdr(args8361);
void* prm8362 = apply_prim__u62(args);
void* id8559 = encode_null();
void* oldarg8865 = encode_null();
void* newarg8866 = prim_cons(prm8362, oldarg8865);
void* newarg8867 = prim_cons(id8559, newarg8866);

//app-clo
void* cloPtr11004 = get_closure_ptr(kkont8360);
void* procEnv11005 = get_env(kkont8360);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11004);
function_ptr(procEnv11005, newarg8867);
}

void ptr10032(void* env10033, void* args8358)
{
void* kkont8357 = prim_car(args8358);
void* args = prim_cdr(args8358);
void* prm8359 = apply_prim__u62_u61(args);
void* id8558 = encode_null();
void* oldarg8862 = encode_null();
void* newarg8863 = prim_cons(prm8359, oldarg8862);
void* newarg8864 = prim_cons(id8558, newarg8863);

//app-clo
void* cloPtr11006 = get_closure_ptr(kkont8357);
void* procEnv11007 = get_env(kkont8357);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11006);
function_ptr(procEnv11007, newarg8864);
}

void ptr10030(void* env10031, void* args8355)
{
void* kkont8354 = prim_car(args8355);
void* args = prim_cdr(args8355);
void* prm8356 = apply_prim__u60(args);
void* id8557 = encode_null();
void* oldarg8859 = encode_null();
void* newarg8860 = prim_cons(prm8356, oldarg8859);
void* newarg8861 = prim_cons(id8557, newarg8860);

//app-clo
void* cloPtr11008 = get_closure_ptr(kkont8354);
void* procEnv11009 = get_env(kkont8354);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11008);
function_ptr(procEnv11009, newarg8861);
}

void ptr10028(void* env10029, void* args8352)
{
void* kkont8351 = prim_car(args8352);
void* args = prim_cdr(args8352);
void* prm8353 = apply_prim__u60_u61(args);
void* id8556 = encode_null();
void* oldarg8856 = encode_null();
void* newarg8857 = prim_cons(prm8353, oldarg8856);
void* newarg8858 = prim_cons(id8556, newarg8857);

//app-clo
void* cloPtr11010 = get_closure_ptr(kkont8351);
void* procEnv11011 = get_env(kkont8351);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11010);
function_ptr(procEnv11011, newarg8858);
}

void ptr10026(void* env10027, void* args8349)
{
void* kkont8348 = prim_car(args8349);
void* args = prim_cdr(args8349);
void* prm8350 = apply_prim_car(args);
void* id8555 = encode_null();
void* oldarg8853 = encode_null();
void* newarg8854 = prim_cons(prm8350, oldarg8853);
void* newarg8855 = prim_cons(id8555, newarg8854);

//app-clo
void* cloPtr11012 = get_closure_ptr(kkont8348);
void* procEnv11013 = get_env(kkont8348);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11012);
function_ptr(procEnv11013, newarg8855);
}

void ptr10024(void* env10025, void* args8346)
{
void* kkont8345 = prim_car(args8346);
void* args = prim_cdr(args8346);
void* prm8347 = apply_prim_cdr(args);
void* id8554 = encode_null();
void* oldarg8850 = encode_null();
void* newarg8851 = prim_cons(prm8347, oldarg8850);
void* newarg8852 = prim_cons(id8554, newarg8851);

//app-clo
void* cloPtr11014 = get_closure_ptr(kkont8345);
void* procEnv11015 = get_env(kkont8345);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11014);
function_ptr(procEnv11015, newarg8852);
}

void ptr10022(void* env10023, void* args8343)
{
void* kkont8342 = prim_car(args8343);
void* args = prim_cdr(args8343);
void* prm8344 = apply_prim_cdar(args);
void* id8553 = encode_null();
void* oldarg8847 = encode_null();
void* newarg8848 = prim_cons(prm8344, oldarg8847);
void* newarg8849 = prim_cons(id8553, newarg8848);

//app-clo
void* cloPtr11016 = get_closure_ptr(kkont8342);
void* procEnv11017 = get_env(kkont8342);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11016);
function_ptr(procEnv11017, newarg8849);
}

void ptr10020(void* env10021, void* args8340)
{
void* kkont8339 = prim_car(args8340);
void* args = prim_cdr(args8340);
void* prm8341 = apply_prim_cons(args);
void* id8552 = encode_null();
void* oldarg8844 = encode_null();
void* newarg8845 = prim_cons(prm8341, oldarg8844);
void* newarg8846 = prim_cons(id8552, newarg8845);

//app-clo
void* cloPtr11018 = get_closure_ptr(kkont8339);
void* procEnv11019 = get_env(kkont8339);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11018);
function_ptr(procEnv11019, newarg8846);
}

void ptr10018(void* env10019, void* args8337)
{
void* kkont8336 = prim_car(args8337);
void* args = prim_cdr(args8337);
void* prm8338 = apply_prim_list(args);
void* id8551 = encode_null();
void* oldarg8841 = encode_null();
void* newarg8842 = prim_cons(prm8338, oldarg8841);
void* newarg8843 = prim_cons(id8551, newarg8842);

//app-clo
void* cloPtr11020 = get_closure_ptr(kkont8336);
void* procEnv11021 = get_env(kkont8336);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11020);
function_ptr(procEnv11021, newarg8843);
}

void ptr10016(void* env10017, void* args8334)
{
void* kkont8333 = prim_car(args8334);
void* args = prim_cdr(args8334);
void* prm8335 = apply_prim_length(args);
void* id8550 = encode_null();
void* oldarg8838 = encode_null();
void* newarg8839 = prim_cons(prm8335, oldarg8838);
void* newarg8840 = prim_cons(id8550, newarg8839);

//app-clo
void* cloPtr11022 = get_closure_ptr(kkont8333);
void* procEnv11023 = get_env(kkont8333);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11022);
function_ptr(procEnv11023, newarg8840);
}

void ptr10014(void* env10015, void* args8331)
{
void* kkont8330 = prim_car(args8331);
void* args = prim_cdr(args8331);
void* prm8332 = apply_prim_equal_u63(args);
void* id8549 = encode_null();
void* oldarg8835 = encode_null();
void* newarg8836 = prim_cons(prm8332, oldarg8835);
void* newarg8837 = prim_cons(id8549, newarg8836);

//app-clo
void* cloPtr11024 = get_closure_ptr(kkont8330);
void* procEnv11025 = get_env(kkont8330);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11024);
function_ptr(procEnv11025, newarg8837);
}

void ptr10012(void* env10013, void* args8328)
{
void* kkont8327 = prim_car(args8328);
void* args = prim_cdr(args8328);
void* prm8329 = apply_prim_eq_u63(args);
void* id8548 = encode_null();
void* oldarg8832 = encode_null();
void* newarg8833 = prim_cons(prm8329, oldarg8832);
void* newarg8834 = prim_cons(id8548, newarg8833);

//app-clo
void* cloPtr11026 = get_closure_ptr(kkont8327);
void* procEnv11027 = get_env(kkont8327);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11026);
function_ptr(procEnv11027, newarg8834);
}

void ptr10010(void* env10011, void* args8325)
{
void* kkont8324 = prim_car(args8325);
void* args = prim_cdr(args8325);
void* prm8326 = apply_prim_null_u63(args);
void* id8547 = encode_null();
void* oldarg8829 = encode_null();
void* newarg8830 = prim_cons(prm8326, oldarg8829);
void* newarg8831 = prim_cons(id8547, newarg8830);

//app-clo
void* cloPtr11028 = get_closure_ptr(kkont8324);
void* procEnv11029 = get_env(kkont8324);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11028);
function_ptr(procEnv11029, newarg8831);
}

void ptr10008(void* env10009, void* args8322)
{
void* kkont8321 = prim_car(args8322);
void* args = prim_cdr(args8322);
void* prm8323 = apply_prim_odd_u63(args);
void* id8546 = encode_null();
void* oldarg8826 = encode_null();
void* newarg8827 = prim_cons(prm8323, oldarg8826);
void* newarg8828 = prim_cons(id8546, newarg8827);

//app-clo
void* cloPtr11030 = get_closure_ptr(kkont8321);
void* procEnv11031 = get_env(kkont8321);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11030);
function_ptr(procEnv11031, newarg8828);
}

void ptr10006(void* env10007, void* args8319)
{
void* kkont8318 = prim_car(args8319);
void* args = prim_cdr(args8319);
void* prm8320 = apply_prim_even_u63(args);
void* id8545 = encode_null();
void* oldarg8823 = encode_null();
void* newarg8824 = prim_cons(prm8320, oldarg8823);
void* newarg8825 = prim_cons(id8545, newarg8824);

//app-clo
void* cloPtr11032 = get_closure_ptr(kkont8318);
void* procEnv11033 = get_env(kkont8318);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11032);
function_ptr(procEnv11033, newarg8825);
}

void ptr10004(void* env10005, void* args8316)
{
void* kkont8315 = prim_car(args8316);
void* args = prim_cdr(args8316);
void* prm8317 = apply_prim_positive_u63(args);
void* id8544 = encode_null();
void* oldarg8820 = encode_null();
void* newarg8821 = prim_cons(prm8317, oldarg8820);
void* newarg8822 = prim_cons(id8544, newarg8821);

//app-clo
void* cloPtr11034 = get_closure_ptr(kkont8315);
void* procEnv11035 = get_env(kkont8315);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11034);
function_ptr(procEnv11035, newarg8822);
}

void ptr10002(void* env10003, void* args8313)
{
void* kkont8312 = prim_car(args8313);
void* args = prim_cdr(args8313);
void* prm8314 = apply_prim_negative_u63(args);
void* id8543 = encode_null();
void* oldarg8817 = encode_null();
void* newarg8818 = prim_cons(prm8314, oldarg8817);
void* newarg8819 = prim_cons(id8543, newarg8818);

//app-clo
void* cloPtr11036 = get_closure_ptr(kkont8312);
void* procEnv11037 = get_env(kkont8312);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11036);
function_ptr(procEnv11037, newarg8819);
}

void root(void* rootenv10394, void* rootarg10395)
{

//creating new closure instance
auto ptr11038 = reinterpret_cast<void (*)(void *, void *)>(&ptr10002);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* negative_u63 = make_closure(reinterpret_cast<void *>(ptr11038), rootenv10394);



//creating new closure instance
auto ptr11039 = reinterpret_cast<void (*)(void *, void *)>(&ptr10004);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* positive_u63 = make_closure(reinterpret_cast<void *>(ptr11039), rootenv10394);



//creating new closure instance
auto ptr11040 = reinterpret_cast<void (*)(void *, void *)>(&ptr10006);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* even_u63 = make_closure(reinterpret_cast<void *>(ptr11040), rootenv10394);



//creating new closure instance
auto ptr11041 = reinterpret_cast<void (*)(void *, void *)>(&ptr10008);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* odd_u63 = make_closure(reinterpret_cast<void *>(ptr11041), rootenv10394);



//creating new closure instance
auto ptr11042 = reinterpret_cast<void (*)(void *, void *)>(&ptr10010);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* null_u63 = make_closure(reinterpret_cast<void *>(ptr11042), rootenv10394);



//creating new closure instance
auto ptr11043 = reinterpret_cast<void (*)(void *, void *)>(&ptr10012);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* eq_u63 = make_closure(reinterpret_cast<void *>(ptr11043), rootenv10394);



//creating new closure instance
auto ptr11044 = reinterpret_cast<void (*)(void *, void *)>(&ptr10014);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* equal_u63 = make_closure(reinterpret_cast<void *>(ptr11044), rootenv10394);



//creating new closure instance
auto ptr11045 = reinterpret_cast<void (*)(void *, void *)>(&ptr10016);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* length = make_closure(reinterpret_cast<void *>(ptr11045), rootenv10394);



//creating new closure instance
auto ptr11046 = reinterpret_cast<void (*)(void *, void *)>(&ptr10018);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* list = make_closure(reinterpret_cast<void *>(ptr11046), rootenv10394);



//creating new closure instance
auto ptr11047 = reinterpret_cast<void (*)(void *, void *)>(&ptr10020);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* cons = make_closure(reinterpret_cast<void *>(ptr11047), rootenv10394);



//creating new closure instance
auto ptr11048 = reinterpret_cast<void (*)(void *, void *)>(&ptr10022);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* cdar = make_closure(reinterpret_cast<void *>(ptr11048), rootenv10394);



//creating new closure instance
auto ptr11049 = reinterpret_cast<void (*)(void *, void *)>(&ptr10024);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* cdr = make_closure(reinterpret_cast<void *>(ptr11049), rootenv10394);



//creating new closure instance
auto ptr11050 = reinterpret_cast<void (*)(void *, void *)>(&ptr10026);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* car = make_closure(reinterpret_cast<void *>(ptr11050), rootenv10394);



//creating new closure instance
auto ptr11051 = reinterpret_cast<void (*)(void *, void *)>(&ptr10028);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u60_u61 = make_closure(reinterpret_cast<void *>(ptr11051), rootenv10394);



//creating new closure instance
auto ptr11052 = reinterpret_cast<void (*)(void *, void *)>(&ptr10030);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u60 = make_closure(reinterpret_cast<void *>(ptr11052), rootenv10394);



//creating new closure instance
auto ptr11053 = reinterpret_cast<void (*)(void *, void *)>(&ptr10032);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u62_u61 = make_closure(reinterpret_cast<void *>(ptr11053), rootenv10394);



//creating new closure instance
auto ptr11054 = reinterpret_cast<void (*)(void *, void *)>(&ptr10034);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u62 = make_closure(reinterpret_cast<void *>(ptr11054), rootenv10394);



//creating new closure instance
auto ptr11055 = reinterpret_cast<void (*)(void *, void *)>(&ptr10036);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u61 = make_closure(reinterpret_cast<void *>(ptr11055), rootenv10394);



//creating new closure instance
auto ptr11056 = reinterpret_cast<void (*)(void *, void *)>(&ptr10038);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u42 = make_closure(reinterpret_cast<void *>(ptr11056), rootenv10394);



//creating new closure instance
auto ptr11057 = reinterpret_cast<void (*)(void *, void *)>(&ptr10040);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u45 = make_closure(reinterpret_cast<void *>(ptr11057), rootenv10394);



//creating new closure instance
auto ptr11058 = reinterpret_cast<void (*)(void *, void *)>(&ptr10042);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* _u43 = make_closure(reinterpret_cast<void *>(ptr11058), rootenv10394);



//creating new closure instance
auto ptr11059 = reinterpret_cast<void (*)(void *, void *)>(&ptr10044);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* id8564 = make_closure(reinterpret_cast<void *>(ptr11059), rootenv10394);



//creating new closure instance
auto ptr11060 = reinterpret_cast<void (*)(void *, void *)>(&ptr10046);
rootenv10394 = allocate_env_space(encode_int((s32)11));
void* id8565 = make_closure(reinterpret_cast<void *>(ptr11060), rootenv10394);

//setting env list
set_env(rootenv10394, encode_int((s32)1), _u61);
set_env(rootenv10394, encode_int((s32)2), cdar);
set_env(rootenv10394, encode_int((s32)3), _u45);
set_env(rootenv10394, encode_int((s32)4), equal_u63);
set_env(rootenv10394, encode_int((s32)5), _u42);
set_env(rootenv10394, encode_int((s32)6), length);
set_env(rootenv10394, encode_int((s32)7), null_u63);
set_env(rootenv10394, encode_int((s32)8), cons);
set_env(rootenv10394, encode_int((s32)9), car);
set_env(rootenv10394, encode_int((s32)10), _u43);
set_env(rootenv10394, encode_int((s32)11), cdr);



//creating new closure instance
auto ptr11061 = reinterpret_cast<void (*)(void *, void *)>(&ptr10048);
rootenv10394 = allocate_env_space(encode_int((s32)0));
void* id8566 = make_closure(reinterpret_cast<void *>(ptr11061), rootenv10394);


void* oldarg9999 = encode_null();
void* newarg10000 = prim_cons(id8566, oldarg9999);
void* newarg10001 = prim_cons(id8565, newarg10000);

//app-clo
void* cloPtr11062 = get_closure_ptr(id8564);
void* procEnv11063 = get_env(id8564);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11062);
function_ptr(procEnv11063, newarg10001);
}

int main(int argc, char **argv)
{
//making a call to the root function to kick off our c++ emission.
root(0,0);
}

