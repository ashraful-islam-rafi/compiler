#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void ptr10222(void* env10223, void* arglst10150)
{
void* vs = get_env_value(env10223, encode_int((s32)2));
void* kkont8546 = get_env_value(env10223, encode_int((s32)1));
void* letk8549 = prim_car(arglst10150);
void* arg_lst10151 = prim_cdr(arglst10150);
void* t8242 = prim_car(arg_lst10151);
void* arg_lst10152 = prim_cdr(arg_lst10151);
void* lst8550 = prim_cons(kkont8546, vs);

//app-clo
void* cloPtr10600 = get_closure_ptr(t8242);
void* procEnv10601 = get_env(t8242);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10600);
function_ptr(procEnv10601, lst8550);
}

void ptr10220(void* env10221, void* arglst10147)
{
void* kkont8546 = get_env_value(env10221, encode_int((s32)3));
void* vs = get_env_value(env10221, encode_int((s32)2));
void* f = get_env_value(env10221, encode_int((s32)1));
void* letk8548 = prim_car(arglst10147);
void* arg_lst10148 = prim_cdr(arglst10147);
void* t8241 = prim_car(arg_lst10148);
void* arg_lst10149 = prim_cdr(arg_lst10148);

//creating new closure instance
auto ptr10602 = reinterpret_cast<void (*)(void *, void *)>(&ptr10222);
env10221 = allocate_env_space(encode_int((s32)2));
void* id8579 = make_closure(reinterpret_cast<void *>(ptr10602), env10221);

//setting env list
set_env(env10221, encode_int((s32)1), kkont8546);
set_env(env10221, encode_int((s32)2), vs);


void* oldarg10153 = encode_null();
void* newarg10154 = prim_cons(f, oldarg10153);
void* newarg10155 = prim_cons(id8579, newarg10154);

//app-clo
void* cloPtr10603 = get_closure_ptr(t8241);
void* procEnv10604 = get_env(t8241);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10603);
function_ptr(procEnv10604, newarg10155);
}

void ptr10218(void* env10219, void* vs8547)
{
void* g = get_env_value(env10219, encode_int((s32)2));
void* f = get_env_value(env10219, encode_int((s32)1));
void* kkont8546 = prim_car(vs8547);
void* vs = prim_cdr(vs8547);

//creating new closure instance
auto ptr10605 = reinterpret_cast<void (*)(void *, void *)>(&ptr10220);
env10219 = allocate_env_space(encode_int((s32)3));
void* id8578 = make_closure(reinterpret_cast<void *>(ptr10605), env10219);

//setting env list
set_env(env10219, encode_int((s32)1), f);
set_env(env10219, encode_int((s32)2), vs);
set_env(env10219, encode_int((s32)3), kkont8546);


void* oldarg10156 = encode_null();
void* newarg10157 = prim_cons(g, oldarg10156);
void* newarg10158 = prim_cons(id8578, newarg10157);

//app-clo
void* cloPtr10606 = get_closure_ptr(g);
void* procEnv10607 = get_env(g);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10606);
function_ptr(procEnv10607, newarg10158);
}

void ptr10216(void* env10217, void* arglst10144)
{
void* g = get_env_value(env10217, encode_int((s32)1));
void* kont8545 = prim_car(arglst10144);
void* arg_lst10145 = prim_cdr(arglst10144);
void* f = prim_car(arg_lst10145);
void* arg_lst10146 = prim_cdr(arg_lst10145);

//creating new closure instance
auto ptr10608 = reinterpret_cast<void (*)(void *, void *)>(&ptr10218);
env10217 = allocate_env_space(encode_int((s32)2));
void* id8577 = make_closure(reinterpret_cast<void *>(ptr10608), env10217);

//setting env list
set_env(env10217, encode_int((s32)1), f);
set_env(env10217, encode_int((s32)2), g);


void* oldarg10159 = encode_null();
void* newarg10160 = prim_cons(id8577, oldarg10159);
void* newarg10161 = prim_cons(kont8545, newarg10160);

//app-clo
void* cloPtr10609 = get_closure_ptr(f);
void* procEnv10610 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10609);
function_ptr(procEnv10610, newarg10161);
}

void ptr10214(void* env10215, void* arglst10141)
{
void* kont8544 = prim_car(arglst10141);
void* arg_lst10142 = prim_cdr(arglst10141);
void* g = prim_car(arg_lst10142);
void* arg_lst10143 = prim_cdr(arg_lst10142);
void* id8575 = encode_null();

//creating new closure instance
auto ptr10611 = reinterpret_cast<void (*)(void *, void *)>(&ptr10216);
env10215 = allocate_env_space(encode_int((s32)1));
void* id8576 = make_closure(reinterpret_cast<void *>(ptr10611), env10215);

//setting env list
set_env(env10215, encode_int((s32)1), g);


void* oldarg10162 = encode_null();
void* newarg10163 = prim_cons(id8576, oldarg10162);
void* newarg10164 = prim_cons(id8575, newarg10163);

//app-clo
void* cloPtr10612 = get_closure_ptr(kont8544);
void* procEnv10613 = get_env(kont8544);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10612);
function_ptr(procEnv10613, newarg10164);
}

void ptr10228(void* env10229, void* args8541)
{
void* kkont8540 = prim_car(args8541);
void* args = prim_cdr(args8541);
void* prm8542 = apply_prim_halt(args);
void* id8584 = encode_null();
void* oldarg10132 = encode_null();
void* newarg10133 = prim_cons(prm8542, oldarg10132);
void* newarg10134 = prim_cons(id8584, newarg10133);

//app-clo
void* cloPtr10614 = get_closure_ptr(kkont8540);
void* procEnv10615 = get_env(kkont8540);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10614);
function_ptr(procEnv10615, newarg10134);
}

void ptr10226(void* env10227, void* arglst10129)
{
void* kont8539 = prim_car(arglst10129);
void* arg_lst10130 = prim_cdr(arglst10129);
void* halt = prim_car(arg_lst10130);
void* arg_lst10131 = prim_cdr(arg_lst10130);
void* id8582 = encode_null();

//creating new closure instance
auto ptr10616 = reinterpret_cast<void (*)(void *, void *)>(&ptr10228);
env10227 = allocate_env_space(encode_int((s32)0));
void* id8583 = make_closure(reinterpret_cast<void *>(ptr10616), env10227);


void* oldarg10135 = encode_null();
void* newarg10136 = prim_cons(id8583, oldarg10135);
void* newarg10137 = prim_cons(id8582, newarg10136);

//app-clo
void* cloPtr10617 = get_closure_ptr(kont8539);
void* procEnv10618 = get_env(kont8539);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10617);
function_ptr(procEnv10618, newarg10137);
}

void ptr10242(void* env10243, void* arglst10103)
{
void* t8244 = get_env_value(env10243, encode_int((s32)3));
void* kont8534 = get_env_value(env10243, encode_int((s32)2));
void* cons = get_env_value(env10243, encode_int((s32)1));
void* letk8538 = prim_car(arglst10103);
void* arg_lst10104 = prim_cdr(arglst10103);
void* t8246 = prim_car(arg_lst10104);
void* arg_lst10105 = prim_cdr(arg_lst10104);
void* oldarg10106 = encode_null();
void* newarg10107 = prim_cons(t8246, oldarg10106);
void* newarg10108 = prim_cons(t8244, newarg10107);
void* newarg10109 = prim_cons(kont8534, newarg10108);

//app-clo
void* cloPtr10619 = get_closure_ptr(cons);
void* procEnv10620 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10619);
function_ptr(procEnv10620, newarg10109);
}

void ptr10240(void* env10241, void* arglst10100)
{
void* t8244 = get_env_value(env10241, encode_int((s32)5));
void* kont8534 = get_env_value(env10241, encode_int((s32)4));
void* append1 = get_env_value(env10241, encode_int((s32)3));
void* rhs = get_env_value(env10241, encode_int((s32)2));
void* cons = get_env_value(env10241, encode_int((s32)1));
void* letk8537 = prim_car(arglst10100);
void* arg_lst10101 = prim_cdr(arglst10100);
void* t8245 = prim_car(arg_lst10101);
void* arg_lst10102 = prim_cdr(arg_lst10101);

//creating new closure instance
auto ptr10621 = reinterpret_cast<void (*)(void *, void *)>(&ptr10242);
env10241 = allocate_env_space(encode_int((s32)3));
void* id8593 = make_closure(reinterpret_cast<void *>(ptr10621), env10241);

//setting env list
set_env(env10241, encode_int((s32)1), cons);
set_env(env10241, encode_int((s32)2), kont8534);
set_env(env10241, encode_int((s32)3), t8244);


void* oldarg10110 = encode_null();
void* newarg10111 = prim_cons(rhs, oldarg10110);
void* newarg10112 = prim_cons(t8245, newarg10111);
void* newarg10113 = prim_cons(id8593, newarg10112);

//app-clo
void* cloPtr10622 = get_closure_ptr(append1);
void* procEnv10623 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10622);
function_ptr(procEnv10623, newarg10113);
}

void ptr10238(void* env10239, void* arglst10097)
{
void* cdr = get_env_value(env10239, encode_int((s32)6));
void* kont8534 = get_env_value(env10239, encode_int((s32)5));
void* lhs = get_env_value(env10239, encode_int((s32)4));
void* append1 = get_env_value(env10239, encode_int((s32)3));
void* rhs = get_env_value(env10239, encode_int((s32)2));
void* cons = get_env_value(env10239, encode_int((s32)1));
void* letk8536 = prim_car(arglst10097);
void* arg_lst10098 = prim_cdr(arglst10097);
void* t8244 = prim_car(arg_lst10098);
void* arg_lst10099 = prim_cdr(arg_lst10098);

//creating new closure instance
auto ptr10624 = reinterpret_cast<void (*)(void *, void *)>(&ptr10240);
env10239 = allocate_env_space(encode_int((s32)5));
void* id8592 = make_closure(reinterpret_cast<void *>(ptr10624), env10239);

//setting env list
set_env(env10239, encode_int((s32)1), cons);
set_env(env10239, encode_int((s32)2), rhs);
set_env(env10239, encode_int((s32)3), append1);
set_env(env10239, encode_int((s32)4), kont8534);
set_env(env10239, encode_int((s32)5), t8244);


void* oldarg10114 = encode_null();
void* newarg10115 = prim_cons(lhs, oldarg10114);
void* newarg10116 = prim_cons(id8592, newarg10115);

//app-clo
void* cloPtr10625 = get_closure_ptr(cdr);
void* procEnv10626 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10625);
function_ptr(procEnv10626, newarg10116);
}

void ptr10236(void* env10237, void* arglst10091)
{
void* cdr = get_env_value(env10237, encode_int((s32)7));
void* kont8534 = get_env_value(env10237, encode_int((s32)6));
void* lhs = get_env_value(env10237, encode_int((s32)5));
void* append1 = get_env_value(env10237, encode_int((s32)4));
void* cons = get_env_value(env10237, encode_int((s32)3));
void* rhs = get_env_value(env10237, encode_int((s32)2));
void* car = get_env_value(env10237, encode_int((s32)1));
void* letk8535 = prim_car(arglst10091);
void* arg_lst10092 = prim_cdr(arglst10091);
void* t8243 = prim_car(arg_lst10092);
void* arg_lst10093 = prim_cdr(arg_lst10092);

//if-clause
u64 if_guard10627 = reinterpret_cast<u64>(is_true(t8243));
if(if_guard10627 == 1)
{
void* id8590 = encode_null();
void* oldarg10094 = encode_null();
void* newarg10095 = prim_cons(rhs, oldarg10094);
void* newarg10096 = prim_cons(id8590, newarg10095);

//app-clo
void* cloPtr10628 = get_closure_ptr(kont8534);
void* procEnv10629 = get_env(kont8534);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10628);
function_ptr(procEnv10629, newarg10096);
}
else
{

//creating new closure instance
auto ptr10630 = reinterpret_cast<void (*)(void *, void *)>(&ptr10238);
env10237 = allocate_env_space(encode_int((s32)6));
void* id8591 = make_closure(reinterpret_cast<void *>(ptr10630), env10237);

//setting env list
set_env(env10237, encode_int((s32)1), cons);
set_env(env10237, encode_int((s32)2), rhs);
set_env(env10237, encode_int((s32)3), append1);
set_env(env10237, encode_int((s32)4), lhs);
set_env(env10237, encode_int((s32)5), kont8534);
set_env(env10237, encode_int((s32)6), cdr);


void* oldarg10117 = encode_null();
void* newarg10118 = prim_cons(lhs, oldarg10117);
void* newarg10119 = prim_cons(id8591, newarg10118);

//app-clo
void* cloPtr10631 = get_closure_ptr(car);
void* procEnv10632 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10631);
function_ptr(procEnv10632, newarg10119);
}

}

void ptr10234(void* env10235, void* arglst10087)
{
void* cdr = get_env_value(env10235, encode_int((s32)5));
void* null_u63 = get_env_value(env10235, encode_int((s32)4));
void* append1 = get_env_value(env10235, encode_int((s32)3));
void* car = get_env_value(env10235, encode_int((s32)2));
void* cons = get_env_value(env10235, encode_int((s32)1));
void* kont8534 = prim_car(arglst10087);
void* arg_lst10088 = prim_cdr(arglst10087);
void* lhs = prim_car(arg_lst10088);
void* arg_lst10089 = prim_cdr(arg_lst10088);
void* rhs = prim_car(arg_lst10089);
void* arg_lst10090 = prim_cdr(arg_lst10089);

//creating new closure instance
auto ptr10633 = reinterpret_cast<void (*)(void *, void *)>(&ptr10236);
env10235 = allocate_env_space(encode_int((s32)7));
void* id8589 = make_closure(reinterpret_cast<void *>(ptr10633), env10235);

//setting env list
set_env(env10235, encode_int((s32)1), car);
set_env(env10235, encode_int((s32)2), rhs);
set_env(env10235, encode_int((s32)3), cons);
set_env(env10235, encode_int((s32)4), append1);
set_env(env10235, encode_int((s32)5), lhs);
set_env(env10235, encode_int((s32)6), kont8534);
set_env(env10235, encode_int((s32)7), cdr);


void* oldarg10120 = encode_null();
void* newarg10121 = prim_cons(lhs, oldarg10120);
void* newarg10122 = prim_cons(id8589, newarg10121);

//app-clo
void* cloPtr10634 = get_closure_ptr(null_u63);
void* procEnv10635 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10634);
function_ptr(procEnv10635, newarg10122);
}

void ptr10232(void* env10233, void* arglst10084)
{
void* cdr = get_env_value(env10233, encode_int((s32)4));
void* null_u63 = get_env_value(env10233, encode_int((s32)3));
void* car = get_env_value(env10233, encode_int((s32)2));
void* cons = get_env_value(env10233, encode_int((s32)1));
void* kont8533 = prim_car(arglst10084);
void* arg_lst10085 = prim_cdr(arglst10084);
void* append1 = prim_car(arg_lst10085);
void* arg_lst10086 = prim_cdr(arg_lst10085);
void* id8587 = encode_null();

//creating new closure instance
auto ptr10636 = reinterpret_cast<void (*)(void *, void *)>(&ptr10234);
env10233 = allocate_env_space(encode_int((s32)5));
void* id8588 = make_closure(reinterpret_cast<void *>(ptr10636), env10233);

//setting env list
set_env(env10233, encode_int((s32)1), cons);
set_env(env10233, encode_int((s32)2), car);
set_env(env10233, encode_int((s32)3), append1);
set_env(env10233, encode_int((s32)4), null_u63);
set_env(env10233, encode_int((s32)5), cdr);


void* oldarg10123 = encode_null();
void* newarg10124 = prim_cons(id8588, oldarg10123);
void* newarg10125 = prim_cons(id8587, newarg10124);

//app-clo
void* cloPtr10637 = get_closure_ptr(kont8533);
void* procEnv10638 = get_env(kont8533);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10637);
function_ptr(procEnv10638, newarg10125);
}

void ptr10258(void* env10259, void* arglst10055)
{
void* t8249 = get_env_value(env10259, encode_int((s32)3));
void* kont8527 = get_env_value(env10259, encode_int((s32)2));
void* cons = get_env_value(env10259, encode_int((s32)1));
void* letk8532 = prim_car(arglst10055);
void* arg_lst10056 = prim_cdr(arglst10055);
void* t8251 = prim_car(arg_lst10056);
void* arg_lst10057 = prim_cdr(arg_lst10056);
void* oldarg10058 = encode_null();
void* newarg10059 = prim_cons(t8251, oldarg10058);
void* newarg10060 = prim_cons(t8249, newarg10059);
void* newarg10061 = prim_cons(kont8527, newarg10060);

//app-clo
void* cloPtr10639 = get_closure_ptr(cons);
void* procEnv10640 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10639);
function_ptr(procEnv10640, newarg10061);
}

void ptr10256(void* env10257, void* arglst10052)
{
void* t8249 = get_env_value(env10257, encode_int((s32)5));
void* op = get_env_value(env10257, encode_int((s32)4));
void* cons = get_env_value(env10257, encode_int((s32)3));
void* map1 = get_env_value(env10257, encode_int((s32)2));
void* kont8527 = get_env_value(env10257, encode_int((s32)1));
void* letk8531 = prim_car(arglst10052);
void* arg_lst10053 = prim_cdr(arglst10052);
void* t8250 = prim_car(arg_lst10053);
void* arg_lst10054 = prim_cdr(arg_lst10053);

//creating new closure instance
auto ptr10641 = reinterpret_cast<void (*)(void *, void *)>(&ptr10258);
env10257 = allocate_env_space(encode_int((s32)3));
void* id8604 = make_closure(reinterpret_cast<void *>(ptr10641), env10257);

//setting env list
set_env(env10257, encode_int((s32)1), cons);
set_env(env10257, encode_int((s32)2), kont8527);
set_env(env10257, encode_int((s32)3), t8249);


void* oldarg10062 = encode_null();
void* newarg10063 = prim_cons(t8250, oldarg10062);
void* newarg10064 = prim_cons(op, newarg10063);
void* newarg10065 = prim_cons(id8604, newarg10064);

//app-clo
void* cloPtr10642 = get_closure_ptr(map1);
void* procEnv10643 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10642);
function_ptr(procEnv10643, newarg10065);
}

void ptr10254(void* env10255, void* arglst10049)
{
void* cdr = get_env_value(env10255, encode_int((s32)6));
void* lst = get_env_value(env10255, encode_int((s32)5));
void* op = get_env_value(env10255, encode_int((s32)4));
void* cons = get_env_value(env10255, encode_int((s32)3));
void* map1 = get_env_value(env10255, encode_int((s32)2));
void* kont8527 = get_env_value(env10255, encode_int((s32)1));
void* letk8530 = prim_car(arglst10049);
void* arg_lst10050 = prim_cdr(arglst10049);
void* t8249 = prim_car(arg_lst10050);
void* arg_lst10051 = prim_cdr(arg_lst10050);

//creating new closure instance
auto ptr10644 = reinterpret_cast<void (*)(void *, void *)>(&ptr10256);
env10255 = allocate_env_space(encode_int((s32)5));
void* id8603 = make_closure(reinterpret_cast<void *>(ptr10644), env10255);

//setting env list
set_env(env10255, encode_int((s32)1), kont8527);
set_env(env10255, encode_int((s32)2), map1);
set_env(env10255, encode_int((s32)3), cons);
set_env(env10255, encode_int((s32)4), op);
set_env(env10255, encode_int((s32)5), t8249);


void* oldarg10066 = encode_null();
void* newarg10067 = prim_cons(lst, oldarg10066);
void* newarg10068 = prim_cons(id8603, newarg10067);

//app-clo
void* cloPtr10645 = get_closure_ptr(cdr);
void* procEnv10646 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10645);
function_ptr(procEnv10646, newarg10068);
}

void ptr10252(void* env10253, void* arglst10046)
{
void* cdr = get_env_value(env10253, encode_int((s32)6));
void* lst = get_env_value(env10253, encode_int((s32)5));
void* op = get_env_value(env10253, encode_int((s32)4));
void* cons = get_env_value(env10253, encode_int((s32)3));
void* map1 = get_env_value(env10253, encode_int((s32)2));
void* kont8527 = get_env_value(env10253, encode_int((s32)1));
void* letk8529 = prim_car(arglst10046);
void* arg_lst10047 = prim_cdr(arglst10046);
void* t8248 = prim_car(arg_lst10047);
void* arg_lst10048 = prim_cdr(arg_lst10047);

//creating new closure instance
auto ptr10647 = reinterpret_cast<void (*)(void *, void *)>(&ptr10254);
env10253 = allocate_env_space(encode_int((s32)6));
void* id8602 = make_closure(reinterpret_cast<void *>(ptr10647), env10253);

//setting env list
set_env(env10253, encode_int((s32)1), kont8527);
set_env(env10253, encode_int((s32)2), map1);
set_env(env10253, encode_int((s32)3), cons);
set_env(env10253, encode_int((s32)4), op);
set_env(env10253, encode_int((s32)5), lst);
set_env(env10253, encode_int((s32)6), cdr);


void* oldarg10069 = encode_null();
void* newarg10070 = prim_cons(t8248, oldarg10069);
void* newarg10071 = prim_cons(id8602, newarg10070);

//app-clo
void* cloPtr10648 = get_closure_ptr(op);
void* procEnv10649 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10648);
function_ptr(procEnv10649, newarg10071);
}

void ptr10250(void* env10251, void* arglst10040)
{
void* cdr = get_env_value(env10251, encode_int((s32)7));
void* lst = get_env_value(env10251, encode_int((s32)6));
void* op = get_env_value(env10251, encode_int((s32)5));
void* car = get_env_value(env10251, encode_int((s32)4));
void* cons = get_env_value(env10251, encode_int((s32)3));
void* map1 = get_env_value(env10251, encode_int((s32)2));
void* kont8527 = get_env_value(env10251, encode_int((s32)1));
void* letk8528 = prim_car(arglst10040);
void* arg_lst10041 = prim_cdr(arglst10040);
void* t8247 = prim_car(arg_lst10041);
void* arg_lst10042 = prim_cdr(arg_lst10041);

//if-clause
u64 if_guard10650 = reinterpret_cast<u64>(is_true(t8247));
if(if_guard10650 == 1)
{
void* id8599 = encode_null();
void* id8600 = encode_null();
void* oldarg10043 = encode_null();
void* newarg10044 = prim_cons(id8600, oldarg10043);
void* newarg10045 = prim_cons(id8599, newarg10044);

//app-clo
void* cloPtr10651 = get_closure_ptr(kont8527);
void* procEnv10652 = get_env(kont8527);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10651);
function_ptr(procEnv10652, newarg10045);
}
else
{

//creating new closure instance
auto ptr10653 = reinterpret_cast<void (*)(void *, void *)>(&ptr10252);
env10251 = allocate_env_space(encode_int((s32)6));
void* id8601 = make_closure(reinterpret_cast<void *>(ptr10653), env10251);

//setting env list
set_env(env10251, encode_int((s32)1), kont8527);
set_env(env10251, encode_int((s32)2), map1);
set_env(env10251, encode_int((s32)3), cons);
set_env(env10251, encode_int((s32)4), op);
set_env(env10251, encode_int((s32)5), lst);
set_env(env10251, encode_int((s32)6), cdr);


void* oldarg10072 = encode_null();
void* newarg10073 = prim_cons(lst, oldarg10072);
void* newarg10074 = prim_cons(id8601, newarg10073);

//app-clo
void* cloPtr10654 = get_closure_ptr(car);
void* procEnv10655 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10654);
function_ptr(procEnv10655, newarg10074);
}

}

void ptr10248(void* env10249, void* arglst10036)
{
void* cdr = get_env_value(env10249, encode_int((s32)5));
void* null_u63 = get_env_value(env10249, encode_int((s32)4));
void* map1 = get_env_value(env10249, encode_int((s32)3));
void* car = get_env_value(env10249, encode_int((s32)2));
void* cons = get_env_value(env10249, encode_int((s32)1));
void* kont8527 = prim_car(arglst10036);
void* arg_lst10037 = prim_cdr(arglst10036);
void* op = prim_car(arg_lst10037);
void* arg_lst10038 = prim_cdr(arg_lst10037);
void* lst = prim_car(arg_lst10038);
void* arg_lst10039 = prim_cdr(arg_lst10038);

//creating new closure instance
auto ptr10656 = reinterpret_cast<void (*)(void *, void *)>(&ptr10250);
env10249 = allocate_env_space(encode_int((s32)7));
void* id8598 = make_closure(reinterpret_cast<void *>(ptr10656), env10249);

//setting env list
set_env(env10249, encode_int((s32)1), kont8527);
set_env(env10249, encode_int((s32)2), map1);
set_env(env10249, encode_int((s32)3), cons);
set_env(env10249, encode_int((s32)4), car);
set_env(env10249, encode_int((s32)5), op);
set_env(env10249, encode_int((s32)6), lst);
set_env(env10249, encode_int((s32)7), cdr);


void* oldarg10075 = encode_null();
void* newarg10076 = prim_cons(lst, oldarg10075);
void* newarg10077 = prim_cons(id8598, newarg10076);

//app-clo
void* cloPtr10657 = get_closure_ptr(null_u63);
void* procEnv10658 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10657);
function_ptr(procEnv10658, newarg10077);
}

void ptr10246(void* env10247, void* arglst10033)
{
void* cdr = get_env_value(env10247, encode_int((s32)4));
void* null_u63 = get_env_value(env10247, encode_int((s32)3));
void* car = get_env_value(env10247, encode_int((s32)2));
void* cons = get_env_value(env10247, encode_int((s32)1));
void* kont8526 = prim_car(arglst10033);
void* arg_lst10034 = prim_cdr(arglst10033);
void* map1 = prim_car(arg_lst10034);
void* arg_lst10035 = prim_cdr(arg_lst10034);
void* id8596 = encode_null();

//creating new closure instance
auto ptr10659 = reinterpret_cast<void (*)(void *, void *)>(&ptr10248);
env10247 = allocate_env_space(encode_int((s32)5));
void* id8597 = make_closure(reinterpret_cast<void *>(ptr10659), env10247);

//setting env list
set_env(env10247, encode_int((s32)1), cons);
set_env(env10247, encode_int((s32)2), car);
set_env(env10247, encode_int((s32)3), map1);
set_env(env10247, encode_int((s32)4), null_u63);
set_env(env10247, encode_int((s32)5), cdr);


void* oldarg10078 = encode_null();
void* newarg10079 = prim_cons(id8597, oldarg10078);
void* newarg10080 = prim_cons(id8596, newarg10079);

//app-clo
void* cloPtr10660 = get_closure_ptr(kont8526);
void* procEnv10661 = get_env(kont8526);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10660);
function_ptr(procEnv10661, newarg10080);
}

void ptr10290(void* env10291, void* arglst9983)
{
void* kkont8509 = get_env_value(env10291, encode_int((s32)3));
void* t8255 = get_env_value(env10291, encode_int((s32)2));
void* cons = get_env_value(env10291, encode_int((s32)1));
void* letk8523 = prim_car(arglst9983);
void* arg_lst9984 = prim_cdr(arglst9983);
void* t8258 = prim_car(arg_lst9984);
void* arg_lst9985 = prim_cdr(arg_lst9984);
void* oldarg9986 = encode_null();
void* newarg9987 = prim_cons(t8258, oldarg9986);
void* newarg9988 = prim_cons(t8255, newarg9987);
void* newarg9989 = prim_cons(kkont8509, newarg9988);

//app-clo
void* cloPtr10662 = get_closure_ptr(cons);
void* procEnv10663 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10662);
function_ptr(procEnv10663, newarg9989);
}

void ptr10288(void* env10289, void* arglst9980)
{
void* map = get_env_value(env10289, encode_int((s32)4));
void* kkont8509 = get_env_value(env10289, encode_int((s32)3));
void* t8255 = get_env_value(env10289, encode_int((s32)2));
void* cons = get_env_value(env10289, encode_int((s32)1));
void* letk8522 = prim_car(arglst9980);
void* arg_lst9981 = prim_cdr(arglst9980);
void* t8257 = prim_car(arg_lst9981);
void* arg_lst9982 = prim_cdr(arg_lst9981);

//creating new closure instance
auto ptr10664 = reinterpret_cast<void (*)(void *, void *)>(&ptr10290);
env10289 = allocate_env_space(encode_int((s32)3));
void* id8624 = make_closure(reinterpret_cast<void *>(ptr10664), env10289);

//setting env list
set_env(env10289, encode_int((s32)1), cons);
set_env(env10289, encode_int((s32)2), t8255);
set_env(env10289, encode_int((s32)3), kkont8509);


void* lst8524 = prim_cons(id8624, t8257);

//app-clo
void* cloPtr10665 = get_closure_ptr(map);
void* procEnv10666 = get_env(map);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10665);
function_ptr(procEnv10666, lst8524);
}

void ptr10286(void* env10287, void* arglst9977)
{
void* map = get_env_value(env10287, encode_int((s32)5));
void* op = get_env_value(env10287, encode_int((s32)4));
void* kkont8509 = get_env_value(env10287, encode_int((s32)3));
void* t8255 = get_env_value(env10287, encode_int((s32)2));
void* cons = get_env_value(env10287, encode_int((s32)1));
void* letk8521 = prim_car(arglst9977);
void* arg_lst9978 = prim_cdr(arglst9977);
void* t8256 = prim_car(arg_lst9978);
void* arg_lst9979 = prim_cdr(arg_lst9978);

//creating new closure instance
auto ptr10667 = reinterpret_cast<void (*)(void *, void *)>(&ptr10288);
env10287 = allocate_env_space(encode_int((s32)4));
void* id8623 = make_closure(reinterpret_cast<void *>(ptr10667), env10287);

//setting env list
set_env(env10287, encode_int((s32)1), cons);
set_env(env10287, encode_int((s32)2), t8255);
set_env(env10287, encode_int((s32)3), kkont8509);
set_env(env10287, encode_int((s32)4), map);


void* oldarg9990 = encode_null();
void* newarg9991 = prim_cons(t8256, oldarg9990);
void* newarg9992 = prim_cons(op, newarg9991);
void* newarg9993 = prim_cons(id8623, newarg9992);

//app-clo
void* cloPtr10668 = get_closure_ptr(cons);
void* procEnv10669 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10668);
function_ptr(procEnv10669, newarg9993);
}

void ptr10284(void* env10285, void* arglst9974)
{
void* cdr = get_env_value(env10285, encode_int((s32)7));
void* map = get_env_value(env10285, encode_int((s32)6));
void* op = get_env_value(env10285, encode_int((s32)5));
void* combined_lst = get_env_value(env10285, encode_int((s32)4));
void* kkont8509 = get_env_value(env10285, encode_int((s32)3));
void* map1 = get_env_value(env10285, encode_int((s32)2));
void* cons = get_env_value(env10285, encode_int((s32)1));
void* letk8520 = prim_car(arglst9974);
void* arg_lst9975 = prim_cdr(arglst9974);
void* t8255 = prim_car(arg_lst9975);
void* arg_lst9976 = prim_cdr(arg_lst9975);

//creating new closure instance
auto ptr10670 = reinterpret_cast<void (*)(void *, void *)>(&ptr10286);
env10285 = allocate_env_space(encode_int((s32)5));
void* id8622 = make_closure(reinterpret_cast<void *>(ptr10670), env10285);

//setting env list
set_env(env10285, encode_int((s32)1), cons);
set_env(env10285, encode_int((s32)2), t8255);
set_env(env10285, encode_int((s32)3), kkont8509);
set_env(env10285, encode_int((s32)4), op);
set_env(env10285, encode_int((s32)5), map);


void* oldarg9994 = encode_null();
void* newarg9995 = prim_cons(combined_lst, oldarg9994);
void* newarg9996 = prim_cons(cdr, newarg9995);
void* newarg9997 = prim_cons(id8622, newarg9996);

//app-clo
void* cloPtr10671 = get_closure_ptr(map1);
void* procEnv10672 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10671);
function_ptr(procEnv10672, newarg9997);
}

void ptr10282(void* env10283, void* arglst9971)
{
void* cdr = get_env_value(env10283, encode_int((s32)7));
void* map = get_env_value(env10283, encode_int((s32)6));
void* op = get_env_value(env10283, encode_int((s32)5));
void* combined_lst = get_env_value(env10283, encode_int((s32)4));
void* kkont8509 = get_env_value(env10283, encode_int((s32)3));
void* map1 = get_env_value(env10283, encode_int((s32)2));
void* cons = get_env_value(env10283, encode_int((s32)1));
void* letk8519 = prim_car(arglst9971);
void* arg_lst9972 = prim_cdr(arglst9971);
void* t8254 = prim_car(arg_lst9972);
void* arg_lst9973 = prim_cdr(arg_lst9972);

//creating new closure instance
auto ptr10673 = reinterpret_cast<void (*)(void *, void *)>(&ptr10284);
env10283 = allocate_env_space(encode_int((s32)7));
void* id8621 = make_closure(reinterpret_cast<void *>(ptr10673), env10283);

//setting env list
set_env(env10283, encode_int((s32)1), cons);
set_env(env10283, encode_int((s32)2), map1);
set_env(env10283, encode_int((s32)3), kkont8509);
set_env(env10283, encode_int((s32)4), combined_lst);
set_env(env10283, encode_int((s32)5), op);
set_env(env10283, encode_int((s32)6), map);
set_env(env10283, encode_int((s32)7), cdr);


void* lst8525 = prim_cons(id8621, t8254);

//app-clo
void* cloPtr10674 = get_closure_ptr(op);
void* procEnv10675 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10674);
function_ptr(procEnv10675, lst8525);
}

void ptr10280(void* env10281, void* arglst9965)
{
void* cdr = get_env_value(env10281, encode_int((s32)8));
void* map = get_env_value(env10281, encode_int((s32)7));
void* op = get_env_value(env10281, encode_int((s32)6));
void* combined_lst = get_env_value(env10281, encode_int((s32)5));
void* kkont8509 = get_env_value(env10281, encode_int((s32)4));
void* map1 = get_env_value(env10281, encode_int((s32)3));
void* car = get_env_value(env10281, encode_int((s32)2));
void* cons = get_env_value(env10281, encode_int((s32)1));
void* letk8518 = prim_car(arglst9965);
void* arg_lst9966 = prim_cdr(arglst9965);
void* t8253 = prim_car(arg_lst9966);
void* arg_lst9967 = prim_cdr(arg_lst9966);

//if-clause
u64 if_guard10676 = reinterpret_cast<u64>(is_true(t8253));
if(if_guard10676 == 1)
{
void* id8618 = encode_null();
void* id8619 = encode_null();
void* oldarg9968 = encode_null();
void* newarg9969 = prim_cons(id8619, oldarg9968);
void* newarg9970 = prim_cons(id8618, newarg9969);

//app-clo
void* cloPtr10677 = get_closure_ptr(kkont8509);
void* procEnv10678 = get_env(kkont8509);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10677);
function_ptr(procEnv10678, newarg9970);
}
else
{

//creating new closure instance
auto ptr10679 = reinterpret_cast<void (*)(void *, void *)>(&ptr10282);
env10281 = allocate_env_space(encode_int((s32)7));
void* id8620 = make_closure(reinterpret_cast<void *>(ptr10679), env10281);

//setting env list
set_env(env10281, encode_int((s32)1), cons);
set_env(env10281, encode_int((s32)2), map1);
set_env(env10281, encode_int((s32)3), kkont8509);
set_env(env10281, encode_int((s32)4), combined_lst);
set_env(env10281, encode_int((s32)5), op);
set_env(env10281, encode_int((s32)6), map);
set_env(env10281, encode_int((s32)7), cdr);


void* oldarg9998 = encode_null();
void* newarg9999 = prim_cons(combined_lst, oldarg9998);
void* newarg10000 = prim_cons(car, newarg9999);
void* newarg10001 = prim_cons(id8620, newarg10000);

//app-clo
void* cloPtr10680 = get_closure_ptr(map1);
void* procEnv10681 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10680);
function_ptr(procEnv10681, newarg10001);
}

}

void ptr10278(void* env10279, void* arglst9962)
{
void* cdr = get_env_value(env10279, encode_int((s32)9));
void* op = get_env_value(env10279, encode_int((s32)8));
void* combined_lst = get_env_value(env10279, encode_int((s32)7));
void* kkont8509 = get_env_value(env10279, encode_int((s32)6));
void* map1 = get_env_value(env10279, encode_int((s32)5));
void* car = get_env_value(env10279, encode_int((s32)4));
void* cons = get_env_value(env10279, encode_int((s32)3));
void* map = get_env_value(env10279, encode_int((s32)2));
void* null_u63 = get_env_value(env10279, encode_int((s32)1));
void* letk8517 = prim_car(arglst9962);
void* arg_lst9963 = prim_cdr(arglst9962);
void* t8252 = prim_car(arg_lst9963);
void* arg_lst9964 = prim_cdr(arg_lst9963);

//creating new closure instance
auto ptr10682 = reinterpret_cast<void (*)(void *, void *)>(&ptr10280);
env10279 = allocate_env_space(encode_int((s32)8));
void* id8617 = make_closure(reinterpret_cast<void *>(ptr10682), env10279);

//setting env list
set_env(env10279, encode_int((s32)1), cons);
set_env(env10279, encode_int((s32)2), car);
set_env(env10279, encode_int((s32)3), map1);
set_env(env10279, encode_int((s32)4), kkont8509);
set_env(env10279, encode_int((s32)5), combined_lst);
set_env(env10279, encode_int((s32)6), op);
set_env(env10279, encode_int((s32)7), map);
set_env(env10279, encode_int((s32)8), cdr);


void* oldarg10002 = encode_null();
void* newarg10003 = prim_cons(t8252, oldarg10002);
void* newarg10004 = prim_cons(id8617, newarg10003);

//app-clo
void* cloPtr10683 = get_closure_ptr(null_u63);
void* procEnv10684 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10683);
function_ptr(procEnv10684, newarg10004);
}

void ptr10276(void* env10277, void* arglst9959)
{
void* cdr = get_env_value(env10277, encode_int((s32)8));
void* op = get_env_value(env10277, encode_int((s32)7));
void* kkont8509 = get_env_value(env10277, encode_int((s32)6));
void* map1 = get_env_value(env10277, encode_int((s32)5));
void* car = get_env_value(env10277, encode_int((s32)4));
void* cons = get_env_value(env10277, encode_int((s32)3));
void* map = get_env_value(env10277, encode_int((s32)2));
void* null_u63 = get_env_value(env10277, encode_int((s32)1));
void* letk8516 = prim_car(arglst9959);
void* arg_lst9960 = prim_cdr(arglst9959);
void* combined_lst = prim_car(arg_lst9960);
void* arg_lst9961 = prim_cdr(arg_lst9960);

//creating new closure instance
auto ptr10685 = reinterpret_cast<void (*)(void *, void *)>(&ptr10278);
env10277 = allocate_env_space(encode_int((s32)9));
void* id8616 = make_closure(reinterpret_cast<void *>(ptr10685), env10277);

//setting env list
set_env(env10277, encode_int((s32)1), null_u63);
set_env(env10277, encode_int((s32)2), map);
set_env(env10277, encode_int((s32)3), cons);
set_env(env10277, encode_int((s32)4), car);
set_env(env10277, encode_int((s32)5), map1);
set_env(env10277, encode_int((s32)6), kkont8509);
set_env(env10277, encode_int((s32)7), combined_lst);
set_env(env10277, encode_int((s32)8), op);
set_env(env10277, encode_int((s32)9), cdr);


void* oldarg10005 = encode_null();
void* newarg10006 = prim_cons(combined_lst, oldarg10005);
void* newarg10007 = prim_cons(id8616, newarg10006);

//app-clo
void* cloPtr10686 = get_closure_ptr(car);
void* procEnv10687 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10686);
function_ptr(procEnv10687, newarg10007);
}

void ptr10274(void* env10275, void* arglst9956)
{
void* cdr = get_env_value(env10275, encode_int((s32)9));
void* op = get_env_value(env10275, encode_int((s32)8));
void* kkont8509 = get_env_value(env10275, encode_int((s32)7));
void* map1 = get_env_value(env10275, encode_int((s32)6));
void* cons = get_env_value(env10275, encode_int((s32)5));
void* map = get_env_value(env10275, encode_int((s32)4));
void* null_u63 = get_env_value(env10275, encode_int((s32)3));
void* lst1 = get_env_value(env10275, encode_int((s32)2));
void* car = get_env_value(env10275, encode_int((s32)1));
void* letk8515 = prim_car(arglst9956);
void* arg_lst9957 = prim_cdr(arglst9956);
void* list_u45of_u45lists = prim_car(arg_lst9957);
void* arg_lst9958 = prim_cdr(arg_lst9957);

//creating new closure instance
auto ptr10688 = reinterpret_cast<void (*)(void *, void *)>(&ptr10276);
env10275 = allocate_env_space(encode_int((s32)8));
void* id8615 = make_closure(reinterpret_cast<void *>(ptr10688), env10275);

//setting env list
set_env(env10275, encode_int((s32)1), null_u63);
set_env(env10275, encode_int((s32)2), map);
set_env(env10275, encode_int((s32)3), cons);
set_env(env10275, encode_int((s32)4), car);
set_env(env10275, encode_int((s32)5), map1);
set_env(env10275, encode_int((s32)6), kkont8509);
set_env(env10275, encode_int((s32)7), op);
set_env(env10275, encode_int((s32)8), cdr);


void* oldarg10008 = encode_null();
void* newarg10009 = prim_cons(list_u45of_u45lists, oldarg10008);
void* newarg10010 = prim_cons(lst1, newarg10009);
void* newarg10011 = prim_cons(id8615, newarg10010);

//app-clo
void* cloPtr10689 = get_closure_ptr(cons);
void* procEnv10690 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10689);
function_ptr(procEnv10690, newarg10011);
}

void ptr10272(void* env10273, void* arglst9953)
{
void* cdr = get_env_value(env10273, encode_int((s32)9));
void* op = get_env_value(env10273, encode_int((s32)8));
void* kkont8509 = get_env_value(env10273, encode_int((s32)7));
void* map1 = get_env_value(env10273, encode_int((s32)6));
void* cons = get_env_value(env10273, encode_int((s32)5));
void* map = get_env_value(env10273, encode_int((s32)4));
void* null_u63 = get_env_value(env10273, encode_int((s32)3));
void* lst1 = get_env_value(env10273, encode_int((s32)2));
void* car = get_env_value(env10273, encode_int((s32)1));
void* letk8514 = prim_car(arglst9953);
void* arg_lst9954 = prim_cdr(arglst9953);
void* param_lst8233 = prim_car(arg_lst9954);
void* arg_lst9955 = prim_cdr(arg_lst9954);

//creating new closure instance
auto ptr10691 = reinterpret_cast<void (*)(void *, void *)>(&ptr10274);
env10273 = allocate_env_space(encode_int((s32)9));
void* id8613 = make_closure(reinterpret_cast<void *>(ptr10691), env10273);

//setting env list
set_env(env10273, encode_int((s32)1), car);
set_env(env10273, encode_int((s32)2), lst1);
set_env(env10273, encode_int((s32)3), null_u63);
set_env(env10273, encode_int((s32)4), map);
set_env(env10273, encode_int((s32)5), cons);
set_env(env10273, encode_int((s32)6), map1);
set_env(env10273, encode_int((s32)7), kkont8509);
set_env(env10273, encode_int((s32)8), op);
set_env(env10273, encode_int((s32)9), cdr);


void* id8614 = encode_null();
void* oldarg10012 = encode_null();
void* newarg10013 = prim_cons(param_lst8233, oldarg10012);
void* newarg10014 = prim_cons(id8614, newarg10013);

//app-clo
void* cloPtr10692 = get_closure_ptr(id8613);
void* procEnv10693 = get_env(id8613);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10692);
function_ptr(procEnv10693, newarg10014);
}

void ptr10270(void* env10271, void* arglst9950)
{
void* cdr = get_env_value(env10271, encode_int((s32)9));
void* param_lst8233 = get_env_value(env10271, encode_int((s32)8));
void* op = get_env_value(env10271, encode_int((s32)7));
void* kkont8509 = get_env_value(env10271, encode_int((s32)6));
void* map1 = get_env_value(env10271, encode_int((s32)5));
void* car = get_env_value(env10271, encode_int((s32)4));
void* cons = get_env_value(env10271, encode_int((s32)3));
void* map = get_env_value(env10271, encode_int((s32)2));
void* null_u63 = get_env_value(env10271, encode_int((s32)1));
void* letk8513 = prim_car(arglst9950);
void* arg_lst9951 = prim_cdr(arglst9950);
void* lst1 = prim_car(arg_lst9951);
void* arg_lst9952 = prim_cdr(arg_lst9951);

//creating new closure instance
auto ptr10694 = reinterpret_cast<void (*)(void *, void *)>(&ptr10272);
env10271 = allocate_env_space(encode_int((s32)9));
void* id8612 = make_closure(reinterpret_cast<void *>(ptr10694), env10271);

//setting env list
set_env(env10271, encode_int((s32)1), car);
set_env(env10271, encode_int((s32)2), lst1);
set_env(env10271, encode_int((s32)3), null_u63);
set_env(env10271, encode_int((s32)4), map);
set_env(env10271, encode_int((s32)5), cons);
set_env(env10271, encode_int((s32)6), map1);
set_env(env10271, encode_int((s32)7), kkont8509);
set_env(env10271, encode_int((s32)8), op);
set_env(env10271, encode_int((s32)9), cdr);


void* oldarg10015 = encode_null();
void* newarg10016 = prim_cons(param_lst8233, oldarg10015);
void* newarg10017 = prim_cons(id8612, newarg10016);

//app-clo
void* cloPtr10695 = get_closure_ptr(cdr);
void* procEnv10696 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10695);
function_ptr(procEnv10696, newarg10017);
}

void ptr10268(void* env10269, void* arglst9947)
{
void* cdr = get_env_value(env10269, encode_int((s32)8));
void* op = get_env_value(env10269, encode_int((s32)7));
void* kkont8509 = get_env_value(env10269, encode_int((s32)6));
void* map1 = get_env_value(env10269, encode_int((s32)5));
void* car = get_env_value(env10269, encode_int((s32)4));
void* cons = get_env_value(env10269, encode_int((s32)3));
void* map = get_env_value(env10269, encode_int((s32)2));
void* null_u63 = get_env_value(env10269, encode_int((s32)1));
void* letk8512 = prim_car(arglst9947);
void* arg_lst9948 = prim_cdr(arglst9947);
void* param_lst8233 = prim_car(arg_lst9948);
void* arg_lst9949 = prim_cdr(arg_lst9948);

//creating new closure instance
auto ptr10697 = reinterpret_cast<void (*)(void *, void *)>(&ptr10270);
env10269 = allocate_env_space(encode_int((s32)9));
void* id8611 = make_closure(reinterpret_cast<void *>(ptr10697), env10269);

//setting env list
set_env(env10269, encode_int((s32)1), null_u63);
set_env(env10269, encode_int((s32)2), map);
set_env(env10269, encode_int((s32)3), cons);
set_env(env10269, encode_int((s32)4), car);
set_env(env10269, encode_int((s32)5), map1);
set_env(env10269, encode_int((s32)6), kkont8509);
set_env(env10269, encode_int((s32)7), op);
set_env(env10269, encode_int((s32)8), param_lst8233);
set_env(env10269, encode_int((s32)9), cdr);


void* oldarg10018 = encode_null();
void* newarg10019 = prim_cons(param_lst8233, oldarg10018);
void* newarg10020 = prim_cons(id8611, newarg10019);

//app-clo
void* cloPtr10698 = get_closure_ptr(car);
void* procEnv10699 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10698);
function_ptr(procEnv10699, newarg10020);
}

void ptr10266(void* env10267, void* arglst9944)
{
void* cdr = get_env_value(env10267, encode_int((s32)8));
void* param_lst8233 = get_env_value(env10267, encode_int((s32)7));
void* kkont8509 = get_env_value(env10267, encode_int((s32)6));
void* map1 = get_env_value(env10267, encode_int((s32)5));
void* car = get_env_value(env10267, encode_int((s32)4));
void* cons = get_env_value(env10267, encode_int((s32)3));
void* map = get_env_value(env10267, encode_int((s32)2));
void* null_u63 = get_env_value(env10267, encode_int((s32)1));
void* letk8511 = prim_car(arglst9944);
void* arg_lst9945 = prim_cdr(arglst9944);
void* op = prim_car(arg_lst9945);
void* arg_lst9946 = prim_cdr(arg_lst9945);

//creating new closure instance
auto ptr10700 = reinterpret_cast<void (*)(void *, void *)>(&ptr10268);
env10267 = allocate_env_space(encode_int((s32)8));
void* id8610 = make_closure(reinterpret_cast<void *>(ptr10700), env10267);

//setting env list
set_env(env10267, encode_int((s32)1), null_u63);
set_env(env10267, encode_int((s32)2), map);
set_env(env10267, encode_int((s32)3), cons);
set_env(env10267, encode_int((s32)4), car);
set_env(env10267, encode_int((s32)5), map1);
set_env(env10267, encode_int((s32)6), kkont8509);
set_env(env10267, encode_int((s32)7), op);
set_env(env10267, encode_int((s32)8), cdr);


void* oldarg10021 = encode_null();
void* newarg10022 = prim_cons(param_lst8233, oldarg10021);
void* newarg10023 = prim_cons(id8610, newarg10022);

//app-clo
void* cloPtr10701 = get_closure_ptr(cdr);
void* procEnv10702 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10701);
function_ptr(procEnv10702, newarg10023);
}

void ptr10264(void* env10265, void* param_lst82338510)
{
void* cdr = get_env_value(env10265, encode_int((s32)6));
void* map1 = get_env_value(env10265, encode_int((s32)5));
void* car = get_env_value(env10265, encode_int((s32)4));
void* cons = get_env_value(env10265, encode_int((s32)3));
void* map = get_env_value(env10265, encode_int((s32)2));
void* null_u63 = get_env_value(env10265, encode_int((s32)1));
void* kkont8509 = prim_car(param_lst82338510);
void* param_lst8233 = prim_cdr(param_lst82338510);

//creating new closure instance
auto ptr10703 = reinterpret_cast<void (*)(void *, void *)>(&ptr10266);
env10265 = allocate_env_space(encode_int((s32)8));
void* id8609 = make_closure(reinterpret_cast<void *>(ptr10703), env10265);

//setting env list
set_env(env10265, encode_int((s32)1), null_u63);
set_env(env10265, encode_int((s32)2), map);
set_env(env10265, encode_int((s32)3), cons);
set_env(env10265, encode_int((s32)4), car);
set_env(env10265, encode_int((s32)5), map1);
set_env(env10265, encode_int((s32)6), kkont8509);
set_env(env10265, encode_int((s32)7), param_lst8233);
set_env(env10265, encode_int((s32)8), cdr);


void* oldarg10024 = encode_null();
void* newarg10025 = prim_cons(param_lst8233, oldarg10024);
void* newarg10026 = prim_cons(id8609, newarg10025);

//app-clo
void* cloPtr10704 = get_closure_ptr(car);
void* procEnv10705 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10704);
function_ptr(procEnv10705, newarg10026);
}

void ptr10262(void* env10263, void* arglst9941)
{
void* cdr = get_env_value(env10263, encode_int((s32)5));
void* null_u63 = get_env_value(env10263, encode_int((s32)4));
void* map1 = get_env_value(env10263, encode_int((s32)3));
void* car = get_env_value(env10263, encode_int((s32)2));
void* cons = get_env_value(env10263, encode_int((s32)1));
void* kont8508 = prim_car(arglst9941);
void* arg_lst9942 = prim_cdr(arglst9941);
void* map = prim_car(arg_lst9942);
void* arg_lst9943 = prim_cdr(arg_lst9942);
void* id8607 = encode_null();

//creating new closure instance
auto ptr10706 = reinterpret_cast<void (*)(void *, void *)>(&ptr10264);
env10263 = allocate_env_space(encode_int((s32)6));
void* id8608 = make_closure(reinterpret_cast<void *>(ptr10706), env10263);

//setting env list
set_env(env10263, encode_int((s32)1), null_u63);
set_env(env10263, encode_int((s32)2), map);
set_env(env10263, encode_int((s32)3), cons);
set_env(env10263, encode_int((s32)4), car);
set_env(env10263, encode_int((s32)5), map1);
set_env(env10263, encode_int((s32)6), cdr);


void* oldarg10027 = encode_null();
void* newarg10028 = prim_cons(id8608, oldarg10027);
void* newarg10029 = prim_cons(id8607, newarg10028);

//app-clo
void* cloPtr10707 = get_closure_ptr(kont8508);
void* procEnv10708 = get_env(kont8508);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10707);
function_ptr(procEnv10708, newarg10029);
}

void ptr10320(void* env10321, void* arglst9716)
{
void* op = get_env_value(env10321, encode_int((s32)2));
void* kont8491 = get_env_value(env10321, encode_int((s32)1));
void* letk8496 = prim_car(arglst9716);
void* arg_lst9717 = prim_cdr(arglst9716);
void* t8264 = prim_car(arg_lst9717);
void* arg_lst9718 = prim_cdr(arg_lst9717);
void* lst8497 = prim_cons(kont8491, t8264);

//app-clo
void* cloPtr10709 = get_closure_ptr(op);
void* procEnv10710 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10709);
function_ptr(procEnv10710, lst8497);
}

void ptr10330(void* env10331, void* arglst9735)
{
void* op = get_env_value(env10331, encode_int((s32)2));
void* kont8491 = get_env_value(env10331, encode_int((s32)1));
void* letk8502 = prim_car(arglst9735);
void* arg_lst9736 = prim_cdr(arglst9735);
void* t8269 = prim_car(arg_lst9736);
void* arg_lst9737 = prim_cdr(arg_lst9736);
void* lst8503 = prim_cons(kont8491, t8269);

//app-clo
void* cloPtr10711 = get_closure_ptr(op);
void* procEnv10712 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10711);
function_ptr(procEnv10712, lst8503);
}

void ptr10332(void* env10333, void* arglst9742)
{
void* loop = get_env_value(env10333, encode_int((s32)2));
void* kont8491 = get_env_value(env10333, encode_int((s32)1));
void* letk8504 = prim_car(arglst9742);
void* arg_lst9743 = prim_cdr(arglst9742);
void* t8270 = prim_car(arg_lst9743);
void* arg_lst9744 = prim_cdr(arg_lst9743);
void* oldarg9745 = encode_null();
void* newarg9746 = prim_cons(t8270, oldarg9745);
void* newarg9747 = prim_cons(kont8491, newarg9746);

//app-clo
void* cloPtr10713 = get_closure_ptr(loop);
void* procEnv10714 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10713);
function_ptr(procEnv10714, newarg9747);
}

void ptr10328(void* env10329, void* arglst9732)
{
void* lst = get_env_value(env10329, encode_int((s32)7));
void* op = get_env_value(env10329, encode_int((s32)6));
void* kont8491 = get_env_value(env10329, encode_int((s32)5));
void* map1 = get_env_value(env10329, encode_int((s32)4));
void* car = get_env_value(env10329, encode_int((s32)3));
void* loop = get_env_value(env10329, encode_int((s32)2));
void* cdr = get_env_value(env10329, encode_int((s32)1));
void* letk8501 = prim_car(arglst9732);
void* arg_lst9733 = prim_cdr(arglst9732);
void* t8268 = prim_car(arg_lst9733);
void* arg_lst9734 = prim_cdr(arg_lst9733);

//if-clause
u64 if_guard10715 = reinterpret_cast<u64>(is_true(t8268));
if(if_guard10715 == 1)
{

//creating new closure instance
auto ptr10716 = reinterpret_cast<void (*)(void *, void *)>(&ptr10330);
env10329 = allocate_env_space(encode_int((s32)2));
void* id8654 = make_closure(reinterpret_cast<void *>(ptr10716), env10329);

//setting env list
set_env(env10329, encode_int((s32)1), kont8491);
set_env(env10329, encode_int((s32)2), op);


void* oldarg9738 = encode_null();
void* newarg9739 = prim_cons(lst, oldarg9738);
void* newarg9740 = prim_cons(car, newarg9739);
void* newarg9741 = prim_cons(id8654, newarg9740);

//app-clo
void* cloPtr10717 = get_closure_ptr(map1);
void* procEnv10718 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10717);
function_ptr(procEnv10718, newarg9741);
}
else
{

//creating new closure instance
auto ptr10719 = reinterpret_cast<void (*)(void *, void *)>(&ptr10332);
env10329 = allocate_env_space(encode_int((s32)2));
void* id8655 = make_closure(reinterpret_cast<void *>(ptr10719), env10329);

//setting env list
set_env(env10329, encode_int((s32)1), kont8491);
set_env(env10329, encode_int((s32)2), loop);


void* oldarg9748 = encode_null();
void* newarg9749 = prim_cons(lst, oldarg9748);
void* newarg9750 = prim_cons(cdr, newarg9749);
void* newarg9751 = prim_cons(id8655, newarg9750);

//app-clo
void* cloPtr10720 = get_closure_ptr(map1);
void* procEnv10721 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10720);
function_ptr(procEnv10721, newarg9751);
}

}

void ptr10326(void* env10327, void* arglst9729)
{
void* lst = get_env_value(env10327, encode_int((s32)8));
void* op = get_env_value(env10327, encode_int((s32)7));
void* map1 = get_env_value(env10327, encode_int((s32)6));
void* car = get_env_value(env10327, encode_int((s32)5));
void* loop = get_env_value(env10327, encode_int((s32)4));
void* cdr = get_env_value(env10327, encode_int((s32)3));
void* kont8491 = get_env_value(env10327, encode_int((s32)2));
void* equal_u63 = get_env_value(env10327, encode_int((s32)1));
void* letk8500 = prim_car(arglst9729);
void* arg_lst9730 = prim_cdr(arglst9729);
void* t8267 = prim_car(arg_lst9730);
void* arg_lst9731 = prim_cdr(arg_lst9730);

//creating new closure instance
auto ptr10722 = reinterpret_cast<void (*)(void *, void *)>(&ptr10328);
env10327 = allocate_env_space(encode_int((s32)7));
void* id8652 = make_closure(reinterpret_cast<void *>(ptr10722), env10327);

//setting env list
set_env(env10327, encode_int((s32)1), cdr);
set_env(env10327, encode_int((s32)2), loop);
set_env(env10327, encode_int((s32)3), car);
set_env(env10327, encode_int((s32)4), map1);
set_env(env10327, encode_int((s32)5), kont8491);
set_env(env10327, encode_int((s32)6), op);
set_env(env10327, encode_int((s32)7), lst);


void* id8653 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9752 = encode_null();
void* newarg9753 = prim_cons(t8267, oldarg9752);
void* newarg9754 = prim_cons(id8653, newarg9753);
void* newarg9755 = prim_cons(id8652, newarg9754);

//app-clo
void* cloPtr10723 = get_closure_ptr(equal_u63);
void* procEnv10724 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10723);
function_ptr(procEnv10724, newarg9755);
}

void ptr10338(void* env10339, void* arglst9765)
{
void* op = get_env_value(env10339, encode_int((s32)2));
void* kont8491 = get_env_value(env10339, encode_int((s32)1));
void* letk8502 = prim_car(arglst9765);
void* arg_lst9766 = prim_cdr(arglst9765);
void* t8269 = prim_car(arg_lst9766);
void* arg_lst9767 = prim_cdr(arg_lst9766);
void* lst8503 = prim_cons(kont8491, t8269);

//app-clo
void* cloPtr10725 = get_closure_ptr(op);
void* procEnv10726 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10725);
function_ptr(procEnv10726, lst8503);
}

void ptr10340(void* env10341, void* arglst9772)
{
void* loop = get_env_value(env10341, encode_int((s32)2));
void* kont8491 = get_env_value(env10341, encode_int((s32)1));
void* letk8504 = prim_car(arglst9772);
void* arg_lst9773 = prim_cdr(arglst9772);
void* t8270 = prim_car(arg_lst9773);
void* arg_lst9774 = prim_cdr(arg_lst9773);
void* oldarg9775 = encode_null();
void* newarg9776 = prim_cons(t8270, oldarg9775);
void* newarg9777 = prim_cons(kont8491, newarg9776);

//app-clo
void* cloPtr10727 = get_closure_ptr(loop);
void* procEnv10728 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10727);
function_ptr(procEnv10728, newarg9777);
}

void ptr10336(void* env10337, void* arglst9762)
{
void* lst = get_env_value(env10337, encode_int((s32)7));
void* op = get_env_value(env10337, encode_int((s32)6));
void* kont8491 = get_env_value(env10337, encode_int((s32)5));
void* map1 = get_env_value(env10337, encode_int((s32)4));
void* car = get_env_value(env10337, encode_int((s32)3));
void* loop = get_env_value(env10337, encode_int((s32)2));
void* cdr = get_env_value(env10337, encode_int((s32)1));
void* letk8501 = prim_car(arglst9762);
void* arg_lst9763 = prim_cdr(arglst9762);
void* t8268 = prim_car(arg_lst9763);
void* arg_lst9764 = prim_cdr(arg_lst9763);

//if-clause
u64 if_guard10729 = reinterpret_cast<u64>(is_true(t8268));
if(if_guard10729 == 1)
{

//creating new closure instance
auto ptr10730 = reinterpret_cast<void (*)(void *, void *)>(&ptr10338);
env10337 = allocate_env_space(encode_int((s32)2));
void* id8661 = make_closure(reinterpret_cast<void *>(ptr10730), env10337);

//setting env list
set_env(env10337, encode_int((s32)1), kont8491);
set_env(env10337, encode_int((s32)2), op);


void* oldarg9768 = encode_null();
void* newarg9769 = prim_cons(lst, oldarg9768);
void* newarg9770 = prim_cons(car, newarg9769);
void* newarg9771 = prim_cons(id8661, newarg9770);

//app-clo
void* cloPtr10731 = get_closure_ptr(map1);
void* procEnv10732 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10731);
function_ptr(procEnv10732, newarg9771);
}
else
{

//creating new closure instance
auto ptr10733 = reinterpret_cast<void (*)(void *, void *)>(&ptr10340);
env10337 = allocate_env_space(encode_int((s32)2));
void* id8662 = make_closure(reinterpret_cast<void *>(ptr10733), env10337);

//setting env list
set_env(env10337, encode_int((s32)1), kont8491);
set_env(env10337, encode_int((s32)2), loop);


void* oldarg9778 = encode_null();
void* newarg9779 = prim_cons(lst, oldarg9778);
void* newarg9780 = prim_cons(cdr, newarg9779);
void* newarg9781 = prim_cons(id8662, newarg9780);

//app-clo
void* cloPtr10734 = get_closure_ptr(map1);
void* procEnv10735 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10734);
function_ptr(procEnv10735, newarg9781);
}

}

void ptr10334(void* env10335, void* arglst9759)
{
void* lst = get_env_value(env10335, encode_int((s32)8));
void* op = get_env_value(env10335, encode_int((s32)7));
void* map1 = get_env_value(env10335, encode_int((s32)6));
void* car = get_env_value(env10335, encode_int((s32)5));
void* loop = get_env_value(env10335, encode_int((s32)4));
void* cdr = get_env_value(env10335, encode_int((s32)3));
void* kont8491 = get_env_value(env10335, encode_int((s32)2));
void* equal_u63 = get_env_value(env10335, encode_int((s32)1));
void* letk8500 = prim_car(arglst9759);
void* arg_lst9760 = prim_cdr(arglst9759);
void* t8267 = prim_car(arg_lst9760);
void* arg_lst9761 = prim_cdr(arg_lst9760);

//creating new closure instance
auto ptr10736 = reinterpret_cast<void (*)(void *, void *)>(&ptr10336);
env10335 = allocate_env_space(encode_int((s32)7));
void* id8659 = make_closure(reinterpret_cast<void *>(ptr10736), env10335);

//setting env list
set_env(env10335, encode_int((s32)1), cdr);
set_env(env10335, encode_int((s32)2), loop);
set_env(env10335, encode_int((s32)3), car);
set_env(env10335, encode_int((s32)4), map1);
set_env(env10335, encode_int((s32)5), kont8491);
set_env(env10335, encode_int((s32)6), op);
set_env(env10335, encode_int((s32)7), lst);


void* id8660 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9782 = encode_null();
void* newarg9783 = prim_cons(t8267, oldarg9782);
void* newarg9784 = prim_cons(id8660, newarg9783);
void* newarg9785 = prim_cons(id8659, newarg9784);

//app-clo
void* cloPtr10737 = get_closure_ptr(equal_u63);
void* procEnv10738 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10737);
function_ptr(procEnv10738, newarg9785);
}

void ptr10324(void* env10325, void* arglst9726)
{
void* lst = get_env_value(env10325, encode_int((s32)8));
void* op = get_env_value(env10325, encode_int((s32)7));
void* map1 = get_env_value(env10325, encode_int((s32)6));
void* car = get_env_value(env10325, encode_int((s32)5));
void* loop = get_env_value(env10325, encode_int((s32)4));
void* cdr = get_env_value(env10325, encode_int((s32)3));
void* kont8491 = get_env_value(env10325, encode_int((s32)2));
void* equal_u63 = get_env_value(env10325, encode_int((s32)1));
void* letk8499 = prim_car(arglst9726);
void* arg_lst9727 = prim_cdr(arglst9726);
void* t8266 = prim_car(arg_lst9727);
void* arg_lst9728 = prim_cdr(arg_lst9727);

//if-clause
u64 if_guard10739 = reinterpret_cast<u64>(is_true(t8266));
if(if_guard10739 == 1)
{

//creating new closure instance
auto ptr10740 = reinterpret_cast<void (*)(void *, void *)>(&ptr10326);
env10325 = allocate_env_space(encode_int((s32)8));
void* id8649 = make_closure(reinterpret_cast<void *>(ptr10740), env10325);

//setting env list
set_env(env10325, encode_int((s32)1), equal_u63);
set_env(env10325, encode_int((s32)2), kont8491);
set_env(env10325, encode_int((s32)3), cdr);
set_env(env10325, encode_int((s32)4), loop);
set_env(env10325, encode_int((s32)5), car);
set_env(env10325, encode_int((s32)6), map1);
set_env(env10325, encode_int((s32)7), op);
set_env(env10325, encode_int((s32)8), lst);


void* id8650 = encode_null();
void* id8651 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9756 = encode_null();
void* newarg9757 = prim_cons(id8651, oldarg9756);
void* newarg9758 = prim_cons(id8650, newarg9757);

//app-clo
void* cloPtr10741 = get_closure_ptr(id8649);
void* procEnv10742 = get_env(id8649);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10741);
function_ptr(procEnv10742, newarg9758);
}
else
{

//creating new closure instance
auto ptr10743 = reinterpret_cast<void (*)(void *, void *)>(&ptr10334);
env10325 = allocate_env_space(encode_int((s32)8));
void* id8656 = make_closure(reinterpret_cast<void *>(ptr10743), env10325);

//setting env list
set_env(env10325, encode_int((s32)1), equal_u63);
set_env(env10325, encode_int((s32)2), kont8491);
set_env(env10325, encode_int((s32)3), cdr);
set_env(env10325, encode_int((s32)4), loop);
set_env(env10325, encode_int((s32)5), car);
set_env(env10325, encode_int((s32)6), map1);
set_env(env10325, encode_int((s32)7), op);
set_env(env10325, encode_int((s32)8), lst);


void* id8657 = encode_null();
void* id8658 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9786 = encode_null();
void* newarg9787 = prim_cons(id8658, oldarg9786);
void* newarg9788 = prim_cons(id8657, newarg9787);

//app-clo
void* cloPtr10744 = get_closure_ptr(id8656);
void* procEnv10745 = get_env(id8656);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10744);
function_ptr(procEnv10745, newarg9788);
}

}

void ptr10322(void* env10323, void* arglst9723)
{
void* lst = get_env_value(env10323, encode_int((s32)8));
void* op = get_env_value(env10323, encode_int((s32)7));
void* map1 = get_env_value(env10323, encode_int((s32)6));
void* car = get_env_value(env10323, encode_int((s32)5));
void* loop = get_env_value(env10323, encode_int((s32)4));
void* cdr = get_env_value(env10323, encode_int((s32)3));
void* kont8491 = get_env_value(env10323, encode_int((s32)2));
void* equal_u63 = get_env_value(env10323, encode_int((s32)1));
void* letk8498 = prim_car(arglst9723);
void* arg_lst9724 = prim_cdr(arglst9723);
void* t8265 = prim_car(arg_lst9724);
void* arg_lst9725 = prim_cdr(arg_lst9724);

//creating new closure instance
auto ptr10746 = reinterpret_cast<void (*)(void *, void *)>(&ptr10324);
env10323 = allocate_env_space(encode_int((s32)8));
void* id8648 = make_closure(reinterpret_cast<void *>(ptr10746), env10323);

//setting env list
set_env(env10323, encode_int((s32)1), equal_u63);
set_env(env10323, encode_int((s32)2), kont8491);
set_env(env10323, encode_int((s32)3), cdr);
set_env(env10323, encode_int((s32)4), loop);
set_env(env10323, encode_int((s32)5), car);
set_env(env10323, encode_int((s32)6), map1);
set_env(env10323, encode_int((s32)7), op);
set_env(env10323, encode_int((s32)8), lst);


void* lst8505 = prim_cons(id8648, t8265);

//app-clo
void* cloPtr10747 = get_closure_ptr(op);
void* procEnv10748 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10747);
function_ptr(procEnv10748, lst8505);
}

void ptr10318(void* env10319, void* arglst9713)
{
void* lst = get_env_value(env10319, encode_int((s32)8));
void* op = get_env_value(env10319, encode_int((s32)7));
void* map1 = get_env_value(env10319, encode_int((s32)6));
void* car = get_env_value(env10319, encode_int((s32)5));
void* loop = get_env_value(env10319, encode_int((s32)4));
void* cdr = get_env_value(env10319, encode_int((s32)3));
void* kont8491 = get_env_value(env10319, encode_int((s32)2));
void* equal_u63 = get_env_value(env10319, encode_int((s32)1));
void* letk8495 = prim_car(arglst9713);
void* arg_lst9714 = prim_cdr(arglst9713);
void* t8263 = prim_car(arg_lst9714);
void* arg_lst9715 = prim_cdr(arg_lst9714);

//if-clause
u64 if_guard10749 = reinterpret_cast<u64>(is_true(t8263));
if(if_guard10749 == 1)
{

//creating new closure instance
auto ptr10750 = reinterpret_cast<void (*)(void *, void *)>(&ptr10320);
env10319 = allocate_env_space(encode_int((s32)2));
void* id8646 = make_closure(reinterpret_cast<void *>(ptr10750), env10319);

//setting env list
set_env(env10319, encode_int((s32)1), kont8491);
set_env(env10319, encode_int((s32)2), op);


void* oldarg9719 = encode_null();
void* newarg9720 = prim_cons(lst, oldarg9719);
void* newarg9721 = prim_cons(car, newarg9720);
void* newarg9722 = prim_cons(id8646, newarg9721);

//app-clo
void* cloPtr10751 = get_closure_ptr(map1);
void* procEnv10752 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10751);
function_ptr(procEnv10752, newarg9722);
}
else
{

//creating new closure instance
auto ptr10753 = reinterpret_cast<void (*)(void *, void *)>(&ptr10322);
env10319 = allocate_env_space(encode_int((s32)8));
void* id8647 = make_closure(reinterpret_cast<void *>(ptr10753), env10319);

//setting env list
set_env(env10319, encode_int((s32)1), equal_u63);
set_env(env10319, encode_int((s32)2), kont8491);
set_env(env10319, encode_int((s32)3), cdr);
set_env(env10319, encode_int((s32)4), loop);
set_env(env10319, encode_int((s32)5), car);
set_env(env10319, encode_int((s32)6), map1);
set_env(env10319, encode_int((s32)7), op);
set_env(env10319, encode_int((s32)8), lst);


void* oldarg9789 = encode_null();
void* newarg9790 = prim_cons(lst, oldarg9789);
void* newarg9791 = prim_cons(car, newarg9790);
void* newarg9792 = prim_cons(id8647, newarg9791);

//app-clo
void* cloPtr10754 = get_closure_ptr(map1);
void* procEnv10755 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10754);
function_ptr(procEnv10755, newarg9792);
}

}

void ptr10316(void* env10317, void* arglst9710)
{
void* lst = get_env_value(env10317, encode_int((s32)9));
void* op = get_env_value(env10317, encode_int((s32)8));
void* map1 = get_env_value(env10317, encode_int((s32)7));
void* car = get_env_value(env10317, encode_int((s32)6));
void* _u61 = get_env_value(env10317, encode_int((s32)5));
void* loop = get_env_value(env10317, encode_int((s32)4));
void* cdr = get_env_value(env10317, encode_int((s32)3));
void* kont8491 = get_env_value(env10317, encode_int((s32)2));
void* equal_u63 = get_env_value(env10317, encode_int((s32)1));
void* letk8494 = prim_car(arglst9710);
void* arg_lst9711 = prim_cdr(arglst9710);
void* t8262 = prim_car(arg_lst9711);
void* arg_lst9712 = prim_cdr(arg_lst9711);

//creating new closure instance
auto ptr10756 = reinterpret_cast<void (*)(void *, void *)>(&ptr10318);
env10317 = allocate_env_space(encode_int((s32)8));
void* id8644 = make_closure(reinterpret_cast<void *>(ptr10756), env10317);

//setting env list
set_env(env10317, encode_int((s32)1), equal_u63);
set_env(env10317, encode_int((s32)2), kont8491);
set_env(env10317, encode_int((s32)3), cdr);
set_env(env10317, encode_int((s32)4), loop);
set_env(env10317, encode_int((s32)5), car);
set_env(env10317, encode_int((s32)6), map1);
set_env(env10317, encode_int((s32)7), op);
set_env(env10317, encode_int((s32)8), lst);


void* id8645 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9793 = encode_null();
void* newarg9794 = prim_cons(t8262, oldarg9793);
void* newarg9795 = prim_cons(id8645, newarg9794);
void* newarg9796 = prim_cons(id8644, newarg9795);

//app-clo
void* cloPtr10757 = get_closure_ptr(_u61);
void* procEnv10758 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10757);
function_ptr(procEnv10758, newarg9796);
}

void ptr10314(void* env10315, void* arglst9707)
{
void* lst = get_env_value(env10315, encode_int((s32)10));
void* length = get_env_value(env10315, encode_int((s32)9));
void* op = get_env_value(env10315, encode_int((s32)8));
void* map1 = get_env_value(env10315, encode_int((s32)7));
void* car = get_env_value(env10315, encode_int((s32)6));
void* _u61 = get_env_value(env10315, encode_int((s32)5));
void* loop = get_env_value(env10315, encode_int((s32)4));
void* cdr = get_env_value(env10315, encode_int((s32)3));
void* kont8491 = get_env_value(env10315, encode_int((s32)2));
void* equal_u63 = get_env_value(env10315, encode_int((s32)1));
void* letk8493 = prim_car(arglst9707);
void* arg_lst9708 = prim_cdr(arglst9707);
void* t8261 = prim_car(arg_lst9708);
void* arg_lst9709 = prim_cdr(arg_lst9708);

//creating new closure instance
auto ptr10759 = reinterpret_cast<void (*)(void *, void *)>(&ptr10316);
env10315 = allocate_env_space(encode_int((s32)9));
void* id8643 = make_closure(reinterpret_cast<void *>(ptr10759), env10315);

//setting env list
set_env(env10315, encode_int((s32)1), equal_u63);
set_env(env10315, encode_int((s32)2), kont8491);
set_env(env10315, encode_int((s32)3), cdr);
set_env(env10315, encode_int((s32)4), loop);
set_env(env10315, encode_int((s32)5), _u61);
set_env(env10315, encode_int((s32)6), car);
set_env(env10315, encode_int((s32)7), map1);
set_env(env10315, encode_int((s32)8), op);
set_env(env10315, encode_int((s32)9), lst);


void* oldarg9797 = encode_null();
void* newarg9798 = prim_cons(t8261, oldarg9797);
void* newarg9799 = prim_cons(id8643, newarg9798);

//app-clo
void* cloPtr10760 = get_closure_ptr(length);
void* procEnv10761 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10760);
function_ptr(procEnv10761, newarg9799);
}

void ptr10312(void* env10313, void* arglst9701)
{
void* lst = get_env_value(env10313, encode_int((s32)11));
void* length = get_env_value(env10313, encode_int((s32)10));
void* op = get_env_value(env10313, encode_int((s32)9));
void* map1 = get_env_value(env10313, encode_int((s32)8));
void* car = get_env_value(env10313, encode_int((s32)7));
void* loop = get_env_value(env10313, encode_int((s32)6));
void* cdr = get_env_value(env10313, encode_int((s32)5));
void* kont8491 = get_env_value(env10313, encode_int((s32)4));
void* equal_u63 = get_env_value(env10313, encode_int((s32)3));
void* cdar = get_env_value(env10313, encode_int((s32)2));
void* _u61 = get_env_value(env10313, encode_int((s32)1));
void* letk8492 = prim_car(arglst9701);
void* arg_lst9702 = prim_cdr(arglst9701);
void* t8260 = prim_car(arg_lst9702);
void* arg_lst9703 = prim_cdr(arg_lst9702);

//if-clause
u64 if_guard10762 = reinterpret_cast<u64>(is_true(t8260));
if(if_guard10762 == 1)
{
void* id8640 = encode_null();
void* id8641 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9704 = encode_null();
void* newarg9705 = prim_cons(id8641, oldarg9704);
void* newarg9706 = prim_cons(id8640, newarg9705);

//app-clo
void* cloPtr10763 = get_closure_ptr(kont8491);
void* procEnv10764 = get_env(kont8491);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10763);
function_ptr(procEnv10764, newarg9706);
}
else
{

//creating new closure instance
auto ptr10765 = reinterpret_cast<void (*)(void *, void *)>(&ptr10314);
env10313 = allocate_env_space(encode_int((s32)10));
void* id8642 = make_closure(reinterpret_cast<void *>(ptr10765), env10313);

//setting env list
set_env(env10313, encode_int((s32)1), equal_u63);
set_env(env10313, encode_int((s32)2), kont8491);
set_env(env10313, encode_int((s32)3), cdr);
set_env(env10313, encode_int((s32)4), loop);
set_env(env10313, encode_int((s32)5), _u61);
set_env(env10313, encode_int((s32)6), car);
set_env(env10313, encode_int((s32)7), map1);
set_env(env10313, encode_int((s32)8), op);
set_env(env10313, encode_int((s32)9), length);
set_env(env10313, encode_int((s32)10), lst);


void* oldarg9800 = encode_null();
void* newarg9801 = prim_cons(lst, oldarg9800);
void* newarg9802 = prim_cons(id8642, newarg9801);

//app-clo
void* cloPtr10766 = get_closure_ptr(cdar);
void* procEnv10767 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10766);
function_ptr(procEnv10767, newarg9802);
}

}

void ptr10352(void* env10353, void* arglst9824)
{
void* op = get_env_value(env10353, encode_int((s32)2));
void* kont8491 = get_env_value(env10353, encode_int((s32)1));
void* letk8496 = prim_car(arglst9824);
void* arg_lst9825 = prim_cdr(arglst9824);
void* t8264 = prim_car(arg_lst9825);
void* arg_lst9826 = prim_cdr(arg_lst9825);
void* lst8497 = prim_cons(kont8491, t8264);

//app-clo
void* cloPtr10768 = get_closure_ptr(op);
void* procEnv10769 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10768);
function_ptr(procEnv10769, lst8497);
}

void ptr10362(void* env10363, void* arglst9843)
{
void* op = get_env_value(env10363, encode_int((s32)2));
void* kont8491 = get_env_value(env10363, encode_int((s32)1));
void* letk8502 = prim_car(arglst9843);
void* arg_lst9844 = prim_cdr(arglst9843);
void* t8269 = prim_car(arg_lst9844);
void* arg_lst9845 = prim_cdr(arg_lst9844);
void* lst8503 = prim_cons(kont8491, t8269);

//app-clo
void* cloPtr10770 = get_closure_ptr(op);
void* procEnv10771 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10770);
function_ptr(procEnv10771, lst8503);
}

void ptr10364(void* env10365, void* arglst9850)
{
void* loop = get_env_value(env10365, encode_int((s32)2));
void* kont8491 = get_env_value(env10365, encode_int((s32)1));
void* letk8504 = prim_car(arglst9850);
void* arg_lst9851 = prim_cdr(arglst9850);
void* t8270 = prim_car(arg_lst9851);
void* arg_lst9852 = prim_cdr(arg_lst9851);
void* oldarg9853 = encode_null();
void* newarg9854 = prim_cons(t8270, oldarg9853);
void* newarg9855 = prim_cons(kont8491, newarg9854);

//app-clo
void* cloPtr10772 = get_closure_ptr(loop);
void* procEnv10773 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10772);
function_ptr(procEnv10773, newarg9855);
}

void ptr10360(void* env10361, void* arglst9840)
{
void* lst = get_env_value(env10361, encode_int((s32)7));
void* op = get_env_value(env10361, encode_int((s32)6));
void* kont8491 = get_env_value(env10361, encode_int((s32)5));
void* map1 = get_env_value(env10361, encode_int((s32)4));
void* car = get_env_value(env10361, encode_int((s32)3));
void* loop = get_env_value(env10361, encode_int((s32)2));
void* cdr = get_env_value(env10361, encode_int((s32)1));
void* letk8501 = prim_car(arglst9840);
void* arg_lst9841 = prim_cdr(arglst9840);
void* t8268 = prim_car(arg_lst9841);
void* arg_lst9842 = prim_cdr(arg_lst9841);

//if-clause
u64 if_guard10774 = reinterpret_cast<u64>(is_true(t8268));
if(if_guard10774 == 1)
{

//creating new closure instance
auto ptr10775 = reinterpret_cast<void (*)(void *, void *)>(&ptr10362);
env10361 = allocate_env_space(encode_int((s32)2));
void* id8679 = make_closure(reinterpret_cast<void *>(ptr10775), env10361);

//setting env list
set_env(env10361, encode_int((s32)1), kont8491);
set_env(env10361, encode_int((s32)2), op);


void* oldarg9846 = encode_null();
void* newarg9847 = prim_cons(lst, oldarg9846);
void* newarg9848 = prim_cons(car, newarg9847);
void* newarg9849 = prim_cons(id8679, newarg9848);

//app-clo
void* cloPtr10776 = get_closure_ptr(map1);
void* procEnv10777 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10776);
function_ptr(procEnv10777, newarg9849);
}
else
{

//creating new closure instance
auto ptr10778 = reinterpret_cast<void (*)(void *, void *)>(&ptr10364);
env10361 = allocate_env_space(encode_int((s32)2));
void* id8680 = make_closure(reinterpret_cast<void *>(ptr10778), env10361);

//setting env list
set_env(env10361, encode_int((s32)1), kont8491);
set_env(env10361, encode_int((s32)2), loop);


void* oldarg9856 = encode_null();
void* newarg9857 = prim_cons(lst, oldarg9856);
void* newarg9858 = prim_cons(cdr, newarg9857);
void* newarg9859 = prim_cons(id8680, newarg9858);

//app-clo
void* cloPtr10779 = get_closure_ptr(map1);
void* procEnv10780 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10779);
function_ptr(procEnv10780, newarg9859);
}

}

void ptr10358(void* env10359, void* arglst9837)
{
void* lst = get_env_value(env10359, encode_int((s32)8));
void* op = get_env_value(env10359, encode_int((s32)7));
void* map1 = get_env_value(env10359, encode_int((s32)6));
void* car = get_env_value(env10359, encode_int((s32)5));
void* loop = get_env_value(env10359, encode_int((s32)4));
void* cdr = get_env_value(env10359, encode_int((s32)3));
void* kont8491 = get_env_value(env10359, encode_int((s32)2));
void* equal_u63 = get_env_value(env10359, encode_int((s32)1));
void* letk8500 = prim_car(arglst9837);
void* arg_lst9838 = prim_cdr(arglst9837);
void* t8267 = prim_car(arg_lst9838);
void* arg_lst9839 = prim_cdr(arg_lst9838);

//creating new closure instance
auto ptr10781 = reinterpret_cast<void (*)(void *, void *)>(&ptr10360);
env10359 = allocate_env_space(encode_int((s32)7));
void* id8677 = make_closure(reinterpret_cast<void *>(ptr10781), env10359);

//setting env list
set_env(env10359, encode_int((s32)1), cdr);
set_env(env10359, encode_int((s32)2), loop);
set_env(env10359, encode_int((s32)3), car);
set_env(env10359, encode_int((s32)4), map1);
set_env(env10359, encode_int((s32)5), kont8491);
set_env(env10359, encode_int((s32)6), op);
set_env(env10359, encode_int((s32)7), lst);


void* id8678 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9860 = encode_null();
void* newarg9861 = prim_cons(t8267, oldarg9860);
void* newarg9862 = prim_cons(id8678, newarg9861);
void* newarg9863 = prim_cons(id8677, newarg9862);

//app-clo
void* cloPtr10782 = get_closure_ptr(equal_u63);
void* procEnv10783 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10782);
function_ptr(procEnv10783, newarg9863);
}

void ptr10370(void* env10371, void* arglst9873)
{
void* op = get_env_value(env10371, encode_int((s32)2));
void* kont8491 = get_env_value(env10371, encode_int((s32)1));
void* letk8502 = prim_car(arglst9873);
void* arg_lst9874 = prim_cdr(arglst9873);
void* t8269 = prim_car(arg_lst9874);
void* arg_lst9875 = prim_cdr(arg_lst9874);
void* lst8503 = prim_cons(kont8491, t8269);

//app-clo
void* cloPtr10784 = get_closure_ptr(op);
void* procEnv10785 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10784);
function_ptr(procEnv10785, lst8503);
}

void ptr10372(void* env10373, void* arglst9880)
{
void* loop = get_env_value(env10373, encode_int((s32)2));
void* kont8491 = get_env_value(env10373, encode_int((s32)1));
void* letk8504 = prim_car(arglst9880);
void* arg_lst9881 = prim_cdr(arglst9880);
void* t8270 = prim_car(arg_lst9881);
void* arg_lst9882 = prim_cdr(arg_lst9881);
void* oldarg9883 = encode_null();
void* newarg9884 = prim_cons(t8270, oldarg9883);
void* newarg9885 = prim_cons(kont8491, newarg9884);

//app-clo
void* cloPtr10786 = get_closure_ptr(loop);
void* procEnv10787 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10786);
function_ptr(procEnv10787, newarg9885);
}

void ptr10368(void* env10369, void* arglst9870)
{
void* lst = get_env_value(env10369, encode_int((s32)7));
void* op = get_env_value(env10369, encode_int((s32)6));
void* kont8491 = get_env_value(env10369, encode_int((s32)5));
void* map1 = get_env_value(env10369, encode_int((s32)4));
void* car = get_env_value(env10369, encode_int((s32)3));
void* loop = get_env_value(env10369, encode_int((s32)2));
void* cdr = get_env_value(env10369, encode_int((s32)1));
void* letk8501 = prim_car(arglst9870);
void* arg_lst9871 = prim_cdr(arglst9870);
void* t8268 = prim_car(arg_lst9871);
void* arg_lst9872 = prim_cdr(arg_lst9871);

//if-clause
u64 if_guard10788 = reinterpret_cast<u64>(is_true(t8268));
if(if_guard10788 == 1)
{

//creating new closure instance
auto ptr10789 = reinterpret_cast<void (*)(void *, void *)>(&ptr10370);
env10369 = allocate_env_space(encode_int((s32)2));
void* id8686 = make_closure(reinterpret_cast<void *>(ptr10789), env10369);

//setting env list
set_env(env10369, encode_int((s32)1), kont8491);
set_env(env10369, encode_int((s32)2), op);


void* oldarg9876 = encode_null();
void* newarg9877 = prim_cons(lst, oldarg9876);
void* newarg9878 = prim_cons(car, newarg9877);
void* newarg9879 = prim_cons(id8686, newarg9878);

//app-clo
void* cloPtr10790 = get_closure_ptr(map1);
void* procEnv10791 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10790);
function_ptr(procEnv10791, newarg9879);
}
else
{

//creating new closure instance
auto ptr10792 = reinterpret_cast<void (*)(void *, void *)>(&ptr10372);
env10369 = allocate_env_space(encode_int((s32)2));
void* id8687 = make_closure(reinterpret_cast<void *>(ptr10792), env10369);

//setting env list
set_env(env10369, encode_int((s32)1), kont8491);
set_env(env10369, encode_int((s32)2), loop);


void* oldarg9886 = encode_null();
void* newarg9887 = prim_cons(lst, oldarg9886);
void* newarg9888 = prim_cons(cdr, newarg9887);
void* newarg9889 = prim_cons(id8687, newarg9888);

//app-clo
void* cloPtr10793 = get_closure_ptr(map1);
void* procEnv10794 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10793);
function_ptr(procEnv10794, newarg9889);
}

}

void ptr10366(void* env10367, void* arglst9867)
{
void* lst = get_env_value(env10367, encode_int((s32)8));
void* op = get_env_value(env10367, encode_int((s32)7));
void* map1 = get_env_value(env10367, encode_int((s32)6));
void* car = get_env_value(env10367, encode_int((s32)5));
void* loop = get_env_value(env10367, encode_int((s32)4));
void* cdr = get_env_value(env10367, encode_int((s32)3));
void* kont8491 = get_env_value(env10367, encode_int((s32)2));
void* equal_u63 = get_env_value(env10367, encode_int((s32)1));
void* letk8500 = prim_car(arglst9867);
void* arg_lst9868 = prim_cdr(arglst9867);
void* t8267 = prim_car(arg_lst9868);
void* arg_lst9869 = prim_cdr(arg_lst9868);

//creating new closure instance
auto ptr10795 = reinterpret_cast<void (*)(void *, void *)>(&ptr10368);
env10367 = allocate_env_space(encode_int((s32)7));
void* id8684 = make_closure(reinterpret_cast<void *>(ptr10795), env10367);

//setting env list
set_env(env10367, encode_int((s32)1), cdr);
set_env(env10367, encode_int((s32)2), loop);
set_env(env10367, encode_int((s32)3), car);
set_env(env10367, encode_int((s32)4), map1);
set_env(env10367, encode_int((s32)5), kont8491);
set_env(env10367, encode_int((s32)6), op);
set_env(env10367, encode_int((s32)7), lst);


void* id8685 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9890 = encode_null();
void* newarg9891 = prim_cons(t8267, oldarg9890);
void* newarg9892 = prim_cons(id8685, newarg9891);
void* newarg9893 = prim_cons(id8684, newarg9892);

//app-clo
void* cloPtr10796 = get_closure_ptr(equal_u63);
void* procEnv10797 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10796);
function_ptr(procEnv10797, newarg9893);
}

void ptr10356(void* env10357, void* arglst9834)
{
void* lst = get_env_value(env10357, encode_int((s32)8));
void* op = get_env_value(env10357, encode_int((s32)7));
void* map1 = get_env_value(env10357, encode_int((s32)6));
void* car = get_env_value(env10357, encode_int((s32)5));
void* loop = get_env_value(env10357, encode_int((s32)4));
void* cdr = get_env_value(env10357, encode_int((s32)3));
void* kont8491 = get_env_value(env10357, encode_int((s32)2));
void* equal_u63 = get_env_value(env10357, encode_int((s32)1));
void* letk8499 = prim_car(arglst9834);
void* arg_lst9835 = prim_cdr(arglst9834);
void* t8266 = prim_car(arg_lst9835);
void* arg_lst9836 = prim_cdr(arg_lst9835);

//if-clause
u64 if_guard10798 = reinterpret_cast<u64>(is_true(t8266));
if(if_guard10798 == 1)
{

//creating new closure instance
auto ptr10799 = reinterpret_cast<void (*)(void *, void *)>(&ptr10358);
env10357 = allocate_env_space(encode_int((s32)8));
void* id8674 = make_closure(reinterpret_cast<void *>(ptr10799), env10357);

//setting env list
set_env(env10357, encode_int((s32)1), equal_u63);
set_env(env10357, encode_int((s32)2), kont8491);
set_env(env10357, encode_int((s32)3), cdr);
set_env(env10357, encode_int((s32)4), loop);
set_env(env10357, encode_int((s32)5), car);
set_env(env10357, encode_int((s32)6), map1);
set_env(env10357, encode_int((s32)7), op);
set_env(env10357, encode_int((s32)8), lst);


void* id8675 = encode_null();
void* id8676 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9864 = encode_null();
void* newarg9865 = prim_cons(id8676, oldarg9864);
void* newarg9866 = prim_cons(id8675, newarg9865);

//app-clo
void* cloPtr10800 = get_closure_ptr(id8674);
void* procEnv10801 = get_env(id8674);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10800);
function_ptr(procEnv10801, newarg9866);
}
else
{

//creating new closure instance
auto ptr10802 = reinterpret_cast<void (*)(void *, void *)>(&ptr10366);
env10357 = allocate_env_space(encode_int((s32)8));
void* id8681 = make_closure(reinterpret_cast<void *>(ptr10802), env10357);

//setting env list
set_env(env10357, encode_int((s32)1), equal_u63);
set_env(env10357, encode_int((s32)2), kont8491);
set_env(env10357, encode_int((s32)3), cdr);
set_env(env10357, encode_int((s32)4), loop);
set_env(env10357, encode_int((s32)5), car);
set_env(env10357, encode_int((s32)6), map1);
set_env(env10357, encode_int((s32)7), op);
set_env(env10357, encode_int((s32)8), lst);


void* id8682 = encode_null();
void* id8683 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9894 = encode_null();
void* newarg9895 = prim_cons(id8683, oldarg9894);
void* newarg9896 = prim_cons(id8682, newarg9895);

//app-clo
void* cloPtr10803 = get_closure_ptr(id8681);
void* procEnv10804 = get_env(id8681);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10803);
function_ptr(procEnv10804, newarg9896);
}

}

void ptr10354(void* env10355, void* arglst9831)
{
void* lst = get_env_value(env10355, encode_int((s32)8));
void* op = get_env_value(env10355, encode_int((s32)7));
void* map1 = get_env_value(env10355, encode_int((s32)6));
void* car = get_env_value(env10355, encode_int((s32)5));
void* loop = get_env_value(env10355, encode_int((s32)4));
void* cdr = get_env_value(env10355, encode_int((s32)3));
void* kont8491 = get_env_value(env10355, encode_int((s32)2));
void* equal_u63 = get_env_value(env10355, encode_int((s32)1));
void* letk8498 = prim_car(arglst9831);
void* arg_lst9832 = prim_cdr(arglst9831);
void* t8265 = prim_car(arg_lst9832);
void* arg_lst9833 = prim_cdr(arg_lst9832);

//creating new closure instance
auto ptr10805 = reinterpret_cast<void (*)(void *, void *)>(&ptr10356);
env10355 = allocate_env_space(encode_int((s32)8));
void* id8673 = make_closure(reinterpret_cast<void *>(ptr10805), env10355);

//setting env list
set_env(env10355, encode_int((s32)1), equal_u63);
set_env(env10355, encode_int((s32)2), kont8491);
set_env(env10355, encode_int((s32)3), cdr);
set_env(env10355, encode_int((s32)4), loop);
set_env(env10355, encode_int((s32)5), car);
set_env(env10355, encode_int((s32)6), map1);
set_env(env10355, encode_int((s32)7), op);
set_env(env10355, encode_int((s32)8), lst);


void* lst8505 = prim_cons(id8673, t8265);

//app-clo
void* cloPtr10806 = get_closure_ptr(op);
void* procEnv10807 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10806);
function_ptr(procEnv10807, lst8505);
}

void ptr10350(void* env10351, void* arglst9821)
{
void* lst = get_env_value(env10351, encode_int((s32)8));
void* op = get_env_value(env10351, encode_int((s32)7));
void* map1 = get_env_value(env10351, encode_int((s32)6));
void* car = get_env_value(env10351, encode_int((s32)5));
void* loop = get_env_value(env10351, encode_int((s32)4));
void* cdr = get_env_value(env10351, encode_int((s32)3));
void* kont8491 = get_env_value(env10351, encode_int((s32)2));
void* equal_u63 = get_env_value(env10351, encode_int((s32)1));
void* letk8495 = prim_car(arglst9821);
void* arg_lst9822 = prim_cdr(arglst9821);
void* t8263 = prim_car(arg_lst9822);
void* arg_lst9823 = prim_cdr(arg_lst9822);

//if-clause
u64 if_guard10808 = reinterpret_cast<u64>(is_true(t8263));
if(if_guard10808 == 1)
{

//creating new closure instance
auto ptr10809 = reinterpret_cast<void (*)(void *, void *)>(&ptr10352);
env10351 = allocate_env_space(encode_int((s32)2));
void* id8671 = make_closure(reinterpret_cast<void *>(ptr10809), env10351);

//setting env list
set_env(env10351, encode_int((s32)1), kont8491);
set_env(env10351, encode_int((s32)2), op);


void* oldarg9827 = encode_null();
void* newarg9828 = prim_cons(lst, oldarg9827);
void* newarg9829 = prim_cons(car, newarg9828);
void* newarg9830 = prim_cons(id8671, newarg9829);

//app-clo
void* cloPtr10810 = get_closure_ptr(map1);
void* procEnv10811 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10810);
function_ptr(procEnv10811, newarg9830);
}
else
{

//creating new closure instance
auto ptr10812 = reinterpret_cast<void (*)(void *, void *)>(&ptr10354);
env10351 = allocate_env_space(encode_int((s32)8));
void* id8672 = make_closure(reinterpret_cast<void *>(ptr10812), env10351);

//setting env list
set_env(env10351, encode_int((s32)1), equal_u63);
set_env(env10351, encode_int((s32)2), kont8491);
set_env(env10351, encode_int((s32)3), cdr);
set_env(env10351, encode_int((s32)4), loop);
set_env(env10351, encode_int((s32)5), car);
set_env(env10351, encode_int((s32)6), map1);
set_env(env10351, encode_int((s32)7), op);
set_env(env10351, encode_int((s32)8), lst);


void* oldarg9897 = encode_null();
void* newarg9898 = prim_cons(lst, oldarg9897);
void* newarg9899 = prim_cons(car, newarg9898);
void* newarg9900 = prim_cons(id8672, newarg9899);

//app-clo
void* cloPtr10813 = get_closure_ptr(map1);
void* procEnv10814 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10813);
function_ptr(procEnv10814, newarg9900);
}

}

void ptr10348(void* env10349, void* arglst9818)
{
void* lst = get_env_value(env10349, encode_int((s32)9));
void* op = get_env_value(env10349, encode_int((s32)8));
void* map1 = get_env_value(env10349, encode_int((s32)7));
void* car = get_env_value(env10349, encode_int((s32)6));
void* _u61 = get_env_value(env10349, encode_int((s32)5));
void* loop = get_env_value(env10349, encode_int((s32)4));
void* cdr = get_env_value(env10349, encode_int((s32)3));
void* kont8491 = get_env_value(env10349, encode_int((s32)2));
void* equal_u63 = get_env_value(env10349, encode_int((s32)1));
void* letk8494 = prim_car(arglst9818);
void* arg_lst9819 = prim_cdr(arglst9818);
void* t8262 = prim_car(arg_lst9819);
void* arg_lst9820 = prim_cdr(arg_lst9819);

//creating new closure instance
auto ptr10815 = reinterpret_cast<void (*)(void *, void *)>(&ptr10350);
env10349 = allocate_env_space(encode_int((s32)8));
void* id8669 = make_closure(reinterpret_cast<void *>(ptr10815), env10349);

//setting env list
set_env(env10349, encode_int((s32)1), equal_u63);
set_env(env10349, encode_int((s32)2), kont8491);
set_env(env10349, encode_int((s32)3), cdr);
set_env(env10349, encode_int((s32)4), loop);
set_env(env10349, encode_int((s32)5), car);
set_env(env10349, encode_int((s32)6), map1);
set_env(env10349, encode_int((s32)7), op);
set_env(env10349, encode_int((s32)8), lst);


void* id8670 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9901 = encode_null();
void* newarg9902 = prim_cons(t8262, oldarg9901);
void* newarg9903 = prim_cons(id8670, newarg9902);
void* newarg9904 = prim_cons(id8669, newarg9903);

//app-clo
void* cloPtr10816 = get_closure_ptr(_u61);
void* procEnv10817 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10816);
function_ptr(procEnv10817, newarg9904);
}

void ptr10346(void* env10347, void* arglst9815)
{
void* lst = get_env_value(env10347, encode_int((s32)10));
void* length = get_env_value(env10347, encode_int((s32)9));
void* op = get_env_value(env10347, encode_int((s32)8));
void* map1 = get_env_value(env10347, encode_int((s32)7));
void* car = get_env_value(env10347, encode_int((s32)6));
void* _u61 = get_env_value(env10347, encode_int((s32)5));
void* loop = get_env_value(env10347, encode_int((s32)4));
void* cdr = get_env_value(env10347, encode_int((s32)3));
void* kont8491 = get_env_value(env10347, encode_int((s32)2));
void* equal_u63 = get_env_value(env10347, encode_int((s32)1));
void* letk8493 = prim_car(arglst9815);
void* arg_lst9816 = prim_cdr(arglst9815);
void* t8261 = prim_car(arg_lst9816);
void* arg_lst9817 = prim_cdr(arg_lst9816);

//creating new closure instance
auto ptr10818 = reinterpret_cast<void (*)(void *, void *)>(&ptr10348);
env10347 = allocate_env_space(encode_int((s32)9));
void* id8668 = make_closure(reinterpret_cast<void *>(ptr10818), env10347);

//setting env list
set_env(env10347, encode_int((s32)1), equal_u63);
set_env(env10347, encode_int((s32)2), kont8491);
set_env(env10347, encode_int((s32)3), cdr);
set_env(env10347, encode_int((s32)4), loop);
set_env(env10347, encode_int((s32)5), _u61);
set_env(env10347, encode_int((s32)6), car);
set_env(env10347, encode_int((s32)7), map1);
set_env(env10347, encode_int((s32)8), op);
set_env(env10347, encode_int((s32)9), lst);


void* oldarg9905 = encode_null();
void* newarg9906 = prim_cons(t8261, oldarg9905);
void* newarg9907 = prim_cons(id8668, newarg9906);

//app-clo
void* cloPtr10819 = get_closure_ptr(length);
void* procEnv10820 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10819);
function_ptr(procEnv10820, newarg9907);
}

void ptr10344(void* env10345, void* arglst9809)
{
void* lst = get_env_value(env10345, encode_int((s32)11));
void* length = get_env_value(env10345, encode_int((s32)10));
void* op = get_env_value(env10345, encode_int((s32)9));
void* map1 = get_env_value(env10345, encode_int((s32)8));
void* car = get_env_value(env10345, encode_int((s32)7));
void* loop = get_env_value(env10345, encode_int((s32)6));
void* cdr = get_env_value(env10345, encode_int((s32)5));
void* kont8491 = get_env_value(env10345, encode_int((s32)4));
void* equal_u63 = get_env_value(env10345, encode_int((s32)3));
void* cdar = get_env_value(env10345, encode_int((s32)2));
void* _u61 = get_env_value(env10345, encode_int((s32)1));
void* letk8492 = prim_car(arglst9809);
void* arg_lst9810 = prim_cdr(arglst9809);
void* t8260 = prim_car(arg_lst9810);
void* arg_lst9811 = prim_cdr(arg_lst9810);

//if-clause
u64 if_guard10821 = reinterpret_cast<u64>(is_true(t8260));
if(if_guard10821 == 1)
{
void* id8665 = encode_null();
void* id8666 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9812 = encode_null();
void* newarg9813 = prim_cons(id8666, oldarg9812);
void* newarg9814 = prim_cons(id8665, newarg9813);

//app-clo
void* cloPtr10822 = get_closure_ptr(kont8491);
void* procEnv10823 = get_env(kont8491);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10822);
function_ptr(procEnv10823, newarg9814);
}
else
{

//creating new closure instance
auto ptr10824 = reinterpret_cast<void (*)(void *, void *)>(&ptr10346);
env10345 = allocate_env_space(encode_int((s32)10));
void* id8667 = make_closure(reinterpret_cast<void *>(ptr10824), env10345);

//setting env list
set_env(env10345, encode_int((s32)1), equal_u63);
set_env(env10345, encode_int((s32)2), kont8491);
set_env(env10345, encode_int((s32)3), cdr);
set_env(env10345, encode_int((s32)4), loop);
set_env(env10345, encode_int((s32)5), _u61);
set_env(env10345, encode_int((s32)6), car);
set_env(env10345, encode_int((s32)7), map1);
set_env(env10345, encode_int((s32)8), op);
set_env(env10345, encode_int((s32)9), length);
set_env(env10345, encode_int((s32)10), lst);


void* oldarg9908 = encode_null();
void* newarg9909 = prim_cons(lst, oldarg9908);
void* newarg9910 = prim_cons(id8667, newarg9909);

//app-clo
void* cloPtr10825 = get_closure_ptr(cdar);
void* procEnv10826 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10825);
function_ptr(procEnv10826, newarg9910);
}

}

void ptr10342(void* env10343, void* arglst9806)
{
void* lst = get_env_value(env10343, encode_int((s32)12));
void* op = get_env_value(env10343, encode_int((s32)11));
void* map1 = get_env_value(env10343, encode_int((s32)10));
void* car = get_env_value(env10343, encode_int((s32)9));
void* loop = get_env_value(env10343, encode_int((s32)8));
void* cdr = get_env_value(env10343, encode_int((s32)7));
void* null_u63 = get_env_value(env10343, encode_int((s32)6));
void* length = get_env_value(env10343, encode_int((s32)5));
void* kont8491 = get_env_value(env10343, encode_int((s32)4));
void* equal_u63 = get_env_value(env10343, encode_int((s32)3));
void* cdar = get_env_value(env10343, encode_int((s32)2));
void* _u61 = get_env_value(env10343, encode_int((s32)1));
void* letk8507 = prim_car(arglst9806);
void* arg_lst9807 = prim_cdr(arglst9806);
void* t8259 = prim_car(arg_lst9807);
void* arg_lst9808 = prim_cdr(arg_lst9807);

//creating new closure instance
auto ptr10827 = reinterpret_cast<void (*)(void *, void *)>(&ptr10344);
env10343 = allocate_env_space(encode_int((s32)11));
void* id8664 = make_closure(reinterpret_cast<void *>(ptr10827), env10343);

//setting env list
set_env(env10343, encode_int((s32)1), _u61);
set_env(env10343, encode_int((s32)2), cdar);
set_env(env10343, encode_int((s32)3), equal_u63);
set_env(env10343, encode_int((s32)4), kont8491);
set_env(env10343, encode_int((s32)5), cdr);
set_env(env10343, encode_int((s32)6), loop);
set_env(env10343, encode_int((s32)7), car);
set_env(env10343, encode_int((s32)8), map1);
set_env(env10343, encode_int((s32)9), op);
set_env(env10343, encode_int((s32)10), length);
set_env(env10343, encode_int((s32)11), lst);


void* oldarg9911 = encode_null();
void* newarg9912 = prim_cons(t8259, oldarg9911);
void* newarg9913 = prim_cons(id8664, newarg9912);

//app-clo
void* cloPtr10828 = get_closure_ptr(null_u63);
void* procEnv10829 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10828);
function_ptr(procEnv10829, newarg9913);
}

void ptr10310(void* env10311, void* arglst9698)
{
void* lst = get_env_value(env10311, encode_int((s32)12));
void* op = get_env_value(env10311, encode_int((s32)11));
void* map1 = get_env_value(env10311, encode_int((s32)10));
void* car = get_env_value(env10311, encode_int((s32)9));
void* loop = get_env_value(env10311, encode_int((s32)8));
void* cdr = get_env_value(env10311, encode_int((s32)7));
void* null_u63 = get_env_value(env10311, encode_int((s32)6));
void* length = get_env_value(env10311, encode_int((s32)5));
void* kont8491 = get_env_value(env10311, encode_int((s32)4));
void* equal_u63 = get_env_value(env10311, encode_int((s32)3));
void* cdar = get_env_value(env10311, encode_int((s32)2));
void* _u61 = get_env_value(env10311, encode_int((s32)1));
void* letk8506 = prim_car(arglst9698);
void* arg_lst9699 = prim_cdr(arglst9698);
void* or8235 = prim_car(arg_lst9699);
void* arg_lst9700 = prim_cdr(arg_lst9699);

//if-clause
u64 if_guard10830 = reinterpret_cast<u64>(is_true(or8235));
if(if_guard10830 == 1)
{

//creating new closure instance
auto ptr10831 = reinterpret_cast<void (*)(void *, void *)>(&ptr10312);
env10311 = allocate_env_space(encode_int((s32)11));
void* id8638 = make_closure(reinterpret_cast<void *>(ptr10831), env10311);

//setting env list
set_env(env10311, encode_int((s32)1), _u61);
set_env(env10311, encode_int((s32)2), cdar);
set_env(env10311, encode_int((s32)3), equal_u63);
set_env(env10311, encode_int((s32)4), kont8491);
set_env(env10311, encode_int((s32)5), cdr);
set_env(env10311, encode_int((s32)6), loop);
set_env(env10311, encode_int((s32)7), car);
set_env(env10311, encode_int((s32)8), map1);
set_env(env10311, encode_int((s32)9), op);
set_env(env10311, encode_int((s32)10), length);
set_env(env10311, encode_int((s32)11), lst);


void* id8639 = encode_null();
void* oldarg9803 = encode_null();
void* newarg9804 = prim_cons(or8235, oldarg9803);
void* newarg9805 = prim_cons(id8639, newarg9804);

//app-clo
void* cloPtr10832 = get_closure_ptr(id8638);
void* procEnv10833 = get_env(id8638);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10832);
function_ptr(procEnv10833, newarg9805);
}
else
{

//creating new closure instance
auto ptr10834 = reinterpret_cast<void (*)(void *, void *)>(&ptr10342);
env10311 = allocate_env_space(encode_int((s32)12));
void* id8663 = make_closure(reinterpret_cast<void *>(ptr10834), env10311);

//setting env list
set_env(env10311, encode_int((s32)1), _u61);
set_env(env10311, encode_int((s32)2), cdar);
set_env(env10311, encode_int((s32)3), equal_u63);
set_env(env10311, encode_int((s32)4), kont8491);
set_env(env10311, encode_int((s32)5), length);
set_env(env10311, encode_int((s32)6), null_u63);
set_env(env10311, encode_int((s32)7), cdr);
set_env(env10311, encode_int((s32)8), loop);
set_env(env10311, encode_int((s32)9), car);
set_env(env10311, encode_int((s32)10), map1);
set_env(env10311, encode_int((s32)11), op);
set_env(env10311, encode_int((s32)12), lst);


void* oldarg9914 = encode_null();
void* newarg9915 = prim_cons(lst, oldarg9914);
void* newarg9916 = prim_cons(id8663, newarg9915);

//app-clo
void* cloPtr10835 = get_closure_ptr(car);
void* procEnv10836 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10835);
function_ptr(procEnv10836, newarg9916);
}

}

void ptr10308(void* env10309, void* arglst9695)
{
void* op = get_env_value(env10309, encode_int((s32)10));
void* equal_u63 = get_env_value(env10309, encode_int((s32)9));
void* map1 = get_env_value(env10309, encode_int((s32)8));
void* car = get_env_value(env10309, encode_int((s32)7));
void* loop = get_env_value(env10309, encode_int((s32)6));
void* cdr = get_env_value(env10309, encode_int((s32)5));
void* null_u63 = get_env_value(env10309, encode_int((s32)4));
void* length = get_env_value(env10309, encode_int((s32)3));
void* cdar = get_env_value(env10309, encode_int((s32)2));
void* _u61 = get_env_value(env10309, encode_int((s32)1));
void* kont8491 = prim_car(arglst9695);
void* arg_lst9696 = prim_cdr(arglst9695);
void* lst = prim_car(arg_lst9696);
void* arg_lst9697 = prim_cdr(arg_lst9696);

//creating new closure instance
auto ptr10837 = reinterpret_cast<void (*)(void *, void *)>(&ptr10310);
env10309 = allocate_env_space(encode_int((s32)12));
void* id8637 = make_closure(reinterpret_cast<void *>(ptr10837), env10309);

//setting env list
set_env(env10309, encode_int((s32)1), _u61);
set_env(env10309, encode_int((s32)2), cdar);
set_env(env10309, encode_int((s32)3), equal_u63);
set_env(env10309, encode_int((s32)4), kont8491);
set_env(env10309, encode_int((s32)5), length);
set_env(env10309, encode_int((s32)6), null_u63);
set_env(env10309, encode_int((s32)7), cdr);
set_env(env10309, encode_int((s32)8), loop);
set_env(env10309, encode_int((s32)9), car);
set_env(env10309, encode_int((s32)10), map1);
set_env(env10309, encode_int((s32)11), op);
set_env(env10309, encode_int((s32)12), lst);


void* oldarg9917 = encode_null();
void* newarg9918 = prim_cons(lst, oldarg9917);
void* newarg9919 = prim_cons(id8637, newarg9918);

//app-clo
void* cloPtr10838 = get_closure_ptr(null_u63);
void* procEnv10839 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10838);
function_ptr(procEnv10839, newarg9919);
}

void ptr10306(void* env10307, void* arglst9692)
{
void* cdr = get_env_value(env10307, encode_int((s32)9));
void* op = get_env_value(env10307, encode_int((s32)8));
void* equal_u63 = get_env_value(env10307, encode_int((s32)7));
void* map1 = get_env_value(env10307, encode_int((s32)6));
void* car = get_env_value(env10307, encode_int((s32)5));
void* null_u63 = get_env_value(env10307, encode_int((s32)4));
void* length = get_env_value(env10307, encode_int((s32)3));
void* cdar = get_env_value(env10307, encode_int((s32)2));
void* _u61 = get_env_value(env10307, encode_int((s32)1));
void* kont8490 = prim_car(arglst9692);
void* arg_lst9693 = prim_cdr(arglst9692);
void* loop = prim_car(arg_lst9693);
void* arg_lst9694 = prim_cdr(arg_lst9693);
void* id8635 = encode_null();

//creating new closure instance
auto ptr10840 = reinterpret_cast<void (*)(void *, void *)>(&ptr10308);
env10307 = allocate_env_space(encode_int((s32)10));
void* id8636 = make_closure(reinterpret_cast<void *>(ptr10840), env10307);

//setting env list
set_env(env10307, encode_int((s32)1), _u61);
set_env(env10307, encode_int((s32)2), cdar);
set_env(env10307, encode_int((s32)3), length);
set_env(env10307, encode_int((s32)4), null_u63);
set_env(env10307, encode_int((s32)5), cdr);
set_env(env10307, encode_int((s32)6), loop);
set_env(env10307, encode_int((s32)7), car);
set_env(env10307, encode_int((s32)8), map1);
set_env(env10307, encode_int((s32)9), equal_u63);
set_env(env10307, encode_int((s32)10), op);


void* oldarg9920 = encode_null();
void* newarg9921 = prim_cons(id8636, oldarg9920);
void* newarg9922 = prim_cons(id8635, newarg9921);

//app-clo
void* cloPtr10841 = get_closure_ptr(kont8490);
void* procEnv10842 = get_env(kont8490);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10841);
function_ptr(procEnv10842, newarg9922);
}

void ptr10304(void* env10305, void* arglst9686)
{
void* kkont8484 = get_env_value(env10305, encode_int((s32)2));
void* lst = get_env_value(env10305, encode_int((s32)1));
void* letk8489 = prim_car(arglst9686);
void* arg_lst9687 = prim_cdr(arglst9686);
void* loop = prim_car(arg_lst9687);
void* arg_lst9688 = prim_cdr(arg_lst9687);
void* oldarg9689 = encode_null();
void* newarg9690 = prim_cons(lst, oldarg9689);
void* newarg9691 = prim_cons(kkont8484, newarg9690);

//app-clo
void* cloPtr10843 = get_closure_ptr(loop);
void* procEnv10844 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10843);
function_ptr(procEnv10844, newarg9691);
}

void ptr10302(void* env10303, void* arglst9683)
{
void* cdr = get_env_value(env10303, encode_int((s32)11));
void* kkont8484 = get_env_value(env10303, encode_int((s32)10));
void* Ycomb = get_env_value(env10303, encode_int((s32)9));
void* op = get_env_value(env10303, encode_int((s32)8));
void* equal_u63 = get_env_value(env10303, encode_int((s32)7));
void* map1 = get_env_value(env10303, encode_int((s32)6));
void* car = get_env_value(env10303, encode_int((s32)5));
void* null_u63 = get_env_value(env10303, encode_int((s32)4));
void* length = get_env_value(env10303, encode_int((s32)3));
void* cdar = get_env_value(env10303, encode_int((s32)2));
void* _u61 = get_env_value(env10303, encode_int((s32)1));
void* letk8488 = prim_car(arglst9683);
void* arg_lst9684 = prim_cdr(arglst9683);
void* lst = prim_car(arg_lst9684);
void* arg_lst9685 = prim_cdr(arg_lst9684);

//creating new closure instance
auto ptr10845 = reinterpret_cast<void (*)(void *, void *)>(&ptr10304);
env10303 = allocate_env_space(encode_int((s32)2));
void* id8633 = make_closure(reinterpret_cast<void *>(ptr10845), env10303);

//setting env list
set_env(env10303, encode_int((s32)1), lst);
set_env(env10303, encode_int((s32)2), kkont8484);



//creating new closure instance
auto ptr10846 = reinterpret_cast<void (*)(void *, void *)>(&ptr10306);
env10303 = allocate_env_space(encode_int((s32)9));
void* id8634 = make_closure(reinterpret_cast<void *>(ptr10846), env10303);

//setting env list
set_env(env10303, encode_int((s32)1), _u61);
set_env(env10303, encode_int((s32)2), cdar);
set_env(env10303, encode_int((s32)3), length);
set_env(env10303, encode_int((s32)4), null_u63);
set_env(env10303, encode_int((s32)5), car);
set_env(env10303, encode_int((s32)6), map1);
set_env(env10303, encode_int((s32)7), equal_u63);
set_env(env10303, encode_int((s32)8), op);
set_env(env10303, encode_int((s32)9), cdr);


void* oldarg9923 = encode_null();
void* newarg9924 = prim_cons(id8634, oldarg9923);
void* newarg9925 = prim_cons(id8633, newarg9924);

//app-clo
void* cloPtr10847 = get_closure_ptr(Ycomb);
void* procEnv10848 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10847);
function_ptr(procEnv10848, newarg9925);
}

void ptr10300(void* env10301, void* arglst9680)
{
void* cdr = get_env_value(env10301, encode_int((s32)11));
void* kkont8484 = get_env_value(env10301, encode_int((s32)10));
void* Ycomb = get_env_value(env10301, encode_int((s32)9));
void* op = get_env_value(env10301, encode_int((s32)8));
void* equal_u63 = get_env_value(env10301, encode_int((s32)7));
void* map1 = get_env_value(env10301, encode_int((s32)6));
void* car = get_env_value(env10301, encode_int((s32)5));
void* null_u63 = get_env_value(env10301, encode_int((s32)4));
void* length = get_env_value(env10301, encode_int((s32)3));
void* cdar = get_env_value(env10301, encode_int((s32)2));
void* _u61 = get_env_value(env10301, encode_int((s32)1));
void* letk8487 = prim_car(arglst9680);
void* arg_lst9681 = prim_cdr(arglst9680);
void* param_lst8234 = prim_car(arg_lst9681);
void* arg_lst9682 = prim_cdr(arg_lst9681);

//creating new closure instance
auto ptr10849 = reinterpret_cast<void (*)(void *, void *)>(&ptr10302);
env10301 = allocate_env_space(encode_int((s32)11));
void* id8631 = make_closure(reinterpret_cast<void *>(ptr10849), env10301);

//setting env list
set_env(env10301, encode_int((s32)1), _u61);
set_env(env10301, encode_int((s32)2), cdar);
set_env(env10301, encode_int((s32)3), length);
set_env(env10301, encode_int((s32)4), null_u63);
set_env(env10301, encode_int((s32)5), car);
set_env(env10301, encode_int((s32)6), map1);
set_env(env10301, encode_int((s32)7), equal_u63);
set_env(env10301, encode_int((s32)8), op);
set_env(env10301, encode_int((s32)9), Ycomb);
set_env(env10301, encode_int((s32)10), kkont8484);
set_env(env10301, encode_int((s32)11), cdr);


void* id8632 = encode_null();
void* oldarg9926 = encode_null();
void* newarg9927 = prim_cons(param_lst8234, oldarg9926);
void* newarg9928 = prim_cons(id8632, newarg9927);

//app-clo
void* cloPtr10850 = get_closure_ptr(id8631);
void* procEnv10851 = get_env(id8631);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10850);
function_ptr(procEnv10851, newarg9928);
}

void ptr10298(void* env10299, void* arglst9677)
{
void* cdr = get_env_value(env10299, encode_int((s32)11));
void* kkont8484 = get_env_value(env10299, encode_int((s32)10));
void* Ycomb = get_env_value(env10299, encode_int((s32)9));
void* param_lst8234 = get_env_value(env10299, encode_int((s32)8));
void* equal_u63 = get_env_value(env10299, encode_int((s32)7));
void* map1 = get_env_value(env10299, encode_int((s32)6));
void* car = get_env_value(env10299, encode_int((s32)5));
void* null_u63 = get_env_value(env10299, encode_int((s32)4));
void* length = get_env_value(env10299, encode_int((s32)3));
void* cdar = get_env_value(env10299, encode_int((s32)2));
void* _u61 = get_env_value(env10299, encode_int((s32)1));
void* letk8486 = prim_car(arglst9677);
void* arg_lst9678 = prim_cdr(arglst9677);
void* op = prim_car(arg_lst9678);
void* arg_lst9679 = prim_cdr(arg_lst9678);

//creating new closure instance
auto ptr10852 = reinterpret_cast<void (*)(void *, void *)>(&ptr10300);
env10299 = allocate_env_space(encode_int((s32)11));
void* id8630 = make_closure(reinterpret_cast<void *>(ptr10852), env10299);

//setting env list
set_env(env10299, encode_int((s32)1), _u61);
set_env(env10299, encode_int((s32)2), cdar);
set_env(env10299, encode_int((s32)3), length);
set_env(env10299, encode_int((s32)4), null_u63);
set_env(env10299, encode_int((s32)5), car);
set_env(env10299, encode_int((s32)6), map1);
set_env(env10299, encode_int((s32)7), equal_u63);
set_env(env10299, encode_int((s32)8), op);
set_env(env10299, encode_int((s32)9), Ycomb);
set_env(env10299, encode_int((s32)10), kkont8484);
set_env(env10299, encode_int((s32)11), cdr);


void* oldarg9929 = encode_null();
void* newarg9930 = prim_cons(param_lst8234, oldarg9929);
void* newarg9931 = prim_cons(id8630, newarg9930);

//app-clo
void* cloPtr10853 = get_closure_ptr(cdr);
void* procEnv10854 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10853);
function_ptr(procEnv10854, newarg9931);
}

void ptr10296(void* env10297, void* param_lst82348485)
{
void* cdr = get_env_value(env10297, encode_int((s32)9));
void* Ycomb = get_env_value(env10297, encode_int((s32)8));
void* equal_u63 = get_env_value(env10297, encode_int((s32)7));
void* map1 = get_env_value(env10297, encode_int((s32)6));
void* car = get_env_value(env10297, encode_int((s32)5));
void* null_u63 = get_env_value(env10297, encode_int((s32)4));
void* length = get_env_value(env10297, encode_int((s32)3));
void* cdar = get_env_value(env10297, encode_int((s32)2));
void* _u61 = get_env_value(env10297, encode_int((s32)1));
void* kkont8484 = prim_car(param_lst82348485);
void* param_lst8234 = prim_cdr(param_lst82348485);

//creating new closure instance
auto ptr10855 = reinterpret_cast<void (*)(void *, void *)>(&ptr10298);
env10297 = allocate_env_space(encode_int((s32)11));
void* id8629 = make_closure(reinterpret_cast<void *>(ptr10855), env10297);

//setting env list
set_env(env10297, encode_int((s32)1), _u61);
set_env(env10297, encode_int((s32)2), cdar);
set_env(env10297, encode_int((s32)3), length);
set_env(env10297, encode_int((s32)4), null_u63);
set_env(env10297, encode_int((s32)5), car);
set_env(env10297, encode_int((s32)6), map1);
set_env(env10297, encode_int((s32)7), equal_u63);
set_env(env10297, encode_int((s32)8), param_lst8234);
set_env(env10297, encode_int((s32)9), Ycomb);
set_env(env10297, encode_int((s32)10), kkont8484);
set_env(env10297, encode_int((s32)11), cdr);


void* oldarg9932 = encode_null();
void* newarg9933 = prim_cons(param_lst8234, oldarg9932);
void* newarg9934 = prim_cons(id8629, newarg9933);

//app-clo
void* cloPtr10856 = get_closure_ptr(car);
void* procEnv10857 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10856);
function_ptr(procEnv10857, newarg9934);
}

void ptr10294(void* env10295, void* arglst9674)
{
void* cdr = get_env_value(env10295, encode_int((s32)9));
void* Ycomb = get_env_value(env10295, encode_int((s32)8));
void* equal_u63 = get_env_value(env10295, encode_int((s32)7));
void* map1 = get_env_value(env10295, encode_int((s32)6));
void* car = get_env_value(env10295, encode_int((s32)5));
void* null_u63 = get_env_value(env10295, encode_int((s32)4));
void* length = get_env_value(env10295, encode_int((s32)3));
void* cdar = get_env_value(env10295, encode_int((s32)2));
void* _u61 = get_env_value(env10295, encode_int((s32)1));
void* kont8483 = prim_car(arglst9674);
void* arg_lst9675 = prim_cdr(arglst9674);
void* ormap = prim_car(arg_lst9675);
void* arg_lst9676 = prim_cdr(arg_lst9675);
void* id8627 = encode_null();

//creating new closure instance
auto ptr10858 = reinterpret_cast<void (*)(void *, void *)>(&ptr10296);
env10295 = allocate_env_space(encode_int((s32)9));
void* id8628 = make_closure(reinterpret_cast<void *>(ptr10858), env10295);

//setting env list
set_env(env10295, encode_int((s32)1), _u61);
set_env(env10295, encode_int((s32)2), cdar);
set_env(env10295, encode_int((s32)3), length);
set_env(env10295, encode_int((s32)4), null_u63);
set_env(env10295, encode_int((s32)5), car);
set_env(env10295, encode_int((s32)6), map1);
set_env(env10295, encode_int((s32)7), equal_u63);
set_env(env10295, encode_int((s32)8), Ycomb);
set_env(env10295, encode_int((s32)9), cdr);


void* oldarg9935 = encode_null();
void* newarg9936 = prim_cons(id8628, oldarg9935);
void* newarg9937 = prim_cons(id8627, newarg9936);

//app-clo
void* cloPtr10859 = get_closure_ptr(kont8483);
void* procEnv10860 = get_env(kont8483);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10859);
function_ptr(procEnv10860, newarg9937);
}

void ptr10402(void* env10403, void* arglst9529)
{
void* kont8469 = get_env_value(env10403, encode_int((s32)2));
void* op = get_env_value(env10403, encode_int((s32)1));
void* letk8474 = prim_car(arglst9529);
void* arg_lst9530 = prim_cdr(arglst9529);
void* t8276 = prim_car(arg_lst9530);
void* arg_lst9531 = prim_cdr(arg_lst9530);
void* lst8475 = prim_cons(kont8469, t8276);

//app-clo
void* cloPtr10861 = get_closure_ptr(op);
void* procEnv10862 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10861);
function_ptr(procEnv10862, lst8475);
}

void ptr10410(void* env10411, void* arglst9548)
{
void* loop = get_env_value(env10411, encode_int((s32)2));
void* kont8469 = get_env_value(env10411, encode_int((s32)1));
void* letk8479 = prim_car(arglst9548);
void* arg_lst9549 = prim_cdr(arglst9548);
void* t8280 = prim_car(arg_lst9549);
void* arg_lst9550 = prim_cdr(arg_lst9549);
void* oldarg9551 = encode_null();
void* newarg9552 = prim_cons(t8280, oldarg9551);
void* newarg9553 = prim_cons(kont8469, newarg9552);

//app-clo
void* cloPtr10863 = get_closure_ptr(loop);
void* procEnv10864 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10863);
function_ptr(procEnv10864, newarg9553);
}

void ptr10408(void* env10409, void* arglst9542)
{
void* kont8469 = get_env_value(env10409, encode_int((s32)5));
void* lst = get_env_value(env10409, encode_int((s32)4));
void* map1 = get_env_value(env10409, encode_int((s32)3));
void* loop = get_env_value(env10409, encode_int((s32)2));
void* cdr = get_env_value(env10409, encode_int((s32)1));
void* letk8478 = prim_car(arglst9542);
void* arg_lst9543 = prim_cdr(arglst9542);
void* t8279 = prim_car(arg_lst9543);
void* arg_lst9544 = prim_cdr(arg_lst9543);

//if-clause
u64 if_guard10865 = reinterpret_cast<u64>(is_true(t8279));
if(if_guard10865 == 1)
{
void* id8714 = encode_null();
void* id8715 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9545 = encode_null();
void* newarg9546 = prim_cons(id8715, oldarg9545);
void* newarg9547 = prim_cons(id8714, newarg9546);

//app-clo
void* cloPtr10866 = get_closure_ptr(kont8469);
void* procEnv10867 = get_env(kont8469);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10866);
function_ptr(procEnv10867, newarg9547);
}
else
{

//creating new closure instance
auto ptr10868 = reinterpret_cast<void (*)(void *, void *)>(&ptr10410);
env10409 = allocate_env_space(encode_int((s32)2));
void* id8716 = make_closure(reinterpret_cast<void *>(ptr10868), env10409);

//setting env list
set_env(env10409, encode_int((s32)1), kont8469);
set_env(env10409, encode_int((s32)2), loop);


void* oldarg9554 = encode_null();
void* newarg9555 = prim_cons(lst, oldarg9554);
void* newarg9556 = prim_cons(cdr, newarg9555);
void* newarg9557 = prim_cons(id8716, newarg9556);

//app-clo
void* cloPtr10869 = get_closure_ptr(map1);
void* procEnv10870 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10869);
function_ptr(procEnv10870, newarg9557);
}

}

void ptr10406(void* env10407, void* arglst9539)
{
void* kont8469 = get_env_value(env10407, encode_int((s32)6));
void* lst = get_env_value(env10407, encode_int((s32)5));
void* equal_u63 = get_env_value(env10407, encode_int((s32)4));
void* map1 = get_env_value(env10407, encode_int((s32)3));
void* loop = get_env_value(env10407, encode_int((s32)2));
void* cdr = get_env_value(env10407, encode_int((s32)1));
void* letk8477 = prim_car(arglst9539);
void* arg_lst9540 = prim_cdr(arglst9539);
void* t8278 = prim_car(arg_lst9540);
void* arg_lst9541 = prim_cdr(arg_lst9540);

//creating new closure instance
auto ptr10871 = reinterpret_cast<void (*)(void *, void *)>(&ptr10408);
env10407 = allocate_env_space(encode_int((s32)5));
void* id8712 = make_closure(reinterpret_cast<void *>(ptr10871), env10407);

//setting env list
set_env(env10407, encode_int((s32)1), cdr);
set_env(env10407, encode_int((s32)2), loop);
set_env(env10407, encode_int((s32)3), map1);
set_env(env10407, encode_int((s32)4), lst);
set_env(env10407, encode_int((s32)5), kont8469);


void* id8713 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9558 = encode_null();
void* newarg9559 = prim_cons(t8278, oldarg9558);
void* newarg9560 = prim_cons(id8713, newarg9559);
void* newarg9561 = prim_cons(id8712, newarg9560);

//app-clo
void* cloPtr10872 = get_closure_ptr(equal_u63);
void* procEnv10873 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10872);
function_ptr(procEnv10873, newarg9561);
}

void ptr10404(void* env10405, void* arglst9536)
{
void* kont8469 = get_env_value(env10405, encode_int((s32)7));
void* lst = get_env_value(env10405, encode_int((s32)6));
void* op = get_env_value(env10405, encode_int((s32)5));
void* equal_u63 = get_env_value(env10405, encode_int((s32)4));
void* map1 = get_env_value(env10405, encode_int((s32)3));
void* loop = get_env_value(env10405, encode_int((s32)2));
void* cdr = get_env_value(env10405, encode_int((s32)1));
void* letk8476 = prim_car(arglst9536);
void* arg_lst9537 = prim_cdr(arglst9536);
void* t8277 = prim_car(arg_lst9537);
void* arg_lst9538 = prim_cdr(arg_lst9537);

//creating new closure instance
auto ptr10874 = reinterpret_cast<void (*)(void *, void *)>(&ptr10406);
env10405 = allocate_env_space(encode_int((s32)6));
void* id8711 = make_closure(reinterpret_cast<void *>(ptr10874), env10405);

//setting env list
set_env(env10405, encode_int((s32)1), cdr);
set_env(env10405, encode_int((s32)2), loop);
set_env(env10405, encode_int((s32)3), map1);
set_env(env10405, encode_int((s32)4), equal_u63);
set_env(env10405, encode_int((s32)5), lst);
set_env(env10405, encode_int((s32)6), kont8469);


void* lst8480 = prim_cons(id8711, t8277);

//app-clo
void* cloPtr10875 = get_closure_ptr(op);
void* procEnv10876 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10875);
function_ptr(procEnv10876, lst8480);
}

void ptr10400(void* env10401, void* arglst9526)
{
void* kont8469 = get_env_value(env10401, encode_int((s32)8));
void* lst = get_env_value(env10401, encode_int((s32)7));
void* op = get_env_value(env10401, encode_int((s32)6));
void* equal_u63 = get_env_value(env10401, encode_int((s32)5));
void* map1 = get_env_value(env10401, encode_int((s32)4));
void* car = get_env_value(env10401, encode_int((s32)3));
void* loop = get_env_value(env10401, encode_int((s32)2));
void* cdr = get_env_value(env10401, encode_int((s32)1));
void* letk8473 = prim_car(arglst9526);
void* arg_lst9527 = prim_cdr(arglst9526);
void* t8275 = prim_car(arg_lst9527);
void* arg_lst9528 = prim_cdr(arg_lst9527);

//if-clause
u64 if_guard10877 = reinterpret_cast<u64>(is_true(t8275));
if(if_guard10877 == 1)
{

//creating new closure instance
auto ptr10878 = reinterpret_cast<void (*)(void *, void *)>(&ptr10402);
env10401 = allocate_env_space(encode_int((s32)2));
void* id8709 = make_closure(reinterpret_cast<void *>(ptr10878), env10401);

//setting env list
set_env(env10401, encode_int((s32)1), op);
set_env(env10401, encode_int((s32)2), kont8469);


void* oldarg9532 = encode_null();
void* newarg9533 = prim_cons(lst, oldarg9532);
void* newarg9534 = prim_cons(car, newarg9533);
void* newarg9535 = prim_cons(id8709, newarg9534);

//app-clo
void* cloPtr10879 = get_closure_ptr(map1);
void* procEnv10880 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10879);
function_ptr(procEnv10880, newarg9535);
}
else
{

//creating new closure instance
auto ptr10881 = reinterpret_cast<void (*)(void *, void *)>(&ptr10404);
env10401 = allocate_env_space(encode_int((s32)7));
void* id8710 = make_closure(reinterpret_cast<void *>(ptr10881), env10401);

//setting env list
set_env(env10401, encode_int((s32)1), cdr);
set_env(env10401, encode_int((s32)2), loop);
set_env(env10401, encode_int((s32)3), map1);
set_env(env10401, encode_int((s32)4), equal_u63);
set_env(env10401, encode_int((s32)5), op);
set_env(env10401, encode_int((s32)6), lst);
set_env(env10401, encode_int((s32)7), kont8469);


void* oldarg9562 = encode_null();
void* newarg9563 = prim_cons(lst, oldarg9562);
void* newarg9564 = prim_cons(car, newarg9563);
void* newarg9565 = prim_cons(id8710, newarg9564);

//app-clo
void* cloPtr10882 = get_closure_ptr(map1);
void* procEnv10883 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10882);
function_ptr(procEnv10883, newarg9565);
}

}

void ptr10398(void* env10399, void* arglst9523)
{
void* kont8469 = get_env_value(env10399, encode_int((s32)9));
void* lst = get_env_value(env10399, encode_int((s32)8));
void* op = get_env_value(env10399, encode_int((s32)7));
void* equal_u63 = get_env_value(env10399, encode_int((s32)6));
void* map1 = get_env_value(env10399, encode_int((s32)5));
void* car = get_env_value(env10399, encode_int((s32)4));
void* _u61 = get_env_value(env10399, encode_int((s32)3));
void* loop = get_env_value(env10399, encode_int((s32)2));
void* cdr = get_env_value(env10399, encode_int((s32)1));
void* letk8472 = prim_car(arglst9523);
void* arg_lst9524 = prim_cdr(arglst9523);
void* t8274 = prim_car(arg_lst9524);
void* arg_lst9525 = prim_cdr(arg_lst9524);

//creating new closure instance
auto ptr10884 = reinterpret_cast<void (*)(void *, void *)>(&ptr10400);
env10399 = allocate_env_space(encode_int((s32)8));
void* id8707 = make_closure(reinterpret_cast<void *>(ptr10884), env10399);

//setting env list
set_env(env10399, encode_int((s32)1), cdr);
set_env(env10399, encode_int((s32)2), loop);
set_env(env10399, encode_int((s32)3), car);
set_env(env10399, encode_int((s32)4), map1);
set_env(env10399, encode_int((s32)5), equal_u63);
set_env(env10399, encode_int((s32)6), op);
set_env(env10399, encode_int((s32)7), lst);
set_env(env10399, encode_int((s32)8), kont8469);


void* id8708 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9566 = encode_null();
void* newarg9567 = prim_cons(t8274, oldarg9566);
void* newarg9568 = prim_cons(id8708, newarg9567);
void* newarg9569 = prim_cons(id8707, newarg9568);

//app-clo
void* cloPtr10885 = get_closure_ptr(_u61);
void* procEnv10886 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10885);
function_ptr(procEnv10886, newarg9569);
}

void ptr10396(void* env10397, void* arglst9520)
{
void* kont8469 = get_env_value(env10397, encode_int((s32)10));
void* lst = get_env_value(env10397, encode_int((s32)9));
void* length = get_env_value(env10397, encode_int((s32)8));
void* op = get_env_value(env10397, encode_int((s32)7));
void* equal_u63 = get_env_value(env10397, encode_int((s32)6));
void* map1 = get_env_value(env10397, encode_int((s32)5));
void* car = get_env_value(env10397, encode_int((s32)4));
void* _u61 = get_env_value(env10397, encode_int((s32)3));
void* loop = get_env_value(env10397, encode_int((s32)2));
void* cdr = get_env_value(env10397, encode_int((s32)1));
void* letk8471 = prim_car(arglst9520);
void* arg_lst9521 = prim_cdr(arglst9520);
void* t8273 = prim_car(arg_lst9521);
void* arg_lst9522 = prim_cdr(arg_lst9521);

//creating new closure instance
auto ptr10887 = reinterpret_cast<void (*)(void *, void *)>(&ptr10398);
env10397 = allocate_env_space(encode_int((s32)9));
void* id8706 = make_closure(reinterpret_cast<void *>(ptr10887), env10397);

//setting env list
set_env(env10397, encode_int((s32)1), cdr);
set_env(env10397, encode_int((s32)2), loop);
set_env(env10397, encode_int((s32)3), _u61);
set_env(env10397, encode_int((s32)4), car);
set_env(env10397, encode_int((s32)5), map1);
set_env(env10397, encode_int((s32)6), equal_u63);
set_env(env10397, encode_int((s32)7), op);
set_env(env10397, encode_int((s32)8), lst);
set_env(env10397, encode_int((s32)9), kont8469);


void* oldarg9570 = encode_null();
void* newarg9571 = prim_cons(t8273, oldarg9570);
void* newarg9572 = prim_cons(id8706, newarg9571);

//app-clo
void* cloPtr10888 = get_closure_ptr(length);
void* procEnv10889 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10888);
function_ptr(procEnv10889, newarg9572);
}

void ptr10394(void* env10395, void* arglst9514)
{
void* kont8469 = get_env_value(env10395, encode_int((s32)11));
void* lst = get_env_value(env10395, encode_int((s32)10));
void* length = get_env_value(env10395, encode_int((s32)9));
void* op = get_env_value(env10395, encode_int((s32)8));
void* equal_u63 = get_env_value(env10395, encode_int((s32)7));
void* map1 = get_env_value(env10395, encode_int((s32)6));
void* car = get_env_value(env10395, encode_int((s32)5));
void* loop = get_env_value(env10395, encode_int((s32)4));
void* cdr = get_env_value(env10395, encode_int((s32)3));
void* cdar = get_env_value(env10395, encode_int((s32)2));
void* _u61 = get_env_value(env10395, encode_int((s32)1));
void* letk8470 = prim_car(arglst9514);
void* arg_lst9515 = prim_cdr(arglst9514);
void* t8272 = prim_car(arg_lst9515);
void* arg_lst9516 = prim_cdr(arg_lst9515);

//if-clause
u64 if_guard10890 = reinterpret_cast<u64>(is_true(t8272));
if(if_guard10890 == 1)
{
void* id8703 = encode_null();
void* id8704 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9517 = encode_null();
void* newarg9518 = prim_cons(id8704, oldarg9517);
void* newarg9519 = prim_cons(id8703, newarg9518);

//app-clo
void* cloPtr10891 = get_closure_ptr(kont8469);
void* procEnv10892 = get_env(kont8469);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10891);
function_ptr(procEnv10892, newarg9519);
}
else
{

//creating new closure instance
auto ptr10893 = reinterpret_cast<void (*)(void *, void *)>(&ptr10396);
env10395 = allocate_env_space(encode_int((s32)10));
void* id8705 = make_closure(reinterpret_cast<void *>(ptr10893), env10395);

//setting env list
set_env(env10395, encode_int((s32)1), cdr);
set_env(env10395, encode_int((s32)2), loop);
set_env(env10395, encode_int((s32)3), _u61);
set_env(env10395, encode_int((s32)4), car);
set_env(env10395, encode_int((s32)5), map1);
set_env(env10395, encode_int((s32)6), equal_u63);
set_env(env10395, encode_int((s32)7), op);
set_env(env10395, encode_int((s32)8), length);
set_env(env10395, encode_int((s32)9), lst);
set_env(env10395, encode_int((s32)10), kont8469);


void* oldarg9573 = encode_null();
void* newarg9574 = prim_cons(lst, oldarg9573);
void* newarg9575 = prim_cons(id8705, newarg9574);

//app-clo
void* cloPtr10894 = get_closure_ptr(cdar);
void* procEnv10895 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10894);
function_ptr(procEnv10895, newarg9575);
}

}

void ptr10422(void* env10423, void* arglst9597)
{
void* kont8469 = get_env_value(env10423, encode_int((s32)2));
void* op = get_env_value(env10423, encode_int((s32)1));
void* letk8474 = prim_car(arglst9597);
void* arg_lst9598 = prim_cdr(arglst9597);
void* t8276 = prim_car(arg_lst9598);
void* arg_lst9599 = prim_cdr(arg_lst9598);
void* lst8475 = prim_cons(kont8469, t8276);

//app-clo
void* cloPtr10896 = get_closure_ptr(op);
void* procEnv10897 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10896);
function_ptr(procEnv10897, lst8475);
}

void ptr10430(void* env10431, void* arglst9616)
{
void* loop = get_env_value(env10431, encode_int((s32)2));
void* kont8469 = get_env_value(env10431, encode_int((s32)1));
void* letk8479 = prim_car(arglst9616);
void* arg_lst9617 = prim_cdr(arglst9616);
void* t8280 = prim_car(arg_lst9617);
void* arg_lst9618 = prim_cdr(arg_lst9617);
void* oldarg9619 = encode_null();
void* newarg9620 = prim_cons(t8280, oldarg9619);
void* newarg9621 = prim_cons(kont8469, newarg9620);

//app-clo
void* cloPtr10898 = get_closure_ptr(loop);
void* procEnv10899 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10898);
function_ptr(procEnv10899, newarg9621);
}

void ptr10428(void* env10429, void* arglst9610)
{
void* kont8469 = get_env_value(env10429, encode_int((s32)5));
void* lst = get_env_value(env10429, encode_int((s32)4));
void* map1 = get_env_value(env10429, encode_int((s32)3));
void* loop = get_env_value(env10429, encode_int((s32)2));
void* cdr = get_env_value(env10429, encode_int((s32)1));
void* letk8478 = prim_car(arglst9610);
void* arg_lst9611 = prim_cdr(arglst9610);
void* t8279 = prim_car(arg_lst9611);
void* arg_lst9612 = prim_cdr(arg_lst9611);

//if-clause
u64 if_guard10900 = reinterpret_cast<u64>(is_true(t8279));
if(if_guard10900 == 1)
{
void* id8730 = encode_null();
void* id8731 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9613 = encode_null();
void* newarg9614 = prim_cons(id8731, oldarg9613);
void* newarg9615 = prim_cons(id8730, newarg9614);

//app-clo
void* cloPtr10901 = get_closure_ptr(kont8469);
void* procEnv10902 = get_env(kont8469);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10901);
function_ptr(procEnv10902, newarg9615);
}
else
{

//creating new closure instance
auto ptr10903 = reinterpret_cast<void (*)(void *, void *)>(&ptr10430);
env10429 = allocate_env_space(encode_int((s32)2));
void* id8732 = make_closure(reinterpret_cast<void *>(ptr10903), env10429);

//setting env list
set_env(env10429, encode_int((s32)1), kont8469);
set_env(env10429, encode_int((s32)2), loop);


void* oldarg9622 = encode_null();
void* newarg9623 = prim_cons(lst, oldarg9622);
void* newarg9624 = prim_cons(cdr, newarg9623);
void* newarg9625 = prim_cons(id8732, newarg9624);

//app-clo
void* cloPtr10904 = get_closure_ptr(map1);
void* procEnv10905 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10904);
function_ptr(procEnv10905, newarg9625);
}

}

void ptr10426(void* env10427, void* arglst9607)
{
void* kont8469 = get_env_value(env10427, encode_int((s32)6));
void* lst = get_env_value(env10427, encode_int((s32)5));
void* equal_u63 = get_env_value(env10427, encode_int((s32)4));
void* map1 = get_env_value(env10427, encode_int((s32)3));
void* loop = get_env_value(env10427, encode_int((s32)2));
void* cdr = get_env_value(env10427, encode_int((s32)1));
void* letk8477 = prim_car(arglst9607);
void* arg_lst9608 = prim_cdr(arglst9607);
void* t8278 = prim_car(arg_lst9608);
void* arg_lst9609 = prim_cdr(arg_lst9608);

//creating new closure instance
auto ptr10906 = reinterpret_cast<void (*)(void *, void *)>(&ptr10428);
env10427 = allocate_env_space(encode_int((s32)5));
void* id8728 = make_closure(reinterpret_cast<void *>(ptr10906), env10427);

//setting env list
set_env(env10427, encode_int((s32)1), cdr);
set_env(env10427, encode_int((s32)2), loop);
set_env(env10427, encode_int((s32)3), map1);
set_env(env10427, encode_int((s32)4), lst);
set_env(env10427, encode_int((s32)5), kont8469);


void* id8729 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9626 = encode_null();
void* newarg9627 = prim_cons(t8278, oldarg9626);
void* newarg9628 = prim_cons(id8729, newarg9627);
void* newarg9629 = prim_cons(id8728, newarg9628);

//app-clo
void* cloPtr10907 = get_closure_ptr(equal_u63);
void* procEnv10908 = get_env(equal_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10907);
function_ptr(procEnv10908, newarg9629);
}

void ptr10424(void* env10425, void* arglst9604)
{
void* kont8469 = get_env_value(env10425, encode_int((s32)7));
void* lst = get_env_value(env10425, encode_int((s32)6));
void* op = get_env_value(env10425, encode_int((s32)5));
void* equal_u63 = get_env_value(env10425, encode_int((s32)4));
void* map1 = get_env_value(env10425, encode_int((s32)3));
void* loop = get_env_value(env10425, encode_int((s32)2));
void* cdr = get_env_value(env10425, encode_int((s32)1));
void* letk8476 = prim_car(arglst9604);
void* arg_lst9605 = prim_cdr(arglst9604);
void* t8277 = prim_car(arg_lst9605);
void* arg_lst9606 = prim_cdr(arg_lst9605);

//creating new closure instance
auto ptr10909 = reinterpret_cast<void (*)(void *, void *)>(&ptr10426);
env10425 = allocate_env_space(encode_int((s32)6));
void* id8727 = make_closure(reinterpret_cast<void *>(ptr10909), env10425);

//setting env list
set_env(env10425, encode_int((s32)1), cdr);
set_env(env10425, encode_int((s32)2), loop);
set_env(env10425, encode_int((s32)3), map1);
set_env(env10425, encode_int((s32)4), equal_u63);
set_env(env10425, encode_int((s32)5), lst);
set_env(env10425, encode_int((s32)6), kont8469);


void* lst8480 = prim_cons(id8727, t8277);

//app-clo
void* cloPtr10910 = get_closure_ptr(op);
void* procEnv10911 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10910);
function_ptr(procEnv10911, lst8480);
}

void ptr10420(void* env10421, void* arglst9594)
{
void* kont8469 = get_env_value(env10421, encode_int((s32)8));
void* lst = get_env_value(env10421, encode_int((s32)7));
void* op = get_env_value(env10421, encode_int((s32)6));
void* equal_u63 = get_env_value(env10421, encode_int((s32)5));
void* map1 = get_env_value(env10421, encode_int((s32)4));
void* car = get_env_value(env10421, encode_int((s32)3));
void* loop = get_env_value(env10421, encode_int((s32)2));
void* cdr = get_env_value(env10421, encode_int((s32)1));
void* letk8473 = prim_car(arglst9594);
void* arg_lst9595 = prim_cdr(arglst9594);
void* t8275 = prim_car(arg_lst9595);
void* arg_lst9596 = prim_cdr(arg_lst9595);

//if-clause
u64 if_guard10912 = reinterpret_cast<u64>(is_true(t8275));
if(if_guard10912 == 1)
{

//creating new closure instance
auto ptr10913 = reinterpret_cast<void (*)(void *, void *)>(&ptr10422);
env10421 = allocate_env_space(encode_int((s32)2));
void* id8725 = make_closure(reinterpret_cast<void *>(ptr10913), env10421);

//setting env list
set_env(env10421, encode_int((s32)1), op);
set_env(env10421, encode_int((s32)2), kont8469);


void* oldarg9600 = encode_null();
void* newarg9601 = prim_cons(lst, oldarg9600);
void* newarg9602 = prim_cons(car, newarg9601);
void* newarg9603 = prim_cons(id8725, newarg9602);

//app-clo
void* cloPtr10914 = get_closure_ptr(map1);
void* procEnv10915 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10914);
function_ptr(procEnv10915, newarg9603);
}
else
{

//creating new closure instance
auto ptr10916 = reinterpret_cast<void (*)(void *, void *)>(&ptr10424);
env10421 = allocate_env_space(encode_int((s32)7));
void* id8726 = make_closure(reinterpret_cast<void *>(ptr10916), env10421);

//setting env list
set_env(env10421, encode_int((s32)1), cdr);
set_env(env10421, encode_int((s32)2), loop);
set_env(env10421, encode_int((s32)3), map1);
set_env(env10421, encode_int((s32)4), equal_u63);
set_env(env10421, encode_int((s32)5), op);
set_env(env10421, encode_int((s32)6), lst);
set_env(env10421, encode_int((s32)7), kont8469);


void* oldarg9630 = encode_null();
void* newarg9631 = prim_cons(lst, oldarg9630);
void* newarg9632 = prim_cons(car, newarg9631);
void* newarg9633 = prim_cons(id8726, newarg9632);

//app-clo
void* cloPtr10917 = get_closure_ptr(map1);
void* procEnv10918 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10917);
function_ptr(procEnv10918, newarg9633);
}

}

void ptr10418(void* env10419, void* arglst9591)
{
void* kont8469 = get_env_value(env10419, encode_int((s32)9));
void* lst = get_env_value(env10419, encode_int((s32)8));
void* op = get_env_value(env10419, encode_int((s32)7));
void* equal_u63 = get_env_value(env10419, encode_int((s32)6));
void* map1 = get_env_value(env10419, encode_int((s32)5));
void* car = get_env_value(env10419, encode_int((s32)4));
void* _u61 = get_env_value(env10419, encode_int((s32)3));
void* loop = get_env_value(env10419, encode_int((s32)2));
void* cdr = get_env_value(env10419, encode_int((s32)1));
void* letk8472 = prim_car(arglst9591);
void* arg_lst9592 = prim_cdr(arglst9591);
void* t8274 = prim_car(arg_lst9592);
void* arg_lst9593 = prim_cdr(arg_lst9592);

//creating new closure instance
auto ptr10919 = reinterpret_cast<void (*)(void *, void *)>(&ptr10420);
env10419 = allocate_env_space(encode_int((s32)8));
void* id8723 = make_closure(reinterpret_cast<void *>(ptr10919), env10419);

//setting env list
set_env(env10419, encode_int((s32)1), cdr);
set_env(env10419, encode_int((s32)2), loop);
set_env(env10419, encode_int((s32)3), car);
set_env(env10419, encode_int((s32)4), map1);
set_env(env10419, encode_int((s32)5), equal_u63);
set_env(env10419, encode_int((s32)6), op);
set_env(env10419, encode_int((s32)7), lst);
set_env(env10419, encode_int((s32)8), kont8469);


void* id8724 = reinterpret_cast<void *>(encode_int((s32)0));
void* oldarg9634 = encode_null();
void* newarg9635 = prim_cons(t8274, oldarg9634);
void* newarg9636 = prim_cons(id8724, newarg9635);
void* newarg9637 = prim_cons(id8723, newarg9636);

//app-clo
void* cloPtr10920 = get_closure_ptr(_u61);
void* procEnv10921 = get_env(_u61);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10920);
function_ptr(procEnv10921, newarg9637);
}

void ptr10416(void* env10417, void* arglst9588)
{
void* kont8469 = get_env_value(env10417, encode_int((s32)10));
void* lst = get_env_value(env10417, encode_int((s32)9));
void* length = get_env_value(env10417, encode_int((s32)8));
void* op = get_env_value(env10417, encode_int((s32)7));
void* equal_u63 = get_env_value(env10417, encode_int((s32)6));
void* map1 = get_env_value(env10417, encode_int((s32)5));
void* car = get_env_value(env10417, encode_int((s32)4));
void* _u61 = get_env_value(env10417, encode_int((s32)3));
void* loop = get_env_value(env10417, encode_int((s32)2));
void* cdr = get_env_value(env10417, encode_int((s32)1));
void* letk8471 = prim_car(arglst9588);
void* arg_lst9589 = prim_cdr(arglst9588);
void* t8273 = prim_car(arg_lst9589);
void* arg_lst9590 = prim_cdr(arg_lst9589);

//creating new closure instance
auto ptr10922 = reinterpret_cast<void (*)(void *, void *)>(&ptr10418);
env10417 = allocate_env_space(encode_int((s32)9));
void* id8722 = make_closure(reinterpret_cast<void *>(ptr10922), env10417);

//setting env list
set_env(env10417, encode_int((s32)1), cdr);
set_env(env10417, encode_int((s32)2), loop);
set_env(env10417, encode_int((s32)3), _u61);
set_env(env10417, encode_int((s32)4), car);
set_env(env10417, encode_int((s32)5), map1);
set_env(env10417, encode_int((s32)6), equal_u63);
set_env(env10417, encode_int((s32)7), op);
set_env(env10417, encode_int((s32)8), lst);
set_env(env10417, encode_int((s32)9), kont8469);


void* oldarg9638 = encode_null();
void* newarg9639 = prim_cons(t8273, oldarg9638);
void* newarg9640 = prim_cons(id8722, newarg9639);

//app-clo
void* cloPtr10923 = get_closure_ptr(length);
void* procEnv10924 = get_env(length);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10923);
function_ptr(procEnv10924, newarg9640);
}

void ptr10414(void* env10415, void* arglst9582)
{
void* kont8469 = get_env_value(env10415, encode_int((s32)11));
void* lst = get_env_value(env10415, encode_int((s32)10));
void* length = get_env_value(env10415, encode_int((s32)9));
void* op = get_env_value(env10415, encode_int((s32)8));
void* equal_u63 = get_env_value(env10415, encode_int((s32)7));
void* map1 = get_env_value(env10415, encode_int((s32)6));
void* car = get_env_value(env10415, encode_int((s32)5));
void* loop = get_env_value(env10415, encode_int((s32)4));
void* cdr = get_env_value(env10415, encode_int((s32)3));
void* cdar = get_env_value(env10415, encode_int((s32)2));
void* _u61 = get_env_value(env10415, encode_int((s32)1));
void* letk8470 = prim_car(arglst9582);
void* arg_lst9583 = prim_cdr(arglst9582);
void* t8272 = prim_car(arg_lst9583);
void* arg_lst9584 = prim_cdr(arg_lst9583);

//if-clause
u64 if_guard10925 = reinterpret_cast<u64>(is_true(t8272));
if(if_guard10925 == 1)
{
void* id8719 = encode_null();
void* id8720 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9585 = encode_null();
void* newarg9586 = prim_cons(id8720, oldarg9585);
void* newarg9587 = prim_cons(id8719, newarg9586);

//app-clo
void* cloPtr10926 = get_closure_ptr(kont8469);
void* procEnv10927 = get_env(kont8469);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10926);
function_ptr(procEnv10927, newarg9587);
}
else
{

//creating new closure instance
auto ptr10928 = reinterpret_cast<void (*)(void *, void *)>(&ptr10416);
env10415 = allocate_env_space(encode_int((s32)10));
void* id8721 = make_closure(reinterpret_cast<void *>(ptr10928), env10415);

//setting env list
set_env(env10415, encode_int((s32)1), cdr);
set_env(env10415, encode_int((s32)2), loop);
set_env(env10415, encode_int((s32)3), _u61);
set_env(env10415, encode_int((s32)4), car);
set_env(env10415, encode_int((s32)5), map1);
set_env(env10415, encode_int((s32)6), equal_u63);
set_env(env10415, encode_int((s32)7), op);
set_env(env10415, encode_int((s32)8), length);
set_env(env10415, encode_int((s32)9), lst);
set_env(env10415, encode_int((s32)10), kont8469);


void* oldarg9641 = encode_null();
void* newarg9642 = prim_cons(lst, oldarg9641);
void* newarg9643 = prim_cons(id8721, newarg9642);

//app-clo
void* cloPtr10929 = get_closure_ptr(cdar);
void* procEnv10930 = get_env(cdar);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10929);
function_ptr(procEnv10930, newarg9643);
}

}

void ptr10412(void* env10413, void* arglst9579)
{
void* kont8469 = get_env_value(env10413, encode_int((s32)12));
void* lst = get_env_value(env10413, encode_int((s32)11));
void* op = get_env_value(env10413, encode_int((s32)10));
void* equal_u63 = get_env_value(env10413, encode_int((s32)9));
void* map1 = get_env_value(env10413, encode_int((s32)8));
void* car = get_env_value(env10413, encode_int((s32)7));
void* loop = get_env_value(env10413, encode_int((s32)6));
void* cdr = get_env_value(env10413, encode_int((s32)5));
void* null_u63 = get_env_value(env10413, encode_int((s32)4));
void* length = get_env_value(env10413, encode_int((s32)3));
void* cdar = get_env_value(env10413, encode_int((s32)2));
void* _u61 = get_env_value(env10413, encode_int((s32)1));
void* letk8482 = prim_car(arglst9579);
void* arg_lst9580 = prim_cdr(arglst9579);
void* t8271 = prim_car(arg_lst9580);
void* arg_lst9581 = prim_cdr(arg_lst9580);

//creating new closure instance
auto ptr10931 = reinterpret_cast<void (*)(void *, void *)>(&ptr10414);
env10413 = allocate_env_space(encode_int((s32)11));
void* id8718 = make_closure(reinterpret_cast<void *>(ptr10931), env10413);

//setting env list
set_env(env10413, encode_int((s32)1), _u61);
set_env(env10413, encode_int((s32)2), cdar);
set_env(env10413, encode_int((s32)3), cdr);
set_env(env10413, encode_int((s32)4), loop);
set_env(env10413, encode_int((s32)5), car);
set_env(env10413, encode_int((s32)6), map1);
set_env(env10413, encode_int((s32)7), equal_u63);
set_env(env10413, encode_int((s32)8), op);
set_env(env10413, encode_int((s32)9), length);
set_env(env10413, encode_int((s32)10), lst);
set_env(env10413, encode_int((s32)11), kont8469);


void* oldarg9644 = encode_null();
void* newarg9645 = prim_cons(t8271, oldarg9644);
void* newarg9646 = prim_cons(id8718, newarg9645);

//app-clo
void* cloPtr10932 = get_closure_ptr(null_u63);
void* procEnv10933 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10932);
function_ptr(procEnv10933, newarg9646);
}

void ptr10392(void* env10393, void* arglst9511)
{
void* kont8469 = get_env_value(env10393, encode_int((s32)12));
void* lst = get_env_value(env10393, encode_int((s32)11));
void* op = get_env_value(env10393, encode_int((s32)10));
void* equal_u63 = get_env_value(env10393, encode_int((s32)9));
void* map1 = get_env_value(env10393, encode_int((s32)8));
void* car = get_env_value(env10393, encode_int((s32)7));
void* loop = get_env_value(env10393, encode_int((s32)6));
void* cdr = get_env_value(env10393, encode_int((s32)5));
void* null_u63 = get_env_value(env10393, encode_int((s32)4));
void* length = get_env_value(env10393, encode_int((s32)3));
void* cdar = get_env_value(env10393, encode_int((s32)2));
void* _u61 = get_env_value(env10393, encode_int((s32)1));
void* letk8481 = prim_car(arglst9511);
void* arg_lst9512 = prim_cdr(arglst9511);
void* or8237 = prim_car(arg_lst9512);
void* arg_lst9513 = prim_cdr(arg_lst9512);

//if-clause
u64 if_guard10934 = reinterpret_cast<u64>(is_true(or8237));
if(if_guard10934 == 1)
{

//creating new closure instance
auto ptr10935 = reinterpret_cast<void (*)(void *, void *)>(&ptr10394);
env10393 = allocate_env_space(encode_int((s32)11));
void* id8701 = make_closure(reinterpret_cast<void *>(ptr10935), env10393);

//setting env list
set_env(env10393, encode_int((s32)1), _u61);
set_env(env10393, encode_int((s32)2), cdar);
set_env(env10393, encode_int((s32)3), cdr);
set_env(env10393, encode_int((s32)4), loop);
set_env(env10393, encode_int((s32)5), car);
set_env(env10393, encode_int((s32)6), map1);
set_env(env10393, encode_int((s32)7), equal_u63);
set_env(env10393, encode_int((s32)8), op);
set_env(env10393, encode_int((s32)9), length);
set_env(env10393, encode_int((s32)10), lst);
set_env(env10393, encode_int((s32)11), kont8469);


void* id8702 = encode_null();
void* oldarg9576 = encode_null();
void* newarg9577 = prim_cons(or8237, oldarg9576);
void* newarg9578 = prim_cons(id8702, newarg9577);

//app-clo
void* cloPtr10936 = get_closure_ptr(id8701);
void* procEnv10937 = get_env(id8701);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10936);
function_ptr(procEnv10937, newarg9578);
}
else
{

//creating new closure instance
auto ptr10938 = reinterpret_cast<void (*)(void *, void *)>(&ptr10412);
env10393 = allocate_env_space(encode_int((s32)12));
void* id8717 = make_closure(reinterpret_cast<void *>(ptr10938), env10393);

//setting env list
set_env(env10393, encode_int((s32)1), _u61);
set_env(env10393, encode_int((s32)2), cdar);
set_env(env10393, encode_int((s32)3), length);
set_env(env10393, encode_int((s32)4), null_u63);
set_env(env10393, encode_int((s32)5), cdr);
set_env(env10393, encode_int((s32)6), loop);
set_env(env10393, encode_int((s32)7), car);
set_env(env10393, encode_int((s32)8), map1);
set_env(env10393, encode_int((s32)9), equal_u63);
set_env(env10393, encode_int((s32)10), op);
set_env(env10393, encode_int((s32)11), lst);
set_env(env10393, encode_int((s32)12), kont8469);


void* oldarg9647 = encode_null();
void* newarg9648 = prim_cons(lst, oldarg9647);
void* newarg9649 = prim_cons(id8717, newarg9648);

//app-clo
void* cloPtr10939 = get_closure_ptr(car);
void* procEnv10940 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10939);
function_ptr(procEnv10940, newarg9649);
}

}

void ptr10390(void* env10391, void* arglst9508)
{
void* op = get_env_value(env10391, encode_int((s32)10));
void* equal_u63 = get_env_value(env10391, encode_int((s32)9));
void* map1 = get_env_value(env10391, encode_int((s32)8));
void* car = get_env_value(env10391, encode_int((s32)7));
void* loop = get_env_value(env10391, encode_int((s32)6));
void* cdr = get_env_value(env10391, encode_int((s32)5));
void* null_u63 = get_env_value(env10391, encode_int((s32)4));
void* length = get_env_value(env10391, encode_int((s32)3));
void* cdar = get_env_value(env10391, encode_int((s32)2));
void* _u61 = get_env_value(env10391, encode_int((s32)1));
void* kont8469 = prim_car(arglst9508);
void* arg_lst9509 = prim_cdr(arglst9508);
void* lst = prim_car(arg_lst9509);
void* arg_lst9510 = prim_cdr(arg_lst9509);

//creating new closure instance
auto ptr10941 = reinterpret_cast<void (*)(void *, void *)>(&ptr10392);
env10391 = allocate_env_space(encode_int((s32)12));
void* id8700 = make_closure(reinterpret_cast<void *>(ptr10941), env10391);

//setting env list
set_env(env10391, encode_int((s32)1), _u61);
set_env(env10391, encode_int((s32)2), cdar);
set_env(env10391, encode_int((s32)3), length);
set_env(env10391, encode_int((s32)4), null_u63);
set_env(env10391, encode_int((s32)5), cdr);
set_env(env10391, encode_int((s32)6), loop);
set_env(env10391, encode_int((s32)7), car);
set_env(env10391, encode_int((s32)8), map1);
set_env(env10391, encode_int((s32)9), equal_u63);
set_env(env10391, encode_int((s32)10), op);
set_env(env10391, encode_int((s32)11), lst);
set_env(env10391, encode_int((s32)12), kont8469);


void* oldarg9650 = encode_null();
void* newarg9651 = prim_cons(lst, oldarg9650);
void* newarg9652 = prim_cons(id8700, newarg9651);

//app-clo
void* cloPtr10942 = get_closure_ptr(null_u63);
void* procEnv10943 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10942);
function_ptr(procEnv10943, newarg9652);
}

void ptr10388(void* env10389, void* arglst9505)
{
void* cdr = get_env_value(env10389, encode_int((s32)9));
void* op = get_env_value(env10389, encode_int((s32)8));
void* equal_u63 = get_env_value(env10389, encode_int((s32)7));
void* map1 = get_env_value(env10389, encode_int((s32)6));
void* car = get_env_value(env10389, encode_int((s32)5));
void* null_u63 = get_env_value(env10389, encode_int((s32)4));
void* length = get_env_value(env10389, encode_int((s32)3));
void* cdar = get_env_value(env10389, encode_int((s32)2));
void* _u61 = get_env_value(env10389, encode_int((s32)1));
void* kont8468 = prim_car(arglst9505);
void* arg_lst9506 = prim_cdr(arglst9505);
void* loop = prim_car(arg_lst9506);
void* arg_lst9507 = prim_cdr(arg_lst9506);
void* id8698 = encode_null();

//creating new closure instance
auto ptr10944 = reinterpret_cast<void (*)(void *, void *)>(&ptr10390);
env10389 = allocate_env_space(encode_int((s32)10));
void* id8699 = make_closure(reinterpret_cast<void *>(ptr10944), env10389);

//setting env list
set_env(env10389, encode_int((s32)1), _u61);
set_env(env10389, encode_int((s32)2), cdar);
set_env(env10389, encode_int((s32)3), length);
set_env(env10389, encode_int((s32)4), null_u63);
set_env(env10389, encode_int((s32)5), cdr);
set_env(env10389, encode_int((s32)6), loop);
set_env(env10389, encode_int((s32)7), car);
set_env(env10389, encode_int((s32)8), map1);
set_env(env10389, encode_int((s32)9), equal_u63);
set_env(env10389, encode_int((s32)10), op);


void* oldarg9653 = encode_null();
void* newarg9654 = prim_cons(id8699, oldarg9653);
void* newarg9655 = prim_cons(id8698, newarg9654);

//app-clo
void* cloPtr10945 = get_closure_ptr(kont8468);
void* procEnv10946 = get_env(kont8468);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10945);
function_ptr(procEnv10946, newarg9655);
}

void ptr10386(void* env10387, void* arglst9499)
{
void* lst = get_env_value(env10387, encode_int((s32)2));
void* kkont8462 = get_env_value(env10387, encode_int((s32)1));
void* letk8467 = prim_car(arglst9499);
void* arg_lst9500 = prim_cdr(arglst9499);
void* loop = prim_car(arg_lst9500);
void* arg_lst9501 = prim_cdr(arg_lst9500);
void* oldarg9502 = encode_null();
void* newarg9503 = prim_cons(lst, oldarg9502);
void* newarg9504 = prim_cons(kkont8462, newarg9503);

//app-clo
void* cloPtr10947 = get_closure_ptr(loop);
void* procEnv10948 = get_env(loop);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10947);
function_ptr(procEnv10948, newarg9504);
}

void ptr10384(void* env10385, void* arglst9496)
{
void* cdr = get_env_value(env10385, encode_int((s32)11));
void* Ycomb = get_env_value(env10385, encode_int((s32)10));
void* op = get_env_value(env10385, encode_int((s32)9));
void* equal_u63 = get_env_value(env10385, encode_int((s32)8));
void* kkont8462 = get_env_value(env10385, encode_int((s32)7));
void* map1 = get_env_value(env10385, encode_int((s32)6));
void* car = get_env_value(env10385, encode_int((s32)5));
void* null_u63 = get_env_value(env10385, encode_int((s32)4));
void* length = get_env_value(env10385, encode_int((s32)3));
void* cdar = get_env_value(env10385, encode_int((s32)2));
void* _u61 = get_env_value(env10385, encode_int((s32)1));
void* letk8466 = prim_car(arglst9496);
void* arg_lst9497 = prim_cdr(arglst9496);
void* lst = prim_car(arg_lst9497);
void* arg_lst9498 = prim_cdr(arg_lst9497);

//creating new closure instance
auto ptr10949 = reinterpret_cast<void (*)(void *, void *)>(&ptr10386);
env10385 = allocate_env_space(encode_int((s32)2));
void* id8696 = make_closure(reinterpret_cast<void *>(ptr10949), env10385);

//setting env list
set_env(env10385, encode_int((s32)1), kkont8462);
set_env(env10385, encode_int((s32)2), lst);



//creating new closure instance
auto ptr10950 = reinterpret_cast<void (*)(void *, void *)>(&ptr10388);
env10385 = allocate_env_space(encode_int((s32)9));
void* id8697 = make_closure(reinterpret_cast<void *>(ptr10950), env10385);

//setting env list
set_env(env10385, encode_int((s32)1), _u61);
set_env(env10385, encode_int((s32)2), cdar);
set_env(env10385, encode_int((s32)3), length);
set_env(env10385, encode_int((s32)4), null_u63);
set_env(env10385, encode_int((s32)5), car);
set_env(env10385, encode_int((s32)6), map1);
set_env(env10385, encode_int((s32)7), equal_u63);
set_env(env10385, encode_int((s32)8), op);
set_env(env10385, encode_int((s32)9), cdr);


void* oldarg9656 = encode_null();
void* newarg9657 = prim_cons(id8697, oldarg9656);
void* newarg9658 = prim_cons(id8696, newarg9657);

//app-clo
void* cloPtr10951 = get_closure_ptr(Ycomb);
void* procEnv10952 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10951);
function_ptr(procEnv10952, newarg9658);
}

void ptr10382(void* env10383, void* arglst9493)
{
void* cdr = get_env_value(env10383, encode_int((s32)11));
void* Ycomb = get_env_value(env10383, encode_int((s32)10));
void* op = get_env_value(env10383, encode_int((s32)9));
void* equal_u63 = get_env_value(env10383, encode_int((s32)8));
void* kkont8462 = get_env_value(env10383, encode_int((s32)7));
void* map1 = get_env_value(env10383, encode_int((s32)6));
void* car = get_env_value(env10383, encode_int((s32)5));
void* null_u63 = get_env_value(env10383, encode_int((s32)4));
void* length = get_env_value(env10383, encode_int((s32)3));
void* cdar = get_env_value(env10383, encode_int((s32)2));
void* _u61 = get_env_value(env10383, encode_int((s32)1));
void* letk8465 = prim_car(arglst9493);
void* arg_lst9494 = prim_cdr(arglst9493);
void* param_lst8236 = prim_car(arg_lst9494);
void* arg_lst9495 = prim_cdr(arg_lst9494);

//creating new closure instance
auto ptr10953 = reinterpret_cast<void (*)(void *, void *)>(&ptr10384);
env10383 = allocate_env_space(encode_int((s32)11));
void* id8694 = make_closure(reinterpret_cast<void *>(ptr10953), env10383);

//setting env list
set_env(env10383, encode_int((s32)1), _u61);
set_env(env10383, encode_int((s32)2), cdar);
set_env(env10383, encode_int((s32)3), length);
set_env(env10383, encode_int((s32)4), null_u63);
set_env(env10383, encode_int((s32)5), car);
set_env(env10383, encode_int((s32)6), map1);
set_env(env10383, encode_int((s32)7), kkont8462);
set_env(env10383, encode_int((s32)8), equal_u63);
set_env(env10383, encode_int((s32)9), op);
set_env(env10383, encode_int((s32)10), Ycomb);
set_env(env10383, encode_int((s32)11), cdr);


void* id8695 = encode_null();
void* oldarg9659 = encode_null();
void* newarg9660 = prim_cons(param_lst8236, oldarg9659);
void* newarg9661 = prim_cons(id8695, newarg9660);

//app-clo
void* cloPtr10954 = get_closure_ptr(id8694);
void* procEnv10955 = get_env(id8694);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10954);
function_ptr(procEnv10955, newarg9661);
}

void ptr10380(void* env10381, void* arglst9490)
{
void* cdr = get_env_value(env10381, encode_int((s32)11));
void* Ycomb = get_env_value(env10381, encode_int((s32)10));
void* equal_u63 = get_env_value(env10381, encode_int((s32)9));
void* param_lst8236 = get_env_value(env10381, encode_int((s32)8));
void* kkont8462 = get_env_value(env10381, encode_int((s32)7));
void* map1 = get_env_value(env10381, encode_int((s32)6));
void* car = get_env_value(env10381, encode_int((s32)5));
void* null_u63 = get_env_value(env10381, encode_int((s32)4));
void* length = get_env_value(env10381, encode_int((s32)3));
void* cdar = get_env_value(env10381, encode_int((s32)2));
void* _u61 = get_env_value(env10381, encode_int((s32)1));
void* letk8464 = prim_car(arglst9490);
void* arg_lst9491 = prim_cdr(arglst9490);
void* op = prim_car(arg_lst9491);
void* arg_lst9492 = prim_cdr(arg_lst9491);

//creating new closure instance
auto ptr10956 = reinterpret_cast<void (*)(void *, void *)>(&ptr10382);
env10381 = allocate_env_space(encode_int((s32)11));
void* id8693 = make_closure(reinterpret_cast<void *>(ptr10956), env10381);

//setting env list
set_env(env10381, encode_int((s32)1), _u61);
set_env(env10381, encode_int((s32)2), cdar);
set_env(env10381, encode_int((s32)3), length);
set_env(env10381, encode_int((s32)4), null_u63);
set_env(env10381, encode_int((s32)5), car);
set_env(env10381, encode_int((s32)6), map1);
set_env(env10381, encode_int((s32)7), kkont8462);
set_env(env10381, encode_int((s32)8), equal_u63);
set_env(env10381, encode_int((s32)9), op);
set_env(env10381, encode_int((s32)10), Ycomb);
set_env(env10381, encode_int((s32)11), cdr);


void* oldarg9662 = encode_null();
void* newarg9663 = prim_cons(param_lst8236, oldarg9662);
void* newarg9664 = prim_cons(id8693, newarg9663);

//app-clo
void* cloPtr10957 = get_closure_ptr(cdr);
void* procEnv10958 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10957);
function_ptr(procEnv10958, newarg9664);
}

void ptr10378(void* env10379, void* param_lst82368463)
{
void* cdr = get_env_value(env10379, encode_int((s32)9));
void* Ycomb = get_env_value(env10379, encode_int((s32)8));
void* equal_u63 = get_env_value(env10379, encode_int((s32)7));
void* map1 = get_env_value(env10379, encode_int((s32)6));
void* car = get_env_value(env10379, encode_int((s32)5));
void* null_u63 = get_env_value(env10379, encode_int((s32)4));
void* length = get_env_value(env10379, encode_int((s32)3));
void* cdar = get_env_value(env10379, encode_int((s32)2));
void* _u61 = get_env_value(env10379, encode_int((s32)1));
void* kkont8462 = prim_car(param_lst82368463);
void* param_lst8236 = prim_cdr(param_lst82368463);

//creating new closure instance
auto ptr10959 = reinterpret_cast<void (*)(void *, void *)>(&ptr10380);
env10379 = allocate_env_space(encode_int((s32)11));
void* id8692 = make_closure(reinterpret_cast<void *>(ptr10959), env10379);

//setting env list
set_env(env10379, encode_int((s32)1), _u61);
set_env(env10379, encode_int((s32)2), cdar);
set_env(env10379, encode_int((s32)3), length);
set_env(env10379, encode_int((s32)4), null_u63);
set_env(env10379, encode_int((s32)5), car);
set_env(env10379, encode_int((s32)6), map1);
set_env(env10379, encode_int((s32)7), kkont8462);
set_env(env10379, encode_int((s32)8), param_lst8236);
set_env(env10379, encode_int((s32)9), equal_u63);
set_env(env10379, encode_int((s32)10), Ycomb);
set_env(env10379, encode_int((s32)11), cdr);


void* oldarg9665 = encode_null();
void* newarg9666 = prim_cons(param_lst8236, oldarg9665);
void* newarg9667 = prim_cons(id8692, newarg9666);

//app-clo
void* cloPtr10960 = get_closure_ptr(car);
void* procEnv10961 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10960);
function_ptr(procEnv10961, newarg9667);
}

void ptr10376(void* env10377, void* arglst9487)
{
void* cdr = get_env_value(env10377, encode_int((s32)9));
void* Ycomb = get_env_value(env10377, encode_int((s32)8));
void* equal_u63 = get_env_value(env10377, encode_int((s32)7));
void* map1 = get_env_value(env10377, encode_int((s32)6));
void* car = get_env_value(env10377, encode_int((s32)5));
void* null_u63 = get_env_value(env10377, encode_int((s32)4));
void* length = get_env_value(env10377, encode_int((s32)3));
void* cdar = get_env_value(env10377, encode_int((s32)2));
void* _u61 = get_env_value(env10377, encode_int((s32)1));
void* kont8461 = prim_car(arglst9487);
void* arg_lst9488 = prim_cdr(arglst9487);
void* andmap = prim_car(arg_lst9488);
void* arg_lst9489 = prim_cdr(arg_lst9488);
void* id8690 = encode_null();

//creating new closure instance
auto ptr10962 = reinterpret_cast<void (*)(void *, void *)>(&ptr10378);
env10377 = allocate_env_space(encode_int((s32)9));
void* id8691 = make_closure(reinterpret_cast<void *>(ptr10962), env10377);

//setting env list
set_env(env10377, encode_int((s32)1), _u61);
set_env(env10377, encode_int((s32)2), cdar);
set_env(env10377, encode_int((s32)3), length);
set_env(env10377, encode_int((s32)4), null_u63);
set_env(env10377, encode_int((s32)5), car);
set_env(env10377, encode_int((s32)6), map1);
set_env(env10377, encode_int((s32)7), equal_u63);
set_env(env10377, encode_int((s32)8), Ycomb);
set_env(env10377, encode_int((s32)9), cdr);


void* oldarg9668 = encode_null();
void* newarg9669 = prim_cons(id8691, oldarg9668);
void* newarg9670 = prim_cons(id8690, newarg9669);

//app-clo
void* cloPtr10963 = get_closure_ptr(kont8461);
void* procEnv10964 = get_env(kont8461);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10963);
function_ptr(procEnv10964, newarg9670);
}

void ptr10464(void* env10465, void* arglst9431)
{
void* f = get_env_value(env10465, encode_int((s32)2));
void* kkont8443 = get_env_value(env10465, encode_int((s32)1));
void* letk8455 = prim_car(arglst9431);
void* arg_lst9432 = prim_cdr(arglst9431);
void* t8286 = prim_car(arg_lst9432);
void* arg_lst9433 = prim_cdr(arg_lst9432);
void* lst8456 = prim_cons(kkont8443, t8286);

//app-clo
void* cloPtr10965 = get_closure_ptr(f);
void* procEnv10966 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10965);
function_ptr(procEnv10966, lst8456);
}

void ptr10462(void* env10463, void* arglst9428)
{
void* f = get_env_value(env10463, encode_int((s32)4));
void* kkont8443 = get_env_value(env10463, encode_int((s32)3));
void* append1 = get_env_value(env10463, encode_int((s32)2));
void* xs = get_env_value(env10463, encode_int((s32)1));
void* letk8454 = prim_car(arglst9428);
void* arg_lst9429 = prim_cdr(arglst9428);
void* t8285 = prim_car(arg_lst9429);
void* arg_lst9430 = prim_cdr(arg_lst9429);

//creating new closure instance
auto ptr10967 = reinterpret_cast<void (*)(void *, void *)>(&ptr10464);
env10463 = allocate_env_space(encode_int((s32)2));
void* id8754 = make_closure(reinterpret_cast<void *>(ptr10967), env10463);

//setting env list
set_env(env10463, encode_int((s32)1), kkont8443);
set_env(env10463, encode_int((s32)2), f);


void* oldarg9434 = encode_null();
void* newarg9435 = prim_cons(t8285, oldarg9434);
void* newarg9436 = prim_cons(xs, newarg9435);
void* newarg9437 = prim_cons(id8754, newarg9436);

//app-clo
void* cloPtr10968 = get_closure_ptr(append1);
void* procEnv10969 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10968);
function_ptr(procEnv10969, newarg9437);
}

void ptr10460(void* env10461, void* arglst9425)
{
void* f = get_env_value(env10461, encode_int((s32)5));
void* kkont8443 = get_env_value(env10461, encode_int((s32)4));
void* append1 = get_env_value(env10461, encode_int((s32)3));
void* cons = get_env_value(env10461, encode_int((s32)2));
void* xs = get_env_value(env10461, encode_int((s32)1));
void* letk8453 = prim_car(arglst9425);
void* arg_lst9426 = prim_cdr(arglst9425);
void* acc_u43 = prim_car(arg_lst9426);
void* arg_lst9427 = prim_cdr(arg_lst9426);

//creating new closure instance
auto ptr10970 = reinterpret_cast<void (*)(void *, void *)>(&ptr10462);
env10461 = allocate_env_space(encode_int((s32)4));
void* id8752 = make_closure(reinterpret_cast<void *>(ptr10970), env10461);

//setting env list
set_env(env10461, encode_int((s32)1), xs);
set_env(env10461, encode_int((s32)2), append1);
set_env(env10461, encode_int((s32)3), kkont8443);
set_env(env10461, encode_int((s32)4), f);


void* id8753 = encode_null();
void* oldarg9438 = encode_null();
void* newarg9439 = prim_cons(id8753, oldarg9438);
void* newarg9440 = prim_cons(acc_u43, newarg9439);
void* newarg9441 = prim_cons(id8752, newarg9440);

//app-clo
void* cloPtr10971 = get_closure_ptr(cons);
void* procEnv10972 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10971);
function_ptr(procEnv10972, newarg9441);
}

void ptr10458(void* env10459, void* arglst9422)
{
void* foldr = get_env_value(env10459, encode_int((s32)6));
void* f = get_env_value(env10459, encode_int((s32)5));
void* kkont8443 = get_env_value(env10459, encode_int((s32)4));
void* append1 = get_env_value(env10459, encode_int((s32)3));
void* cons = get_env_value(env10459, encode_int((s32)2));
void* xs = get_env_value(env10459, encode_int((s32)1));
void* letk8459 = prim_car(arglst9422);
void* arg_lst9423 = prim_cdr(arglst9422);
void* t8284 = prim_car(arg_lst9423);
void* arg_lst9424 = prim_cdr(arg_lst9423);

//creating new closure instance
auto ptr10973 = reinterpret_cast<void (*)(void *, void *)>(&ptr10460);
env10459 = allocate_env_space(encode_int((s32)5));
void* id8751 = make_closure(reinterpret_cast<void *>(ptr10973), env10459);

//setting env list
set_env(env10459, encode_int((s32)1), xs);
set_env(env10459, encode_int((s32)2), cons);
set_env(env10459, encode_int((s32)3), append1);
set_env(env10459, encode_int((s32)4), kkont8443);
set_env(env10459, encode_int((s32)5), f);


void* lst8460 = prim_cons(id8751, t8284);

//app-clo
void* cloPtr10974 = get_closure_ptr(foldr);
void* procEnv10975 = get_env(foldr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10974);
function_ptr(procEnv10975, lst8460);
}

void ptr10456(void* env10457, void* arglst9419)
{
void* foldr = get_env_value(env10457, encode_int((s32)6));
void* f = get_env_value(env10457, encode_int((s32)5));
void* kkont8443 = get_env_value(env10457, encode_int((s32)4));
void* append1 = get_env_value(env10457, encode_int((s32)3));
void* cons = get_env_value(env10457, encode_int((s32)2));
void* xs = get_env_value(env10457, encode_int((s32)1));
void* letk8458 = prim_car(arglst9419);
void* arg_lst9420 = prim_cdr(arglst9419);
void* t8283 = prim_car(arg_lst9420);
void* arg_lst9421 = prim_cdr(arg_lst9420);

//creating new closure instance
auto ptr10976 = reinterpret_cast<void (*)(void *, void *)>(&ptr10458);
env10457 = allocate_env_space(encode_int((s32)6));
void* id8750 = make_closure(reinterpret_cast<void *>(ptr10976), env10457);

//setting env list
set_env(env10457, encode_int((s32)1), xs);
set_env(env10457, encode_int((s32)2), cons);
set_env(env10457, encode_int((s32)3), append1);
set_env(env10457, encode_int((s32)4), kkont8443);
set_env(env10457, encode_int((s32)5), f);
set_env(env10457, encode_int((s32)6), foldr);


void* oldarg9442 = encode_null();
void* newarg9443 = prim_cons(t8283, oldarg9442);
void* newarg9444 = prim_cons(f, newarg9443);
void* newarg9445 = prim_cons(id8750, newarg9444);

//app-clo
void* cloPtr10977 = get_closure_ptr(cons);
void* procEnv10978 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10977);
function_ptr(procEnv10978, newarg9445);
}

void ptr10454(void* env10455, void* arglst9416)
{
void* foldr = get_env_value(env10455, encode_int((s32)7));
void* f = get_env_value(env10455, encode_int((s32)6));
void* kkont8443 = get_env_value(env10455, encode_int((s32)5));
void* cons = get_env_value(env10455, encode_int((s32)4));
void* xs = get_env_value(env10455, encode_int((s32)3));
void* acc = get_env_value(env10455, encode_int((s32)2));
void* append1 = get_env_value(env10455, encode_int((s32)1));
void* letk8457 = prim_car(arglst9416);
void* arg_lst9417 = prim_cdr(arglst9416);
void* t8282 = prim_car(arg_lst9417);
void* arg_lst9418 = prim_cdr(arg_lst9417);

//creating new closure instance
auto ptr10979 = reinterpret_cast<void (*)(void *, void *)>(&ptr10456);
env10455 = allocate_env_space(encode_int((s32)6));
void* id8749 = make_closure(reinterpret_cast<void *>(ptr10979), env10455);

//setting env list
set_env(env10455, encode_int((s32)1), xs);
set_env(env10455, encode_int((s32)2), cons);
set_env(env10455, encode_int((s32)3), append1);
set_env(env10455, encode_int((s32)4), kkont8443);
set_env(env10455, encode_int((s32)5), f);
set_env(env10455, encode_int((s32)6), foldr);


void* oldarg9446 = encode_null();
void* newarg9447 = prim_cons(t8282, oldarg9446);
void* newarg9448 = prim_cons(acc, newarg9447);
void* newarg9449 = prim_cons(id8749, newarg9448);

//app-clo
void* cloPtr10980 = get_closure_ptr(cons);
void* procEnv10981 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10980);
function_ptr(procEnv10981, newarg9449);
}

void ptr10452(void* env10453, void* arglst9413)
{
void* foldr = get_env_value(env10453, encode_int((s32)7));
void* f = get_env_value(env10453, encode_int((s32)6));
void* kkont8443 = get_env_value(env10453, encode_int((s32)5));
void* cons = get_env_value(env10453, encode_int((s32)4));
void* xs = get_env_value(env10453, encode_int((s32)3));
void* acc = get_env_value(env10453, encode_int((s32)2));
void* append1 = get_env_value(env10453, encode_int((s32)1));
void* letk8452 = prim_car(arglst9413);
void* arg_lst9414 = prim_cdr(arglst9413);
void* rsts = prim_car(arg_lst9414);
void* arg_lst9415 = prim_cdr(arg_lst9414);

//creating new closure instance
auto ptr10982 = reinterpret_cast<void (*)(void *, void *)>(&ptr10454);
env10453 = allocate_env_space(encode_int((s32)7));
void* id8747 = make_closure(reinterpret_cast<void *>(ptr10982), env10453);

//setting env list
set_env(env10453, encode_int((s32)1), append1);
set_env(env10453, encode_int((s32)2), acc);
set_env(env10453, encode_int((s32)3), xs);
set_env(env10453, encode_int((s32)4), cons);
set_env(env10453, encode_int((s32)5), kkont8443);
set_env(env10453, encode_int((s32)6), f);
set_env(env10453, encode_int((s32)7), foldr);


void* id8748 = encode_null();
void* oldarg9450 = encode_null();
void* newarg9451 = prim_cons(id8748, oldarg9450);
void* newarg9452 = prim_cons(rsts, newarg9451);
void* newarg9453 = prim_cons(id8747, newarg9452);

//app-clo
void* cloPtr10983 = get_closure_ptr(append1);
void* procEnv10984 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10983);
function_ptr(procEnv10984, newarg9453);
}

void ptr10450(void* env10451, void* arglst9410)
{
void* cdr = get_env_value(env10451, encode_int((s32)9));
void* foldr = get_env_value(env10451, encode_int((s32)8));
void* f = get_env_value(env10451, encode_int((s32)7));
void* kkont8443 = get_env_value(env10451, encode_int((s32)6));
void* cons = get_env_value(env10451, encode_int((s32)5));
void* acc = get_env_value(env10451, encode_int((s32)4));
void* append1 = get_env_value(env10451, encode_int((s32)3));
void* map1 = get_env_value(env10451, encode_int((s32)2));
void* lsts = get_env_value(env10451, encode_int((s32)1));
void* letk8451 = prim_car(arglst9410);
void* arg_lst9411 = prim_cdr(arglst9410);
void* xs = prim_car(arg_lst9411);
void* arg_lst9412 = prim_cdr(arg_lst9411);

//creating new closure instance
auto ptr10985 = reinterpret_cast<void (*)(void *, void *)>(&ptr10452);
env10451 = allocate_env_space(encode_int((s32)7));
void* id8746 = make_closure(reinterpret_cast<void *>(ptr10985), env10451);

//setting env list
set_env(env10451, encode_int((s32)1), append1);
set_env(env10451, encode_int((s32)2), acc);
set_env(env10451, encode_int((s32)3), xs);
set_env(env10451, encode_int((s32)4), cons);
set_env(env10451, encode_int((s32)5), kkont8443);
set_env(env10451, encode_int((s32)6), f);
set_env(env10451, encode_int((s32)7), foldr);


void* oldarg9454 = encode_null();
void* newarg9455 = prim_cons(lsts, oldarg9454);
void* newarg9456 = prim_cons(cdr, newarg9455);
void* newarg9457 = prim_cons(id8746, newarg9456);

//app-clo
void* cloPtr10986 = get_closure_ptr(map1);
void* procEnv10987 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10986);
function_ptr(procEnv10987, newarg9457);
}

void ptr10448(void* env10449, void* arglst9404)
{
void* cdr = get_env_value(env10449, encode_int((s32)10));
void* foldr = get_env_value(env10449, encode_int((s32)9));
void* f = get_env_value(env10449, encode_int((s32)8));
void* kkont8443 = get_env_value(env10449, encode_int((s32)7));
void* car = get_env_value(env10449, encode_int((s32)6));
void* cons = get_env_value(env10449, encode_int((s32)5));
void* acc = get_env_value(env10449, encode_int((s32)4));
void* append1 = get_env_value(env10449, encode_int((s32)3));
void* map1 = get_env_value(env10449, encode_int((s32)2));
void* lsts = get_env_value(env10449, encode_int((s32)1));
void* letk8450 = prim_car(arglst9404);
void* arg_lst9405 = prim_cdr(arglst9404);
void* t8281 = prim_car(arg_lst9405);
void* arg_lst9406 = prim_cdr(arg_lst9405);

//if-clause
u64 if_guard10988 = reinterpret_cast<u64>(is_true(t8281));
if(if_guard10988 == 1)
{
void* id8744 = encode_null();
void* oldarg9407 = encode_null();
void* newarg9408 = prim_cons(acc, oldarg9407);
void* newarg9409 = prim_cons(id8744, newarg9408);

//app-clo
void* cloPtr10989 = get_closure_ptr(kkont8443);
void* procEnv10990 = get_env(kkont8443);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10989);
function_ptr(procEnv10990, newarg9409);
}
else
{

//creating new closure instance
auto ptr10991 = reinterpret_cast<void (*)(void *, void *)>(&ptr10450);
env10449 = allocate_env_space(encode_int((s32)9));
void* id8745 = make_closure(reinterpret_cast<void *>(ptr10991), env10449);

//setting env list
set_env(env10449, encode_int((s32)1), lsts);
set_env(env10449, encode_int((s32)2), map1);
set_env(env10449, encode_int((s32)3), append1);
set_env(env10449, encode_int((s32)4), acc);
set_env(env10449, encode_int((s32)5), cons);
set_env(env10449, encode_int((s32)6), kkont8443);
set_env(env10449, encode_int((s32)7), f);
set_env(env10449, encode_int((s32)8), foldr);
set_env(env10449, encode_int((s32)9), cdr);


void* oldarg9458 = encode_null();
void* newarg9459 = prim_cons(lsts, oldarg9458);
void* newarg9460 = prim_cons(car, newarg9459);
void* newarg9461 = prim_cons(id8745, newarg9460);

//app-clo
void* cloPtr10992 = get_closure_ptr(map1);
void* procEnv10993 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10992);
function_ptr(procEnv10993, newarg9461);
}

}

void ptr10446(void* env10447, void* arglst9401)
{
void* cdr = get_env_value(env10447, encode_int((s32)11));
void* foldr = get_env_value(env10447, encode_int((s32)10));
void* ormap = get_env_value(env10447, encode_int((s32)9));
void* kkont8443 = get_env_value(env10447, encode_int((s32)8));
void* map1 = get_env_value(env10447, encode_int((s32)7));
void* car = get_env_value(env10447, encode_int((s32)6));
void* cons = get_env_value(env10447, encode_int((s32)5));
void* f = get_env_value(env10447, encode_int((s32)4));
void* null_u63 = get_env_value(env10447, encode_int((s32)3));
void* acc = get_env_value(env10447, encode_int((s32)2));
void* append1 = get_env_value(env10447, encode_int((s32)1));
void* letk8449 = prim_car(arglst9401);
void* arg_lst9402 = prim_cdr(arglst9401);
void* lsts = prim_car(arg_lst9402);
void* arg_lst9403 = prim_cdr(arg_lst9402);

//creating new closure instance
auto ptr10994 = reinterpret_cast<void (*)(void *, void *)>(&ptr10448);
env10447 = allocate_env_space(encode_int((s32)10));
void* id8743 = make_closure(reinterpret_cast<void *>(ptr10994), env10447);

//setting env list
set_env(env10447, encode_int((s32)1), lsts);
set_env(env10447, encode_int((s32)2), map1);
set_env(env10447, encode_int((s32)3), append1);
set_env(env10447, encode_int((s32)4), acc);
set_env(env10447, encode_int((s32)5), cons);
set_env(env10447, encode_int((s32)6), car);
set_env(env10447, encode_int((s32)7), kkont8443);
set_env(env10447, encode_int((s32)8), f);
set_env(env10447, encode_int((s32)9), foldr);
set_env(env10447, encode_int((s32)10), cdr);


void* oldarg9462 = encode_null();
void* newarg9463 = prim_cons(lsts, oldarg9462);
void* newarg9464 = prim_cons(null_u63, newarg9463);
void* newarg9465 = prim_cons(id8743, newarg9464);

//app-clo
void* cloPtr10995 = get_closure_ptr(ormap);
void* procEnv10996 = get_env(ormap);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10995);
function_ptr(procEnv10996, newarg9465);
}

void ptr10444(void* env10445, void* arglst9398)
{
void* cdr = get_env_value(env10445, encode_int((s32)11));
void* foldr = get_env_value(env10445, encode_int((s32)10));
void* ormap = get_env_value(env10445, encode_int((s32)9));
void* kkont8443 = get_env_value(env10445, encode_int((s32)8));
void* map1 = get_env_value(env10445, encode_int((s32)7));
void* car = get_env_value(env10445, encode_int((s32)6));
void* cons = get_env_value(env10445, encode_int((s32)5));
void* f = get_env_value(env10445, encode_int((s32)4));
void* null_u63 = get_env_value(env10445, encode_int((s32)3));
void* acc = get_env_value(env10445, encode_int((s32)2));
void* append1 = get_env_value(env10445, encode_int((s32)1));
void* letk8448 = prim_car(arglst9398);
void* arg_lst9399 = prim_cdr(arglst9398);
void* param_lst8238 = prim_car(arg_lst9399);
void* arg_lst9400 = prim_cdr(arg_lst9399);

//creating new closure instance
auto ptr10997 = reinterpret_cast<void (*)(void *, void *)>(&ptr10446);
env10445 = allocate_env_space(encode_int((s32)11));
void* id8741 = make_closure(reinterpret_cast<void *>(ptr10997), env10445);

//setting env list
set_env(env10445, encode_int((s32)1), append1);
set_env(env10445, encode_int((s32)2), acc);
set_env(env10445, encode_int((s32)3), null_u63);
set_env(env10445, encode_int((s32)4), f);
set_env(env10445, encode_int((s32)5), cons);
set_env(env10445, encode_int((s32)6), car);
set_env(env10445, encode_int((s32)7), map1);
set_env(env10445, encode_int((s32)8), kkont8443);
set_env(env10445, encode_int((s32)9), ormap);
set_env(env10445, encode_int((s32)10), foldr);
set_env(env10445, encode_int((s32)11), cdr);


void* id8742 = encode_null();
void* oldarg9466 = encode_null();
void* newarg9467 = prim_cons(param_lst8238, oldarg9466);
void* newarg9468 = prim_cons(id8742, newarg9467);

//app-clo
void* cloPtr10998 = get_closure_ptr(id8741);
void* procEnv10999 = get_env(id8741);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr10998);
function_ptr(procEnv10999, newarg9468);
}

void ptr10442(void* env10443, void* arglst9395)
{
void* cdr = get_env_value(env10443, encode_int((s32)11));
void* foldr = get_env_value(env10443, encode_int((s32)10));
void* ormap = get_env_value(env10443, encode_int((s32)9));
void* kkont8443 = get_env_value(env10443, encode_int((s32)8));
void* map1 = get_env_value(env10443, encode_int((s32)7));
void* car = get_env_value(env10443, encode_int((s32)6));
void* cons = get_env_value(env10443, encode_int((s32)5));
void* f = get_env_value(env10443, encode_int((s32)4));
void* null_u63 = get_env_value(env10443, encode_int((s32)3));
void* param_lst8238 = get_env_value(env10443, encode_int((s32)2));
void* append1 = get_env_value(env10443, encode_int((s32)1));
void* letk8447 = prim_car(arglst9395);
void* arg_lst9396 = prim_cdr(arglst9395);
void* acc = prim_car(arg_lst9396);
void* arg_lst9397 = prim_cdr(arg_lst9396);

//creating new closure instance
auto ptr11000 = reinterpret_cast<void (*)(void *, void *)>(&ptr10444);
env10443 = allocate_env_space(encode_int((s32)11));
void* id8740 = make_closure(reinterpret_cast<void *>(ptr11000), env10443);

//setting env list
set_env(env10443, encode_int((s32)1), append1);
set_env(env10443, encode_int((s32)2), acc);
set_env(env10443, encode_int((s32)3), null_u63);
set_env(env10443, encode_int((s32)4), f);
set_env(env10443, encode_int((s32)5), cons);
set_env(env10443, encode_int((s32)6), car);
set_env(env10443, encode_int((s32)7), map1);
set_env(env10443, encode_int((s32)8), kkont8443);
set_env(env10443, encode_int((s32)9), ormap);
set_env(env10443, encode_int((s32)10), foldr);
set_env(env10443, encode_int((s32)11), cdr);


void* oldarg9469 = encode_null();
void* newarg9470 = prim_cons(param_lst8238, oldarg9469);
void* newarg9471 = prim_cons(id8740, newarg9470);

//app-clo
void* cloPtr11001 = get_closure_ptr(cdr);
void* procEnv11002 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11001);
function_ptr(procEnv11002, newarg9471);
}

void ptr10440(void* env10441, void* arglst9392)
{
void* cdr = get_env_value(env10441, encode_int((s32)10));
void* foldr = get_env_value(env10441, encode_int((s32)9));
void* ormap = get_env_value(env10441, encode_int((s32)8));
void* kkont8443 = get_env_value(env10441, encode_int((s32)7));
void* append1 = get_env_value(env10441, encode_int((s32)6));
void* map1 = get_env_value(env10441, encode_int((s32)5));
void* car = get_env_value(env10441, encode_int((s32)4));
void* cons = get_env_value(env10441, encode_int((s32)3));
void* f = get_env_value(env10441, encode_int((s32)2));
void* null_u63 = get_env_value(env10441, encode_int((s32)1));
void* letk8446 = prim_car(arglst9392);
void* arg_lst9393 = prim_cdr(arglst9392);
void* param_lst8238 = prim_car(arg_lst9393);
void* arg_lst9394 = prim_cdr(arg_lst9393);

//creating new closure instance
auto ptr11003 = reinterpret_cast<void (*)(void *, void *)>(&ptr10442);
env10441 = allocate_env_space(encode_int((s32)11));
void* id8739 = make_closure(reinterpret_cast<void *>(ptr11003), env10441);

//setting env list
set_env(env10441, encode_int((s32)1), append1);
set_env(env10441, encode_int((s32)2), param_lst8238);
set_env(env10441, encode_int((s32)3), null_u63);
set_env(env10441, encode_int((s32)4), f);
set_env(env10441, encode_int((s32)5), cons);
set_env(env10441, encode_int((s32)6), car);
set_env(env10441, encode_int((s32)7), map1);
set_env(env10441, encode_int((s32)8), kkont8443);
set_env(env10441, encode_int((s32)9), ormap);
set_env(env10441, encode_int((s32)10), foldr);
set_env(env10441, encode_int((s32)11), cdr);


void* oldarg9472 = encode_null();
void* newarg9473 = prim_cons(param_lst8238, oldarg9472);
void* newarg9474 = prim_cons(id8739, newarg9473);

//app-clo
void* cloPtr11004 = get_closure_ptr(car);
void* procEnv11005 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11004);
function_ptr(procEnv11005, newarg9474);
}

void ptr10438(void* env10439, void* arglst9389)
{
void* cdr = get_env_value(env10439, encode_int((s32)10));
void* foldr = get_env_value(env10439, encode_int((s32)9));
void* null_u63 = get_env_value(env10439, encode_int((s32)8));
void* ormap = get_env_value(env10439, encode_int((s32)7));
void* kkont8443 = get_env_value(env10439, encode_int((s32)6));
void* map1 = get_env_value(env10439, encode_int((s32)5));
void* car = get_env_value(env10439, encode_int((s32)4));
void* cons = get_env_value(env10439, encode_int((s32)3));
void* param_lst8238 = get_env_value(env10439, encode_int((s32)2));
void* append1 = get_env_value(env10439, encode_int((s32)1));
void* letk8445 = prim_car(arglst9389);
void* arg_lst9390 = prim_cdr(arglst9389);
void* f = prim_car(arg_lst9390);
void* arg_lst9391 = prim_cdr(arg_lst9390);

//creating new closure instance
auto ptr11006 = reinterpret_cast<void (*)(void *, void *)>(&ptr10440);
env10439 = allocate_env_space(encode_int((s32)10));
void* id8738 = make_closure(reinterpret_cast<void *>(ptr11006), env10439);

//setting env list
set_env(env10439, encode_int((s32)1), null_u63);
set_env(env10439, encode_int((s32)2), f);
set_env(env10439, encode_int((s32)3), cons);
set_env(env10439, encode_int((s32)4), car);
set_env(env10439, encode_int((s32)5), map1);
set_env(env10439, encode_int((s32)6), append1);
set_env(env10439, encode_int((s32)7), kkont8443);
set_env(env10439, encode_int((s32)8), ormap);
set_env(env10439, encode_int((s32)9), foldr);
set_env(env10439, encode_int((s32)10), cdr);


void* oldarg9475 = encode_null();
void* newarg9476 = prim_cons(param_lst8238, oldarg9475);
void* newarg9477 = prim_cons(id8738, newarg9476);

//app-clo
void* cloPtr11007 = get_closure_ptr(cdr);
void* procEnv11008 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11007);
function_ptr(procEnv11008, newarg9477);
}

void ptr10436(void* env10437, void* param_lst82388444)
{
void* cdr = get_env_value(env10437, encode_int((s32)8));
void* foldr = get_env_value(env10437, encode_int((s32)7));
void* null_u63 = get_env_value(env10437, encode_int((s32)6));
void* ormap = get_env_value(env10437, encode_int((s32)5));
void* append1 = get_env_value(env10437, encode_int((s32)4));
void* map1 = get_env_value(env10437, encode_int((s32)3));
void* car = get_env_value(env10437, encode_int((s32)2));
void* cons = get_env_value(env10437, encode_int((s32)1));
void* kkont8443 = prim_car(param_lst82388444);
void* param_lst8238 = prim_cdr(param_lst82388444);

//creating new closure instance
auto ptr11009 = reinterpret_cast<void (*)(void *, void *)>(&ptr10438);
env10437 = allocate_env_space(encode_int((s32)10));
void* id8737 = make_closure(reinterpret_cast<void *>(ptr11009), env10437);

//setting env list
set_env(env10437, encode_int((s32)1), append1);
set_env(env10437, encode_int((s32)2), param_lst8238);
set_env(env10437, encode_int((s32)3), cons);
set_env(env10437, encode_int((s32)4), car);
set_env(env10437, encode_int((s32)5), map1);
set_env(env10437, encode_int((s32)6), kkont8443);
set_env(env10437, encode_int((s32)7), ormap);
set_env(env10437, encode_int((s32)8), null_u63);
set_env(env10437, encode_int((s32)9), foldr);
set_env(env10437, encode_int((s32)10), cdr);


void* oldarg9478 = encode_null();
void* newarg9479 = prim_cons(param_lst8238, oldarg9478);
void* newarg9480 = prim_cons(id8737, newarg9479);

//app-clo
void* cloPtr11010 = get_closure_ptr(car);
void* procEnv11011 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11010);
function_ptr(procEnv11011, newarg9480);
}

void ptr10434(void* env10435, void* arglst9386)
{
void* cdr = get_env_value(env10435, encode_int((s32)7));
void* null_u63 = get_env_value(env10435, encode_int((s32)6));
void* ormap = get_env_value(env10435, encode_int((s32)5));
void* append1 = get_env_value(env10435, encode_int((s32)4));
void* map1 = get_env_value(env10435, encode_int((s32)3));
void* car = get_env_value(env10435, encode_int((s32)2));
void* cons = get_env_value(env10435, encode_int((s32)1));
void* kont8442 = prim_car(arglst9386);
void* arg_lst9387 = prim_cdr(arglst9386);
void* foldr = prim_car(arg_lst9387);
void* arg_lst9388 = prim_cdr(arg_lst9387);
void* id8735 = encode_null();

//creating new closure instance
auto ptr11012 = reinterpret_cast<void (*)(void *, void *)>(&ptr10436);
env10435 = allocate_env_space(encode_int((s32)8));
void* id8736 = make_closure(reinterpret_cast<void *>(ptr11012), env10435);

//setting env list
set_env(env10435, encode_int((s32)1), cons);
set_env(env10435, encode_int((s32)2), car);
set_env(env10435, encode_int((s32)3), map1);
set_env(env10435, encode_int((s32)4), append1);
set_env(env10435, encode_int((s32)5), ormap);
set_env(env10435, encode_int((s32)6), null_u63);
set_env(env10435, encode_int((s32)7), foldr);
set_env(env10435, encode_int((s32)8), cdr);


void* oldarg9481 = encode_null();
void* newarg9482 = prim_cons(id8736, oldarg9481);
void* newarg9483 = prim_cons(id8735, newarg9482);

//app-clo
void* cloPtr11013 = get_closure_ptr(kont8442);
void* procEnv11014 = get_env(kont8442);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11013);
function_ptr(procEnv11014, newarg9483);
}

void ptr10498(void* env10499, void* arglst9330)
{
void* kkont8424 = get_env_value(env10499, encode_int((s32)2));
void* foldl = get_env_value(env10499, encode_int((s32)1));
void* letk8437 = prim_car(arglst9330);
void* arg_lst9331 = prim_cdr(arglst9330);
void* t8292 = prim_car(arg_lst9331);
void* arg_lst9332 = prim_cdr(arg_lst9331);
void* lst8438 = prim_cons(kkont8424, t8292);

//app-clo
void* cloPtr11015 = get_closure_ptr(foldl);
void* procEnv11016 = get_env(foldl);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11015);
function_ptr(procEnv11016, lst8438);
}

void ptr10496(void* env10497, void* arglst9327)
{
void* kkont8424 = get_env_value(env10497, encode_int((s32)4));
void* f = get_env_value(env10497, encode_int((s32)3));
void* cons = get_env_value(env10497, encode_int((s32)2));
void* foldl = get_env_value(env10497, encode_int((s32)1));
void* letk8436 = prim_car(arglst9327);
void* arg_lst9328 = prim_cdr(arglst9327);
void* t8291 = prim_car(arg_lst9328);
void* arg_lst9329 = prim_cdr(arg_lst9328);

//creating new closure instance
auto ptr11017 = reinterpret_cast<void (*)(void *, void *)>(&ptr10498);
env10497 = allocate_env_space(encode_int((s32)2));
void* id8776 = make_closure(reinterpret_cast<void *>(ptr11017), env10497);

//setting env list
set_env(env10497, encode_int((s32)1), foldl);
set_env(env10497, encode_int((s32)2), kkont8424);


void* oldarg9333 = encode_null();
void* newarg9334 = prim_cons(t8291, oldarg9333);
void* newarg9335 = prim_cons(f, newarg9334);
void* newarg9336 = prim_cons(id8776, newarg9335);

//app-clo
void* cloPtr11018 = get_closure_ptr(cons);
void* procEnv11019 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11018);
function_ptr(procEnv11019, newarg9336);
}

void ptr10494(void* env10495, void* arglst9324)
{
void* acc_u43 = get_env_value(env10495, encode_int((s32)5));
void* kkont8424 = get_env_value(env10495, encode_int((s32)4));
void* f = get_env_value(env10495, encode_int((s32)3));
void* cons = get_env_value(env10495, encode_int((s32)2));
void* foldl = get_env_value(env10495, encode_int((s32)1));
void* letk8435 = prim_car(arglst9324);
void* arg_lst9325 = prim_cdr(arglst9324);
void* t8290 = prim_car(arg_lst9325);
void* arg_lst9326 = prim_cdr(arg_lst9325);

//creating new closure instance
auto ptr11020 = reinterpret_cast<void (*)(void *, void *)>(&ptr10496);
env10495 = allocate_env_space(encode_int((s32)4));
void* id8775 = make_closure(reinterpret_cast<void *>(ptr11020), env10495);

//setting env list
set_env(env10495, encode_int((s32)1), foldl);
set_env(env10495, encode_int((s32)2), cons);
set_env(env10495, encode_int((s32)3), f);
set_env(env10495, encode_int((s32)4), kkont8424);


void* oldarg9337 = encode_null();
void* newarg9338 = prim_cons(t8290, oldarg9337);
void* newarg9339 = prim_cons(acc_u43, newarg9338);
void* newarg9340 = prim_cons(id8775, newarg9339);

//app-clo
void* cloPtr11021 = get_closure_ptr(cons);
void* procEnv11022 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11021);
function_ptr(procEnv11022, newarg9340);
}

void ptr10492(void* env10493, void* arglst9321)
{
void* kkont8424 = get_env_value(env10493, encode_int((s32)6));
void* f = get_env_value(env10493, encode_int((s32)5));
void* append1 = get_env_value(env10493, encode_int((s32)4));
void* rsts = get_env_value(env10493, encode_int((s32)3));
void* cons = get_env_value(env10493, encode_int((s32)2));
void* foldl = get_env_value(env10493, encode_int((s32)1));
void* letk8434 = prim_car(arglst9321);
void* arg_lst9322 = prim_cdr(arglst9321);
void* acc_u43 = prim_car(arg_lst9322);
void* arg_lst9323 = prim_cdr(arg_lst9322);

//creating new closure instance
auto ptr11023 = reinterpret_cast<void (*)(void *, void *)>(&ptr10494);
env10493 = allocate_env_space(encode_int((s32)5));
void* id8773 = make_closure(reinterpret_cast<void *>(ptr11023), env10493);

//setting env list
set_env(env10493, encode_int((s32)1), foldl);
set_env(env10493, encode_int((s32)2), cons);
set_env(env10493, encode_int((s32)3), f);
set_env(env10493, encode_int((s32)4), kkont8424);
set_env(env10493, encode_int((s32)5), acc_u43);


void* id8774 = encode_null();
void* oldarg9341 = encode_null();
void* newarg9342 = prim_cons(id8774, oldarg9341);
void* newarg9343 = prim_cons(rsts, newarg9342);
void* newarg9344 = prim_cons(id8773, newarg9343);

//app-clo
void* cloPtr11024 = get_closure_ptr(append1);
void* procEnv11025 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11024);
function_ptr(procEnv11025, newarg9344);
}

void ptr10490(void* env10491, void* arglst9318)
{
void* kkont8424 = get_env_value(env10491, encode_int((s32)6));
void* f = get_env_value(env10491, encode_int((s32)5));
void* append1 = get_env_value(env10491, encode_int((s32)4));
void* rsts = get_env_value(env10491, encode_int((s32)3));
void* cons = get_env_value(env10491, encode_int((s32)2));
void* foldl = get_env_value(env10491, encode_int((s32)1));
void* letk8440 = prim_car(arglst9318);
void* arg_lst9319 = prim_cdr(arglst9318);
void* t8289 = prim_car(arg_lst9319);
void* arg_lst9320 = prim_cdr(arg_lst9319);

//creating new closure instance
auto ptr11026 = reinterpret_cast<void (*)(void *, void *)>(&ptr10492);
env10491 = allocate_env_space(encode_int((s32)6));
void* id8772 = make_closure(reinterpret_cast<void *>(ptr11026), env10491);

//setting env list
set_env(env10491, encode_int((s32)1), foldl);
set_env(env10491, encode_int((s32)2), cons);
set_env(env10491, encode_int((s32)3), rsts);
set_env(env10491, encode_int((s32)4), append1);
set_env(env10491, encode_int((s32)5), f);
set_env(env10491, encode_int((s32)6), kkont8424);


void* lst8441 = prim_cons(id8772, t8289);

//app-clo
void* cloPtr11027 = get_closure_ptr(f);
void* procEnv11028 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11027);
function_ptr(procEnv11028, lst8441);
}

void ptr10488(void* env10489, void* arglst9315)
{
void* xs = get_env_value(env10489, encode_int((s32)7));
void* kkont8424 = get_env_value(env10489, encode_int((s32)6));
void* f = get_env_value(env10489, encode_int((s32)5));
void* append1 = get_env_value(env10489, encode_int((s32)4));
void* rsts = get_env_value(env10489, encode_int((s32)3));
void* cons = get_env_value(env10489, encode_int((s32)2));
void* foldl = get_env_value(env10489, encode_int((s32)1));
void* letk8439 = prim_car(arglst9315);
void* arg_lst9316 = prim_cdr(arglst9315);
void* t8288 = prim_car(arg_lst9316);
void* arg_lst9317 = prim_cdr(arg_lst9316);

//creating new closure instance
auto ptr11029 = reinterpret_cast<void (*)(void *, void *)>(&ptr10490);
env10489 = allocate_env_space(encode_int((s32)6));
void* id8771 = make_closure(reinterpret_cast<void *>(ptr11029), env10489);

//setting env list
set_env(env10489, encode_int((s32)1), foldl);
set_env(env10489, encode_int((s32)2), cons);
set_env(env10489, encode_int((s32)3), rsts);
set_env(env10489, encode_int((s32)4), append1);
set_env(env10489, encode_int((s32)5), f);
set_env(env10489, encode_int((s32)6), kkont8424);


void* oldarg9345 = encode_null();
void* newarg9346 = prim_cons(t8288, oldarg9345);
void* newarg9347 = prim_cons(xs, newarg9346);
void* newarg9348 = prim_cons(id8771, newarg9347);

//app-clo
void* cloPtr11030 = get_closure_ptr(append1);
void* procEnv11031 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11030);
function_ptr(procEnv11031, newarg9348);
}

void ptr10486(void* env10487, void* arglst9312)
{
void* xs = get_env_value(env10487, encode_int((s32)7));
void* kkont8424 = get_env_value(env10487, encode_int((s32)6));
void* f = get_env_value(env10487, encode_int((s32)5));
void* acc = get_env_value(env10487, encode_int((s32)4));
void* append1 = get_env_value(env10487, encode_int((s32)3));
void* cons = get_env_value(env10487, encode_int((s32)2));
void* foldl = get_env_value(env10487, encode_int((s32)1));
void* letk8433 = prim_car(arglst9312);
void* arg_lst9313 = prim_cdr(arglst9312);
void* rsts = prim_car(arg_lst9313);
void* arg_lst9314 = prim_cdr(arg_lst9313);

//creating new closure instance
auto ptr11032 = reinterpret_cast<void (*)(void *, void *)>(&ptr10488);
env10487 = allocate_env_space(encode_int((s32)7));
void* id8769 = make_closure(reinterpret_cast<void *>(ptr11032), env10487);

//setting env list
set_env(env10487, encode_int((s32)1), foldl);
set_env(env10487, encode_int((s32)2), cons);
set_env(env10487, encode_int((s32)3), rsts);
set_env(env10487, encode_int((s32)4), append1);
set_env(env10487, encode_int((s32)5), f);
set_env(env10487, encode_int((s32)6), kkont8424);
set_env(env10487, encode_int((s32)7), xs);


void* id8770 = encode_null();
void* oldarg9349 = encode_null();
void* newarg9350 = prim_cons(id8770, oldarg9349);
void* newarg9351 = prim_cons(acc, newarg9350);
void* newarg9352 = prim_cons(id8769, newarg9351);

//app-clo
void* cloPtr11033 = get_closure_ptr(cons);
void* procEnv11034 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11033);
function_ptr(procEnv11034, newarg9352);
}

void ptr10484(void* env10485, void* arglst9309)
{
void* cdr = get_env_value(env10485, encode_int((s32)9));
void* kkont8424 = get_env_value(env10485, encode_int((s32)8));
void* f = get_env_value(env10485, encode_int((s32)7));
void* acc = get_env_value(env10485, encode_int((s32)6));
void* append1 = get_env_value(env10485, encode_int((s32)5));
void* map1 = get_env_value(env10485, encode_int((s32)4));
void* lsts = get_env_value(env10485, encode_int((s32)3));
void* cons = get_env_value(env10485, encode_int((s32)2));
void* foldl = get_env_value(env10485, encode_int((s32)1));
void* letk8432 = prim_car(arglst9309);
void* arg_lst9310 = prim_cdr(arglst9309);
void* xs = prim_car(arg_lst9310);
void* arg_lst9311 = prim_cdr(arg_lst9310);

//creating new closure instance
auto ptr11035 = reinterpret_cast<void (*)(void *, void *)>(&ptr10486);
env10485 = allocate_env_space(encode_int((s32)7));
void* id8768 = make_closure(reinterpret_cast<void *>(ptr11035), env10485);

//setting env list
set_env(env10485, encode_int((s32)1), foldl);
set_env(env10485, encode_int((s32)2), cons);
set_env(env10485, encode_int((s32)3), append1);
set_env(env10485, encode_int((s32)4), acc);
set_env(env10485, encode_int((s32)5), f);
set_env(env10485, encode_int((s32)6), kkont8424);
set_env(env10485, encode_int((s32)7), xs);


void* oldarg9353 = encode_null();
void* newarg9354 = prim_cons(lsts, oldarg9353);
void* newarg9355 = prim_cons(cdr, newarg9354);
void* newarg9356 = prim_cons(id8768, newarg9355);

//app-clo
void* cloPtr11036 = get_closure_ptr(map1);
void* procEnv11037 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11036);
function_ptr(procEnv11037, newarg9356);
}

void ptr10482(void* env10483, void* arglst9303)
{
void* cdr = get_env_value(env10483, encode_int((s32)10));
void* car = get_env_value(env10483, encode_int((s32)9));
void* kkont8424 = get_env_value(env10483, encode_int((s32)8));
void* f = get_env_value(env10483, encode_int((s32)7));
void* acc = get_env_value(env10483, encode_int((s32)6));
void* append1 = get_env_value(env10483, encode_int((s32)5));
void* map1 = get_env_value(env10483, encode_int((s32)4));
void* lsts = get_env_value(env10483, encode_int((s32)3));
void* cons = get_env_value(env10483, encode_int((s32)2));
void* foldl = get_env_value(env10483, encode_int((s32)1));
void* letk8431 = prim_car(arglst9303);
void* arg_lst9304 = prim_cdr(arglst9303);
void* t8287 = prim_car(arg_lst9304);
void* arg_lst9305 = prim_cdr(arg_lst9304);

//if-clause
u64 if_guard11038 = reinterpret_cast<u64>(is_true(t8287));
if(if_guard11038 == 1)
{
void* id8766 = encode_null();
void* oldarg9306 = encode_null();
void* newarg9307 = prim_cons(acc, oldarg9306);
void* newarg9308 = prim_cons(id8766, newarg9307);

//app-clo
void* cloPtr11039 = get_closure_ptr(kkont8424);
void* procEnv11040 = get_env(kkont8424);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11039);
function_ptr(procEnv11040, newarg9308);
}
else
{

//creating new closure instance
auto ptr11041 = reinterpret_cast<void (*)(void *, void *)>(&ptr10484);
env10483 = allocate_env_space(encode_int((s32)9));
void* id8767 = make_closure(reinterpret_cast<void *>(ptr11041), env10483);

//setting env list
set_env(env10483, encode_int((s32)1), foldl);
set_env(env10483, encode_int((s32)2), cons);
set_env(env10483, encode_int((s32)3), lsts);
set_env(env10483, encode_int((s32)4), map1);
set_env(env10483, encode_int((s32)5), append1);
set_env(env10483, encode_int((s32)6), acc);
set_env(env10483, encode_int((s32)7), f);
set_env(env10483, encode_int((s32)8), kkont8424);
set_env(env10483, encode_int((s32)9), cdr);


void* oldarg9357 = encode_null();
void* newarg9358 = prim_cons(lsts, oldarg9357);
void* newarg9359 = prim_cons(car, newarg9358);
void* newarg9360 = prim_cons(id8767, newarg9359);

//app-clo
void* cloPtr11042 = get_closure_ptr(map1);
void* procEnv11043 = get_env(map1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11042);
function_ptr(procEnv11043, newarg9360);
}

}

void ptr10480(void* env10481, void* arglst9300)
{
void* cdr = get_env_value(env10481, encode_int((s32)11));
void* ormap = get_env_value(env10481, encode_int((s32)10));
void* map1 = get_env_value(env10481, encode_int((s32)9));
void* car = get_env_value(env10481, encode_int((s32)8));
void* kkont8424 = get_env_value(env10481, encode_int((s32)7));
void* f = get_env_value(env10481, encode_int((s32)6));
void* null_u63 = get_env_value(env10481, encode_int((s32)5));
void* acc = get_env_value(env10481, encode_int((s32)4));
void* append1 = get_env_value(env10481, encode_int((s32)3));
void* cons = get_env_value(env10481, encode_int((s32)2));
void* foldl = get_env_value(env10481, encode_int((s32)1));
void* letk8430 = prim_car(arglst9300);
void* arg_lst9301 = prim_cdr(arglst9300);
void* lsts = prim_car(arg_lst9301);
void* arg_lst9302 = prim_cdr(arg_lst9301);

//creating new closure instance
auto ptr11044 = reinterpret_cast<void (*)(void *, void *)>(&ptr10482);
env10481 = allocate_env_space(encode_int((s32)10));
void* id8765 = make_closure(reinterpret_cast<void *>(ptr11044), env10481);

//setting env list
set_env(env10481, encode_int((s32)1), foldl);
set_env(env10481, encode_int((s32)2), cons);
set_env(env10481, encode_int((s32)3), lsts);
set_env(env10481, encode_int((s32)4), map1);
set_env(env10481, encode_int((s32)5), append1);
set_env(env10481, encode_int((s32)6), acc);
set_env(env10481, encode_int((s32)7), f);
set_env(env10481, encode_int((s32)8), kkont8424);
set_env(env10481, encode_int((s32)9), car);
set_env(env10481, encode_int((s32)10), cdr);


void* oldarg9361 = encode_null();
void* newarg9362 = prim_cons(lsts, oldarg9361);
void* newarg9363 = prim_cons(null_u63, newarg9362);
void* newarg9364 = prim_cons(id8765, newarg9363);

//app-clo
void* cloPtr11045 = get_closure_ptr(ormap);
void* procEnv11046 = get_env(ormap);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11045);
function_ptr(procEnv11046, newarg9364);
}

void ptr10478(void* env10479, void* arglst9297)
{
void* cdr = get_env_value(env10479, encode_int((s32)11));
void* ormap = get_env_value(env10479, encode_int((s32)10));
void* map1 = get_env_value(env10479, encode_int((s32)9));
void* car = get_env_value(env10479, encode_int((s32)8));
void* kkont8424 = get_env_value(env10479, encode_int((s32)7));
void* f = get_env_value(env10479, encode_int((s32)6));
void* null_u63 = get_env_value(env10479, encode_int((s32)5));
void* acc = get_env_value(env10479, encode_int((s32)4));
void* append1 = get_env_value(env10479, encode_int((s32)3));
void* cons = get_env_value(env10479, encode_int((s32)2));
void* foldl = get_env_value(env10479, encode_int((s32)1));
void* letk8429 = prim_car(arglst9297);
void* arg_lst9298 = prim_cdr(arglst9297);
void* param_lst8239 = prim_car(arg_lst9298);
void* arg_lst9299 = prim_cdr(arg_lst9298);

//creating new closure instance
auto ptr11047 = reinterpret_cast<void (*)(void *, void *)>(&ptr10480);
env10479 = allocate_env_space(encode_int((s32)11));
void* id8763 = make_closure(reinterpret_cast<void *>(ptr11047), env10479);

//setting env list
set_env(env10479, encode_int((s32)1), foldl);
set_env(env10479, encode_int((s32)2), cons);
set_env(env10479, encode_int((s32)3), append1);
set_env(env10479, encode_int((s32)4), acc);
set_env(env10479, encode_int((s32)5), null_u63);
set_env(env10479, encode_int((s32)6), f);
set_env(env10479, encode_int((s32)7), kkont8424);
set_env(env10479, encode_int((s32)8), car);
set_env(env10479, encode_int((s32)9), map1);
set_env(env10479, encode_int((s32)10), ormap);
set_env(env10479, encode_int((s32)11), cdr);


void* id8764 = encode_null();
void* oldarg9365 = encode_null();
void* newarg9366 = prim_cons(param_lst8239, oldarg9365);
void* newarg9367 = prim_cons(id8764, newarg9366);

//app-clo
void* cloPtr11048 = get_closure_ptr(id8763);
void* procEnv11049 = get_env(id8763);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11048);
function_ptr(procEnv11049, newarg9367);
}

void ptr10476(void* env10477, void* arglst9294)
{
void* cdr = get_env_value(env10477, encode_int((s32)11));
void* ormap = get_env_value(env10477, encode_int((s32)10));
void* append1 = get_env_value(env10477, encode_int((s32)9));
void* car = get_env_value(env10477, encode_int((s32)8));
void* kkont8424 = get_env_value(env10477, encode_int((s32)7));
void* f = get_env_value(env10477, encode_int((s32)6));
void* null_u63 = get_env_value(env10477, encode_int((s32)5));
void* map1 = get_env_value(env10477, encode_int((s32)4));
void* param_lst8239 = get_env_value(env10477, encode_int((s32)3));
void* cons = get_env_value(env10477, encode_int((s32)2));
void* foldl = get_env_value(env10477, encode_int((s32)1));
void* letk8428 = prim_car(arglst9294);
void* arg_lst9295 = prim_cdr(arglst9294);
void* acc = prim_car(arg_lst9295);
void* arg_lst9296 = prim_cdr(arg_lst9295);

//creating new closure instance
auto ptr11050 = reinterpret_cast<void (*)(void *, void *)>(&ptr10478);
env10477 = allocate_env_space(encode_int((s32)11));
void* id8762 = make_closure(reinterpret_cast<void *>(ptr11050), env10477);

//setting env list
set_env(env10477, encode_int((s32)1), foldl);
set_env(env10477, encode_int((s32)2), cons);
set_env(env10477, encode_int((s32)3), append1);
set_env(env10477, encode_int((s32)4), acc);
set_env(env10477, encode_int((s32)5), null_u63);
set_env(env10477, encode_int((s32)6), f);
set_env(env10477, encode_int((s32)7), kkont8424);
set_env(env10477, encode_int((s32)8), car);
set_env(env10477, encode_int((s32)9), map1);
set_env(env10477, encode_int((s32)10), ormap);
set_env(env10477, encode_int((s32)11), cdr);


void* oldarg9368 = encode_null();
void* newarg9369 = prim_cons(param_lst8239, oldarg9368);
void* newarg9370 = prim_cons(id8762, newarg9369);

//app-clo
void* cloPtr11051 = get_closure_ptr(cdr);
void* procEnv11052 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11051);
function_ptr(procEnv11052, newarg9370);
}

void ptr10474(void* env10475, void* arglst9291)
{
void* cdr = get_env_value(env10475, encode_int((s32)10));
void* ormap = get_env_value(env10475, encode_int((s32)9));
void* append1 = get_env_value(env10475, encode_int((s32)8));
void* map1 = get_env_value(env10475, encode_int((s32)7));
void* car = get_env_value(env10475, encode_int((s32)6));
void* kkont8424 = get_env_value(env10475, encode_int((s32)5));
void* f = get_env_value(env10475, encode_int((s32)4));
void* null_u63 = get_env_value(env10475, encode_int((s32)3));
void* cons = get_env_value(env10475, encode_int((s32)2));
void* foldl = get_env_value(env10475, encode_int((s32)1));
void* letk8427 = prim_car(arglst9291);
void* arg_lst9292 = prim_cdr(arglst9291);
void* param_lst8239 = prim_car(arg_lst9292);
void* arg_lst9293 = prim_cdr(arg_lst9292);

//creating new closure instance
auto ptr11053 = reinterpret_cast<void (*)(void *, void *)>(&ptr10476);
env10475 = allocate_env_space(encode_int((s32)11));
void* id8761 = make_closure(reinterpret_cast<void *>(ptr11053), env10475);

//setting env list
set_env(env10475, encode_int((s32)1), foldl);
set_env(env10475, encode_int((s32)2), cons);
set_env(env10475, encode_int((s32)3), param_lst8239);
set_env(env10475, encode_int((s32)4), map1);
set_env(env10475, encode_int((s32)5), null_u63);
set_env(env10475, encode_int((s32)6), f);
set_env(env10475, encode_int((s32)7), kkont8424);
set_env(env10475, encode_int((s32)8), car);
set_env(env10475, encode_int((s32)9), append1);
set_env(env10475, encode_int((s32)10), ormap);
set_env(env10475, encode_int((s32)11), cdr);


void* oldarg9371 = encode_null();
void* newarg9372 = prim_cons(param_lst8239, oldarg9371);
void* newarg9373 = prim_cons(id8761, newarg9372);

//app-clo
void* cloPtr11054 = get_closure_ptr(car);
void* procEnv11055 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11054);
function_ptr(procEnv11055, newarg9373);
}

void ptr10472(void* env10473, void* arglst9288)
{
void* cdr = get_env_value(env10473, encode_int((s32)10));
void* ormap = get_env_value(env10473, encode_int((s32)9));
void* append1 = get_env_value(env10473, encode_int((s32)8));
void* car = get_env_value(env10473, encode_int((s32)7));
void* kkont8424 = get_env_value(env10473, encode_int((s32)6));
void* null_u63 = get_env_value(env10473, encode_int((s32)5));
void* map1 = get_env_value(env10473, encode_int((s32)4));
void* param_lst8239 = get_env_value(env10473, encode_int((s32)3));
void* cons = get_env_value(env10473, encode_int((s32)2));
void* foldl = get_env_value(env10473, encode_int((s32)1));
void* letk8426 = prim_car(arglst9288);
void* arg_lst9289 = prim_cdr(arglst9288);
void* f = prim_car(arg_lst9289);
void* arg_lst9290 = prim_cdr(arg_lst9289);

//creating new closure instance
auto ptr11056 = reinterpret_cast<void (*)(void *, void *)>(&ptr10474);
env10473 = allocate_env_space(encode_int((s32)10));
void* id8760 = make_closure(reinterpret_cast<void *>(ptr11056), env10473);

//setting env list
set_env(env10473, encode_int((s32)1), foldl);
set_env(env10473, encode_int((s32)2), cons);
set_env(env10473, encode_int((s32)3), null_u63);
set_env(env10473, encode_int((s32)4), f);
set_env(env10473, encode_int((s32)5), kkont8424);
set_env(env10473, encode_int((s32)6), car);
set_env(env10473, encode_int((s32)7), map1);
set_env(env10473, encode_int((s32)8), append1);
set_env(env10473, encode_int((s32)9), ormap);
set_env(env10473, encode_int((s32)10), cdr);


void* oldarg9374 = encode_null();
void* newarg9375 = prim_cons(param_lst8239, oldarg9374);
void* newarg9376 = prim_cons(id8760, newarg9375);

//app-clo
void* cloPtr11057 = get_closure_ptr(cdr);
void* procEnv11058 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11057);
function_ptr(procEnv11058, newarg9376);
}

void ptr10470(void* env10471, void* param_lst82398425)
{
void* cdr = get_env_value(env10471, encode_int((s32)8));
void* null_u63 = get_env_value(env10471, encode_int((s32)7));
void* ormap = get_env_value(env10471, encode_int((s32)6));
void* append1 = get_env_value(env10471, encode_int((s32)5));
void* map1 = get_env_value(env10471, encode_int((s32)4));
void* car = get_env_value(env10471, encode_int((s32)3));
void* cons = get_env_value(env10471, encode_int((s32)2));
void* foldl = get_env_value(env10471, encode_int((s32)1));
void* kkont8424 = prim_car(param_lst82398425);
void* param_lst8239 = prim_cdr(param_lst82398425);

//creating new closure instance
auto ptr11059 = reinterpret_cast<void (*)(void *, void *)>(&ptr10472);
env10471 = allocate_env_space(encode_int((s32)10));
void* id8759 = make_closure(reinterpret_cast<void *>(ptr11059), env10471);

//setting env list
set_env(env10471, encode_int((s32)1), foldl);
set_env(env10471, encode_int((s32)2), cons);
set_env(env10471, encode_int((s32)3), param_lst8239);
set_env(env10471, encode_int((s32)4), map1);
set_env(env10471, encode_int((s32)5), null_u63);
set_env(env10471, encode_int((s32)6), kkont8424);
set_env(env10471, encode_int((s32)7), car);
set_env(env10471, encode_int((s32)8), append1);
set_env(env10471, encode_int((s32)9), ormap);
set_env(env10471, encode_int((s32)10), cdr);


void* oldarg9377 = encode_null();
void* newarg9378 = prim_cons(param_lst8239, oldarg9377);
void* newarg9379 = prim_cons(id8759, newarg9378);

//app-clo
void* cloPtr11060 = get_closure_ptr(car);
void* procEnv11061 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11060);
function_ptr(procEnv11061, newarg9379);
}

void ptr10468(void* env10469, void* arglst9285)
{
void* cdr = get_env_value(env10469, encode_int((s32)7));
void* null_u63 = get_env_value(env10469, encode_int((s32)6));
void* ormap = get_env_value(env10469, encode_int((s32)5));
void* append1 = get_env_value(env10469, encode_int((s32)4));
void* map1 = get_env_value(env10469, encode_int((s32)3));
void* car = get_env_value(env10469, encode_int((s32)2));
void* cons = get_env_value(env10469, encode_int((s32)1));
void* kont8423 = prim_car(arglst9285);
void* arg_lst9286 = prim_cdr(arglst9285);
void* foldl = prim_car(arg_lst9286);
void* arg_lst9287 = prim_cdr(arg_lst9286);
void* id8757 = encode_null();

//creating new closure instance
auto ptr11062 = reinterpret_cast<void (*)(void *, void *)>(&ptr10470);
env10469 = allocate_env_space(encode_int((s32)8));
void* id8758 = make_closure(reinterpret_cast<void *>(ptr11062), env10469);

//setting env list
set_env(env10469, encode_int((s32)1), foldl);
set_env(env10469, encode_int((s32)2), cons);
set_env(env10469, encode_int((s32)3), car);
set_env(env10469, encode_int((s32)4), map1);
set_env(env10469, encode_int((s32)5), append1);
set_env(env10469, encode_int((s32)6), ormap);
set_env(env10469, encode_int((s32)7), null_u63);
set_env(env10469, encode_int((s32)8), cdr);


void* oldarg9380 = encode_null();
void* newarg9381 = prim_cons(id8758, oldarg9380);
void* newarg9382 = prim_cons(id8757, newarg9381);

//app-clo
void* cloPtr11063 = get_closure_ptr(kont8423);
void* procEnv11064 = get_env(kont8423);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11063);
function_ptr(procEnv11064, newarg9382);
}

void ptr10514(void* env10515, void* arglst9256)
{
void* t8295 = get_env_value(env10515, encode_int((s32)3));
void* append1 = get_env_value(env10515, encode_int((s32)2));
void* kont8417 = get_env_value(env10515, encode_int((s32)1));
void* letk8422 = prim_car(arglst9256);
void* arg_lst9257 = prim_cdr(arglst9256);
void* t8297 = prim_car(arg_lst9257);
void* arg_lst9258 = prim_cdr(arg_lst9257);
void* oldarg9259 = encode_null();
void* newarg9260 = prim_cons(t8297, oldarg9259);
void* newarg9261 = prim_cons(t8295, newarg9260);
void* newarg9262 = prim_cons(kont8417, newarg9261);

//app-clo
void* cloPtr11065 = get_closure_ptr(append1);
void* procEnv11066 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11065);
function_ptr(procEnv11066, newarg9262);
}

void ptr10512(void* env10513, void* arglst9253)
{
void* t8295 = get_env_value(env10513, encode_int((s32)4));
void* append1 = get_env_value(env10513, encode_int((s32)3));
void* kont8417 = get_env_value(env10513, encode_int((s32)2));
void* cons = get_env_value(env10513, encode_int((s32)1));
void* letk8421 = prim_car(arglst9253);
void* arg_lst9254 = prim_cdr(arglst9253);
void* t8296 = prim_car(arg_lst9254);
void* arg_lst9255 = prim_cdr(arg_lst9254);

//creating new closure instance
auto ptr11067 = reinterpret_cast<void (*)(void *, void *)>(&ptr10514);
env10513 = allocate_env_space(encode_int((s32)3));
void* id8786 = make_closure(reinterpret_cast<void *>(ptr11067), env10513);

//setting env list
set_env(env10513, encode_int((s32)1), kont8417);
set_env(env10513, encode_int((s32)2), append1);
set_env(env10513, encode_int((s32)3), t8295);


void* id8787 = encode_null();
void* oldarg9263 = encode_null();
void* newarg9264 = prim_cons(id8787, oldarg9263);
void* newarg9265 = prim_cons(t8296, newarg9264);
void* newarg9266 = prim_cons(id8786, newarg9265);

//app-clo
void* cloPtr11068 = get_closure_ptr(cons);
void* procEnv11069 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11068);
function_ptr(procEnv11069, newarg9266);
}

void ptr10510(void* env10511, void* arglst9250)
{
void* lst = get_env_value(env10511, encode_int((s32)5));
void* append1 = get_env_value(env10511, encode_int((s32)4));
void* car = get_env_value(env10511, encode_int((s32)3));
void* kont8417 = get_env_value(env10511, encode_int((s32)2));
void* cons = get_env_value(env10511, encode_int((s32)1));
void* letk8420 = prim_car(arglst9250);
void* arg_lst9251 = prim_cdr(arglst9250);
void* t8295 = prim_car(arg_lst9251);
void* arg_lst9252 = prim_cdr(arg_lst9251);

//creating new closure instance
auto ptr11070 = reinterpret_cast<void (*)(void *, void *)>(&ptr10512);
env10511 = allocate_env_space(encode_int((s32)4));
void* id8785 = make_closure(reinterpret_cast<void *>(ptr11070), env10511);

//setting env list
set_env(env10511, encode_int((s32)1), cons);
set_env(env10511, encode_int((s32)2), kont8417);
set_env(env10511, encode_int((s32)3), append1);
set_env(env10511, encode_int((s32)4), t8295);


void* oldarg9267 = encode_null();
void* newarg9268 = prim_cons(lst, oldarg9267);
void* newarg9269 = prim_cons(id8785, newarg9268);

//app-clo
void* cloPtr11071 = get_closure_ptr(car);
void* procEnv11072 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11071);
function_ptr(procEnv11072, newarg9269);
}

void ptr10508(void* env10509, void* arglst9247)
{
void* lst = get_env_value(env10509, encode_int((s32)6));
void* reverse = get_env_value(env10509, encode_int((s32)5));
void* append1 = get_env_value(env10509, encode_int((s32)4));
void* car = get_env_value(env10509, encode_int((s32)3));
void* kont8417 = get_env_value(env10509, encode_int((s32)2));
void* cons = get_env_value(env10509, encode_int((s32)1));
void* letk8419 = prim_car(arglst9247);
void* arg_lst9248 = prim_cdr(arglst9247);
void* t8294 = prim_car(arg_lst9248);
void* arg_lst9249 = prim_cdr(arg_lst9248);

//creating new closure instance
auto ptr11073 = reinterpret_cast<void (*)(void *, void *)>(&ptr10510);
env10509 = allocate_env_space(encode_int((s32)5));
void* id8784 = make_closure(reinterpret_cast<void *>(ptr11073), env10509);

//setting env list
set_env(env10509, encode_int((s32)1), cons);
set_env(env10509, encode_int((s32)2), kont8417);
set_env(env10509, encode_int((s32)3), car);
set_env(env10509, encode_int((s32)4), append1);
set_env(env10509, encode_int((s32)5), lst);


void* oldarg9270 = encode_null();
void* newarg9271 = prim_cons(t8294, oldarg9270);
void* newarg9272 = prim_cons(id8784, newarg9271);

//app-clo
void* cloPtr11074 = get_closure_ptr(reverse);
void* procEnv11075 = get_env(reverse);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11074);
function_ptr(procEnv11075, newarg9272);
}

void ptr10506(void* env10507, void* arglst9241)
{
void* cdr = get_env_value(env10507, encode_int((s32)7));
void* lst = get_env_value(env10507, encode_int((s32)6));
void* reverse = get_env_value(env10507, encode_int((s32)5));
void* append1 = get_env_value(env10507, encode_int((s32)4));
void* car = get_env_value(env10507, encode_int((s32)3));
void* kont8417 = get_env_value(env10507, encode_int((s32)2));
void* cons = get_env_value(env10507, encode_int((s32)1));
void* letk8418 = prim_car(arglst9241);
void* arg_lst9242 = prim_cdr(arglst9241);
void* t8293 = prim_car(arg_lst9242);
void* arg_lst9243 = prim_cdr(arg_lst9242);

//if-clause
u64 if_guard11076 = reinterpret_cast<u64>(is_true(t8293));
if(if_guard11076 == 1)
{
void* id8782 = encode_null();
void* oldarg9244 = encode_null();
void* newarg9245 = prim_cons(lst, oldarg9244);
void* newarg9246 = prim_cons(id8782, newarg9245);

//app-clo
void* cloPtr11077 = get_closure_ptr(kont8417);
void* procEnv11078 = get_env(kont8417);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11077);
function_ptr(procEnv11078, newarg9246);
}
else
{

//creating new closure instance
auto ptr11079 = reinterpret_cast<void (*)(void *, void *)>(&ptr10508);
env10507 = allocate_env_space(encode_int((s32)6));
void* id8783 = make_closure(reinterpret_cast<void *>(ptr11079), env10507);

//setting env list
set_env(env10507, encode_int((s32)1), cons);
set_env(env10507, encode_int((s32)2), kont8417);
set_env(env10507, encode_int((s32)3), car);
set_env(env10507, encode_int((s32)4), append1);
set_env(env10507, encode_int((s32)5), reverse);
set_env(env10507, encode_int((s32)6), lst);


void* oldarg9273 = encode_null();
void* newarg9274 = prim_cons(lst, oldarg9273);
void* newarg9275 = prim_cons(id8783, newarg9274);

//app-clo
void* cloPtr11080 = get_closure_ptr(cdr);
void* procEnv11081 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11080);
function_ptr(procEnv11081, newarg9275);
}

}

void ptr10504(void* env10505, void* arglst9238)
{
void* cdr = get_env_value(env10505, encode_int((s32)6));
void* null_u63 = get_env_value(env10505, encode_int((s32)5));
void* reverse = get_env_value(env10505, encode_int((s32)4));
void* append1 = get_env_value(env10505, encode_int((s32)3));
void* car = get_env_value(env10505, encode_int((s32)2));
void* cons = get_env_value(env10505, encode_int((s32)1));
void* kont8417 = prim_car(arglst9238);
void* arg_lst9239 = prim_cdr(arglst9238);
void* lst = prim_car(arg_lst9239);
void* arg_lst9240 = prim_cdr(arg_lst9239);

//creating new closure instance
auto ptr11082 = reinterpret_cast<void (*)(void *, void *)>(&ptr10506);
env10505 = allocate_env_space(encode_int((s32)7));
void* id8781 = make_closure(reinterpret_cast<void *>(ptr11082), env10505);

//setting env list
set_env(env10505, encode_int((s32)1), cons);
set_env(env10505, encode_int((s32)2), kont8417);
set_env(env10505, encode_int((s32)3), car);
set_env(env10505, encode_int((s32)4), append1);
set_env(env10505, encode_int((s32)5), reverse);
set_env(env10505, encode_int((s32)6), lst);
set_env(env10505, encode_int((s32)7), cdr);


void* oldarg9276 = encode_null();
void* newarg9277 = prim_cons(lst, oldarg9276);
void* newarg9278 = prim_cons(id8781, newarg9277);

//app-clo
void* cloPtr11083 = get_closure_ptr(null_u63);
void* procEnv11084 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11083);
function_ptr(procEnv11084, newarg9278);
}

void ptr10502(void* env10503, void* arglst9235)
{
void* cdr = get_env_value(env10503, encode_int((s32)5));
void* null_u63 = get_env_value(env10503, encode_int((s32)4));
void* append1 = get_env_value(env10503, encode_int((s32)3));
void* car = get_env_value(env10503, encode_int((s32)2));
void* cons = get_env_value(env10503, encode_int((s32)1));
void* kont8416 = prim_car(arglst9235);
void* arg_lst9236 = prim_cdr(arglst9235);
void* reverse = prim_car(arg_lst9236);
void* arg_lst9237 = prim_cdr(arg_lst9236);
void* id8779 = encode_null();

//creating new closure instance
auto ptr11085 = reinterpret_cast<void (*)(void *, void *)>(&ptr10504);
env10503 = allocate_env_space(encode_int((s32)6));
void* id8780 = make_closure(reinterpret_cast<void *>(ptr11085), env10503);

//setting env list
set_env(env10503, encode_int((s32)1), cons);
set_env(env10503, encode_int((s32)2), car);
set_env(env10503, encode_int((s32)3), append1);
set_env(env10503, encode_int((s32)4), reverse);
set_env(env10503, encode_int((s32)5), null_u63);
set_env(env10503, encode_int((s32)6), cdr);


void* oldarg9279 = encode_null();
void* newarg9280 = prim_cons(id8780, oldarg9279);
void* newarg9281 = prim_cons(id8779, newarg9280);

//app-clo
void* cloPtr11086 = get_closure_ptr(kont8416);
void* procEnv11087 = get_env(kont8416);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11086);
function_ptr(procEnv11087, newarg9281);
}

void ptr10532(void* env10533, void* arglst9201)
{
void* kkont8408 = get_env_value(env10533, encode_int((s32)3));
void* append1 = get_env_value(env10533, encode_int((s32)2));
void* foldl = get_env_value(env10533, encode_int((s32)1));
void* letk8415 = prim_car(arglst9201);
void* arg_lst9202 = prim_cdr(arglst9201);
void* t8300 = prim_car(arg_lst9202);
void* arg_lst9203 = prim_cdr(arg_lst9202);
void* id8800 = encode_null();
void* oldarg9204 = encode_null();
void* newarg9205 = prim_cons(t8300, oldarg9204);
void* newarg9206 = prim_cons(id8800, newarg9205);
void* newarg9207 = prim_cons(append1, newarg9206);
void* newarg9208 = prim_cons(kkont8408, newarg9207);

//app-clo
void* cloPtr11088 = get_closure_ptr(foldl);
void* procEnv11089 = get_env(foldl);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11088);
function_ptr(procEnv11089, newarg9208);
}

void ptr10530(void* env10531, void* arglst9198)
{
void* kkont8408 = get_env_value(env10531, encode_int((s32)4));
void* reverse = get_env_value(env10531, encode_int((s32)3));
void* append1 = get_env_value(env10531, encode_int((s32)2));
void* foldl = get_env_value(env10531, encode_int((s32)1));
void* letk8414 = prim_car(arglst9198);
void* arg_lst9199 = prim_cdr(arglst9198);
void* t8299 = prim_car(arg_lst9199);
void* arg_lst9200 = prim_cdr(arg_lst9199);

//creating new closure instance
auto ptr11090 = reinterpret_cast<void (*)(void *, void *)>(&ptr10532);
env10531 = allocate_env_space(encode_int((s32)3));
void* id8799 = make_closure(reinterpret_cast<void *>(ptr11090), env10531);

//setting env list
set_env(env10531, encode_int((s32)1), foldl);
set_env(env10531, encode_int((s32)2), append1);
set_env(env10531, encode_int((s32)3), kkont8408);


void* oldarg9209 = encode_null();
void* newarg9210 = prim_cons(t8299, oldarg9209);
void* newarg9211 = prim_cons(id8799, newarg9210);

//app-clo
void* cloPtr11091 = get_closure_ptr(reverse);
void* procEnv11092 = get_env(reverse);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11091);
function_ptr(procEnv11092, newarg9211);
}

void ptr10528(void* env10529, void* arglst9195)
{
void* kkont8408 = get_env_value(env10529, encode_int((s32)5));
void* reverse = get_env_value(env10529, encode_int((s32)4));
void* foldl = get_env_value(env10529, encode_int((s32)3));
void* x = get_env_value(env10529, encode_int((s32)2));
void* append1 = get_env_value(env10529, encode_int((s32)1));
void* letk8413 = prim_car(arglst9195);
void* arg_lst9196 = prim_cdr(arglst9195);
void* t8298 = prim_car(arg_lst9196);
void* arg_lst9197 = prim_cdr(arg_lst9196);

//creating new closure instance
auto ptr11093 = reinterpret_cast<void (*)(void *, void *)>(&ptr10530);
env10529 = allocate_env_space(encode_int((s32)4));
void* id8798 = make_closure(reinterpret_cast<void *>(ptr11093), env10529);

//setting env list
set_env(env10529, encode_int((s32)1), foldl);
set_env(env10529, encode_int((s32)2), append1);
set_env(env10529, encode_int((s32)3), reverse);
set_env(env10529, encode_int((s32)4), kkont8408);


void* oldarg9212 = encode_null();
void* newarg9213 = prim_cons(x, oldarg9212);
void* newarg9214 = prim_cons(t8298, newarg9213);
void* newarg9215 = prim_cons(id8798, newarg9214);

//app-clo
void* cloPtr11094 = get_closure_ptr(append1);
void* procEnv11095 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11094);
function_ptr(procEnv11095, newarg9215);
}

void ptr10526(void* env10527, void* arglst9192)
{
void* kkont8408 = get_env_value(env10527, encode_int((s32)6));
void* reverse = get_env_value(env10527, encode_int((s32)5));
void* append1 = get_env_value(env10527, encode_int((s32)4));
void* xs = get_env_value(env10527, encode_int((s32)3));
void* cons = get_env_value(env10527, encode_int((s32)2));
void* foldl = get_env_value(env10527, encode_int((s32)1));
void* letk8412 = prim_car(arglst9192);
void* arg_lst9193 = prim_cdr(arglst9192);
void* x = prim_car(arg_lst9193);
void* arg_lst9194 = prim_cdr(arg_lst9193);

//creating new closure instance
auto ptr11096 = reinterpret_cast<void (*)(void *, void *)>(&ptr10528);
env10527 = allocate_env_space(encode_int((s32)5));
void* id8796 = make_closure(reinterpret_cast<void *>(ptr11096), env10527);

//setting env list
set_env(env10527, encode_int((s32)1), append1);
set_env(env10527, encode_int((s32)2), x);
set_env(env10527, encode_int((s32)3), foldl);
set_env(env10527, encode_int((s32)4), reverse);
set_env(env10527, encode_int((s32)5), kkont8408);


void* id8797 = encode_null();
void* oldarg9216 = encode_null();
void* newarg9217 = prim_cons(id8797, oldarg9216);
void* newarg9218 = prim_cons(xs, newarg9217);
void* newarg9219 = prim_cons(id8796, newarg9218);

//app-clo
void* cloPtr11097 = get_closure_ptr(cons);
void* procEnv11098 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11097);
function_ptr(procEnv11098, newarg9219);
}

void ptr10524(void* env10525, void* arglst9189)
{
void* kkont8408 = get_env_value(env10525, encode_int((s32)6));
void* reverse = get_env_value(env10525, encode_int((s32)5));
void* append1 = get_env_value(env10525, encode_int((s32)4));
void* xs = get_env_value(env10525, encode_int((s32)3));
void* cons = get_env_value(env10525, encode_int((s32)2));
void* foldl = get_env_value(env10525, encode_int((s32)1));
void* letk8411 = prim_car(arglst9189);
void* arg_lst9190 = prim_cdr(arglst9189);
void* param_lst8240 = prim_car(arg_lst9190);
void* arg_lst9191 = prim_cdr(arg_lst9190);

//creating new closure instance
auto ptr11099 = reinterpret_cast<void (*)(void *, void *)>(&ptr10526);
env10525 = allocate_env_space(encode_int((s32)6));
void* id8794 = make_closure(reinterpret_cast<void *>(ptr11099), env10525);

//setting env list
set_env(env10525, encode_int((s32)1), foldl);
set_env(env10525, encode_int((s32)2), cons);
set_env(env10525, encode_int((s32)3), xs);
set_env(env10525, encode_int((s32)4), append1);
set_env(env10525, encode_int((s32)5), reverse);
set_env(env10525, encode_int((s32)6), kkont8408);


void* id8795 = encode_null();
void* oldarg9220 = encode_null();
void* newarg9221 = prim_cons(param_lst8240, oldarg9220);
void* newarg9222 = prim_cons(id8795, newarg9221);

//app-clo
void* cloPtr11100 = get_closure_ptr(id8794);
void* procEnv11101 = get_env(id8794);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11100);
function_ptr(procEnv11101, newarg9222);
}

void ptr10522(void* env10523, void* arglst9186)
{
void* cdr = get_env_value(env10523, encode_int((s32)7));
void* kkont8408 = get_env_value(env10523, encode_int((s32)6));
void* reverse = get_env_value(env10523, encode_int((s32)5));
void* append1 = get_env_value(env10523, encode_int((s32)4));
void* param_lst8240 = get_env_value(env10523, encode_int((s32)3));
void* cons = get_env_value(env10523, encode_int((s32)2));
void* foldl = get_env_value(env10523, encode_int((s32)1));
void* letk8410 = prim_car(arglst9186);
void* arg_lst9187 = prim_cdr(arglst9186);
void* xs = prim_car(arg_lst9187);
void* arg_lst9188 = prim_cdr(arg_lst9187);

//creating new closure instance
auto ptr11102 = reinterpret_cast<void (*)(void *, void *)>(&ptr10524);
env10523 = allocate_env_space(encode_int((s32)6));
void* id8793 = make_closure(reinterpret_cast<void *>(ptr11102), env10523);

//setting env list
set_env(env10523, encode_int((s32)1), foldl);
set_env(env10523, encode_int((s32)2), cons);
set_env(env10523, encode_int((s32)3), xs);
set_env(env10523, encode_int((s32)4), append1);
set_env(env10523, encode_int((s32)5), reverse);
set_env(env10523, encode_int((s32)6), kkont8408);


void* oldarg9223 = encode_null();
void* newarg9224 = prim_cons(param_lst8240, oldarg9223);
void* newarg9225 = prim_cons(id8793, newarg9224);

//app-clo
void* cloPtr11103 = get_closure_ptr(cdr);
void* procEnv11104 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11103);
function_ptr(procEnv11104, newarg9225);
}

void ptr10520(void* env10521, void* param_lst82408409)
{
void* cdr = get_env_value(env10521, encode_int((s32)6));
void* reverse = get_env_value(env10521, encode_int((s32)5));
void* append1 = get_env_value(env10521, encode_int((s32)4));
void* car = get_env_value(env10521, encode_int((s32)3));
void* cons = get_env_value(env10521, encode_int((s32)2));
void* foldl = get_env_value(env10521, encode_int((s32)1));
void* kkont8408 = prim_car(param_lst82408409);
void* param_lst8240 = prim_cdr(param_lst82408409);

//creating new closure instance
auto ptr11105 = reinterpret_cast<void (*)(void *, void *)>(&ptr10522);
env10521 = allocate_env_space(encode_int((s32)7));
void* id8792 = make_closure(reinterpret_cast<void *>(ptr11105), env10521);

//setting env list
set_env(env10521, encode_int((s32)1), foldl);
set_env(env10521, encode_int((s32)2), cons);
set_env(env10521, encode_int((s32)3), param_lst8240);
set_env(env10521, encode_int((s32)4), append1);
set_env(env10521, encode_int((s32)5), reverse);
set_env(env10521, encode_int((s32)6), kkont8408);
set_env(env10521, encode_int((s32)7), cdr);


void* oldarg9226 = encode_null();
void* newarg9227 = prim_cons(param_lst8240, oldarg9226);
void* newarg9228 = prim_cons(id8792, newarg9227);

//app-clo
void* cloPtr11106 = get_closure_ptr(car);
void* procEnv11107 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11106);
function_ptr(procEnv11107, newarg9228);
}

void ptr10518(void* env10519, void* arglst9183)
{
void* cdr = get_env_value(env10519, encode_int((s32)6));
void* reverse = get_env_value(env10519, encode_int((s32)5));
void* append1 = get_env_value(env10519, encode_int((s32)4));
void* car = get_env_value(env10519, encode_int((s32)3));
void* cons = get_env_value(env10519, encode_int((s32)2));
void* foldl = get_env_value(env10519, encode_int((s32)1));
void* kont8407 = prim_car(arglst9183);
void* arg_lst9184 = prim_cdr(arglst9183);
void* append = prim_car(arg_lst9184);
void* arg_lst9185 = prim_cdr(arg_lst9184);
void* id8790 = encode_null();

//creating new closure instance
auto ptr11108 = reinterpret_cast<void (*)(void *, void *)>(&ptr10520);
env10519 = allocate_env_space(encode_int((s32)6));
void* id8791 = make_closure(reinterpret_cast<void *>(ptr11108), env10519);

//setting env list
set_env(env10519, encode_int((s32)1), foldl);
set_env(env10519, encode_int((s32)2), cons);
set_env(env10519, encode_int((s32)3), car);
set_env(env10519, encode_int((s32)4), append1);
set_env(env10519, encode_int((s32)5), reverse);
set_env(env10519, encode_int((s32)6), cdr);


void* oldarg9229 = encode_null();
void* newarg9230 = prim_cons(id8791, oldarg9229);
void* newarg9231 = prim_cons(id8790, newarg9230);

//app-clo
void* cloPtr11109 = get_closure_ptr(kont8407);
void* procEnv11110 = get_env(kont8407);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11109);
function_ptr(procEnv11110, newarg9231);
}

void ptr10550(void* env10551, void* arglst9141)
{
void* kont8399 = get_env_value(env10551, encode_int((s32)3));
void* t8304 = get_env_value(env10551, encode_int((s32)2));
void* cons = get_env_value(env10551, encode_int((s32)1));
void* letk8405 = prim_car(arglst9141);
void* arg_lst9142 = prim_cdr(arglst9141);
void* t8306 = prim_car(arg_lst9142);
void* arg_lst9143 = prim_cdr(arg_lst9142);
void* oldarg9144 = encode_null();
void* newarg9145 = prim_cons(t8306, oldarg9144);
void* newarg9146 = prim_cons(t8304, newarg9145);
void* newarg9147 = prim_cons(kont8399, newarg9146);

//app-clo
void* cloPtr11111 = get_closure_ptr(cons);
void* procEnv11112 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11111);
function_ptr(procEnv11112, newarg9147);
}

void ptr10548(void* env10549, void* arglst9138)
{
void* op = get_env_value(env10549, encode_int((s32)5));
void* kont8399 = get_env_value(env10549, encode_int((s32)4));
void* cons = get_env_value(env10549, encode_int((s32)3));
void* filter = get_env_value(env10549, encode_int((s32)2));
void* t8304 = get_env_value(env10549, encode_int((s32)1));
void* letk8404 = prim_car(arglst9138);
void* arg_lst9139 = prim_cdr(arglst9138);
void* t8305 = prim_car(arg_lst9139);
void* arg_lst9140 = prim_cdr(arg_lst9139);

//creating new closure instance
auto ptr11113 = reinterpret_cast<void (*)(void *, void *)>(&ptr10550);
env10549 = allocate_env_space(encode_int((s32)3));
void* id8812 = make_closure(reinterpret_cast<void *>(ptr11113), env10549);

//setting env list
set_env(env10549, encode_int((s32)1), cons);
set_env(env10549, encode_int((s32)2), t8304);
set_env(env10549, encode_int((s32)3), kont8399);


void* oldarg9148 = encode_null();
void* newarg9149 = prim_cons(t8305, oldarg9148);
void* newarg9150 = prim_cons(op, newarg9149);
void* newarg9151 = prim_cons(id8812, newarg9150);

//app-clo
void* cloPtr11114 = get_closure_ptr(filter);
void* procEnv11115 = get_env(filter);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11114);
function_ptr(procEnv11115, newarg9151);
}

void ptr10546(void* env10547, void* arglst9135)
{
void* cdr = get_env_value(env10547, encode_int((s32)6));
void* lst = get_env_value(env10547, encode_int((s32)5));
void* op = get_env_value(env10547, encode_int((s32)4));
void* kont8399 = get_env_value(env10547, encode_int((s32)3));
void* filter = get_env_value(env10547, encode_int((s32)2));
void* cons = get_env_value(env10547, encode_int((s32)1));
void* letk8403 = prim_car(arglst9135);
void* arg_lst9136 = prim_cdr(arglst9135);
void* t8304 = prim_car(arg_lst9136);
void* arg_lst9137 = prim_cdr(arg_lst9136);

//creating new closure instance
auto ptr11116 = reinterpret_cast<void (*)(void *, void *)>(&ptr10548);
env10547 = allocate_env_space(encode_int((s32)5));
void* id8811 = make_closure(reinterpret_cast<void *>(ptr11116), env10547);

//setting env list
set_env(env10547, encode_int((s32)1), t8304);
set_env(env10547, encode_int((s32)2), filter);
set_env(env10547, encode_int((s32)3), cons);
set_env(env10547, encode_int((s32)4), kont8399);
set_env(env10547, encode_int((s32)5), op);


void* oldarg9152 = encode_null();
void* newarg9153 = prim_cons(lst, oldarg9152);
void* newarg9154 = prim_cons(id8811, newarg9153);

//app-clo
void* cloPtr11117 = get_closure_ptr(cdr);
void* procEnv11118 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11117);
function_ptr(procEnv11118, newarg9154);
}

void ptr10552(void* env10553, void* arglst9158)
{
void* op = get_env_value(env10553, encode_int((s32)3));
void* kont8399 = get_env_value(env10553, encode_int((s32)2));
void* filter = get_env_value(env10553, encode_int((s32)1));
void* letk8406 = prim_car(arglst9158);
void* arg_lst9159 = prim_cdr(arglst9158);
void* t8307 = prim_car(arg_lst9159);
void* arg_lst9160 = prim_cdr(arg_lst9159);
void* oldarg9161 = encode_null();
void* newarg9162 = prim_cons(t8307, oldarg9161);
void* newarg9163 = prim_cons(op, newarg9162);
void* newarg9164 = prim_cons(kont8399, newarg9163);

//app-clo
void* cloPtr11119 = get_closure_ptr(filter);
void* procEnv11120 = get_env(filter);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11119);
function_ptr(procEnv11120, newarg9164);
}

void ptr10544(void* env10545, void* arglst9132)
{
void* cdr = get_env_value(env10545, encode_int((s32)7));
void* lst = get_env_value(env10545, encode_int((s32)6));
void* op = get_env_value(env10545, encode_int((s32)5));
void* kont8399 = get_env_value(env10545, encode_int((s32)4));
void* cons = get_env_value(env10545, encode_int((s32)3));
void* filter = get_env_value(env10545, encode_int((s32)2));
void* car = get_env_value(env10545, encode_int((s32)1));
void* letk8402 = prim_car(arglst9132);
void* arg_lst9133 = prim_cdr(arglst9132);
void* t8303 = prim_car(arg_lst9133);
void* arg_lst9134 = prim_cdr(arg_lst9133);

//if-clause
u64 if_guard11121 = reinterpret_cast<u64>(is_true(t8303));
if(if_guard11121 == 1)
{

//creating new closure instance
auto ptr11122 = reinterpret_cast<void (*)(void *, void *)>(&ptr10546);
env10545 = allocate_env_space(encode_int((s32)6));
void* id8810 = make_closure(reinterpret_cast<void *>(ptr11122), env10545);

//setting env list
set_env(env10545, encode_int((s32)1), cons);
set_env(env10545, encode_int((s32)2), filter);
set_env(env10545, encode_int((s32)3), kont8399);
set_env(env10545, encode_int((s32)4), op);
set_env(env10545, encode_int((s32)5), lst);
set_env(env10545, encode_int((s32)6), cdr);


void* oldarg9155 = encode_null();
void* newarg9156 = prim_cons(lst, oldarg9155);
void* newarg9157 = prim_cons(id8810, newarg9156);

//app-clo
void* cloPtr11123 = get_closure_ptr(car);
void* procEnv11124 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11123);
function_ptr(procEnv11124, newarg9157);
}
else
{

//creating new closure instance
auto ptr11125 = reinterpret_cast<void (*)(void *, void *)>(&ptr10552);
env10545 = allocate_env_space(encode_int((s32)3));
void* id8813 = make_closure(reinterpret_cast<void *>(ptr11125), env10545);

//setting env list
set_env(env10545, encode_int((s32)1), filter);
set_env(env10545, encode_int((s32)2), kont8399);
set_env(env10545, encode_int((s32)3), op);


void* oldarg9165 = encode_null();
void* newarg9166 = prim_cons(lst, oldarg9165);
void* newarg9167 = prim_cons(id8813, newarg9166);

//app-clo
void* cloPtr11126 = get_closure_ptr(cdr);
void* procEnv11127 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11126);
function_ptr(procEnv11127, newarg9167);
}

}

void ptr10542(void* env10543, void* arglst9129)
{
void* cdr = get_env_value(env10543, encode_int((s32)7));
void* lst = get_env_value(env10543, encode_int((s32)6));
void* op = get_env_value(env10543, encode_int((s32)5));
void* kont8399 = get_env_value(env10543, encode_int((s32)4));
void* cons = get_env_value(env10543, encode_int((s32)3));
void* filter = get_env_value(env10543, encode_int((s32)2));
void* car = get_env_value(env10543, encode_int((s32)1));
void* letk8401 = prim_car(arglst9129);
void* arg_lst9130 = prim_cdr(arglst9129);
void* t8302 = prim_car(arg_lst9130);
void* arg_lst9131 = prim_cdr(arg_lst9130);

//creating new closure instance
auto ptr11128 = reinterpret_cast<void (*)(void *, void *)>(&ptr10544);
env10543 = allocate_env_space(encode_int((s32)7));
void* id8809 = make_closure(reinterpret_cast<void *>(ptr11128), env10543);

//setting env list
set_env(env10543, encode_int((s32)1), car);
set_env(env10543, encode_int((s32)2), filter);
set_env(env10543, encode_int((s32)3), cons);
set_env(env10543, encode_int((s32)4), kont8399);
set_env(env10543, encode_int((s32)5), op);
set_env(env10543, encode_int((s32)6), lst);
set_env(env10543, encode_int((s32)7), cdr);


void* oldarg9168 = encode_null();
void* newarg9169 = prim_cons(t8302, oldarg9168);
void* newarg9170 = prim_cons(id8809, newarg9169);

//app-clo
void* cloPtr11129 = get_closure_ptr(op);
void* procEnv11130 = get_env(op);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11129);
function_ptr(procEnv11130, newarg9170);
}

void ptr10540(void* env10541, void* arglst9123)
{
void* cdr = get_env_value(env10541, encode_int((s32)7));
void* lst = get_env_value(env10541, encode_int((s32)6));
void* op = get_env_value(env10541, encode_int((s32)5));
void* kont8399 = get_env_value(env10541, encode_int((s32)4));
void* cons = get_env_value(env10541, encode_int((s32)3));
void* filter = get_env_value(env10541, encode_int((s32)2));
void* car = get_env_value(env10541, encode_int((s32)1));
void* letk8400 = prim_car(arglst9123);
void* arg_lst9124 = prim_cdr(arglst9123);
void* t8301 = prim_car(arg_lst9124);
void* arg_lst9125 = prim_cdr(arg_lst9124);

//if-clause
u64 if_guard11131 = reinterpret_cast<u64>(is_true(t8301));
if(if_guard11131 == 1)
{
void* id8806 = encode_null();
void* id8807 = encode_null();
void* oldarg9126 = encode_null();
void* newarg9127 = prim_cons(id8807, oldarg9126);
void* newarg9128 = prim_cons(id8806, newarg9127);

//app-clo
void* cloPtr11132 = get_closure_ptr(kont8399);
void* procEnv11133 = get_env(kont8399);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11132);
function_ptr(procEnv11133, newarg9128);
}
else
{

//creating new closure instance
auto ptr11134 = reinterpret_cast<void (*)(void *, void *)>(&ptr10542);
env10541 = allocate_env_space(encode_int((s32)7));
void* id8808 = make_closure(reinterpret_cast<void *>(ptr11134), env10541);

//setting env list
set_env(env10541, encode_int((s32)1), car);
set_env(env10541, encode_int((s32)2), filter);
set_env(env10541, encode_int((s32)3), cons);
set_env(env10541, encode_int((s32)4), kont8399);
set_env(env10541, encode_int((s32)5), op);
set_env(env10541, encode_int((s32)6), lst);
set_env(env10541, encode_int((s32)7), cdr);


void* oldarg9171 = encode_null();
void* newarg9172 = prim_cons(lst, oldarg9171);
void* newarg9173 = prim_cons(id8808, newarg9172);

//app-clo
void* cloPtr11135 = get_closure_ptr(car);
void* procEnv11136 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11135);
function_ptr(procEnv11136, newarg9173);
}

}

void ptr10538(void* env10539, void* arglst9119)
{
void* cdr = get_env_value(env10539, encode_int((s32)5));
void* null_u63 = get_env_value(env10539, encode_int((s32)4));
void* cons = get_env_value(env10539, encode_int((s32)3));
void* filter = get_env_value(env10539, encode_int((s32)2));
void* car = get_env_value(env10539, encode_int((s32)1));
void* kont8399 = prim_car(arglst9119);
void* arg_lst9120 = prim_cdr(arglst9119);
void* op = prim_car(arg_lst9120);
void* arg_lst9121 = prim_cdr(arg_lst9120);
void* lst = prim_car(arg_lst9121);
void* arg_lst9122 = prim_cdr(arg_lst9121);

//creating new closure instance
auto ptr11137 = reinterpret_cast<void (*)(void *, void *)>(&ptr10540);
env10539 = allocate_env_space(encode_int((s32)7));
void* id8805 = make_closure(reinterpret_cast<void *>(ptr11137), env10539);

//setting env list
set_env(env10539, encode_int((s32)1), car);
set_env(env10539, encode_int((s32)2), filter);
set_env(env10539, encode_int((s32)3), cons);
set_env(env10539, encode_int((s32)4), kont8399);
set_env(env10539, encode_int((s32)5), op);
set_env(env10539, encode_int((s32)6), lst);
set_env(env10539, encode_int((s32)7), cdr);


void* oldarg9174 = encode_null();
void* newarg9175 = prim_cons(lst, oldarg9174);
void* newarg9176 = prim_cons(id8805, newarg9175);

//app-clo
void* cloPtr11138 = get_closure_ptr(null_u63);
void* procEnv11139 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11138);
function_ptr(procEnv11139, newarg9176);
}

void ptr10536(void* env10537, void* arglst9116)
{
void* cdr = get_env_value(env10537, encode_int((s32)4));
void* null_u63 = get_env_value(env10537, encode_int((s32)3));
void* car = get_env_value(env10537, encode_int((s32)2));
void* cons = get_env_value(env10537, encode_int((s32)1));
void* kont8398 = prim_car(arglst9116);
void* arg_lst9117 = prim_cdr(arglst9116);
void* filter = prim_car(arg_lst9117);
void* arg_lst9118 = prim_cdr(arg_lst9117);
void* id8803 = encode_null();

//creating new closure instance
auto ptr11140 = reinterpret_cast<void (*)(void *, void *)>(&ptr10538);
env10537 = allocate_env_space(encode_int((s32)5));
void* id8804 = make_closure(reinterpret_cast<void *>(ptr11140), env10537);

//setting env list
set_env(env10537, encode_int((s32)1), car);
set_env(env10537, encode_int((s32)2), filter);
set_env(env10537, encode_int((s32)3), cons);
set_env(env10537, encode_int((s32)4), null_u63);
set_env(env10537, encode_int((s32)5), cdr);


void* oldarg9177 = encode_null();
void* newarg9178 = prim_cons(id8804, oldarg9177);
void* newarg9179 = prim_cons(id8803, newarg9178);

//app-clo
void* cloPtr11141 = get_closure_ptr(kont8398);
void* procEnv11142 = get_env(kont8398);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11141);
function_ptr(procEnv11142, newarg9179);
}

void ptr10558(void* env10559, void* arglst9104)
{
void* k = get_env_value(env10559, encode_int((s32)1));
void* kont8397 = prim_car(arglst9104);
void* arg_lst9105 = prim_cdr(arglst9104);
void* x = prim_car(arg_lst9105);
void* arg_lst9106 = prim_cdr(arg_lst9105);
void* oldarg9107 = encode_null();
void* newarg9108 = prim_cons(x, oldarg9107);
void* newarg9109 = prim_cons(kont8397, newarg9108);

//app-clo
void* cloPtr11143 = get_closure_ptr(k);
void* procEnv11144 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11143);
function_ptr(procEnv11144, newarg9109);
}

void ptr10570(void* env10571, void* arglst9089)
{
void* kont8386 = get_env_value(env10571, encode_int((s32)1));
void* letk8388 = prim_car(arglst9089);
void* arg_lst9090 = prim_cdr(arglst9089);
void* t8309 = prim_car(arg_lst9090);
void* arg_lst9091 = prim_cdr(arg_lst9090);

//if-clause
u64 if_guard11145 = reinterpret_cast<u64>(is_true(t8309));
if(if_guard11145 == 1)
{
void* id8823 = encode_null();
void* id8824 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9092 = encode_null();
void* newarg9093 = prim_cons(id8824, oldarg9092);
void* newarg9094 = prim_cons(id8823, newarg9093);

//app-clo
void* cloPtr11146 = get_closure_ptr(kont8386);
void* procEnv11147 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11146);
function_ptr(procEnv11147, newarg9094);
}
else
{
void* id8825 = encode_null();
void* id8826 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9095 = encode_null();
void* newarg9096 = prim_cons(id8826, oldarg9095);
void* newarg9097 = prim_cons(id8825, newarg9096);

//app-clo
void* cloPtr11148 = get_closure_ptr(kont8386);
void* procEnv11149 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11148);
function_ptr(procEnv11149, newarg9097);
}

}

void ptr10568(void* env10569, void* arglst9080)
{
void* kont8386 = get_env_value(env10569, encode_int((s32)1));
void* letk8388 = prim_car(arglst9080);
void* arg_lst9081 = prim_cdr(arglst9080);
void* t8309 = prim_car(arg_lst9081);
void* arg_lst9082 = prim_cdr(arg_lst9081);

//if-clause
u64 if_guard11150 = reinterpret_cast<u64>(is_true(t8309));
if(if_guard11150 == 1)
{
void* id8827 = encode_null();
void* id8828 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9083 = encode_null();
void* newarg9084 = prim_cons(id8828, oldarg9083);
void* newarg9085 = prim_cons(id8827, newarg9084);

//app-clo
void* cloPtr11151 = get_closure_ptr(kont8386);
void* procEnv11152 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11151);
function_ptr(procEnv11152, newarg9085);
}
else
{
void* id8829 = encode_null();
void* id8830 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9086 = encode_null();
void* newarg9087 = prim_cons(id8830, oldarg9086);
void* newarg9088 = prim_cons(id8829, newarg9087);

//app-clo
void* cloPtr11153 = get_closure_ptr(kont8386);
void* procEnv11154 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11153);
function_ptr(procEnv11154, newarg9088);
}

}

void ptr10574(void* env10575, void* arglst9071)
{
void* k = get_env_value(env10575, encode_int((s32)1));
void* kont8393 = prim_car(arglst9071);
void* arg_lst9072 = prim_cdr(arglst9071);
void* x = prim_car(arg_lst9072);
void* arg_lst9073 = prim_cdr(arg_lst9072);
void* oldarg9074 = encode_null();
void* newarg9075 = prim_cons(x, oldarg9074);
void* newarg9076 = prim_cons(kont8393, newarg9075);

//app-clo
void* cloPtr11155 = get_closure_ptr(k);
void* procEnv11156 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11155);
function_ptr(procEnv11156, newarg9076);
}

void ptr10578(void* env10579, void* arglst9062)
{
void* top = get_env_value(env10579, encode_int((s32)1));
void* kont8392 = prim_car(arglst9062);
void* arg_lst9063 = prim_cdr(arglst9062);
void* x = prim_car(arg_lst9063);
void* arg_lst9064 = prim_cdr(arg_lst9063);
void* id8835 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9065 = encode_null();
void* newarg9066 = prim_cons(id8835, oldarg9065);
void* newarg9067 = prim_cons(kont8392, newarg9066);

//app-clo
void* cloPtr11157 = get_closure_ptr(top);
void* procEnv11158 = get_env(top);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11157);
function_ptr(procEnv11158, newarg9067);
}

void ptr10576(void* env10577, void* arglst9053)
{
void* kont8390 = get_env_value(env10577, encode_int((s32)2));
void* k = get_env_value(env10577, encode_int((s32)1));
void* letk8391 = prim_car(arglst9053);
void* arg_lst9054 = prim_cdr(arglst9053);
void* t8308 = prim_car(arg_lst9054);
void* arg_lst9055 = prim_cdr(arg_lst9054);

//if-clause
u64 if_guard11159 = reinterpret_cast<u64>(is_true(t8308));
if(if_guard11159 == 1)
{
void* id8836 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9056 = encode_null();
void* newarg9057 = prim_cons(id8836, oldarg9056);
void* newarg9058 = prim_cons(kont8390, newarg9057);

//app-clo
void* cloPtr11160 = get_closure_ptr(k);
void* procEnv11161 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11160);
function_ptr(procEnv11161, newarg9058);
}
else
{
void* id8837 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9059 = encode_null();
void* newarg9060 = prim_cons(id8837, oldarg9059);
void* newarg9061 = prim_cons(kont8390, newarg9060);

//app-clo
void* cloPtr11162 = get_closure_ptr(k);
void* procEnv11163 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11162);
function_ptr(procEnv11163, newarg9061);
}

}

void ptr10572(void* env10573, void* arglst9050)
{
void* cc = get_env_value(env10573, encode_int((s32)2));
void* top = get_env_value(env10573, encode_int((s32)1));
void* kont8390 = prim_car(arglst9050);
void* arg_lst9051 = prim_cdr(arglst9050);
void* k = prim_car(arg_lst9051);
void* arg_lst9052 = prim_cdr(arg_lst9051);

//creating new closure instance
auto ptr11164 = reinterpret_cast<void (*)(void *, void *)>(&ptr10576);
env10573 = allocate_env_space(encode_int((s32)2));
void* id8833 = make_closure(reinterpret_cast<void *>(ptr11164), env10573);

//setting env list
set_env(env10573, encode_int((s32)1), k);
set_env(env10573, encode_int((s32)2), kont8390);



//creating new closure instance
auto ptr11165 = reinterpret_cast<void (*)(void *, void *)>(&ptr10578);
env10573 = allocate_env_space(encode_int((s32)1));
void* id8834 = make_closure(reinterpret_cast<void *>(ptr11165), env10573);

//setting env list
set_env(env10573, encode_int((s32)1), top);


void* oldarg9068 = encode_null();
void* newarg9069 = prim_cons(id8834, oldarg9068);
void* newarg9070 = prim_cons(id8833, newarg9069);

//app-clo
void* cloPtr11166 = get_closure_ptr(cc);
void* procEnv11167 = get_env(cc);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11166);
function_ptr(procEnv11167, newarg9070);
}

void ptr10566(void* env10567, void* arglst9047)
{
void* cc = get_env_value(env10567, encode_int((s32)2));
void* top = get_env_value(env10567, encode_int((s32)1));
void* kont8389 = prim_car(arglst9047);
void* arg_lst9048 = prim_cdr(arglst9047);
void* k = prim_car(arg_lst9048);
void* arg_lst9049 = prim_cdr(arg_lst9048);

//creating new closure instance
auto ptr11168 = reinterpret_cast<void (*)(void *, void *)>(&ptr10572);
env10567 = allocate_env_space(encode_int((s32)2));
void* id8831 = make_closure(reinterpret_cast<void *>(ptr11168), env10567);

//setting env list
set_env(env10567, encode_int((s32)1), top);
set_env(env10567, encode_int((s32)2), cc);



//creating new closure instance
auto ptr11169 = reinterpret_cast<void (*)(void *, void *)>(&ptr10574);
env10567 = allocate_env_space(encode_int((s32)1));
void* id8832 = make_closure(reinterpret_cast<void *>(ptr11169), env10567);

//setting env list
set_env(env10567, encode_int((s32)1), k);


void* oldarg9077 = encode_null();
void* newarg9078 = prim_cons(id8832, oldarg9077);
void* newarg9079 = prim_cons(kont8389, newarg9078);

//app-clo
void* cloPtr11170 = get_closure_ptr(id8831);
void* procEnv11171 = get_env(id8831);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11170);
function_ptr(procEnv11171, newarg9079);
}

void ptr10564(void* env10565, void* arglst9044)
{
void* top = get_env_value(env10565, encode_int((s32)2));
void* kont8386 = get_env_value(env10565, encode_int((s32)1));
void* letk8387 = prim_car(arglst9044);
void* arg_lst9045 = prim_cdr(arglst9044);
void* cc = prim_car(arg_lst9045);
void* arg_lst9046 = prim_cdr(arg_lst9045);

//creating new closure instance
auto ptr11172 = reinterpret_cast<void (*)(void *, void *)>(&ptr10566);
env10565 = allocate_env_space(encode_int((s32)2));
void* id8820 = make_closure(reinterpret_cast<void *>(ptr11172), env10565);

//setting env list
set_env(env10565, encode_int((s32)1), top);
set_env(env10565, encode_int((s32)2), cc);



//creating new closure instance
auto ptr11173 = reinterpret_cast<void (*)(void *, void *)>(&ptr10568);
env10565 = allocate_env_space(encode_int((s32)1));
void* id8821 = make_closure(reinterpret_cast<void *>(ptr11173), env10565);

//setting env list
set_env(env10565, encode_int((s32)1), kont8386);



//creating new closure instance
auto ptr11174 = reinterpret_cast<void (*)(void *, void *)>(&ptr10570);
env10565 = allocate_env_space(encode_int((s32)1));
void* id8822 = make_closure(reinterpret_cast<void *>(ptr11174), env10565);

//setting env list
set_env(env10565, encode_int((s32)1), kont8386);


void* oldarg9098 = encode_null();
void* newarg9099 = prim_cons(id8822, oldarg9098);
void* newarg9100 = prim_cons(id8821, newarg9099);

//app-clo
void* cloPtr11175 = get_closure_ptr(id8820);
void* procEnv11176 = get_env(id8820);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11175);
function_ptr(procEnv11176, newarg9100);
}

void ptr10584(void* env10585, void* arglst9032)
{
void* kont8386 = get_env_value(env10585, encode_int((s32)1));
void* letk8388 = prim_car(arglst9032);
void* arg_lst9033 = prim_cdr(arglst9032);
void* t8309 = prim_car(arg_lst9033);
void* arg_lst9034 = prim_cdr(arg_lst9033);

//if-clause
u64 if_guard11177 = reinterpret_cast<u64>(is_true(t8309));
if(if_guard11177 == 1)
{
void* id8841 = encode_null();
void* id8842 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9035 = encode_null();
void* newarg9036 = prim_cons(id8842, oldarg9035);
void* newarg9037 = prim_cons(id8841, newarg9036);

//app-clo
void* cloPtr11178 = get_closure_ptr(kont8386);
void* procEnv11179 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11178);
function_ptr(procEnv11179, newarg9037);
}
else
{
void* id8843 = encode_null();
void* id8844 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9038 = encode_null();
void* newarg9039 = prim_cons(id8844, oldarg9038);
void* newarg9040 = prim_cons(id8843, newarg9039);

//app-clo
void* cloPtr11180 = get_closure_ptr(kont8386);
void* procEnv11181 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11180);
function_ptr(procEnv11181, newarg9040);
}

}

void ptr10582(void* env10583, void* arglst9023)
{
void* kont8386 = get_env_value(env10583, encode_int((s32)1));
void* letk8388 = prim_car(arglst9023);
void* arg_lst9024 = prim_cdr(arglst9023);
void* t8309 = prim_car(arg_lst9024);
void* arg_lst9025 = prim_cdr(arg_lst9024);

//if-clause
u64 if_guard11182 = reinterpret_cast<u64>(is_true(t8309));
if(if_guard11182 == 1)
{
void* id8845 = encode_null();
void* id8846 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9026 = encode_null();
void* newarg9027 = prim_cons(id8846, oldarg9026);
void* newarg9028 = prim_cons(id8845, newarg9027);

//app-clo
void* cloPtr11183 = get_closure_ptr(kont8386);
void* procEnv11184 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11183);
function_ptr(procEnv11184, newarg9028);
}
else
{
void* id8847 = encode_null();
void* id8848 = reinterpret_cast<void *>(encode_bool((s32)1));
void* oldarg9029 = encode_null();
void* newarg9030 = prim_cons(id8848, oldarg9029);
void* newarg9031 = prim_cons(id8847, newarg9030);

//app-clo
void* cloPtr11185 = get_closure_ptr(kont8386);
void* procEnv11186 = get_env(kont8386);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11185);
function_ptr(procEnv11186, newarg9031);
}

}

void ptr10588(void* env10589, void* arglst9014)
{
void* k = get_env_value(env10589, encode_int((s32)1));
void* kont8393 = prim_car(arglst9014);
void* arg_lst9015 = prim_cdr(arglst9014);
void* x = prim_car(arg_lst9015);
void* arg_lst9016 = prim_cdr(arg_lst9015);
void* oldarg9017 = encode_null();
void* newarg9018 = prim_cons(x, oldarg9017);
void* newarg9019 = prim_cons(kont8393, newarg9018);

//app-clo
void* cloPtr11187 = get_closure_ptr(k);
void* procEnv11188 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11187);
function_ptr(procEnv11188, newarg9019);
}

void ptr10592(void* env10593, void* arglst9005)
{
void* top = get_env_value(env10593, encode_int((s32)1));
void* kont8392 = prim_car(arglst9005);
void* arg_lst9006 = prim_cdr(arglst9005);
void* x = prim_car(arg_lst9006);
void* arg_lst9007 = prim_cdr(arg_lst9006);
void* id8853 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9008 = encode_null();
void* newarg9009 = prim_cons(id8853, oldarg9008);
void* newarg9010 = prim_cons(kont8392, newarg9009);

//app-clo
void* cloPtr11189 = get_closure_ptr(top);
void* procEnv11190 = get_env(top);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11189);
function_ptr(procEnv11190, newarg9010);
}

void ptr10590(void* env10591, void* arglst8996)
{
void* kont8390 = get_env_value(env10591, encode_int((s32)2));
void* k = get_env_value(env10591, encode_int((s32)1));
void* letk8391 = prim_car(arglst8996);
void* arg_lst8997 = prim_cdr(arglst8996);
void* t8308 = prim_car(arg_lst8997);
void* arg_lst8998 = prim_cdr(arg_lst8997);

//if-clause
u64 if_guard11191 = reinterpret_cast<u64>(is_true(t8308));
if(if_guard11191 == 1)
{
void* id8854 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg8999 = encode_null();
void* newarg9000 = prim_cons(id8854, oldarg8999);
void* newarg9001 = prim_cons(kont8390, newarg9000);

//app-clo
void* cloPtr11192 = get_closure_ptr(k);
void* procEnv11193 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11192);
function_ptr(procEnv11193, newarg9001);
}
else
{
void* id8855 = reinterpret_cast<void *>(encode_bool((s32)0));
void* oldarg9002 = encode_null();
void* newarg9003 = prim_cons(id8855, oldarg9002);
void* newarg9004 = prim_cons(kont8390, newarg9003);

//app-clo
void* cloPtr11194 = get_closure_ptr(k);
void* procEnv11195 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11194);
function_ptr(procEnv11195, newarg9004);
}

}

void ptr10586(void* env10587, void* arglst8993)
{
void* cc = get_env_value(env10587, encode_int((s32)2));
void* top = get_env_value(env10587, encode_int((s32)1));
void* kont8390 = prim_car(arglst8993);
void* arg_lst8994 = prim_cdr(arglst8993);
void* k = prim_car(arg_lst8994);
void* arg_lst8995 = prim_cdr(arg_lst8994);

//creating new closure instance
auto ptr11196 = reinterpret_cast<void (*)(void *, void *)>(&ptr10590);
env10587 = allocate_env_space(encode_int((s32)2));
void* id8851 = make_closure(reinterpret_cast<void *>(ptr11196), env10587);

//setting env list
set_env(env10587, encode_int((s32)1), k);
set_env(env10587, encode_int((s32)2), kont8390);



//creating new closure instance
auto ptr11197 = reinterpret_cast<void (*)(void *, void *)>(&ptr10592);
env10587 = allocate_env_space(encode_int((s32)1));
void* id8852 = make_closure(reinterpret_cast<void *>(ptr11197), env10587);

//setting env list
set_env(env10587, encode_int((s32)1), top);


void* oldarg9011 = encode_null();
void* newarg9012 = prim_cons(id8852, oldarg9011);
void* newarg9013 = prim_cons(id8851, newarg9012);

//app-clo
void* cloPtr11198 = get_closure_ptr(cc);
void* procEnv11199 = get_env(cc);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11198);
function_ptr(procEnv11199, newarg9013);
}

void ptr10580(void* env10581, void* arglst8990)
{
void* cc = get_env_value(env10581, encode_int((s32)2));
void* top = get_env_value(env10581, encode_int((s32)1));
void* kont8389 = prim_car(arglst8990);
void* arg_lst8991 = prim_cdr(arglst8990);
void* k = prim_car(arg_lst8991);
void* arg_lst8992 = prim_cdr(arg_lst8991);

//creating new closure instance
auto ptr11200 = reinterpret_cast<void (*)(void *, void *)>(&ptr10586);
env10581 = allocate_env_space(encode_int((s32)2));
void* id8849 = make_closure(reinterpret_cast<void *>(ptr11200), env10581);

//setting env list
set_env(env10581, encode_int((s32)1), top);
set_env(env10581, encode_int((s32)2), cc);



//creating new closure instance
auto ptr11201 = reinterpret_cast<void (*)(void *, void *)>(&ptr10588);
env10581 = allocate_env_space(encode_int((s32)1));
void* id8850 = make_closure(reinterpret_cast<void *>(ptr11201), env10581);

//setting env list
set_env(env10581, encode_int((s32)1), k);


void* oldarg9020 = encode_null();
void* newarg9021 = prim_cons(id8850, oldarg9020);
void* newarg9022 = prim_cons(kont8389, newarg9021);

//app-clo
void* cloPtr11202 = get_closure_ptr(id8849);
void* procEnv11203 = get_env(id8849);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11202);
function_ptr(procEnv11203, newarg9022);
}

void ptr10562(void* env10563, void* arglst8987)
{
void* top = get_env_value(env10563, encode_int((s32)2));
void* kont8386 = get_env_value(env10563, encode_int((s32)1));
void* letk8387 = prim_car(arglst8987);
void* arg_lst8988 = prim_cdr(arglst8987);
void* cc = prim_car(arg_lst8988);
void* arg_lst8989 = prim_cdr(arg_lst8988);

//creating new closure instance
auto ptr11204 = reinterpret_cast<void (*)(void *, void *)>(&ptr10580);
env10563 = allocate_env_space(encode_int((s32)2));
void* id8838 = make_closure(reinterpret_cast<void *>(ptr11204), env10563);

//setting env list
set_env(env10563, encode_int((s32)1), top);
set_env(env10563, encode_int((s32)2), cc);



//creating new closure instance
auto ptr11205 = reinterpret_cast<void (*)(void *, void *)>(&ptr10582);
env10563 = allocate_env_space(encode_int((s32)1));
void* id8839 = make_closure(reinterpret_cast<void *>(ptr11205), env10563);

//setting env list
set_env(env10563, encode_int((s32)1), kont8386);



//creating new closure instance
auto ptr11206 = reinterpret_cast<void (*)(void *, void *)>(&ptr10584);
env10563 = allocate_env_space(encode_int((s32)1));
void* id8840 = make_closure(reinterpret_cast<void *>(ptr11206), env10563);

//setting env list
set_env(env10563, encode_int((s32)1), kont8386);


void* oldarg9041 = encode_null();
void* newarg9042 = prim_cons(id8840, oldarg9041);
void* newarg9043 = prim_cons(id8839, newarg9042);

//app-clo
void* cloPtr11207 = get_closure_ptr(id8838);
void* procEnv11208 = get_env(id8838);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11207);
function_ptr(procEnv11208, newarg9043);
}

void ptr10596(void* env10597, void* arglst8978)
{
void* k = get_env_value(env10597, encode_int((s32)1));
void* kont8396 = prim_car(arglst8978);
void* arg_lst8979 = prim_cdr(arglst8978);
void* x = prim_car(arg_lst8979);
void* arg_lst8980 = prim_cdr(arg_lst8979);
void* oldarg8981 = encode_null();
void* newarg8982 = prim_cons(x, oldarg8981);
void* newarg8983 = prim_cons(kont8396, newarg8982);

//app-clo
void* cloPtr11209 = get_closure_ptr(k);
void* procEnv11210 = get_env(k);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11209);
function_ptr(procEnv11210, newarg8983);
}

void ptr10594(void* env10595, void* arglst8972)
{
void* kont8395 = prim_car(arglst8972);
void* arg_lst8973 = prim_cdr(arglst8972);
void* cc = prim_car(arg_lst8973);
void* arg_lst8974 = prim_cdr(arg_lst8973);
void* oldarg8975 = encode_null();
void* newarg8976 = prim_cons(cc, oldarg8975);
void* newarg8977 = prim_cons(kont8395, newarg8976);

//app-clo
void* cloPtr11211 = get_closure_ptr(cc);
void* procEnv11212 = get_env(cc);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11211);
function_ptr(procEnv11212, newarg8977);
}

void ptr10560(void* env10561, void* arglst8969)
{
void* kont8394 = prim_car(arglst8969);
void* arg_lst8970 = prim_cdr(arglst8969);
void* k = prim_car(arg_lst8970);
void* arg_lst8971 = prim_cdr(arg_lst8970);

//creating new closure instance
auto ptr11213 = reinterpret_cast<void (*)(void *, void *)>(&ptr10594);
env10561 = allocate_env_space(encode_int((s32)0));
void* id8856 = make_closure(reinterpret_cast<void *>(ptr11213), env10561);



//creating new closure instance
auto ptr11214 = reinterpret_cast<void (*)(void *, void *)>(&ptr10596);
env10561 = allocate_env_space(encode_int((s32)1));
void* id8857 = make_closure(reinterpret_cast<void *>(ptr11214), env10561);

//setting env list
set_env(env10561, encode_int((s32)1), k);


void* oldarg8984 = encode_null();
void* newarg8985 = prim_cons(id8857, oldarg8984);
void* newarg8986 = prim_cons(kont8394, newarg8985);

//app-clo
void* cloPtr11215 = get_closure_ptr(id8856);
void* procEnv11216 = get_env(id8856);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11215);
function_ptr(procEnv11216, newarg8986);
}

void ptr10556(void* env10557, void* arglst8966)
{
void* kont8386 = prim_car(arglst8966);
void* arg_lst8967 = prim_cdr(arglst8966);
void* top = prim_car(arg_lst8967);
void* arg_lst8968 = prim_cdr(arg_lst8967);

//creating new closure instance
auto ptr11217 = reinterpret_cast<void (*)(void *, void *)>(&ptr10560);
env10557 = allocate_env_space(encode_int((s32)0));
void* id8817 = make_closure(reinterpret_cast<void *>(ptr11217), env10557);



//creating new closure instance
auto ptr11218 = reinterpret_cast<void (*)(void *, void *)>(&ptr10562);
env10557 = allocate_env_space(encode_int((s32)2));
void* id8818 = make_closure(reinterpret_cast<void *>(ptr11218), env10557);

//setting env list
set_env(env10557, encode_int((s32)1), kont8386);
set_env(env10557, encode_int((s32)2), top);



//creating new closure instance
auto ptr11219 = reinterpret_cast<void (*)(void *, void *)>(&ptr10564);
env10557 = allocate_env_space(encode_int((s32)2));
void* id8819 = make_closure(reinterpret_cast<void *>(ptr11219), env10557);

//setting env list
set_env(env10557, encode_int((s32)1), kont8386);
set_env(env10557, encode_int((s32)2), top);


void* oldarg9101 = encode_null();
void* newarg9102 = prim_cons(id8819, oldarg9101);
void* newarg9103 = prim_cons(id8818, newarg9102);

//app-clo
void* cloPtr11220 = get_closure_ptr(id8817);
void* procEnv11221 = get_env(id8817);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11220);
function_ptr(procEnv11221, newarg9103);
}

void ptr10554(void* env10555, void* arglst8963)
{
void* kont8385 = prim_car(arglst8963);
void* arg_lst8964 = prim_cdr(arglst8963);
void* k = prim_car(arg_lst8964);
void* arg_lst8965 = prim_cdr(arg_lst8964);

//creating new closure instance
auto ptr11222 = reinterpret_cast<void (*)(void *, void *)>(&ptr10556);
env10555 = allocate_env_space(encode_int((s32)0));
void* id8815 = make_closure(reinterpret_cast<void *>(ptr11222), env10555);



//creating new closure instance
auto ptr11223 = reinterpret_cast<void (*)(void *, void *)>(&ptr10558);
env10555 = allocate_env_space(encode_int((s32)1));
void* id8816 = make_closure(reinterpret_cast<void *>(ptr11223), env10555);

//setting env list
set_env(env10555, encode_int((s32)1), k);


void* oldarg9110 = encode_null();
void* newarg9111 = prim_cons(id8816, oldarg9110);
void* newarg9112 = prim_cons(kont8385, newarg9111);

//app-clo
void* cloPtr11224 = get_closure_ptr(id8815);
void* procEnv11225 = get_env(id8815);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11224);
function_ptr(procEnv11225, newarg9112);
}

void ptr10534(void* env10535, void* arglst8960)
{
void* halt = get_env_value(env10535, encode_int((s32)1));
void* letk8384 = prim_car(arglst8960);
void* arg_lst8961 = prim_cdr(arglst8960);
void* filter = prim_car(arg_lst8961);
void* arg_lst8962 = prim_cdr(arg_lst8961);

//creating new closure instance
auto ptr11226 = reinterpret_cast<void (*)(void *, void *)>(&ptr10554);
env10535 = allocate_env_space(encode_int((s32)0));
void* id8814 = make_closure(reinterpret_cast<void *>(ptr11226), env10535);


void* oldarg9113 = encode_null();
void* newarg9114 = prim_cons(halt, oldarg9113);
void* newarg9115 = prim_cons(halt, newarg9114);

//app-clo
void* cloPtr11227 = get_closure_ptr(id8814);
void* procEnv11228 = get_env(id8814);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11227);
function_ptr(procEnv11228, newarg9115);
}

void ptr10516(void* env10517, void* arglst8957)
{
void* cdr = get_env_value(env10517, encode_int((s32)6));
void* null_u63 = get_env_value(env10517, encode_int((s32)5));
void* car = get_env_value(env10517, encode_int((s32)4));
void* cons = get_env_value(env10517, encode_int((s32)3));
void* Ycomb = get_env_value(env10517, encode_int((s32)2));
void* halt = get_env_value(env10517, encode_int((s32)1));
void* letk8383 = prim_car(arglst8957);
void* arg_lst8958 = prim_cdr(arglst8957);
void* append = prim_car(arg_lst8958);
void* arg_lst8959 = prim_cdr(arg_lst8958);

//creating new closure instance
auto ptr11229 = reinterpret_cast<void (*)(void *, void *)>(&ptr10534);
env10517 = allocate_env_space(encode_int((s32)1));
void* id8801 = make_closure(reinterpret_cast<void *>(ptr11229), env10517);

//setting env list
set_env(env10517, encode_int((s32)1), halt);



//creating new closure instance
auto ptr11230 = reinterpret_cast<void (*)(void *, void *)>(&ptr10536);
env10517 = allocate_env_space(encode_int((s32)4));
void* id8802 = make_closure(reinterpret_cast<void *>(ptr11230), env10517);

//setting env list
set_env(env10517, encode_int((s32)1), cons);
set_env(env10517, encode_int((s32)2), car);
set_env(env10517, encode_int((s32)3), null_u63);
set_env(env10517, encode_int((s32)4), cdr);


void* oldarg9180 = encode_null();
void* newarg9181 = prim_cons(id8802, oldarg9180);
void* newarg9182 = prim_cons(id8801, newarg9181);

//app-clo
void* cloPtr11231 = get_closure_ptr(Ycomb);
void* procEnv11232 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11231);
function_ptr(procEnv11232, newarg9182);
}

void ptr10500(void* env10501, void* arglst8954)
{
void* cdr = get_env_value(env10501, encode_int((s32)8));
void* null_u63 = get_env_value(env10501, encode_int((s32)7));
void* append1 = get_env_value(env10501, encode_int((s32)6));
void* car = get_env_value(env10501, encode_int((s32)5));
void* Ycomb = get_env_value(env10501, encode_int((s32)4));
void* halt = get_env_value(env10501, encode_int((s32)3));
void* cons = get_env_value(env10501, encode_int((s32)2));
void* foldl = get_env_value(env10501, encode_int((s32)1));
void* letk8382 = prim_car(arglst8954);
void* arg_lst8955 = prim_cdr(arglst8954);
void* reverse = prim_car(arg_lst8955);
void* arg_lst8956 = prim_cdr(arg_lst8955);

//creating new closure instance
auto ptr11233 = reinterpret_cast<void (*)(void *, void *)>(&ptr10516);
env10501 = allocate_env_space(encode_int((s32)6));
void* id8788 = make_closure(reinterpret_cast<void *>(ptr11233), env10501);

//setting env list
set_env(env10501, encode_int((s32)1), halt);
set_env(env10501, encode_int((s32)2), Ycomb);
set_env(env10501, encode_int((s32)3), cons);
set_env(env10501, encode_int((s32)4), car);
set_env(env10501, encode_int((s32)5), null_u63);
set_env(env10501, encode_int((s32)6), cdr);



//creating new closure instance
auto ptr11234 = reinterpret_cast<void (*)(void *, void *)>(&ptr10518);
env10501 = allocate_env_space(encode_int((s32)6));
void* id8789 = make_closure(reinterpret_cast<void *>(ptr11234), env10501);

//setting env list
set_env(env10501, encode_int((s32)1), foldl);
set_env(env10501, encode_int((s32)2), cons);
set_env(env10501, encode_int((s32)3), car);
set_env(env10501, encode_int((s32)4), append1);
set_env(env10501, encode_int((s32)5), reverse);
set_env(env10501, encode_int((s32)6), cdr);


void* oldarg9232 = encode_null();
void* newarg9233 = prim_cons(id8789, oldarg9232);
void* newarg9234 = prim_cons(id8788, newarg9233);

//app-clo
void* cloPtr11235 = get_closure_ptr(Ycomb);
void* procEnv11236 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11235);
function_ptr(procEnv11236, newarg9234);
}

void ptr10466(void* env10467, void* arglst8951)
{
void* cdr = get_env_value(env10467, encode_int((s32)7));
void* null_u63 = get_env_value(env10467, encode_int((s32)6));
void* append1 = get_env_value(env10467, encode_int((s32)5));
void* car = get_env_value(env10467, encode_int((s32)4));
void* cons = get_env_value(env10467, encode_int((s32)3));
void* Ycomb = get_env_value(env10467, encode_int((s32)2));
void* halt = get_env_value(env10467, encode_int((s32)1));
void* letk8381 = prim_car(arglst8951);
void* arg_lst8952 = prim_cdr(arglst8951);
void* foldl = prim_car(arg_lst8952);
void* arg_lst8953 = prim_cdr(arg_lst8952);

//creating new closure instance
auto ptr11237 = reinterpret_cast<void (*)(void *, void *)>(&ptr10500);
env10467 = allocate_env_space(encode_int((s32)8));
void* id8777 = make_closure(reinterpret_cast<void *>(ptr11237), env10467);

//setting env list
set_env(env10467, encode_int((s32)1), foldl);
set_env(env10467, encode_int((s32)2), cons);
set_env(env10467, encode_int((s32)3), halt);
set_env(env10467, encode_int((s32)4), Ycomb);
set_env(env10467, encode_int((s32)5), car);
set_env(env10467, encode_int((s32)6), append1);
set_env(env10467, encode_int((s32)7), null_u63);
set_env(env10467, encode_int((s32)8), cdr);



//creating new closure instance
auto ptr11238 = reinterpret_cast<void (*)(void *, void *)>(&ptr10502);
env10467 = allocate_env_space(encode_int((s32)5));
void* id8778 = make_closure(reinterpret_cast<void *>(ptr11238), env10467);

//setting env list
set_env(env10467, encode_int((s32)1), cons);
set_env(env10467, encode_int((s32)2), car);
set_env(env10467, encode_int((s32)3), append1);
set_env(env10467, encode_int((s32)4), null_u63);
set_env(env10467, encode_int((s32)5), cdr);


void* oldarg9282 = encode_null();
void* newarg9283 = prim_cons(id8778, oldarg9282);
void* newarg9284 = prim_cons(id8777, newarg9283);

//app-clo
void* cloPtr11239 = get_closure_ptr(Ycomb);
void* procEnv11240 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11239);
function_ptr(procEnv11240, newarg9284);
}

void ptr10432(void* env10433, void* arglst8948)
{
void* cdr = get_env_value(env10433, encode_int((s32)9));
void* null_u63 = get_env_value(env10433, encode_int((s32)8));
void* ormap = get_env_value(env10433, encode_int((s32)7));
void* append1 = get_env_value(env10433, encode_int((s32)6));
void* map1 = get_env_value(env10433, encode_int((s32)5));
void* car = get_env_value(env10433, encode_int((s32)4));
void* cons = get_env_value(env10433, encode_int((s32)3));
void* Ycomb = get_env_value(env10433, encode_int((s32)2));
void* halt = get_env_value(env10433, encode_int((s32)1));
void* letk8380 = prim_car(arglst8948);
void* arg_lst8949 = prim_cdr(arglst8948);
void* foldr = prim_car(arg_lst8949);
void* arg_lst8950 = prim_cdr(arg_lst8949);

//creating new closure instance
auto ptr11241 = reinterpret_cast<void (*)(void *, void *)>(&ptr10466);
env10433 = allocate_env_space(encode_int((s32)7));
void* id8755 = make_closure(reinterpret_cast<void *>(ptr11241), env10433);

//setting env list
set_env(env10433, encode_int((s32)1), halt);
set_env(env10433, encode_int((s32)2), Ycomb);
set_env(env10433, encode_int((s32)3), cons);
set_env(env10433, encode_int((s32)4), car);
set_env(env10433, encode_int((s32)5), append1);
set_env(env10433, encode_int((s32)6), null_u63);
set_env(env10433, encode_int((s32)7), cdr);



//creating new closure instance
auto ptr11242 = reinterpret_cast<void (*)(void *, void *)>(&ptr10468);
env10433 = allocate_env_space(encode_int((s32)7));
void* id8756 = make_closure(reinterpret_cast<void *>(ptr11242), env10433);

//setting env list
set_env(env10433, encode_int((s32)1), cons);
set_env(env10433, encode_int((s32)2), car);
set_env(env10433, encode_int((s32)3), map1);
set_env(env10433, encode_int((s32)4), append1);
set_env(env10433, encode_int((s32)5), ormap);
set_env(env10433, encode_int((s32)6), null_u63);
set_env(env10433, encode_int((s32)7), cdr);


void* oldarg9383 = encode_null();
void* newarg9384 = prim_cons(id8756, oldarg9383);
void* newarg9385 = prim_cons(id8755, newarg9384);

//app-clo
void* cloPtr11243 = get_closure_ptr(Ycomb);
void* procEnv11244 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11243);
function_ptr(procEnv11244, newarg9385);
}

void ptr10374(void* env10375, void* arglst8945)
{
void* cdr = get_env_value(env10375, encode_int((s32)9));
void* null_u63 = get_env_value(env10375, encode_int((s32)8));
void* ormap = get_env_value(env10375, encode_int((s32)7));
void* append1 = get_env_value(env10375, encode_int((s32)6));
void* map1 = get_env_value(env10375, encode_int((s32)5));
void* car = get_env_value(env10375, encode_int((s32)4));
void* cons = get_env_value(env10375, encode_int((s32)3));
void* Ycomb = get_env_value(env10375, encode_int((s32)2));
void* halt = get_env_value(env10375, encode_int((s32)1));
void* letk8379 = prim_car(arglst8945);
void* arg_lst8946 = prim_cdr(arglst8945);
void* andmap = prim_car(arg_lst8946);
void* arg_lst8947 = prim_cdr(arg_lst8946);

//creating new closure instance
auto ptr11245 = reinterpret_cast<void (*)(void *, void *)>(&ptr10432);
env10375 = allocate_env_space(encode_int((s32)9));
void* id8733 = make_closure(reinterpret_cast<void *>(ptr11245), env10375);

//setting env list
set_env(env10375, encode_int((s32)1), halt);
set_env(env10375, encode_int((s32)2), Ycomb);
set_env(env10375, encode_int((s32)3), cons);
set_env(env10375, encode_int((s32)4), car);
set_env(env10375, encode_int((s32)5), map1);
set_env(env10375, encode_int((s32)6), append1);
set_env(env10375, encode_int((s32)7), ormap);
set_env(env10375, encode_int((s32)8), null_u63);
set_env(env10375, encode_int((s32)9), cdr);



//creating new closure instance
auto ptr11246 = reinterpret_cast<void (*)(void *, void *)>(&ptr10434);
env10375 = allocate_env_space(encode_int((s32)7));
void* id8734 = make_closure(reinterpret_cast<void *>(ptr11246), env10375);

//setting env list
set_env(env10375, encode_int((s32)1), cons);
set_env(env10375, encode_int((s32)2), car);
set_env(env10375, encode_int((s32)3), map1);
set_env(env10375, encode_int((s32)4), append1);
set_env(env10375, encode_int((s32)5), ormap);
set_env(env10375, encode_int((s32)6), null_u63);
set_env(env10375, encode_int((s32)7), cdr);


void* oldarg9484 = encode_null();
void* newarg9485 = prim_cons(id8734, oldarg9484);
void* newarg9486 = prim_cons(id8733, newarg9485);

//app-clo
void* cloPtr11247 = get_closure_ptr(Ycomb);
void* procEnv11248 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11247);
function_ptr(procEnv11248, newarg9486);
}

void ptr10292(void* env10293, void* arglst8942)
{
void* cdr = get_env_value(env10293, encode_int((s32)12));
void* equal_u63 = get_env_value(env10293, encode_int((s32)11));
void* append1 = get_env_value(env10293, encode_int((s32)10));
void* map1 = get_env_value(env10293, encode_int((s32)9));
void* car = get_env_value(env10293, encode_int((s32)8));
void* cons = get_env_value(env10293, encode_int((s32)7));
void* null_u63 = get_env_value(env10293, encode_int((s32)6));
void* length = get_env_value(env10293, encode_int((s32)5));
void* Ycomb = get_env_value(env10293, encode_int((s32)4));
void* halt = get_env_value(env10293, encode_int((s32)3));
void* cdar = get_env_value(env10293, encode_int((s32)2));
void* _u61 = get_env_value(env10293, encode_int((s32)1));
void* letk8378 = prim_car(arglst8942);
void* arg_lst8943 = prim_cdr(arglst8942);
void* ormap = prim_car(arg_lst8943);
void* arg_lst8944 = prim_cdr(arg_lst8943);

//creating new closure instance
auto ptr11249 = reinterpret_cast<void (*)(void *, void *)>(&ptr10374);
env10293 = allocate_env_space(encode_int((s32)9));
void* id8688 = make_closure(reinterpret_cast<void *>(ptr11249), env10293);

//setting env list
set_env(env10293, encode_int((s32)1), halt);
set_env(env10293, encode_int((s32)2), Ycomb);
set_env(env10293, encode_int((s32)3), cons);
set_env(env10293, encode_int((s32)4), car);
set_env(env10293, encode_int((s32)5), map1);
set_env(env10293, encode_int((s32)6), append1);
set_env(env10293, encode_int((s32)7), ormap);
set_env(env10293, encode_int((s32)8), null_u63);
set_env(env10293, encode_int((s32)9), cdr);



//creating new closure instance
auto ptr11250 = reinterpret_cast<void (*)(void *, void *)>(&ptr10376);
env10293 = allocate_env_space(encode_int((s32)9));
void* id8689 = make_closure(reinterpret_cast<void *>(ptr11250), env10293);

//setting env list
set_env(env10293, encode_int((s32)1), _u61);
set_env(env10293, encode_int((s32)2), cdar);
set_env(env10293, encode_int((s32)3), length);
set_env(env10293, encode_int((s32)4), null_u63);
set_env(env10293, encode_int((s32)5), car);
set_env(env10293, encode_int((s32)6), map1);
set_env(env10293, encode_int((s32)7), equal_u63);
set_env(env10293, encode_int((s32)8), Ycomb);
set_env(env10293, encode_int((s32)9), cdr);


void* oldarg9671 = encode_null();
void* newarg9672 = prim_cons(id8689, oldarg9671);
void* newarg9673 = prim_cons(id8688, newarg9672);

//app-clo
void* cloPtr11251 = get_closure_ptr(Ycomb);
void* procEnv11252 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11251);
function_ptr(procEnv11252, newarg9673);
}

void ptr10260(void* env10261, void* arglst8939)
{
void* cdr = get_env_value(env10261, encode_int((s32)12));
void* equal_u63 = get_env_value(env10261, encode_int((s32)11));
void* append1 = get_env_value(env10261, encode_int((s32)10));
void* map1 = get_env_value(env10261, encode_int((s32)9));
void* car = get_env_value(env10261, encode_int((s32)8));
void* cons = get_env_value(env10261, encode_int((s32)7));
void* null_u63 = get_env_value(env10261, encode_int((s32)6));
void* length = get_env_value(env10261, encode_int((s32)5));
void* Ycomb = get_env_value(env10261, encode_int((s32)4));
void* halt = get_env_value(env10261, encode_int((s32)3));
void* cdar = get_env_value(env10261, encode_int((s32)2));
void* _u61 = get_env_value(env10261, encode_int((s32)1));
void* letk8377 = prim_car(arglst8939);
void* arg_lst8940 = prim_cdr(arglst8939);
void* map = prim_car(arg_lst8940);
void* arg_lst8941 = prim_cdr(arg_lst8940);

//creating new closure instance
auto ptr11253 = reinterpret_cast<void (*)(void *, void *)>(&ptr10292);
env10261 = allocate_env_space(encode_int((s32)12));
void* id8625 = make_closure(reinterpret_cast<void *>(ptr11253), env10261);

//setting env list
set_env(env10261, encode_int((s32)1), _u61);
set_env(env10261, encode_int((s32)2), cdar);
set_env(env10261, encode_int((s32)3), halt);
set_env(env10261, encode_int((s32)4), Ycomb);
set_env(env10261, encode_int((s32)5), length);
set_env(env10261, encode_int((s32)6), null_u63);
set_env(env10261, encode_int((s32)7), cons);
set_env(env10261, encode_int((s32)8), car);
set_env(env10261, encode_int((s32)9), map1);
set_env(env10261, encode_int((s32)10), append1);
set_env(env10261, encode_int((s32)11), equal_u63);
set_env(env10261, encode_int((s32)12), cdr);



//creating new closure instance
auto ptr11254 = reinterpret_cast<void (*)(void *, void *)>(&ptr10294);
env10261 = allocate_env_space(encode_int((s32)9));
void* id8626 = make_closure(reinterpret_cast<void *>(ptr11254), env10261);

//setting env list
set_env(env10261, encode_int((s32)1), _u61);
set_env(env10261, encode_int((s32)2), cdar);
set_env(env10261, encode_int((s32)3), length);
set_env(env10261, encode_int((s32)4), null_u63);
set_env(env10261, encode_int((s32)5), car);
set_env(env10261, encode_int((s32)6), map1);
set_env(env10261, encode_int((s32)7), equal_u63);
set_env(env10261, encode_int((s32)8), Ycomb);
set_env(env10261, encode_int((s32)9), cdr);


void* oldarg9938 = encode_null();
void* newarg9939 = prim_cons(id8626, oldarg9938);
void* newarg9940 = prim_cons(id8625, newarg9939);

//app-clo
void* cloPtr11255 = get_closure_ptr(Ycomb);
void* procEnv11256 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11255);
function_ptr(procEnv11256, newarg9940);
}

void ptr10244(void* env10245, void* arglst8936)
{
void* cdr = get_env_value(env10245, encode_int((s32)11));
void* equal_u63 = get_env_value(env10245, encode_int((s32)10));
void* append1 = get_env_value(env10245, encode_int((s32)9));
void* car = get_env_value(env10245, encode_int((s32)8));
void* cons = get_env_value(env10245, encode_int((s32)7));
void* null_u63 = get_env_value(env10245, encode_int((s32)6));
void* length = get_env_value(env10245, encode_int((s32)5));
void* Ycomb = get_env_value(env10245, encode_int((s32)4));
void* halt = get_env_value(env10245, encode_int((s32)3));
void* cdar = get_env_value(env10245, encode_int((s32)2));
void* _u61 = get_env_value(env10245, encode_int((s32)1));
void* letk8376 = prim_car(arglst8936);
void* arg_lst8937 = prim_cdr(arglst8936);
void* map1 = prim_car(arg_lst8937);
void* arg_lst8938 = prim_cdr(arg_lst8937);

//creating new closure instance
auto ptr11257 = reinterpret_cast<void (*)(void *, void *)>(&ptr10260);
env10245 = allocate_env_space(encode_int((s32)12));
void* id8605 = make_closure(reinterpret_cast<void *>(ptr11257), env10245);

//setting env list
set_env(env10245, encode_int((s32)1), _u61);
set_env(env10245, encode_int((s32)2), cdar);
set_env(env10245, encode_int((s32)3), halt);
set_env(env10245, encode_int((s32)4), Ycomb);
set_env(env10245, encode_int((s32)5), length);
set_env(env10245, encode_int((s32)6), null_u63);
set_env(env10245, encode_int((s32)7), cons);
set_env(env10245, encode_int((s32)8), car);
set_env(env10245, encode_int((s32)9), map1);
set_env(env10245, encode_int((s32)10), append1);
set_env(env10245, encode_int((s32)11), equal_u63);
set_env(env10245, encode_int((s32)12), cdr);



//creating new closure instance
auto ptr11258 = reinterpret_cast<void (*)(void *, void *)>(&ptr10262);
env10245 = allocate_env_space(encode_int((s32)5));
void* id8606 = make_closure(reinterpret_cast<void *>(ptr11258), env10245);

//setting env list
set_env(env10245, encode_int((s32)1), cons);
set_env(env10245, encode_int((s32)2), car);
set_env(env10245, encode_int((s32)3), map1);
set_env(env10245, encode_int((s32)4), null_u63);
set_env(env10245, encode_int((s32)5), cdr);


void* oldarg10030 = encode_null();
void* newarg10031 = prim_cons(id8606, oldarg10030);
void* newarg10032 = prim_cons(id8605, newarg10031);

//app-clo
void* cloPtr11259 = get_closure_ptr(Ycomb);
void* procEnv11260 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11259);
function_ptr(procEnv11260, newarg10032);
}

void ptr10230(void* env10231, void* arglst8933)
{
void* cdr = get_env_value(env10231, encode_int((s32)10));
void* equal_u63 = get_env_value(env10231, encode_int((s32)9));
void* car = get_env_value(env10231, encode_int((s32)8));
void* cons = get_env_value(env10231, encode_int((s32)7));
void* null_u63 = get_env_value(env10231, encode_int((s32)6));
void* length = get_env_value(env10231, encode_int((s32)5));
void* Ycomb = get_env_value(env10231, encode_int((s32)4));
void* halt = get_env_value(env10231, encode_int((s32)3));
void* cdar = get_env_value(env10231, encode_int((s32)2));
void* _u61 = get_env_value(env10231, encode_int((s32)1));
void* letk8375 = prim_car(arglst8933);
void* arg_lst8934 = prim_cdr(arglst8933);
void* append1 = prim_car(arg_lst8934);
void* arg_lst8935 = prim_cdr(arg_lst8934);

//creating new closure instance
auto ptr11261 = reinterpret_cast<void (*)(void *, void *)>(&ptr10244);
env10231 = allocate_env_space(encode_int((s32)11));
void* id8594 = make_closure(reinterpret_cast<void *>(ptr11261), env10231);

//setting env list
set_env(env10231, encode_int((s32)1), _u61);
set_env(env10231, encode_int((s32)2), cdar);
set_env(env10231, encode_int((s32)3), halt);
set_env(env10231, encode_int((s32)4), Ycomb);
set_env(env10231, encode_int((s32)5), length);
set_env(env10231, encode_int((s32)6), null_u63);
set_env(env10231, encode_int((s32)7), cons);
set_env(env10231, encode_int((s32)8), car);
set_env(env10231, encode_int((s32)9), append1);
set_env(env10231, encode_int((s32)10), equal_u63);
set_env(env10231, encode_int((s32)11), cdr);



//creating new closure instance
auto ptr11262 = reinterpret_cast<void (*)(void *, void *)>(&ptr10246);
env10231 = allocate_env_space(encode_int((s32)4));
void* id8595 = make_closure(reinterpret_cast<void *>(ptr11262), env10231);

//setting env list
set_env(env10231, encode_int((s32)1), cons);
set_env(env10231, encode_int((s32)2), car);
set_env(env10231, encode_int((s32)3), null_u63);
set_env(env10231, encode_int((s32)4), cdr);


void* oldarg10081 = encode_null();
void* newarg10082 = prim_cons(id8595, oldarg10081);
void* newarg10083 = prim_cons(id8594, newarg10082);

//app-clo
void* cloPtr11263 = get_closure_ptr(Ycomb);
void* procEnv11264 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11263);
function_ptr(procEnv11264, newarg10083);
}

void ptr10224(void* env10225, void* arglst8930)
{
void* cdr = get_env_value(env10225, encode_int((s32)9));
void* Ycomb = get_env_value(env10225, encode_int((s32)8));
void* equal_u63 = get_env_value(env10225, encode_int((s32)7));
void* car = get_env_value(env10225, encode_int((s32)6));
void* cons = get_env_value(env10225, encode_int((s32)5));
void* null_u63 = get_env_value(env10225, encode_int((s32)4));
void* length = get_env_value(env10225, encode_int((s32)3));
void* cdar = get_env_value(env10225, encode_int((s32)2));
void* _u61 = get_env_value(env10225, encode_int((s32)1));
void* letk8374 = prim_car(arglst8930);
void* arg_lst8931 = prim_cdr(arglst8930);
void* halt = prim_car(arg_lst8931);
void* arg_lst8932 = prim_cdr(arg_lst8931);

//creating new closure instance
auto ptr11265 = reinterpret_cast<void (*)(void *, void *)>(&ptr10230);
env10225 = allocate_env_space(encode_int((s32)10));
void* id8585 = make_closure(reinterpret_cast<void *>(ptr11265), env10225);

//setting env list
set_env(env10225, encode_int((s32)1), _u61);
set_env(env10225, encode_int((s32)2), cdar);
set_env(env10225, encode_int((s32)3), halt);
set_env(env10225, encode_int((s32)4), Ycomb);
set_env(env10225, encode_int((s32)5), length);
set_env(env10225, encode_int((s32)6), null_u63);
set_env(env10225, encode_int((s32)7), cons);
set_env(env10225, encode_int((s32)8), car);
set_env(env10225, encode_int((s32)9), equal_u63);
set_env(env10225, encode_int((s32)10), cdr);



//creating new closure instance
auto ptr11266 = reinterpret_cast<void (*)(void *, void *)>(&ptr10232);
env10225 = allocate_env_space(encode_int((s32)4));
void* id8586 = make_closure(reinterpret_cast<void *>(ptr11266), env10225);

//setting env list
set_env(env10225, encode_int((s32)1), cons);
set_env(env10225, encode_int((s32)2), car);
set_env(env10225, encode_int((s32)3), null_u63);
set_env(env10225, encode_int((s32)4), cdr);


void* oldarg10126 = encode_null();
void* newarg10127 = prim_cons(id8586, oldarg10126);
void* newarg10128 = prim_cons(id8585, newarg10127);

//app-clo
void* cloPtr11267 = get_closure_ptr(Ycomb);
void* procEnv11268 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11267);
function_ptr(procEnv11268, newarg10128);
}

void ptr10212(void* env10213, void* arglst8927)
{
void* cdr = get_env_value(env10213, encode_int((s32)8));
void* equal_u63 = get_env_value(env10213, encode_int((s32)7));
void* car = get_env_value(env10213, encode_int((s32)6));
void* cons = get_env_value(env10213, encode_int((s32)5));
void* null_u63 = get_env_value(env10213, encode_int((s32)4));
void* length = get_env_value(env10213, encode_int((s32)3));
void* cdar = get_env_value(env10213, encode_int((s32)2));
void* _u61 = get_env_value(env10213, encode_int((s32)1));
void* letk8373 = prim_car(arglst8927);
void* arg_lst8928 = prim_cdr(arglst8927);
void* Ycomb = prim_car(arg_lst8928);
void* arg_lst8929 = prim_cdr(arg_lst8928);

//creating new closure instance
auto ptr11269 = reinterpret_cast<void (*)(void *, void *)>(&ptr10224);
env10213 = allocate_env_space(encode_int((s32)9));
void* id8580 = make_closure(reinterpret_cast<void *>(ptr11269), env10213);

//setting env list
set_env(env10213, encode_int((s32)1), _u61);
set_env(env10213, encode_int((s32)2), cdar);
set_env(env10213, encode_int((s32)3), length);
set_env(env10213, encode_int((s32)4), null_u63);
set_env(env10213, encode_int((s32)5), cons);
set_env(env10213, encode_int((s32)6), car);
set_env(env10213, encode_int((s32)7), equal_u63);
set_env(env10213, encode_int((s32)8), Ycomb);
set_env(env10213, encode_int((s32)9), cdr);



//creating new closure instance
auto ptr11270 = reinterpret_cast<void (*)(void *, void *)>(&ptr10226);
env10213 = allocate_env_space(encode_int((s32)0));
void* id8581 = make_closure(reinterpret_cast<void *>(ptr11270), env10213);


void* oldarg10138 = encode_null();
void* newarg10139 = prim_cons(id8581, oldarg10138);
void* newarg10140 = prim_cons(id8580, newarg10139);

//app-clo
void* cloPtr11271 = get_closure_ptr(Ycomb);
void* procEnv11272 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11271);
function_ptr(procEnv11272, newarg10140);
}

void ptr10210(void* env10211, void* arglst8921)
{
void* kont8543 = prim_car(arglst8921);
void* arg_lst8922 = prim_cdr(arglst8921);
void* x = prim_car(arg_lst8922);
void* arg_lst8923 = prim_cdr(arg_lst8922);
void* oldarg8924 = encode_null();
void* newarg8925 = prim_cons(x, oldarg8924);
void* newarg8926 = prim_cons(kont8543, newarg8925);

//app-clo
void* cloPtr11273 = get_closure_ptr(x);
void* procEnv11274 = get_env(x);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11273);
function_ptr(procEnv11274, newarg8926);
}

void ptr10208(void* env10209, void* args8371)
{
void* kkont8370 = prim_car(args8371);
void* args = prim_cdr(args8371);
void* prm8372 = apply_prim__u43(args);
void* id8571 = encode_null();
void* oldarg8918 = encode_null();
void* newarg8919 = prim_cons(prm8372, oldarg8918);
void* newarg8920 = prim_cons(id8571, newarg8919);

//app-clo
void* cloPtr11275 = get_closure_ptr(kkont8370);
void* procEnv11276 = get_env(kkont8370);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11275);
function_ptr(procEnv11276, newarg8920);
}

void ptr10206(void* env10207, void* args8368)
{
void* kkont8367 = prim_car(args8368);
void* args = prim_cdr(args8368);
void* prm8369 = apply_prim__u45(args);
void* id8570 = encode_null();
void* oldarg8915 = encode_null();
void* newarg8916 = prim_cons(prm8369, oldarg8915);
void* newarg8917 = prim_cons(id8570, newarg8916);

//app-clo
void* cloPtr11277 = get_closure_ptr(kkont8367);
void* procEnv11278 = get_env(kkont8367);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11277);
function_ptr(procEnv11278, newarg8917);
}

void ptr10204(void* env10205, void* args8365)
{
void* kkont8364 = prim_car(args8365);
void* args = prim_cdr(args8365);
void* prm8366 = apply_prim__u42(args);
void* id8569 = encode_null();
void* oldarg8912 = encode_null();
void* newarg8913 = prim_cons(prm8366, oldarg8912);
void* newarg8914 = prim_cons(id8569, newarg8913);

//app-clo
void* cloPtr11279 = get_closure_ptr(kkont8364);
void* procEnv11280 = get_env(kkont8364);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11279);
function_ptr(procEnv11280, newarg8914);
}

void ptr10202(void* env10203, void* args8362)
{
void* kkont8361 = prim_car(args8362);
void* args = prim_cdr(args8362);
void* prm8363 = apply_prim__u61(args);
void* id8568 = encode_null();
void* oldarg8909 = encode_null();
void* newarg8910 = prim_cons(prm8363, oldarg8909);
void* newarg8911 = prim_cons(id8568, newarg8910);

//app-clo
void* cloPtr11281 = get_closure_ptr(kkont8361);
void* procEnv11282 = get_env(kkont8361);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11281);
function_ptr(procEnv11282, newarg8911);
}

void ptr10200(void* env10201, void* args8359)
{
void* kkont8358 = prim_car(args8359);
void* args = prim_cdr(args8359);
void* prm8360 = apply_prim__u62(args);
void* id8567 = encode_null();
void* oldarg8906 = encode_null();
void* newarg8907 = prim_cons(prm8360, oldarg8906);
void* newarg8908 = prim_cons(id8567, newarg8907);

//app-clo
void* cloPtr11283 = get_closure_ptr(kkont8358);
void* procEnv11284 = get_env(kkont8358);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11283);
function_ptr(procEnv11284, newarg8908);
}

void ptr10198(void* env10199, void* args8356)
{
void* kkont8355 = prim_car(args8356);
void* args = prim_cdr(args8356);
void* prm8357 = apply_prim__u62_u61(args);
void* id8566 = encode_null();
void* oldarg8903 = encode_null();
void* newarg8904 = prim_cons(prm8357, oldarg8903);
void* newarg8905 = prim_cons(id8566, newarg8904);

//app-clo
void* cloPtr11285 = get_closure_ptr(kkont8355);
void* procEnv11286 = get_env(kkont8355);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11285);
function_ptr(procEnv11286, newarg8905);
}

void ptr10196(void* env10197, void* args8353)
{
void* kkont8352 = prim_car(args8353);
void* args = prim_cdr(args8353);
void* prm8354 = apply_prim__u60(args);
void* id8565 = encode_null();
void* oldarg8900 = encode_null();
void* newarg8901 = prim_cons(prm8354, oldarg8900);
void* newarg8902 = prim_cons(id8565, newarg8901);

//app-clo
void* cloPtr11287 = get_closure_ptr(kkont8352);
void* procEnv11288 = get_env(kkont8352);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11287);
function_ptr(procEnv11288, newarg8902);
}

void ptr10194(void* env10195, void* args8350)
{
void* kkont8349 = prim_car(args8350);
void* args = prim_cdr(args8350);
void* prm8351 = apply_prim__u60_u61(args);
void* id8564 = encode_null();
void* oldarg8897 = encode_null();
void* newarg8898 = prim_cons(prm8351, oldarg8897);
void* newarg8899 = prim_cons(id8564, newarg8898);

//app-clo
void* cloPtr11289 = get_closure_ptr(kkont8349);
void* procEnv11290 = get_env(kkont8349);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11289);
function_ptr(procEnv11290, newarg8899);
}

void ptr10192(void* env10193, void* args8347)
{
void* kkont8346 = prim_car(args8347);
void* args = prim_cdr(args8347);
void* prm8348 = apply_prim_car(args);
void* id8563 = encode_null();
void* oldarg8894 = encode_null();
void* newarg8895 = prim_cons(prm8348, oldarg8894);
void* newarg8896 = prim_cons(id8563, newarg8895);

//app-clo
void* cloPtr11291 = get_closure_ptr(kkont8346);
void* procEnv11292 = get_env(kkont8346);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11291);
function_ptr(procEnv11292, newarg8896);
}

void ptr10190(void* env10191, void* args8344)
{
void* kkont8343 = prim_car(args8344);
void* args = prim_cdr(args8344);
void* prm8345 = apply_prim_cdr(args);
void* id8562 = encode_null();
void* oldarg8891 = encode_null();
void* newarg8892 = prim_cons(prm8345, oldarg8891);
void* newarg8893 = prim_cons(id8562, newarg8892);

//app-clo
void* cloPtr11293 = get_closure_ptr(kkont8343);
void* procEnv11294 = get_env(kkont8343);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11293);
function_ptr(procEnv11294, newarg8893);
}

void ptr10188(void* env10189, void* args8341)
{
void* kkont8340 = prim_car(args8341);
void* args = prim_cdr(args8341);
void* prm8342 = apply_prim_cdar(args);
void* id8561 = encode_null();
void* oldarg8888 = encode_null();
void* newarg8889 = prim_cons(prm8342, oldarg8888);
void* newarg8890 = prim_cons(id8561, newarg8889);

//app-clo
void* cloPtr11295 = get_closure_ptr(kkont8340);
void* procEnv11296 = get_env(kkont8340);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11295);
function_ptr(procEnv11296, newarg8890);
}

void ptr10186(void* env10187, void* args8338)
{
void* kkont8337 = prim_car(args8338);
void* args = prim_cdr(args8338);
void* prm8339 = apply_prim_cons(args);
void* id8560 = encode_null();
void* oldarg8885 = encode_null();
void* newarg8886 = prim_cons(prm8339, oldarg8885);
void* newarg8887 = prim_cons(id8560, newarg8886);

//app-clo
void* cloPtr11297 = get_closure_ptr(kkont8337);
void* procEnv11298 = get_env(kkont8337);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11297);
function_ptr(procEnv11298, newarg8887);
}

void ptr10184(void* env10185, void* args8335)
{
void* kkont8334 = prim_car(args8335);
void* args = prim_cdr(args8335);
void* prm8336 = apply_prim_list(args);
void* id8559 = encode_null();
void* oldarg8882 = encode_null();
void* newarg8883 = prim_cons(prm8336, oldarg8882);
void* newarg8884 = prim_cons(id8559, newarg8883);

//app-clo
void* cloPtr11299 = get_closure_ptr(kkont8334);
void* procEnv11300 = get_env(kkont8334);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11299);
function_ptr(procEnv11300, newarg8884);
}

void ptr10182(void* env10183, void* args8332)
{
void* kkont8331 = prim_car(args8332);
void* args = prim_cdr(args8332);
void* prm8333 = apply_prim_length(args);
void* id8558 = encode_null();
void* oldarg8879 = encode_null();
void* newarg8880 = prim_cons(prm8333, oldarg8879);
void* newarg8881 = prim_cons(id8558, newarg8880);

//app-clo
void* cloPtr11301 = get_closure_ptr(kkont8331);
void* procEnv11302 = get_env(kkont8331);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11301);
function_ptr(procEnv11302, newarg8881);
}

void ptr10180(void* env10181, void* args8329)
{
void* kkont8328 = prim_car(args8329);
void* args = prim_cdr(args8329);
void* prm8330 = apply_prim_equal_u63(args);
void* id8557 = encode_null();
void* oldarg8876 = encode_null();
void* newarg8877 = prim_cons(prm8330, oldarg8876);
void* newarg8878 = prim_cons(id8557, newarg8877);

//app-clo
void* cloPtr11303 = get_closure_ptr(kkont8328);
void* procEnv11304 = get_env(kkont8328);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11303);
function_ptr(procEnv11304, newarg8878);
}

void ptr10178(void* env10179, void* args8326)
{
void* kkont8325 = prim_car(args8326);
void* args = prim_cdr(args8326);
void* prm8327 = apply_prim_eq_u63(args);
void* id8556 = encode_null();
void* oldarg8873 = encode_null();
void* newarg8874 = prim_cons(prm8327, oldarg8873);
void* newarg8875 = prim_cons(id8556, newarg8874);

//app-clo
void* cloPtr11305 = get_closure_ptr(kkont8325);
void* procEnv11306 = get_env(kkont8325);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11305);
function_ptr(procEnv11306, newarg8875);
}

void ptr10176(void* env10177, void* args8323)
{
void* kkont8322 = prim_car(args8323);
void* args = prim_cdr(args8323);
void* prm8324 = apply_prim_null_u63(args);
void* id8555 = encode_null();
void* oldarg8870 = encode_null();
void* newarg8871 = prim_cons(prm8324, oldarg8870);
void* newarg8872 = prim_cons(id8555, newarg8871);

//app-clo
void* cloPtr11307 = get_closure_ptr(kkont8322);
void* procEnv11308 = get_env(kkont8322);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11307);
function_ptr(procEnv11308, newarg8872);
}

void ptr10174(void* env10175, void* args8320)
{
void* kkont8319 = prim_car(args8320);
void* args = prim_cdr(args8320);
void* prm8321 = apply_prim_odd_u63(args);
void* id8554 = encode_null();
void* oldarg8867 = encode_null();
void* newarg8868 = prim_cons(prm8321, oldarg8867);
void* newarg8869 = prim_cons(id8554, newarg8868);

//app-clo
void* cloPtr11309 = get_closure_ptr(kkont8319);
void* procEnv11310 = get_env(kkont8319);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11309);
function_ptr(procEnv11310, newarg8869);
}

void ptr10172(void* env10173, void* args8317)
{
void* kkont8316 = prim_car(args8317);
void* args = prim_cdr(args8317);
void* prm8318 = apply_prim_even_u63(args);
void* id8553 = encode_null();
void* oldarg8864 = encode_null();
void* newarg8865 = prim_cons(prm8318, oldarg8864);
void* newarg8866 = prim_cons(id8553, newarg8865);

//app-clo
void* cloPtr11311 = get_closure_ptr(kkont8316);
void* procEnv11312 = get_env(kkont8316);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11311);
function_ptr(procEnv11312, newarg8866);
}

void ptr10170(void* env10171, void* args8314)
{
void* kkont8313 = prim_car(args8314);
void* args = prim_cdr(args8314);
void* prm8315 = apply_prim_positive_u63(args);
void* id8552 = encode_null();
void* oldarg8861 = encode_null();
void* newarg8862 = prim_cons(prm8315, oldarg8861);
void* newarg8863 = prim_cons(id8552, newarg8862);

//app-clo
void* cloPtr11313 = get_closure_ptr(kkont8313);
void* procEnv11314 = get_env(kkont8313);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11313);
function_ptr(procEnv11314, newarg8863);
}

void ptr10168(void* env10169, void* args8311)
{
void* kkont8310 = prim_car(args8311);
void* args = prim_cdr(args8311);
void* prm8312 = apply_prim_negative_u63(args);
void* id8551 = encode_null();
void* oldarg8858 = encode_null();
void* newarg8859 = prim_cons(prm8312, oldarg8858);
void* newarg8860 = prim_cons(id8551, newarg8859);

//app-clo
void* cloPtr11315 = get_closure_ptr(kkont8310);
void* procEnv11316 = get_env(kkont8310);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11315);
function_ptr(procEnv11316, newarg8860);
}

void root(void* rootenv10598, void* rootarg10599)
{

//creating new closure instance
auto ptr11317 = reinterpret_cast<void (*)(void *, void *)>(&ptr10168);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* negative_u63 = make_closure(reinterpret_cast<void *>(ptr11317), rootenv10598);



//creating new closure instance
auto ptr11318 = reinterpret_cast<void (*)(void *, void *)>(&ptr10170);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* positive_u63 = make_closure(reinterpret_cast<void *>(ptr11318), rootenv10598);



//creating new closure instance
auto ptr11319 = reinterpret_cast<void (*)(void *, void *)>(&ptr10172);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* even_u63 = make_closure(reinterpret_cast<void *>(ptr11319), rootenv10598);



//creating new closure instance
auto ptr11320 = reinterpret_cast<void (*)(void *, void *)>(&ptr10174);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* odd_u63 = make_closure(reinterpret_cast<void *>(ptr11320), rootenv10598);



//creating new closure instance
auto ptr11321 = reinterpret_cast<void (*)(void *, void *)>(&ptr10176);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* null_u63 = make_closure(reinterpret_cast<void *>(ptr11321), rootenv10598);



//creating new closure instance
auto ptr11322 = reinterpret_cast<void (*)(void *, void *)>(&ptr10178);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* eq_u63 = make_closure(reinterpret_cast<void *>(ptr11322), rootenv10598);



//creating new closure instance
auto ptr11323 = reinterpret_cast<void (*)(void *, void *)>(&ptr10180);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* equal_u63 = make_closure(reinterpret_cast<void *>(ptr11323), rootenv10598);



//creating new closure instance
auto ptr11324 = reinterpret_cast<void (*)(void *, void *)>(&ptr10182);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* length = make_closure(reinterpret_cast<void *>(ptr11324), rootenv10598);



//creating new closure instance
auto ptr11325 = reinterpret_cast<void (*)(void *, void *)>(&ptr10184);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* list = make_closure(reinterpret_cast<void *>(ptr11325), rootenv10598);



//creating new closure instance
auto ptr11326 = reinterpret_cast<void (*)(void *, void *)>(&ptr10186);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* cons = make_closure(reinterpret_cast<void *>(ptr11326), rootenv10598);



//creating new closure instance
auto ptr11327 = reinterpret_cast<void (*)(void *, void *)>(&ptr10188);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* cdar = make_closure(reinterpret_cast<void *>(ptr11327), rootenv10598);



//creating new closure instance
auto ptr11328 = reinterpret_cast<void (*)(void *, void *)>(&ptr10190);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* cdr = make_closure(reinterpret_cast<void *>(ptr11328), rootenv10598);



//creating new closure instance
auto ptr11329 = reinterpret_cast<void (*)(void *, void *)>(&ptr10192);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* car = make_closure(reinterpret_cast<void *>(ptr11329), rootenv10598);



//creating new closure instance
auto ptr11330 = reinterpret_cast<void (*)(void *, void *)>(&ptr10194);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u60_u61 = make_closure(reinterpret_cast<void *>(ptr11330), rootenv10598);



//creating new closure instance
auto ptr11331 = reinterpret_cast<void (*)(void *, void *)>(&ptr10196);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u60 = make_closure(reinterpret_cast<void *>(ptr11331), rootenv10598);



//creating new closure instance
auto ptr11332 = reinterpret_cast<void (*)(void *, void *)>(&ptr10198);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u62_u61 = make_closure(reinterpret_cast<void *>(ptr11332), rootenv10598);



//creating new closure instance
auto ptr11333 = reinterpret_cast<void (*)(void *, void *)>(&ptr10200);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u62 = make_closure(reinterpret_cast<void *>(ptr11333), rootenv10598);



//creating new closure instance
auto ptr11334 = reinterpret_cast<void (*)(void *, void *)>(&ptr10202);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u61 = make_closure(reinterpret_cast<void *>(ptr11334), rootenv10598);



//creating new closure instance
auto ptr11335 = reinterpret_cast<void (*)(void *, void *)>(&ptr10204);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u42 = make_closure(reinterpret_cast<void *>(ptr11335), rootenv10598);



//creating new closure instance
auto ptr11336 = reinterpret_cast<void (*)(void *, void *)>(&ptr10206);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u45 = make_closure(reinterpret_cast<void *>(ptr11336), rootenv10598);



//creating new closure instance
auto ptr11337 = reinterpret_cast<void (*)(void *, void *)>(&ptr10208);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* _u43 = make_closure(reinterpret_cast<void *>(ptr11337), rootenv10598);



//creating new closure instance
auto ptr11338 = reinterpret_cast<void (*)(void *, void *)>(&ptr10210);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* id8572 = make_closure(reinterpret_cast<void *>(ptr11338), rootenv10598);



//creating new closure instance
auto ptr11339 = reinterpret_cast<void (*)(void *, void *)>(&ptr10212);
rootenv10598 = allocate_env_space(encode_int((s32)8));
void* id8573 = make_closure(reinterpret_cast<void *>(ptr11339), rootenv10598);

//setting env list
set_env(rootenv10598, encode_int((s32)1), _u61);
set_env(rootenv10598, encode_int((s32)2), cdar);
set_env(rootenv10598, encode_int((s32)3), length);
set_env(rootenv10598, encode_int((s32)4), null_u63);
set_env(rootenv10598, encode_int((s32)5), cons);
set_env(rootenv10598, encode_int((s32)6), car);
set_env(rootenv10598, encode_int((s32)7), equal_u63);
set_env(rootenv10598, encode_int((s32)8), cdr);



//creating new closure instance
auto ptr11340 = reinterpret_cast<void (*)(void *, void *)>(&ptr10214);
rootenv10598 = allocate_env_space(encode_int((s32)0));
void* id8574 = make_closure(reinterpret_cast<void *>(ptr11340), rootenv10598);


void* oldarg10165 = encode_null();
void* newarg10166 = prim_cons(id8574, oldarg10165);
void* newarg10167 = prim_cons(id8573, newarg10166);

//app-clo
void* cloPtr11341 = get_closure_ptr(id8572);
void* procEnv11342 = get_env(id8572);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr11341);
function_ptr(procEnv11342, newarg10167);
}

int main(int argc, char **argv)
{
//making a call to the root function to kick off our c++ emission.
root(0,0);
}

