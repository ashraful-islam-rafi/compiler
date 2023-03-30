#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void ptr88205(void* env88206, void* arglst88133)
{
void* kkont86693 = get_env_value(env88206, encode_int((s32)2));
void* vs = get_env_value(env88206, encode_int((s32)1));
void* letk86696 = prim_car(arglst88133);
void* arg_lst88134 = prim_cdr(arglst88133);
void* t86398 = prim_car(arg_lst88134);
void* arg_lst88135 = prim_cdr(arg_lst88134);
void* lst86697 = prim_cons(kkont86693, vs);

//app-clo
void* cloPtr88545 = get_closure_ptr(t86398);
void* procEnv88546 = get_env(t86398);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88545);
function_ptr(procEnv88546, lst86697);
}

void ptr88203(void* env88204, void* arglst88130)
{
void* kkont86693 = get_env_value(env88204, encode_int((s32)3));
void* vs = get_env_value(env88204, encode_int((s32)2));
void* f = get_env_value(env88204, encode_int((s32)1));
void* letk86695 = prim_car(arglst88130);
void* arg_lst88131 = prim_cdr(arglst88130);
void* t86397 = prim_car(arg_lst88131);
void* arg_lst88132 = prim_cdr(arg_lst88131);

//creating new closure instance
auto ptr88547 = reinterpret_cast<void (*)(void *, void *)>(&ptr88205);
env88204 = allocate_env_space(encode_int((s32)2));
void* id86726 = make_closure(reinterpret_cast<void *>(ptr88547), env88204);

//setting env list
set_env(env88204, encode_int((s32)1), vs);
set_env(env88204, encode_int((s32)2), kkont86693);


void* oldarg88136 = encode_null();
void* newarg88137 = prim_cons(f, oldarg88136);
void* newarg88138 = prim_cons(id86726, newarg88137);

//app-clo
void* cloPtr88548 = get_closure_ptr(t86397);
void* procEnv88549 = get_env(t86397);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88548);
function_ptr(procEnv88549, newarg88138);
}

void ptr88201(void* env88202, void* vs86694)
{
void* g = get_env_value(env88202, encode_int((s32)2));
void* f = get_env_value(env88202, encode_int((s32)1));
void* kkont86693 = prim_car(vs86694);
void* vs = prim_cdr(vs86694);

//creating new closure instance
auto ptr88550 = reinterpret_cast<void (*)(void *, void *)>(&ptr88203);
env88202 = allocate_env_space(encode_int((s32)3));
void* id86725 = make_closure(reinterpret_cast<void *>(ptr88550), env88202);

//setting env list
set_env(env88202, encode_int((s32)1), f);
set_env(env88202, encode_int((s32)2), vs);
set_env(env88202, encode_int((s32)3), kkont86693);


void* oldarg88139 = encode_null();
void* newarg88140 = prim_cons(g, oldarg88139);
void* newarg88141 = prim_cons(id86725, newarg88140);

//app-clo
void* cloPtr88551 = get_closure_ptr(g);
void* procEnv88552 = get_env(g);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88551);
function_ptr(procEnv88552, newarg88141);
}

void ptr88199(void* env88200, void* arglst88127)
{
void* g = get_env_value(env88200, encode_int((s32)1));
void* kont86692 = prim_car(arglst88127);
void* arg_lst88128 = prim_cdr(arglst88127);
void* f = prim_car(arg_lst88128);
void* arg_lst88129 = prim_cdr(arg_lst88128);

//creating new closure instance
auto ptr88553 = reinterpret_cast<void (*)(void *, void *)>(&ptr88201);
env88200 = allocate_env_space(encode_int((s32)2));
void* id86724 = make_closure(reinterpret_cast<void *>(ptr88553), env88200);

//setting env list
set_env(env88200, encode_int((s32)1), f);
set_env(env88200, encode_int((s32)2), g);


void* oldarg88142 = encode_null();
void* newarg88143 = prim_cons(id86724, oldarg88142);
void* newarg88144 = prim_cons(kont86692, newarg88143);

//app-clo
void* cloPtr88554 = get_closure_ptr(f);
void* procEnv88555 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88554);
function_ptr(procEnv88555, newarg88144);
}

void ptr88197(void* env88198, void* arglst88124)
{
void* kont86691 = prim_car(arglst88124);
void* arg_lst88125 = prim_cdr(arglst88124);
void* g = prim_car(arg_lst88125);
void* arg_lst88126 = prim_cdr(arg_lst88125);
void* id86722 = encode_null();

//creating new closure instance
auto ptr88556 = reinterpret_cast<void (*)(void *, void *)>(&ptr88199);
env88198 = allocate_env_space(encode_int((s32)1));
void* id86723 = make_closure(reinterpret_cast<void *>(ptr88556), env88198);

//setting env list
set_env(env88198, encode_int((s32)1), g);


void* oldarg88145 = encode_null();
void* newarg88146 = prim_cons(id86723, oldarg88145);
void* newarg88147 = prim_cons(id86722, newarg88146);

//app-clo
void* cloPtr88557 = get_closure_ptr(kont86691);
void* procEnv88558 = get_env(kont86691);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88557);
function_ptr(procEnv88558, newarg88147);
}

void ptr88211(void* env88212, void* args86688)
{
void* kkont86687 = prim_car(args86688);
void* args = prim_cdr(args86688);
void* prm86689 = apply_prim_halt(args);
void* id86731 = encode_null();
void* oldarg88115 = encode_null();
void* newarg88116 = prim_cons(prm86689, oldarg88115);
void* newarg88117 = prim_cons(id86731, newarg88116);

//app-clo
void* cloPtr88559 = get_closure_ptr(kkont86687);
void* procEnv88560 = get_env(kkont86687);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88559);
function_ptr(procEnv88560, newarg88117);
}

void ptr88209(void* env88210, void* arglst88112)
{
void* kont86686 = prim_car(arglst88112);
void* arg_lst88113 = prim_cdr(arglst88112);
void* halt = prim_car(arg_lst88113);
void* arg_lst88114 = prim_cdr(arg_lst88113);
void* id86729 = encode_null();

//creating new closure instance
auto ptr88561 = reinterpret_cast<void (*)(void *, void *)>(&ptr88211);
env88210 = allocate_env_space(encode_int((s32)0));
void* id86730 = make_closure(reinterpret_cast<void *>(ptr88561), env88210);


void* oldarg88118 = encode_null();
void* newarg88119 = prim_cons(id86730, oldarg88118);
void* newarg88120 = prim_cons(id86729, newarg88119);

//app-clo
void* cloPtr88562 = get_closure_ptr(kont86686);
void* procEnv88563 = get_env(kont86686);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88562);
function_ptr(procEnv88563, newarg88120);
}

void ptr88225(void* env88226, void* arglst88086)
{
void* t86400 = get_env_value(env88226, encode_int((s32)3));
void* kont86681 = get_env_value(env88226, encode_int((s32)2));
void* cons = get_env_value(env88226, encode_int((s32)1));
void* letk86685 = prim_car(arglst88086);
void* arg_lst88087 = prim_cdr(arglst88086);
void* t86402 = prim_car(arg_lst88087);
void* arg_lst88088 = prim_cdr(arg_lst88087);
void* oldarg88089 = encode_null();
void* newarg88090 = prim_cons(t86402, oldarg88089);
void* newarg88091 = prim_cons(t86400, newarg88090);
void* newarg88092 = prim_cons(kont86681, newarg88091);

//app-clo
void* cloPtr88564 = get_closure_ptr(cons);
void* procEnv88565 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88564);
function_ptr(procEnv88565, newarg88092);
}

void ptr88223(void* env88224, void* arglst88083)
{
void* t86400 = get_env_value(env88224, encode_int((s32)5));
void* kont86681 = get_env_value(env88224, encode_int((s32)4));
void* append1 = get_env_value(env88224, encode_int((s32)3));
void* rhs = get_env_value(env88224, encode_int((s32)2));
void* cons = get_env_value(env88224, encode_int((s32)1));
void* letk86684 = prim_car(arglst88083);
void* arg_lst88084 = prim_cdr(arglst88083);
void* t86401 = prim_car(arg_lst88084);
void* arg_lst88085 = prim_cdr(arg_lst88084);

//creating new closure instance
auto ptr88566 = reinterpret_cast<void (*)(void *, void *)>(&ptr88225);
env88224 = allocate_env_space(encode_int((s32)3));
void* id86740 = make_closure(reinterpret_cast<void *>(ptr88566), env88224);

//setting env list
set_env(env88224, encode_int((s32)1), cons);
set_env(env88224, encode_int((s32)2), kont86681);
set_env(env88224, encode_int((s32)3), t86400);


void* oldarg88093 = encode_null();
void* newarg88094 = prim_cons(rhs, oldarg88093);
void* newarg88095 = prim_cons(t86401, newarg88094);
void* newarg88096 = prim_cons(id86740, newarg88095);

//app-clo
void* cloPtr88567 = get_closure_ptr(append1);
void* procEnv88568 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88567);
function_ptr(procEnv88568, newarg88096);
}

void ptr88221(void* env88222, void* arglst88080)
{
void* cdr = get_env_value(env88222, encode_int((s32)6));
void* lhs = get_env_value(env88222, encode_int((s32)5));
void* kont86681 = get_env_value(env88222, encode_int((s32)4));
void* append1 = get_env_value(env88222, encode_int((s32)3));
void* rhs = get_env_value(env88222, encode_int((s32)2));
void* cons = get_env_value(env88222, encode_int((s32)1));
void* letk86683 = prim_car(arglst88080);
void* arg_lst88081 = prim_cdr(arglst88080);
void* t86400 = prim_car(arg_lst88081);
void* arg_lst88082 = prim_cdr(arg_lst88081);

//creating new closure instance
auto ptr88569 = reinterpret_cast<void (*)(void *, void *)>(&ptr88223);
env88222 = allocate_env_space(encode_int((s32)5));
void* id86739 = make_closure(reinterpret_cast<void *>(ptr88569), env88222);

//setting env list
set_env(env88222, encode_int((s32)1), cons);
set_env(env88222, encode_int((s32)2), rhs);
set_env(env88222, encode_int((s32)3), append1);
set_env(env88222, encode_int((s32)4), kont86681);
set_env(env88222, encode_int((s32)5), t86400);


void* oldarg88097 = encode_null();
void* newarg88098 = prim_cons(lhs, oldarg88097);
void* newarg88099 = prim_cons(id86739, newarg88098);

//app-clo
void* cloPtr88570 = get_closure_ptr(cdr);
void* procEnv88571 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88570);
function_ptr(procEnv88571, newarg88099);
}

void ptr88219(void* env88220, void* arglst88074)
{
void* cdr = get_env_value(env88220, encode_int((s32)7));
void* lhs = get_env_value(env88220, encode_int((s32)6));
void* kont86681 = get_env_value(env88220, encode_int((s32)5));
void* append1 = get_env_value(env88220, encode_int((s32)4));
void* cons = get_env_value(env88220, encode_int((s32)3));
void* rhs = get_env_value(env88220, encode_int((s32)2));
void* car = get_env_value(env88220, encode_int((s32)1));
void* letk86682 = prim_car(arglst88074);
void* arg_lst88075 = prim_cdr(arglst88074);
void* t86399 = prim_car(arg_lst88075);
void* arg_lst88076 = prim_cdr(arg_lst88075);

//if-clause
u64 if_guard88572 = reinterpret_cast<u64>(is_true(t86399));
if(if_guard88572 == 1)
{
void* id86737 = encode_null();
void* oldarg88077 = encode_null();
void* newarg88078 = prim_cons(rhs, oldarg88077);
void* newarg88079 = prim_cons(id86737, newarg88078);

//app-clo
void* cloPtr88573 = get_closure_ptr(kont86681);
void* procEnv88574 = get_env(kont86681);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88573);
function_ptr(procEnv88574, newarg88079);
}
else
{

//creating new closure instance
auto ptr88575 = reinterpret_cast<void (*)(void *, void *)>(&ptr88221);
env88220 = allocate_env_space(encode_int((s32)6));
void* id86738 = make_closure(reinterpret_cast<void *>(ptr88575), env88220);

//setting env list
set_env(env88220, encode_int((s32)1), cons);
set_env(env88220, encode_int((s32)2), rhs);
set_env(env88220, encode_int((s32)3), append1);
set_env(env88220, encode_int((s32)4), kont86681);
set_env(env88220, encode_int((s32)5), lhs);
set_env(env88220, encode_int((s32)6), cdr);


void* oldarg88100 = encode_null();
void* newarg88101 = prim_cons(lhs, oldarg88100);
void* newarg88102 = prim_cons(id86738, newarg88101);

//app-clo
void* cloPtr88576 = get_closure_ptr(car);
void* procEnv88577 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88576);
function_ptr(procEnv88577, newarg88102);
}

}

void ptr88217(void* env88218, void* arglst88070)
{
void* cdr = get_env_value(env88218, encode_int((s32)5));
void* null_u63 = get_env_value(env88218, encode_int((s32)4));
void* append1 = get_env_value(env88218, encode_int((s32)3));
void* car = get_env_value(env88218, encode_int((s32)2));
void* cons = get_env_value(env88218, encode_int((s32)1));
void* kont86681 = prim_car(arglst88070);
void* arg_lst88071 = prim_cdr(arglst88070);
void* lhs = prim_car(arg_lst88071);
void* arg_lst88072 = prim_cdr(arg_lst88071);
void* rhs = prim_car(arg_lst88072);
void* arg_lst88073 = prim_cdr(arg_lst88072);

//creating new closure instance
auto ptr88578 = reinterpret_cast<void (*)(void *, void *)>(&ptr88219);
env88218 = allocate_env_space(encode_int((s32)7));
void* id86736 = make_closure(reinterpret_cast<void *>(ptr88578), env88218);

//setting env list
set_env(env88218, encode_int((s32)1), car);
set_env(env88218, encode_int((s32)2), rhs);
set_env(env88218, encode_int((s32)3), cons);
set_env(env88218, encode_int((s32)4), append1);
set_env(env88218, encode_int((s32)5), kont86681);
set_env(env88218, encode_int((s32)6), lhs);
set_env(env88218, encode_int((s32)7), cdr);


void* oldarg88103 = encode_null();
void* newarg88104 = prim_cons(lhs, oldarg88103);
void* newarg88105 = prim_cons(id86736, newarg88104);

//app-clo
void* cloPtr88579 = get_closure_ptr(null_u63);
void* procEnv88580 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88579);
function_ptr(procEnv88580, newarg88105);
}

void ptr88215(void* env88216, void* arglst88067)
{
void* cdr = get_env_value(env88216, encode_int((s32)4));
void* null_u63 = get_env_value(env88216, encode_int((s32)3));
void* car = get_env_value(env88216, encode_int((s32)2));
void* cons = get_env_value(env88216, encode_int((s32)1));
void* kont86680 = prim_car(arglst88067);
void* arg_lst88068 = prim_cdr(arglst88067);
void* append1 = prim_car(arg_lst88068);
void* arg_lst88069 = prim_cdr(arg_lst88068);
void* id86734 = encode_null();

//creating new closure instance
auto ptr88581 = reinterpret_cast<void (*)(void *, void *)>(&ptr88217);
env88216 = allocate_env_space(encode_int((s32)5));
void* id86735 = make_closure(reinterpret_cast<void *>(ptr88581), env88216);

//setting env list
set_env(env88216, encode_int((s32)1), cons);
set_env(env88216, encode_int((s32)2), car);
set_env(env88216, encode_int((s32)3), append1);
set_env(env88216, encode_int((s32)4), null_u63);
set_env(env88216, encode_int((s32)5), cdr);


void* oldarg88106 = encode_null();
void* newarg88107 = prim_cons(id86735, oldarg88106);
void* newarg88108 = prim_cons(id86734, newarg88107);

//app-clo
void* cloPtr88582 = get_closure_ptr(kont86680);
void* procEnv88583 = get_env(kont86680);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88582);
function_ptr(procEnv88583, newarg88108);
}

void ptr88241(void* env88242, void* arglst88038)
{
void* kont86674 = get_env_value(env88242, encode_int((s32)3));
void* t86405 = get_env_value(env88242, encode_int((s32)2));
void* cons = get_env_value(env88242, encode_int((s32)1));
void* letk86679 = prim_car(arglst88038);
void* arg_lst88039 = prim_cdr(arglst88038);
void* t86407 = prim_car(arg_lst88039);
void* arg_lst88040 = prim_cdr(arg_lst88039);
void* oldarg88041 = encode_null();
void* newarg88042 = prim_cons(t86407, oldarg88041);
void* newarg88043 = prim_cons(t86405, newarg88042);
void* newarg88044 = prim_cons(kont86674, newarg88043);

//app-clo
void* cloPtr88584 = get_closure_ptr(cons);
void* procEnv88585 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88584);
function_ptr(procEnv88585, newarg88044);
}

void ptr88239(void* env88240, void* arglst88035)
{
void* kont86674 = get_env_value(env88240, encode_int((s32)5));
void* t86405 = get_env_value(env88240, encode_int((s32)4));
void* op = get_env_value(env88240, encode_int((s32)3));
void* map1 = get_env_value(env88240, encode_int((s32)2));
void* cons = get_env_value(env88240, encode_int((s32)1));
void* letk86678 = prim_car(arglst88035);
void* arg_lst88036 = prim_cdr(arglst88035);
void* t86406 = prim_car(arg_lst88036);
void* arg_lst88037 = prim_cdr(arg_lst88036);

//creating new closure instance
auto ptr88586 = reinterpret_cast<void (*)(void *, void *)>(&ptr88241);
env88240 = allocate_env_space(encode_int((s32)3));
void* id86751 = make_closure(reinterpret_cast<void *>(ptr88586), env88240);

//setting env list
set_env(env88240, encode_int((s32)1), cons);
set_env(env88240, encode_int((s32)2), t86405);
set_env(env88240, encode_int((s32)3), kont86674);


void* oldarg88045 = encode_null();
void* newarg88046 = prim_cons(t86406, oldarg88045);
void* newarg88047 = prim_cons(op, newarg88046);
void* newarg88048 = prim_cons(id86751, newarg88047);

//app-clo
void* cloPtr88587 = get_closure_ptr(map1);
void* procEnv88588 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88587);
function_ptr(procEnv88588, newarg88048);
}

void ptr88237(void* env88238, void* arglst88032)
{
void* cdr = get_env_value(env88238, encode_int((s32)6));
void* kont86674 = get_env_value(env88238, encode_int((s32)5));
void* lst = get_env_value(env88238, encode_int((s32)4));
void* op = get_env_value(env88238, encode_int((s32)3));
void* map1 = get_env_value(env88238, encode_int((s32)2));
void* cons = get_env_value(env88238, encode_int((s32)1));
void* letk86677 = prim_car(arglst88032);
void* arg_lst88033 = prim_cdr(arglst88032);
void* t86405 = prim_car(arg_lst88033);
void* arg_lst88034 = prim_cdr(arg_lst88033);

//creating new closure instance
auto ptr88589 = reinterpret_cast<void (*)(void *, void *)>(&ptr88239);
env88238 = allocate_env_space(encode_int((s32)5));
void* id86750 = make_closure(reinterpret_cast<void *>(ptr88589), env88238);

//setting env list
set_env(env88238, encode_int((s32)1), cons);
set_env(env88238, encode_int((s32)2), map1);
set_env(env88238, encode_int((s32)3), op);
set_env(env88238, encode_int((s32)4), t86405);
set_env(env88238, encode_int((s32)5), kont86674);


void* oldarg88049 = encode_null();
void* newarg88050 = prim_cons(lst, oldarg88049);
void* newarg88051 = prim_cons(id86750, newarg88050);

//app-clo
void* cloPtr88590 = get_closure_ptr(cdr);
void* procEnv88591 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88590);
function_ptr(procEnv88591, newarg88051);
}

void ptr88235(void* env88236, void* arglst88029)
{
void* cdr = get_env_value(env88236, encode_int((s32)6));
void* kont86674 = get_env_value(env88236, encode_int((s32)5));
void* lst = get_env_value(env88236, encode_int((s32)4));
void* op = get_env_value(env88236, encode_int((s32)3));
void* map1 = get_env_value(env88236, encode_int((s32)2));
void* cons = get_env_value(env88236, encode_int((s32)1));
void* letk86676 = prim_car(arglst88029);
void* arg_lst88030 = prim_cdr(arglst88029);
void* t86404 = prim_car(arg_lst88030);
void* arg_lst88031 = prim_cdr(arg_lst88030);

//creating new closure instance
auto ptr88592 = reinterpret_cast<void (*)(void *, void *)>(&ptr88237);
env88236 = allocate_env_space(encode_int((s32)6));
void* id86749 = make_closure(reinterpret_cast<void *>(ptr88592), env88236);

//setting env list
set_env(env88236, encode_int((s32)1), cons);
set_env(env88236, encode_int((s32)2), map1);
set_env(env88236, encode_int((s32)3), op);
set_env(env88236, encode_int((s32)4), lst);
set_env(env88236, encode_int((s32)5), kont86674);
set_env(env88236, encode_int((s32)6), cdr);


void* oldarg88052 = encode_null();
void* newarg88053 = prim_cons(t86404, oldarg88052);
void* newarg88054 = prim_cons(id86749, newarg88053);

//app-clo
void* cloPtr88593 = get_closure_ptr(op);
void* procEnv88594 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88593);
function_ptr(procEnv88594, newarg88054);
}

void ptr88233(void* env88234, void* arglst88023)
{
void* cdr = get_env_value(env88234, encode_int((s32)7));
void* kont86674 = get_env_value(env88234, encode_int((s32)6));
void* lst = get_env_value(env88234, encode_int((s32)5));
void* op = get_env_value(env88234, encode_int((s32)4));
void* map1 = get_env_value(env88234, encode_int((s32)3));
void* car = get_env_value(env88234, encode_int((s32)2));
void* cons = get_env_value(env88234, encode_int((s32)1));
void* letk86675 = prim_car(arglst88023);
void* arg_lst88024 = prim_cdr(arglst88023);
void* t86403 = prim_car(arg_lst88024);
void* arg_lst88025 = prim_cdr(arg_lst88024);

//if-clause
u64 if_guard88595 = reinterpret_cast<u64>(is_true(t86403));
if(if_guard88595 == 1)
{
void* id86746 = encode_null();
void* id86747 = encode_null();
void* oldarg88026 = encode_null();
void* newarg88027 = prim_cons(id86747, oldarg88026);
void* newarg88028 = prim_cons(id86746, newarg88027);

//app-clo
void* cloPtr88596 = get_closure_ptr(kont86674);
void* procEnv88597 = get_env(kont86674);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88596);
function_ptr(procEnv88597, newarg88028);
}
else
{

//creating new closure instance
auto ptr88598 = reinterpret_cast<void (*)(void *, void *)>(&ptr88235);
env88234 = allocate_env_space(encode_int((s32)6));
void* id86748 = make_closure(reinterpret_cast<void *>(ptr88598), env88234);

//setting env list
set_env(env88234, encode_int((s32)1), cons);
set_env(env88234, encode_int((s32)2), map1);
set_env(env88234, encode_int((s32)3), op);
set_env(env88234, encode_int((s32)4), lst);
set_env(env88234, encode_int((s32)5), kont86674);
set_env(env88234, encode_int((s32)6), cdr);


void* oldarg88055 = encode_null();
void* newarg88056 = prim_cons(lst, oldarg88055);
void* newarg88057 = prim_cons(id86748, newarg88056);

//app-clo
void* cloPtr88599 = get_closure_ptr(car);
void* procEnv88600 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88599);
function_ptr(procEnv88600, newarg88057);
}

}

void ptr88231(void* env88232, void* arglst88019)
{
void* cdr = get_env_value(env88232, encode_int((s32)5));
void* null_u63 = get_env_value(env88232, encode_int((s32)4));
void* map1 = get_env_value(env88232, encode_int((s32)3));
void* car = get_env_value(env88232, encode_int((s32)2));
void* cons = get_env_value(env88232, encode_int((s32)1));
void* kont86674 = prim_car(arglst88019);
void* arg_lst88020 = prim_cdr(arglst88019);
void* op = prim_car(arg_lst88020);
void* arg_lst88021 = prim_cdr(arg_lst88020);
void* lst = prim_car(arg_lst88021);
void* arg_lst88022 = prim_cdr(arg_lst88021);

//creating new closure instance
auto ptr88601 = reinterpret_cast<void (*)(void *, void *)>(&ptr88233);
env88232 = allocate_env_space(encode_int((s32)7));
void* id86745 = make_closure(reinterpret_cast<void *>(ptr88601), env88232);

//setting env list
set_env(env88232, encode_int((s32)1), cons);
set_env(env88232, encode_int((s32)2), car);
set_env(env88232, encode_int((s32)3), map1);
set_env(env88232, encode_int((s32)4), op);
set_env(env88232, encode_int((s32)5), lst);
set_env(env88232, encode_int((s32)6), kont86674);
set_env(env88232, encode_int((s32)7), cdr);


void* oldarg88058 = encode_null();
void* newarg88059 = prim_cons(lst, oldarg88058);
void* newarg88060 = prim_cons(id86745, newarg88059);

//app-clo
void* cloPtr88602 = get_closure_ptr(null_u63);
void* procEnv88603 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88602);
function_ptr(procEnv88603, newarg88060);
}

void ptr88229(void* env88230, void* arglst88016)
{
void* cdr = get_env_value(env88230, encode_int((s32)4));
void* null_u63 = get_env_value(env88230, encode_int((s32)3));
void* car = get_env_value(env88230, encode_int((s32)2));
void* cons = get_env_value(env88230, encode_int((s32)1));
void* kont86673 = prim_car(arglst88016);
void* arg_lst88017 = prim_cdr(arglst88016);
void* map1 = prim_car(arg_lst88017);
void* arg_lst88018 = prim_cdr(arg_lst88017);
void* id86743 = encode_null();

//creating new closure instance
auto ptr88604 = reinterpret_cast<void (*)(void *, void *)>(&ptr88231);
env88230 = allocate_env_space(encode_int((s32)5));
void* id86744 = make_closure(reinterpret_cast<void *>(ptr88604), env88230);

//setting env list
set_env(env88230, encode_int((s32)1), cons);
set_env(env88230, encode_int((s32)2), car);
set_env(env88230, encode_int((s32)3), map1);
set_env(env88230, encode_int((s32)4), null_u63);
set_env(env88230, encode_int((s32)5), cdr);


void* oldarg88061 = encode_null();
void* newarg88062 = prim_cons(id86744, oldarg88061);
void* newarg88063 = prim_cons(id86743, newarg88062);

//app-clo
void* cloPtr88605 = get_closure_ptr(kont86673);
void* procEnv88606 = get_env(kont86673);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88605);
function_ptr(procEnv88606, newarg88063);
}

void ptr88273(void* env88274, void* arglst87966)
{
void* kkont86656 = get_env_value(env88274, encode_int((s32)3));
void* t86411 = get_env_value(env88274, encode_int((s32)2));
void* cons = get_env_value(env88274, encode_int((s32)1));
void* letk86670 = prim_car(arglst87966);
void* arg_lst87967 = prim_cdr(arglst87966);
void* t86414 = prim_car(arg_lst87967);
void* arg_lst87968 = prim_cdr(arg_lst87967);
void* oldarg87969 = encode_null();
void* newarg87970 = prim_cons(t86414, oldarg87969);
void* newarg87971 = prim_cons(t86411, newarg87970);
void* newarg87972 = prim_cons(kkont86656, newarg87971);

//app-clo
void* cloPtr88607 = get_closure_ptr(cons);
void* procEnv88608 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88607);
function_ptr(procEnv88608, newarg87972);
}

void ptr88271(void* env88272, void* arglst87963)
{
void* kkont86656 = get_env_value(env88272, encode_int((s32)4));
void* map = get_env_value(env88272, encode_int((s32)3));
void* t86411 = get_env_value(env88272, encode_int((s32)2));
void* cons = get_env_value(env88272, encode_int((s32)1));
void* letk86669 = prim_car(arglst87963);
void* arg_lst87964 = prim_cdr(arglst87963);
void* t86413 = prim_car(arg_lst87964);
void* arg_lst87965 = prim_cdr(arg_lst87964);

//creating new closure instance
auto ptr88609 = reinterpret_cast<void (*)(void *, void *)>(&ptr88273);
env88272 = allocate_env_space(encode_int((s32)3));
void* id86771 = make_closure(reinterpret_cast<void *>(ptr88609), env88272);

//setting env list
set_env(env88272, encode_int((s32)1), cons);
set_env(env88272, encode_int((s32)2), t86411);
set_env(env88272, encode_int((s32)3), kkont86656);


void* lst86671 = prim_cons(id86771, t86413);

//app-clo
void* cloPtr88610 = get_closure_ptr(map);
void* procEnv88611 = get_env(map);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88610);
function_ptr(procEnv88611, lst86671);
}

void ptr88269(void* env88270, void* arglst87960)
{
void* kkont86656 = get_env_value(env88270, encode_int((s32)5));
void* map = get_env_value(env88270, encode_int((s32)4));
void* op = get_env_value(env88270, encode_int((s32)3));
void* t86411 = get_env_value(env88270, encode_int((s32)2));
void* cons = get_env_value(env88270, encode_int((s32)1));
void* letk86668 = prim_car(arglst87960);
void* arg_lst87961 = prim_cdr(arglst87960);
void* t86412 = prim_car(arg_lst87961);
void* arg_lst87962 = prim_cdr(arg_lst87961);

//creating new closure instance
auto ptr88612 = reinterpret_cast<void (*)(void *, void *)>(&ptr88271);
env88270 = allocate_env_space(encode_int((s32)4));
void* id86770 = make_closure(reinterpret_cast<void *>(ptr88612), env88270);

//setting env list
set_env(env88270, encode_int((s32)1), cons);
set_env(env88270, encode_int((s32)2), t86411);
set_env(env88270, encode_int((s32)3), map);
set_env(env88270, encode_int((s32)4), kkont86656);


void* oldarg87973 = encode_null();
void* newarg87974 = prim_cons(t86412, oldarg87973);
void* newarg87975 = prim_cons(op, newarg87974);
void* newarg87976 = prim_cons(id86770, newarg87975);

//app-clo
void* cloPtr88613 = get_closure_ptr(cons);
void* procEnv88614 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88613);
function_ptr(procEnv88614, newarg87976);
}

void ptr88267(void* env88268, void* arglst87957)
{
void* map = get_env_value(env88268, encode_int((s32)7));
void* op = get_env_value(env88268, encode_int((s32)6));
void* combined_lst = get_env_value(env88268, encode_int((s32)5));
void* map1 = get_env_value(env88268, encode_int((s32)4));
void* cons = get_env_value(env88268, encode_int((s32)3));
void* cdr = get_env_value(env88268, encode_int((s32)2));
void* kkont86656 = get_env_value(env88268, encode_int((s32)1));
void* letk86667 = prim_car(arglst87957);
void* arg_lst87958 = prim_cdr(arglst87957);
void* t86411 = prim_car(arg_lst87958);
void* arg_lst87959 = prim_cdr(arg_lst87958);

//creating new closure instance
auto ptr88615 = reinterpret_cast<void (*)(void *, void *)>(&ptr88269);
env88268 = allocate_env_space(encode_int((s32)5));
void* id86769 = make_closure(reinterpret_cast<void *>(ptr88615), env88268);

//setting env list
set_env(env88268, encode_int((s32)1), cons);
set_env(env88268, encode_int((s32)2), t86411);
set_env(env88268, encode_int((s32)3), op);
set_env(env88268, encode_int((s32)4), map);
set_env(env88268, encode_int((s32)5), kkont86656);


void* oldarg87977 = encode_null();
void* newarg87978 = prim_cons(combined_lst, oldarg87977);
void* newarg87979 = prim_cons(cdr, newarg87978);
void* newarg87980 = prim_cons(id86769, newarg87979);

//app-clo
void* cloPtr88616 = get_closure_ptr(map1);
void* procEnv88617 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88616);
function_ptr(procEnv88617, newarg87980);
}

void ptr88265(void* env88266, void* arglst87954)
{
void* map = get_env_value(env88266, encode_int((s32)7));
void* op = get_env_value(env88266, encode_int((s32)6));
void* combined_lst = get_env_value(env88266, encode_int((s32)5));
void* map1 = get_env_value(env88266, encode_int((s32)4));
void* cons = get_env_value(env88266, encode_int((s32)3));
void* cdr = get_env_value(env88266, encode_int((s32)2));
void* kkont86656 = get_env_value(env88266, encode_int((s32)1));
void* letk86666 = prim_car(arglst87954);
void* arg_lst87955 = prim_cdr(arglst87954);
void* t86410 = prim_car(arg_lst87955);
void* arg_lst87956 = prim_cdr(arg_lst87955);

//creating new closure instance
auto ptr88618 = reinterpret_cast<void (*)(void *, void *)>(&ptr88267);
env88266 = allocate_env_space(encode_int((s32)7));
void* id86768 = make_closure(reinterpret_cast<void *>(ptr88618), env88266);

//setting env list
set_env(env88266, encode_int((s32)1), kkont86656);
set_env(env88266, encode_int((s32)2), cdr);
set_env(env88266, encode_int((s32)3), cons);
set_env(env88266, encode_int((s32)4), map1);
set_env(env88266, encode_int((s32)5), combined_lst);
set_env(env88266, encode_int((s32)6), op);
set_env(env88266, encode_int((s32)7), map);


void* lst86672 = prim_cons(id86768, t86410);

//app-clo
void* cloPtr88619 = get_closure_ptr(op);
void* procEnv88620 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88619);
function_ptr(procEnv88620, lst86672);
}

void ptr88263(void* env88264, void* arglst87948)
{
void* map = get_env_value(env88264, encode_int((s32)8));
void* op = get_env_value(env88264, encode_int((s32)7));
void* combined_lst = get_env_value(env88264, encode_int((s32)6));
void* map1 = get_env_value(env88264, encode_int((s32)5));
void* car = get_env_value(env88264, encode_int((s32)4));
void* cons = get_env_value(env88264, encode_int((s32)3));
void* cdr = get_env_value(env88264, encode_int((s32)2));
void* kkont86656 = get_env_value(env88264, encode_int((s32)1));
void* letk86665 = prim_car(arglst87948);
void* arg_lst87949 = prim_cdr(arglst87948);
void* t86409 = prim_car(arg_lst87949);
void* arg_lst87950 = prim_cdr(arg_lst87949);

//if-clause
u64 if_guard88621 = reinterpret_cast<u64>(is_true(t86409));
if(if_guard88621 == 1)
{
void* id86765 = encode_null();
void* id86766 = encode_null();
void* oldarg87951 = encode_null();
void* newarg87952 = prim_cons(id86766, oldarg87951);
void* newarg87953 = prim_cons(id86765, newarg87952);

//app-clo
void* cloPtr88622 = get_closure_ptr(kkont86656);
void* procEnv88623 = get_env(kkont86656);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88622);
function_ptr(procEnv88623, newarg87953);
}
else
{

//creating new closure instance
auto ptr88624 = reinterpret_cast<void (*)(void *, void *)>(&ptr88265);
env88264 = allocate_env_space(encode_int((s32)7));
void* id86767 = make_closure(reinterpret_cast<void *>(ptr88624), env88264);

//setting env list
set_env(env88264, encode_int((s32)1), kkont86656);
set_env(env88264, encode_int((s32)2), cdr);
set_env(env88264, encode_int((s32)3), cons);
set_env(env88264, encode_int((s32)4), map1);
set_env(env88264, encode_int((s32)5), combined_lst);
set_env(env88264, encode_int((s32)6), op);
set_env(env88264, encode_int((s32)7), map);


void* oldarg87981 = encode_null();
void* newarg87982 = prim_cons(combined_lst, oldarg87981);
void* newarg87983 = prim_cons(car, newarg87982);
void* newarg87984 = prim_cons(id86767, newarg87983);

//app-clo
void* cloPtr88625 = get_closure_ptr(map1);
void* procEnv88626 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88625);
function_ptr(procEnv88626, newarg87984);
}

}

void ptr88261(void* env88262, void* arglst87945)
{
void* op = get_env_value(env88262, encode_int((s32)9));
void* combined_lst = get_env_value(env88262, encode_int((s32)8));
void* map1 = get_env_value(env88262, encode_int((s32)7));
void* car = get_env_value(env88262, encode_int((s32)6));
void* cons = get_env_value(env88262, encode_int((s32)5));
void* cdr = get_env_value(env88262, encode_int((s32)4));
void* kkont86656 = get_env_value(env88262, encode_int((s32)3));
void* map = get_env_value(env88262, encode_int((s32)2));
void* null_u63 = get_env_value(env88262, encode_int((s32)1));
void* letk86664 = prim_car(arglst87945);
void* arg_lst87946 = prim_cdr(arglst87945);
void* t86408 = prim_car(arg_lst87946);
void* arg_lst87947 = prim_cdr(arg_lst87946);

//creating new closure instance
auto ptr88627 = reinterpret_cast<void (*)(void *, void *)>(&ptr88263);
env88262 = allocate_env_space(encode_int((s32)8));
void* id86764 = make_closure(reinterpret_cast<void *>(ptr88627), env88262);

//setting env list
set_env(env88262, encode_int((s32)1), kkont86656);
set_env(env88262, encode_int((s32)2), cdr);
set_env(env88262, encode_int((s32)3), cons);
set_env(env88262, encode_int((s32)4), car);
set_env(env88262, encode_int((s32)5), map1);
set_env(env88262, encode_int((s32)6), combined_lst);
set_env(env88262, encode_int((s32)7), op);
set_env(env88262, encode_int((s32)8), map);


void* oldarg87985 = encode_null();
void* newarg87986 = prim_cons(t86408, oldarg87985);
void* newarg87987 = prim_cons(id86764, newarg87986);

//app-clo
void* cloPtr88628 = get_closure_ptr(null_u63);
void* procEnv88629 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88628);
function_ptr(procEnv88629, newarg87987);
}

void ptr88259(void* env88260, void* arglst87942)
{
void* op = get_env_value(env88260, encode_int((s32)8));
void* map1 = get_env_value(env88260, encode_int((s32)7));
void* car = get_env_value(env88260, encode_int((s32)6));
void* cons = get_env_value(env88260, encode_int((s32)5));
void* cdr = get_env_value(env88260, encode_int((s32)4));
void* kkont86656 = get_env_value(env88260, encode_int((s32)3));
void* map = get_env_value(env88260, encode_int((s32)2));
void* null_u63 = get_env_value(env88260, encode_int((s32)1));
void* letk86663 = prim_car(arglst87942);
void* arg_lst87943 = prim_cdr(arglst87942);
void* combined_lst = prim_car(arg_lst87943);
void* arg_lst87944 = prim_cdr(arg_lst87943);

//creating new closure instance
auto ptr88630 = reinterpret_cast<void (*)(void *, void *)>(&ptr88261);
env88260 = allocate_env_space(encode_int((s32)9));
void* id86763 = make_closure(reinterpret_cast<void *>(ptr88630), env88260);

//setting env list
set_env(env88260, encode_int((s32)1), null_u63);
set_env(env88260, encode_int((s32)2), map);
set_env(env88260, encode_int((s32)3), kkont86656);
set_env(env88260, encode_int((s32)4), cdr);
set_env(env88260, encode_int((s32)5), cons);
set_env(env88260, encode_int((s32)6), car);
set_env(env88260, encode_int((s32)7), map1);
set_env(env88260, encode_int((s32)8), combined_lst);
set_env(env88260, encode_int((s32)9), op);


void* oldarg87988 = encode_null();
void* newarg87989 = prim_cons(combined_lst, oldarg87988);
void* newarg87990 = prim_cons(id86763, newarg87989);

//app-clo
void* cloPtr88631 = get_closure_ptr(car);
void* procEnv88632 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88631);
function_ptr(procEnv88632, newarg87990);
}

void ptr88257(void* env88258, void* arglst87939)
{
void* op = get_env_value(env88258, encode_int((s32)9));
void* map1 = get_env_value(env88258, encode_int((s32)8));
void* cons = get_env_value(env88258, encode_int((s32)7));
void* cdr = get_env_value(env88258, encode_int((s32)6));
void* kkont86656 = get_env_value(env88258, encode_int((s32)5));
void* map = get_env_value(env88258, encode_int((s32)4));
void* null_u63 = get_env_value(env88258, encode_int((s32)3));
void* lst1 = get_env_value(env88258, encode_int((s32)2));
void* car = get_env_value(env88258, encode_int((s32)1));
void* letk86662 = prim_car(arglst87939);
void* arg_lst87940 = prim_cdr(arglst87939);
void* list_u45of_u45lists = prim_car(arg_lst87940);
void* arg_lst87941 = prim_cdr(arg_lst87940);

//creating new closure instance
auto ptr88633 = reinterpret_cast<void (*)(void *, void *)>(&ptr88259);
env88258 = allocate_env_space(encode_int((s32)8));
void* id86762 = make_closure(reinterpret_cast<void *>(ptr88633), env88258);

//setting env list
set_env(env88258, encode_int((s32)1), null_u63);
set_env(env88258, encode_int((s32)2), map);
set_env(env88258, encode_int((s32)3), kkont86656);
set_env(env88258, encode_int((s32)4), cdr);
set_env(env88258, encode_int((s32)5), cons);
set_env(env88258, encode_int((s32)6), car);
set_env(env88258, encode_int((s32)7), map1);
set_env(env88258, encode_int((s32)8), op);


void* oldarg87991 = encode_null();
void* newarg87992 = prim_cons(list_u45of_u45lists, oldarg87991);
void* newarg87993 = prim_cons(lst1, newarg87992);
void* newarg87994 = prim_cons(id86762, newarg87993);

//app-clo
void* cloPtr88634 = get_closure_ptr(cons);
void* procEnv88635 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88634);
function_ptr(procEnv88635, newarg87994);
}

void ptr88255(void* env88256, void* arglst87936)
{
void* op = get_env_value(env88256, encode_int((s32)9));
void* map1 = get_env_value(env88256, encode_int((s32)8));
void* cons = get_env_value(env88256, encode_int((s32)7));
void* cdr = get_env_value(env88256, encode_int((s32)6));
void* kkont86656 = get_env_value(env88256, encode_int((s32)5));
void* map = get_env_value(env88256, encode_int((s32)4));
void* null_u63 = get_env_value(env88256, encode_int((s32)3));
void* lst1 = get_env_value(env88256, encode_int((s32)2));
void* car = get_env_value(env88256, encode_int((s32)1));
void* letk86661 = prim_car(arglst87936);
void* arg_lst87937 = prim_cdr(arglst87936);
void* param_lst86389 = prim_car(arg_lst87937);
void* arg_lst87938 = prim_cdr(arg_lst87937);

//creating new closure instance
auto ptr88636 = reinterpret_cast<void (*)(void *, void *)>(&ptr88257);
env88256 = allocate_env_space(encode_int((s32)9));
void* id86760 = make_closure(reinterpret_cast<void *>(ptr88636), env88256);

//setting env list
set_env(env88256, encode_int((s32)1), car);
set_env(env88256, encode_int((s32)2), lst1);
set_env(env88256, encode_int((s32)3), null_u63);
set_env(env88256, encode_int((s32)4), map);
set_env(env88256, encode_int((s32)5), kkont86656);
set_env(env88256, encode_int((s32)6), cdr);
set_env(env88256, encode_int((s32)7), cons);
set_env(env88256, encode_int((s32)8), map1);
set_env(env88256, encode_int((s32)9), op);


void* id86761 = encode_null();
void* oldarg87995 = encode_null();
void* newarg87996 = prim_cons(param_lst86389, oldarg87995);
void* newarg87997 = prim_cons(id86761, newarg87996);

//app-clo
void* cloPtr88637 = get_closure_ptr(id86760);
void* procEnv88638 = get_env(id86760);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88637);
function_ptr(procEnv88638, newarg87997);
}

void ptr88253(void* env88254, void* arglst87933)
{
void* op = get_env_value(env88254, encode_int((s32)9));
void* map1 = get_env_value(env88254, encode_int((s32)8));
void* car = get_env_value(env88254, encode_int((s32)7));
void* cons = get_env_value(env88254, encode_int((s32)6));
void* cdr = get_env_value(env88254, encode_int((s32)5));
void* kkont86656 = get_env_value(env88254, encode_int((s32)4));
void* map = get_env_value(env88254, encode_int((s32)3));
void* null_u63 = get_env_value(env88254, encode_int((s32)2));
void* param_lst86389 = get_env_value(env88254, encode_int((s32)1));
void* letk86660 = prim_car(arglst87933);
void* arg_lst87934 = prim_cdr(arglst87933);
void* lst1 = prim_car(arg_lst87934);
void* arg_lst87935 = prim_cdr(arg_lst87934);

//creating new closure instance
auto ptr88639 = reinterpret_cast<void (*)(void *, void *)>(&ptr88255);
env88254 = allocate_env_space(encode_int((s32)9));
void* id86759 = make_closure(reinterpret_cast<void *>(ptr88639), env88254);

//setting env list
set_env(env88254, encode_int((s32)1), car);
set_env(env88254, encode_int((s32)2), lst1);
set_env(env88254, encode_int((s32)3), null_u63);
set_env(env88254, encode_int((s32)4), map);
set_env(env88254, encode_int((s32)5), kkont86656);
set_env(env88254, encode_int((s32)6), cdr);
set_env(env88254, encode_int((s32)7), cons);
set_env(env88254, encode_int((s32)8), map1);
set_env(env88254, encode_int((s32)9), op);


void* oldarg87998 = encode_null();
void* newarg87999 = prim_cons(param_lst86389, oldarg87998);
void* newarg88000 = prim_cons(id86759, newarg87999);

//app-clo
void* cloPtr88640 = get_closure_ptr(cdr);
void* procEnv88641 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88640);
function_ptr(procEnv88641, newarg88000);
}

void ptr88251(void* env88252, void* arglst87930)
{
void* op = get_env_value(env88252, encode_int((s32)8));
void* map1 = get_env_value(env88252, encode_int((s32)7));
void* car = get_env_value(env88252, encode_int((s32)6));
void* cons = get_env_value(env88252, encode_int((s32)5));
void* cdr = get_env_value(env88252, encode_int((s32)4));
void* kkont86656 = get_env_value(env88252, encode_int((s32)3));
void* map = get_env_value(env88252, encode_int((s32)2));
void* null_u63 = get_env_value(env88252, encode_int((s32)1));
void* letk86659 = prim_car(arglst87930);
void* arg_lst87931 = prim_cdr(arglst87930);
void* param_lst86389 = prim_car(arg_lst87931);
void* arg_lst87932 = prim_cdr(arg_lst87931);

//creating new closure instance
auto ptr88642 = reinterpret_cast<void (*)(void *, void *)>(&ptr88253);
env88252 = allocate_env_space(encode_int((s32)9));
void* id86758 = make_closure(reinterpret_cast<void *>(ptr88642), env88252);

//setting env list
set_env(env88252, encode_int((s32)1), param_lst86389);
set_env(env88252, encode_int((s32)2), null_u63);
set_env(env88252, encode_int((s32)3), map);
set_env(env88252, encode_int((s32)4), kkont86656);
set_env(env88252, encode_int((s32)5), cdr);
set_env(env88252, encode_int((s32)6), cons);
set_env(env88252, encode_int((s32)7), car);
set_env(env88252, encode_int((s32)8), map1);
set_env(env88252, encode_int((s32)9), op);


void* oldarg88001 = encode_null();
void* newarg88002 = prim_cons(param_lst86389, oldarg88001);
void* newarg88003 = prim_cons(id86758, newarg88002);

//app-clo
void* cloPtr88643 = get_closure_ptr(car);
void* procEnv88644 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88643);
function_ptr(procEnv88644, newarg88003);
}

void ptr88249(void* env88250, void* arglst87927)
{
void* map1 = get_env_value(env88250, encode_int((s32)8));
void* car = get_env_value(env88250, encode_int((s32)7));
void* cons = get_env_value(env88250, encode_int((s32)6));
void* cdr = get_env_value(env88250, encode_int((s32)5));
void* kkont86656 = get_env_value(env88250, encode_int((s32)4));
void* map = get_env_value(env88250, encode_int((s32)3));
void* null_u63 = get_env_value(env88250, encode_int((s32)2));
void* param_lst86389 = get_env_value(env88250, encode_int((s32)1));
void* letk86658 = prim_car(arglst87927);
void* arg_lst87928 = prim_cdr(arglst87927);
void* op = prim_car(arg_lst87928);
void* arg_lst87929 = prim_cdr(arg_lst87928);

//creating new closure instance
auto ptr88645 = reinterpret_cast<void (*)(void *, void *)>(&ptr88251);
env88250 = allocate_env_space(encode_int((s32)8));
void* id86757 = make_closure(reinterpret_cast<void *>(ptr88645), env88250);

//setting env list
set_env(env88250, encode_int((s32)1), null_u63);
set_env(env88250, encode_int((s32)2), map);
set_env(env88250, encode_int((s32)3), kkont86656);
set_env(env88250, encode_int((s32)4), cdr);
set_env(env88250, encode_int((s32)5), cons);
set_env(env88250, encode_int((s32)6), car);
set_env(env88250, encode_int((s32)7), map1);
set_env(env88250, encode_int((s32)8), op);


void* oldarg88004 = encode_null();
void* newarg88005 = prim_cons(param_lst86389, oldarg88004);
void* newarg88006 = prim_cons(id86757, newarg88005);

//app-clo
void* cloPtr88646 = get_closure_ptr(cdr);
void* procEnv88647 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88646);
function_ptr(procEnv88647, newarg88006);
}

void ptr88247(void* env88248, void* param_lst8638986657)
{
void* cdr = get_env_value(env88248, encode_int((s32)6));
void* map1 = get_env_value(env88248, encode_int((s32)5));
void* car = get_env_value(env88248, encode_int((s32)4));
void* cons = get_env_value(env88248, encode_int((s32)3));
void* map = get_env_value(env88248, encode_int((s32)2));
void* null_u63 = get_env_value(env88248, encode_int((s32)1));
void* kkont86656 = prim_car(param_lst8638986657);
void* param_lst86389 = prim_cdr(param_lst8638986657);

//creating new closure instance
auto ptr88648 = reinterpret_cast<void (*)(void *, void *)>(&ptr88249);
env88248 = allocate_env_space(encode_int((s32)8));
void* id86756 = make_closure(reinterpret_cast<void *>(ptr88648), env88248);

//setting env list
set_env(env88248, encode_int((s32)1), param_lst86389);
set_env(env88248, encode_int((s32)2), null_u63);
set_env(env88248, encode_int((s32)3), map);
set_env(env88248, encode_int((s32)4), kkont86656);
set_env(env88248, encode_int((s32)5), cdr);
set_env(env88248, encode_int((s32)6), cons);
set_env(env88248, encode_int((s32)7), car);
set_env(env88248, encode_int((s32)8), map1);


void* oldarg88007 = encode_null();
void* newarg88008 = prim_cons(param_lst86389, oldarg88007);
void* newarg88009 = prim_cons(id86756, newarg88008);

//app-clo
void* cloPtr88649 = get_closure_ptr(car);
void* procEnv88650 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88649);
function_ptr(procEnv88650, newarg88009);
}

void ptr88245(void* env88246, void* arglst87924)
{
void* cdr = get_env_value(env88246, encode_int((s32)5));
void* null_u63 = get_env_value(env88246, encode_int((s32)4));
void* map1 = get_env_value(env88246, encode_int((s32)3));
void* car = get_env_value(env88246, encode_int((s32)2));
void* cons = get_env_value(env88246, encode_int((s32)1));
void* kont86655 = prim_car(arglst87924);
void* arg_lst87925 = prim_cdr(arglst87924);
void* map = prim_car(arg_lst87925);
void* arg_lst87926 = prim_cdr(arg_lst87925);
void* id86754 = encode_null();

//creating new closure instance
auto ptr88651 = reinterpret_cast<void (*)(void *, void *)>(&ptr88247);
env88246 = allocate_env_space(encode_int((s32)6));
void* id86755 = make_closure(reinterpret_cast<void *>(ptr88651), env88246);

//setting env list
set_env(env88246, encode_int((s32)1), null_u63);
set_env(env88246, encode_int((s32)2), map);
set_env(env88246, encode_int((s32)3), cons);
set_env(env88246, encode_int((s32)4), car);
set_env(env88246, encode_int((s32)5), map1);
set_env(env88246, encode_int((s32)6), cdr);


void* oldarg88010 = encode_null();
void* newarg88011 = prim_cons(id86755, oldarg88010);
void* newarg88012 = prim_cons(id86754, newarg88011);

//app-clo
void* cloPtr88652 = get_closure_ptr(kont86655);
void* procEnv88653 = get_env(kont86655);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88652);
function_ptr(procEnv88653, newarg88012);
}

void ptr88303(void* env88304, void* arglst87699)
{
void* op = get_env_value(env88304, encode_int((s32)2));
void* kont86638 = get_env_value(env88304, encode_int((s32)1));
void* letk86643 = prim_car(arglst87699);
void* arg_lst87700 = prim_cdr(arglst87699);
void* t86420 = prim_car(arg_lst87700);
void* arg_lst87701 = prim_cdr(arg_lst87700);
void* lst86644 = prim_cons(kont86638, t86420);

//app-clo
void* cloPtr88654 = get_closure_ptr(op);
void* procEnv88655 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88654);
function_ptr(procEnv88655, lst86644);
}

void ptr88313(void* env88314, void* arglst87718)
{
void* op = get_env_value(env88314, encode_int((s32)2));
void* kont86638 = get_env_value(env88314, encode_int((s32)1));
void* letk86649 = prim_car(arglst87718);
void* arg_lst87719 = prim_cdr(arglst87718);
void* t86425 = prim_car(arg_lst87719);
void* arg_lst87720 = prim_cdr(arg_lst87719);
void* lst86650 = prim_cons(kont86638, t86425);

//app-clo
void* cloPtr88656 = get_closure_ptr(op);
void* procEnv88657 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88656);
function_ptr(procEnv88657, lst86650);
}

void ptr88315(void* env88316, void* arglst87725)
{
void* loop = get_env_value(env88316, encode_int((s32)2));
void* kont86638 = get_env_value(env88316, encode_int((s32)1));
void* letk86651 = prim_car(arglst87725);
void* arg_lst87726 = prim_cdr(arglst87725);
void* t86426 = prim_car(arg_lst87726);
void* arg_lst87727 = prim_cdr(arg_lst87726);
void* oldarg87728 = encode_null();
void* newarg87729 = prim_cons(t86426, oldarg87728);
void* newarg87730 = prim_cons(kont86638, newarg87729);

//app-clo
void* cloPtr88658 = get_closure_ptr(loop);
void* procEnv88659 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88658);
function_ptr(procEnv88659, newarg87730);
}

void ptr88311(void* env88312, void* arglst87715)
{
void* lst = get_env_value(env88312, encode_int((s32)7));
void* op = get_env_value(env88312, encode_int((s32)6));
void* map1 = get_env_value(env88312, encode_int((s32)5));
void* car = get_env_value(env88312, encode_int((s32)4));
void* kont86638 = get_env_value(env88312, encode_int((s32)3));
void* loop = get_env_value(env88312, encode_int((s32)2));
void* cdr = get_env_value(env88312, encode_int((s32)1));
void* letk86648 = prim_car(arglst87715);
void* arg_lst87716 = prim_cdr(arglst87715);
void* t86424 = prim_car(arg_lst87716);
void* arg_lst87717 = prim_cdr(arg_lst87716);

//if-clause
u64 if_guard88660 = reinterpret_cast<u64>(is_true(t86424));
if(if_guard88660 == 1)
{

//creating new closure instance
auto ptr88661 = reinterpret_cast<void (*)(void *, void *)>(&ptr88313);
env88312 = allocate_env_space(encode_int((s32)2));
void* id86801 = make_closure(reinterpret_cast<void *>(ptr88661), env88312);

//setting env list
set_env(env88312, encode_int((s32)1), kont86638);
set_env(env88312, encode_int((s32)2), op);


void* oldarg87721 = encode_null();
void* newarg87722 = prim_cons(lst, oldarg87721);
void* newarg87723 = prim_cons(car, newarg87722);
void* newarg87724 = prim_cons(id86801, newarg87723);

//app-clo
void* cloPtr88662 = get_closure_ptr(map1);
void* procEnv88663 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88662);
function_ptr(procEnv88663, newarg87724);
}
else
{

//creating new closure instance
auto ptr88664 = reinterpret_cast<void (*)(void *, void *)>(&ptr88315);
env88312 = allocate_env_space(encode_int((s32)2));
void* id86802 = make_closure(reinterpret_cast<void *>(ptr88664), env88312);

//setting env list
set_env(env88312, encode_int((s32)1), kont86638);
set_env(env88312, encode_int((s32)2), loop);


void* oldarg87731 = encode_null();
void* newarg87732 = prim_cons(lst, oldarg87731);
void* newarg87733 = prim_cons(cdr, newarg87732);
void* newarg87734 = prim_cons(id86802, newarg87733);

//app-clo
void* cloPtr88665 = get_closure_ptr(map1);
void* procEnv88666 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88665);
function_ptr(procEnv88666, newarg87734);
}

}

void ptr88309(void* env88310, void* arglst87712)
{
void* lst = get_env_value(env88310, encode_int((s32)8));
void* op = get_env_value(env88310, encode_int((s32)7));
void* equal_u63 = get_env_value(env88310, encode_int((s32)6));
void* map1 = get_env_value(env88310, encode_int((s32)5));
void* car = get_env_value(env88310, encode_int((s32)4));
void* kont86638 = get_env_value(env88310, encode_int((s32)3));
void* loop = get_env_value(env88310, encode_int((s32)2));
void* cdr = get_env_value(env88310, encode_int((s32)1));
void* letk86647 = prim_car(arglst87712);
void* arg_lst87713 = prim_cdr(arglst87712);
void* t86423 = prim_car(arg_lst87713);
void* arg_lst87714 = prim_cdr(arg_lst87713);

//creating new closure instance
auto ptr88667 = reinterpret_cast<void (*)(void *, void *)>(&ptr88311);
env88310 = allocate_env_space(encode_int((s32)7));
void* id86799 = make_closure(reinterpret_cast<void *>(ptr88667), env88310);

//setting env list
set_env(env88310, encode_int((s32)1), cdr);
set_env(env88310, encode_int((s32)2), loop);
set_env(env88310, encode_int((s32)3), kont86638);
set_env(env88310, encode_int((s32)4), car);
set_env(env88310, encode_int((s32)5), map1);
set_env(env88310, encode_int((s32)6), op);
set_env(env88310, encode_int((s32)7), lst);


void* id86800 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg87735 = encode_null();
void* newarg87736 = prim_cons(t86423, oldarg87735);
void* newarg87737 = prim_cons(id86800, newarg87736);
void* newarg87738 = prim_cons(id86799, newarg87737);

//app-clo
void* cloPtr88668 = get_closure_ptr(equal_u63);
void* procEnv88669 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88668);
function_ptr(procEnv88669, newarg87738);
}

void ptr88321(void* env88322, void* arglst87748)
{
void* op = get_env_value(env88322, encode_int((s32)2));
void* kont86638 = get_env_value(env88322, encode_int((s32)1));
void* letk86649 = prim_car(arglst87748);
void* arg_lst87749 = prim_cdr(arglst87748);
void* t86425 = prim_car(arg_lst87749);
void* arg_lst87750 = prim_cdr(arg_lst87749);
void* lst86650 = prim_cons(kont86638, t86425);

//app-clo
void* cloPtr88670 = get_closure_ptr(op);
void* procEnv88671 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88670);
function_ptr(procEnv88671, lst86650);
}

void ptr88323(void* env88324, void* arglst87755)
{
void* loop = get_env_value(env88324, encode_int((s32)2));
void* kont86638 = get_env_value(env88324, encode_int((s32)1));
void* letk86651 = prim_car(arglst87755);
void* arg_lst87756 = prim_cdr(arglst87755);
void* t86426 = prim_car(arg_lst87756);
void* arg_lst87757 = prim_cdr(arg_lst87756);
void* oldarg87758 = encode_null();
void* newarg87759 = prim_cons(t86426, oldarg87758);
void* newarg87760 = prim_cons(kont86638, newarg87759);

//app-clo
void* cloPtr88672 = get_closure_ptr(loop);
void* procEnv88673 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88672);
function_ptr(procEnv88673, newarg87760);
}

void ptr88319(void* env88320, void* arglst87745)
{
void* lst = get_env_value(env88320, encode_int((s32)7));
void* op = get_env_value(env88320, encode_int((s32)6));
void* map1 = get_env_value(env88320, encode_int((s32)5));
void* car = get_env_value(env88320, encode_int((s32)4));
void* kont86638 = get_env_value(env88320, encode_int((s32)3));
void* loop = get_env_value(env88320, encode_int((s32)2));
void* cdr = get_env_value(env88320, encode_int((s32)1));
void* letk86648 = prim_car(arglst87745);
void* arg_lst87746 = prim_cdr(arglst87745);
void* t86424 = prim_car(arg_lst87746);
void* arg_lst87747 = prim_cdr(arg_lst87746);

//if-clause
u64 if_guard88674 = reinterpret_cast<u64>(is_true(t86424));
if(if_guard88674 == 1)
{

//creating new closure instance
auto ptr88675 = reinterpret_cast<void (*)(void *, void *)>(&ptr88321);
env88320 = allocate_env_space(encode_int((s32)2));
void* id86808 = make_closure(reinterpret_cast<void *>(ptr88675), env88320);

//setting env list
set_env(env88320, encode_int((s32)1), kont86638);
set_env(env88320, encode_int((s32)2), op);


void* oldarg87751 = encode_null();
void* newarg87752 = prim_cons(lst, oldarg87751);
void* newarg87753 = prim_cons(car, newarg87752);
void* newarg87754 = prim_cons(id86808, newarg87753);

//app-clo
void* cloPtr88676 = get_closure_ptr(map1);
void* procEnv88677 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88676);
function_ptr(procEnv88677, newarg87754);
}
else
{

//creating new closure instance
auto ptr88678 = reinterpret_cast<void (*)(void *, void *)>(&ptr88323);
env88320 = allocate_env_space(encode_int((s32)2));
void* id86809 = make_closure(reinterpret_cast<void *>(ptr88678), env88320);

//setting env list
set_env(env88320, encode_int((s32)1), kont86638);
set_env(env88320, encode_int((s32)2), loop);


void* oldarg87761 = encode_null();
void* newarg87762 = prim_cons(lst, oldarg87761);
void* newarg87763 = prim_cons(cdr, newarg87762);
void* newarg87764 = prim_cons(id86809, newarg87763);

//app-clo
void* cloPtr88679 = get_closure_ptr(map1);
void* procEnv88680 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88679);
function_ptr(procEnv88680, newarg87764);
}

}

void ptr88317(void* env88318, void* arglst87742)
{
void* lst = get_env_value(env88318, encode_int((s32)8));
void* op = get_env_value(env88318, encode_int((s32)7));
void* equal_u63 = get_env_value(env88318, encode_int((s32)6));
void* map1 = get_env_value(env88318, encode_int((s32)5));
void* car = get_env_value(env88318, encode_int((s32)4));
void* kont86638 = get_env_value(env88318, encode_int((s32)3));
void* loop = get_env_value(env88318, encode_int((s32)2));
void* cdr = get_env_value(env88318, encode_int((s32)1));
void* letk86647 = prim_car(arglst87742);
void* arg_lst87743 = prim_cdr(arglst87742);
void* t86423 = prim_car(arg_lst87743);
void* arg_lst87744 = prim_cdr(arg_lst87743);

//creating new closure instance
auto ptr88681 = reinterpret_cast<void (*)(void *, void *)>(&ptr88319);
env88318 = allocate_env_space(encode_int((s32)7));
void* id86806 = make_closure(reinterpret_cast<void *>(ptr88681), env88318);

//setting env list
set_env(env88318, encode_int((s32)1), cdr);
set_env(env88318, encode_int((s32)2), loop);
set_env(env88318, encode_int((s32)3), kont86638);
set_env(env88318, encode_int((s32)4), car);
set_env(env88318, encode_int((s32)5), map1);
set_env(env88318, encode_int((s32)6), op);
set_env(env88318, encode_int((s32)7), lst);


void* id86807 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg87765 = encode_null();
void* newarg87766 = prim_cons(t86423, oldarg87765);
void* newarg87767 = prim_cons(id86807, newarg87766);
void* newarg87768 = prim_cons(id86806, newarg87767);

//app-clo
void* cloPtr88682 = get_closure_ptr(equal_u63);
void* procEnv88683 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88682);
function_ptr(procEnv88683, newarg87768);
}

void ptr88307(void* env88308, void* arglst87709)
{
void* lst = get_env_value(env88308, encode_int((s32)8));
void* op = get_env_value(env88308, encode_int((s32)7));
void* equal_u63 = get_env_value(env88308, encode_int((s32)6));
void* map1 = get_env_value(env88308, encode_int((s32)5));
void* car = get_env_value(env88308, encode_int((s32)4));
void* kont86638 = get_env_value(env88308, encode_int((s32)3));
void* loop = get_env_value(env88308, encode_int((s32)2));
void* cdr = get_env_value(env88308, encode_int((s32)1));
void* letk86646 = prim_car(arglst87709);
void* arg_lst87710 = prim_cdr(arglst87709);
void* t86422 = prim_car(arg_lst87710);
void* arg_lst87711 = prim_cdr(arg_lst87710);

//if-clause
u64 if_guard88684 = reinterpret_cast<u64>(is_true(t86422));
if(if_guard88684 == 1)
{

//creating new closure instance
auto ptr88685 = reinterpret_cast<void (*)(void *, void *)>(&ptr88309);
env88308 = allocate_env_space(encode_int((s32)8));
void* id86796 = make_closure(reinterpret_cast<void *>(ptr88685), env88308);

//setting env list
set_env(env88308, encode_int((s32)1), cdr);
set_env(env88308, encode_int((s32)2), loop);
set_env(env88308, encode_int((s32)3), kont86638);
set_env(env88308, encode_int((s32)4), car);
set_env(env88308, encode_int((s32)5), map1);
set_env(env88308, encode_int((s32)6), equal_u63);
set_env(env88308, encode_int((s32)7), op);
set_env(env88308, encode_int((s32)8), lst);


void* id86797 = encode_null();
void* id86798 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg87739 = encode_null();
void* newarg87740 = prim_cons(id86798, oldarg87739);
void* newarg87741 = prim_cons(id86797, newarg87740);

//app-clo
void* cloPtr88686 = get_closure_ptr(id86796);
void* procEnv88687 = get_env(id86796);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88686);
function_ptr(procEnv88687, newarg87741);
}
else
{

//creating new closure instance
auto ptr88688 = reinterpret_cast<void (*)(void *, void *)>(&ptr88317);
env88308 = allocate_env_space(encode_int((s32)8));
void* id86803 = make_closure(reinterpret_cast<void *>(ptr88688), env88308);

//setting env list
set_env(env88308, encode_int((s32)1), cdr);
set_env(env88308, encode_int((s32)2), loop);
set_env(env88308, encode_int((s32)3), kont86638);
set_env(env88308, encode_int((s32)4), car);
set_env(env88308, encode_int((s32)5), map1);
set_env(env88308, encode_int((s32)6), equal_u63);
set_env(env88308, encode_int((s32)7), op);
set_env(env88308, encode_int((s32)8), lst);


void* id86804 = encode_null();
void* id86805 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg87769 = encode_null();
void* newarg87770 = prim_cons(id86805, oldarg87769);
void* newarg87771 = prim_cons(id86804, newarg87770);

//app-clo
void* cloPtr88689 = get_closure_ptr(id86803);
void* procEnv88690 = get_env(id86803);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88689);
function_ptr(procEnv88690, newarg87771);
}

}

void ptr88305(void* env88306, void* arglst87706)
{
void* lst = get_env_value(env88306, encode_int((s32)8));
void* op = get_env_value(env88306, encode_int((s32)7));
void* equal_u63 = get_env_value(env88306, encode_int((s32)6));
void* map1 = get_env_value(env88306, encode_int((s32)5));
void* car = get_env_value(env88306, encode_int((s32)4));
void* kont86638 = get_env_value(env88306, encode_int((s32)3));
void* loop = get_env_value(env88306, encode_int((s32)2));
void* cdr = get_env_value(env88306, encode_int((s32)1));
void* letk86645 = prim_car(arglst87706);
void* arg_lst87707 = prim_cdr(arglst87706);
void* t86421 = prim_car(arg_lst87707);
void* arg_lst87708 = prim_cdr(arg_lst87707);

//creating new closure instance
auto ptr88691 = reinterpret_cast<void (*)(void *, void *)>(&ptr88307);
env88306 = allocate_env_space(encode_int((s32)8));
void* id86795 = make_closure(reinterpret_cast<void *>(ptr88691), env88306);

//setting env list
set_env(env88306, encode_int((s32)1), cdr);
set_env(env88306, encode_int((s32)2), loop);
set_env(env88306, encode_int((s32)3), kont86638);
set_env(env88306, encode_int((s32)4), car);
set_env(env88306, encode_int((s32)5), map1);
set_env(env88306, encode_int((s32)6), equal_u63);
set_env(env88306, encode_int((s32)7), op);
set_env(env88306, encode_int((s32)8), lst);


void* lst86652 = prim_cons(id86795, t86421);

//app-clo
void* cloPtr88692 = get_closure_ptr(op);
void* procEnv88693 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr88692);
function_ptr(procEnv88693, lst86652);
}

void ptr88301(void* env88302, void* arglst87696)
{
void* lst = get_env_value(env88302, encode_int((s32)8));
void* op = get_env_value(env88302, encode_int((s32)7));
void* equal_u63 = get_env_value(env88302, encode_int((s32)6));
void* map1 = get_env_value(env88302, encode_int((s32)5));
void* car = get_env_value(env88302, encode_int((s32)4));
void* kont86638 = get_env_value(env88302, encode_int((s32)3));
void* loop = get_env_value(env88302, encode_int((s32)2));
void* cdr = get_env_value(env88302, encode_int((s32)1));
void* letk86642 = prim_car(arglst87696);
void* arg_lst87697 = prim_cdr(arglst87696);
void* t86419 = prim_car(arg_lst87697);
void* arg_lst87698 = prim_cdr(arg_lst87697);

//if-clause
u64 if_guard88694 = reinterpret_cast<u64>(is_true(t86419));
if(if_guard88694 == 1)
{

//creating new closure instance
auto ptr88695 = reinterpret_cast<void (*)(void *, void *)>(&ptr88303);
