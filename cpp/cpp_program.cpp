#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void ptr8664(void* env8665, void* arglst8596)
{
cout<<"In ptr8664";
print_val(arglst8596);

void* vs = get_env_value(env8665, encode_int((s32)2));
void* kkont8319 = get_env_value(env8665, encode_int((s32)1));
void* letk8322 = prim_car(arglst8596);
void* arg_u45lst8597 = prim_cdr(arglst8596);
void* t8226 = prim_car(arg_u45lst8597);
void* arg_u45lst8598 = prim_cdr(arg_u45lst8597);
void* lst8323 = prim_cons(kkont8319, vs);

//app-clo
void* cloPtr8708 = get_closure_ptr(t8226);
void* procEnv8709 = get_env(t8226);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8708);
function_ptr(procEnv8709, lst8323);
}

void ptr8662(void* env8663, void* arglst8593)
{
cout<<"In ptr8662";
print_val(arglst8593);

void* kkont8319 = get_env_value(env8663, encode_int((s32)3));
void* vs = get_env_value(env8663, encode_int((s32)2));
void* f = get_env_value(env8663, encode_int((s32)1));
void* letk8321 = prim_car(arglst8593);
void* arg_u45lst8594 = prim_cdr(arglst8593);
void* t8225 = prim_car(arg_u45lst8594);
void* arg_u45lst8595 = prim_cdr(arg_u45lst8594);

//creating new closure instance
auto ptr8710 = reinterpret_cast<void (*)(void *, void *)>(&ptr8664);
env8663 = allocate_env_space(encode_int((s32)2));
void* id8350 = make_closure(reinterpret_cast<void *>(ptr8710), env8663);

//setting env list
set_env(env8663, encode_int((s32)1), kkont8319);
set_env(env8663, encode_int((s32)2), vs);


void* oldarg8599 = encode_null();
void* newarg8600 = prim_cons(f, oldarg8599);
void* newarg8601 = prim_cons(id8350, newarg8600);

//app-clo
void* cloPtr8711 = get_closure_ptr(t8225);
void* procEnv8712 = get_env(t8225);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8711);
function_ptr(procEnv8712, newarg8601);
}

void ptr8660(void* env8661, void* vs8320)
{
cout<<"In ptr8660";
print_val(vs8320);

void* g = get_env_value(env8661, encode_int((s32)2));
void* f = get_env_value(env8661, encode_int((s32)1));
void* kkont8319 = prim_car(vs8320);
void* vs = prim_cdr(vs8320);

//creating new closure instance
auto ptr8713 = reinterpret_cast<void (*)(void *, void *)>(&ptr8662);
env8661 = allocate_env_space(encode_int((s32)3));
void* id8349 = make_closure(reinterpret_cast<void *>(ptr8713), env8661);

//setting env list
set_env(env8661, encode_int((s32)1), f);
set_env(env8661, encode_int((s32)2), vs);
set_env(env8661, encode_int((s32)3), kkont8319);


void* oldarg8602 = encode_null();
void* newarg8603 = prim_cons(g, oldarg8602);
void* newarg8604 = prim_cons(id8349, newarg8603);

//app-clo
void* cloPtr8714 = get_closure_ptr(g);
void* procEnv8715 = get_env(g);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8714);
function_ptr(procEnv8715, newarg8604);
}

void ptr8658(void* env8659, void* arglst8590)
{
cout<<"In ptr8658";
print_val(arglst8590);

void* g = get_env_value(env8659, encode_int((s32)1));
void* kont8318 = prim_car(arglst8590);
void* arg_u45lst8591 = prim_cdr(arglst8590);
void* f = prim_car(arg_u45lst8591);
void* arg_u45lst8592 = prim_cdr(arg_u45lst8591);

//creating new closure instance
auto ptr8716 = reinterpret_cast<void (*)(void *, void *)>(&ptr8660);
env8659 = allocate_env_space(encode_int((s32)2));
void* id8348 = make_closure(reinterpret_cast<void *>(ptr8716), env8659);

//setting env list
set_env(env8659, encode_int((s32)1), f);
set_env(env8659, encode_int((s32)2), g);


void* oldarg8605 = encode_null();
void* newarg8606 = prim_cons(id8348, oldarg8605);
void* newarg8607 = prim_cons(kont8318, newarg8606);

//app-clo
void* cloPtr8717 = get_closure_ptr(f);
void* procEnv8718 = get_env(f);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8717);
function_ptr(procEnv8718, newarg8607);
}

void ptr8656(void* env8657, void* arglst8587)
{
cout<<"In ptr8656";
print_val(arglst8587);

void* kont8317 = prim_car(arglst8587);
void* arg_u45lst8588 = prim_cdr(arglst8587);
void* g = prim_car(arg_u45lst8588);
void* arg_u45lst8589 = prim_cdr(arg_u45lst8588);
void* id8346 = encode_null();

//creating new closure instance
auto ptr8719 = reinterpret_cast<void (*)(void *, void *)>(&ptr8658);
env8657 = allocate_env_space(encode_int((s32)1));
void* id8347 = make_closure(reinterpret_cast<void *>(ptr8719), env8657);

//setting env list
set_env(env8657, encode_int((s32)1), g);


void* oldarg8608 = encode_null();
void* newarg8609 = prim_cons(id8347, oldarg8608);
void* newarg8610 = prim_cons(id8346, newarg8609);

//app-clo
void* cloPtr8720 = get_closure_ptr(kont8317);
void* procEnv8721 = get_env(kont8317);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8720);
function_ptr(procEnv8721, newarg8610);
}

void ptr8670(void* env8671, void* args8314)
{
cout<<"In ptr8670";
print_val(args8314);

void* kkont8313 = prim_car(args8314);
void* args = prim_cdr(args8314);
void* prm8315 = apply_prim_halt(args);
void* id8355 = encode_null();
void* oldarg8578 = encode_null();
void* newarg8579 = prim_cons(prm8315, oldarg8578);
void* newarg8580 = prim_cons(id8355, newarg8579);

//app-clo
void* cloPtr8722 = get_closure_ptr(kkont8313);
void* procEnv8723 = get_env(kkont8313);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8722);
function_ptr(procEnv8723, newarg8580);
}

void ptr8668(void* env8669, void* arglst8575)
{
cout<<"In ptr8668";
print_val(arglst8575);

void* kont8312 = prim_car(arglst8575);
void* arg_u45lst8576 = prim_cdr(arglst8575);
void* halt = prim_car(arg_u45lst8576);
void* arg_u45lst8577 = prim_cdr(arg_u45lst8576);
void* id8353 = encode_null();

//creating new closure instance
auto ptr8724 = reinterpret_cast<void (*)(void *, void *)>(&ptr8670);
env8669 = allocate_env_space(encode_int((s32)0));
void* id8354 = make_closure(reinterpret_cast<void *>(ptr8724), env8669);


void* oldarg8581 = encode_null();
void* newarg8582 = prim_cons(id8354, oldarg8581);
void* newarg8583 = prim_cons(id8353, newarg8582);

//app-clo
void* cloPtr8725 = get_closure_ptr(kont8312);
void* procEnv8726 = get_env(kont8312);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8725);
function_ptr(procEnv8726, newarg8583);
}

void ptr8684(void* env8685, void* arglst8549)
{
cout<<"In ptr8684";
print_val(arglst8549);

void* t8228 = get_env_value(env8685, encode_int((s32)3));
void* cons = get_env_value(env8685, encode_int((s32)2));
void* kont8307 = get_env_value(env8685, encode_int((s32)1));
void* letk8311 = prim_car(arglst8549);
void* arg_u45lst8550 = prim_cdr(arglst8549);
void* t8230 = prim_car(arg_u45lst8550);
void* arg_u45lst8551 = prim_cdr(arg_u45lst8550);
void* oldarg8552 = encode_null();
void* newarg8553 = prim_cons(t8230, oldarg8552);
void* newarg8554 = prim_cons(t8228, newarg8553);
void* newarg8555 = prim_cons(kont8307, newarg8554);

//app-clo
void* cloPtr8727 = get_closure_ptr(cons);
void* procEnv8728 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8727);
function_ptr(procEnv8728, newarg8555);
}

void ptr8682(void* env8683, void* arglst8546)
{
cout<<"In ptr8682";
print_val(arglst8546);

void* append1 = get_env_value(env8683, encode_int((s32)5));
void* rhs = get_env_value(env8683, encode_int((s32)4));
void* t8228 = get_env_value(env8683, encode_int((s32)3));
void* cons = get_env_value(env8683, encode_int((s32)2));
void* kont8307 = get_env_value(env8683, encode_int((s32)1));
void* letk8310 = prim_car(arglst8546);
void* arg_u45lst8547 = prim_cdr(arglst8546);
void* t8229 = prim_car(arg_u45lst8547);
void* arg_u45lst8548 = prim_cdr(arg_u45lst8547);

//creating new closure instance
auto ptr8729 = reinterpret_cast<void (*)(void *, void *)>(&ptr8684);
env8683 = allocate_env_space(encode_int((s32)3));
void* id8364 = make_closure(reinterpret_cast<void *>(ptr8729), env8683);

//setting env list
set_env(env8683, encode_int((s32)1), kont8307);
set_env(env8683, encode_int((s32)2), cons);
set_env(env8683, encode_int((s32)3), t8228);


void* oldarg8556 = encode_null();
void* newarg8557 = prim_cons(rhs, oldarg8556);
void* newarg8558 = prim_cons(t8229, newarg8557);
void* newarg8559 = prim_cons(id8364, newarg8558);

//app-clo
void* cloPtr8730 = get_closure_ptr(append1);
void* procEnv8731 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8730);
function_ptr(procEnv8731, newarg8559);
}

void ptr8680(void* env8681, void* arglst8543)
{
cout<<"In ptr8680";
print_val(arglst8543);

void* cdr = get_env_value(env8681, encode_int((s32)6));
void* lhs = get_env_value(env8681, encode_int((s32)5));
void* append1 = get_env_value(env8681, encode_int((s32)4));
void* rhs = get_env_value(env8681, encode_int((s32)3));
void* cons = get_env_value(env8681, encode_int((s32)2));
void* kont8307 = get_env_value(env8681, encode_int((s32)1));
void* letk8309 = prim_car(arglst8543);
void* arg_u45lst8544 = prim_cdr(arglst8543);
void* t8228 = prim_car(arg_u45lst8544);
void* arg_u45lst8545 = prim_cdr(arg_u45lst8544);

//creating new closure instance
auto ptr8732 = reinterpret_cast<void (*)(void *, void *)>(&ptr8682);
env8681 = allocate_env_space(encode_int((s32)5));
void* id8363 = make_closure(reinterpret_cast<void *>(ptr8732), env8681);

//setting env list
set_env(env8681, encode_int((s32)1), kont8307);
set_env(env8681, encode_int((s32)2), cons);
set_env(env8681, encode_int((s32)3), t8228);
set_env(env8681, encode_int((s32)4), rhs);
set_env(env8681, encode_int((s32)5), append1);


void* oldarg8560 = encode_null();
void* newarg8561 = prim_cons(lhs, oldarg8560);
void* newarg8562 = prim_cons(id8363, newarg8561);

//app-clo
void* cloPtr8733 = get_closure_ptr(cdr);
void* procEnv8734 = get_env(cdr);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8733);
function_ptr(procEnv8734, newarg8562);
}

void ptr8678(void* env8679, void* arglst8537)
{
cout<<"In ptr8678";
print_val(arglst8537);

void* cdr = get_env_value(env8679, encode_int((s32)7));
void* lhs = get_env_value(env8679, encode_int((s32)6));
void* append1 = get_env_value(env8679, encode_int((s32)5));
void* rhs = get_env_value(env8679, encode_int((s32)4));
void* car = get_env_value(env8679, encode_int((s32)3));
void* cons = get_env_value(env8679, encode_int((s32)2));
void* kont8307 = get_env_value(env8679, encode_int((s32)1));
void* letk8308 = prim_car(arglst8537);
void* arg_u45lst8538 = prim_cdr(arglst8537);
void* t8227 = prim_car(arg_u45lst8538);
void* arg_u45lst8539 = prim_cdr(arg_u45lst8538);
}

void ptr8676(void* env8677, void* arglst8533)
{
cout<<"In ptr8676";
print_val(arglst8533);

void* cdr = get_env_value(env8677, encode_int((s32)5));
void* null_u63 = get_env_value(env8677, encode_int((s32)4));
void* append1 = get_env_value(env8677, encode_int((s32)3));
void* car = get_env_value(env8677, encode_int((s32)2));
void* cons = get_env_value(env8677, encode_int((s32)1));
void* kont8307 = prim_car(arglst8533);
void* arg_u45lst8534 = prim_cdr(arglst8533);
void* lhs = prim_car(arg_u45lst8534);
void* arg_u45lst8535 = prim_cdr(arg_u45lst8534);
void* rhs = prim_car(arg_u45lst8535);
void* arg_u45lst8536 = prim_cdr(arg_u45lst8535);

//creating new closure instance
auto ptr8735 = reinterpret_cast<void (*)(void *, void *)>(&ptr8678);
env8677 = allocate_env_space(encode_int((s32)7));
void* id8360 = make_closure(reinterpret_cast<void *>(ptr8735), env8677);

//setting env list
set_env(env8677, encode_int((s32)1), kont8307);
set_env(env8677, encode_int((s32)2), cons);
set_env(env8677, encode_int((s32)3), car);
set_env(env8677, encode_int((s32)4), rhs);
set_env(env8677, encode_int((s32)5), append1);
set_env(env8677, encode_int((s32)6), lhs);
set_env(env8677, encode_int((s32)7), cdr);


void* oldarg8566 = encode_null();
void* newarg8567 = prim_cons(lhs, oldarg8566);
void* newarg8568 = prim_cons(id8360, newarg8567);

//app-clo
void* cloPtr8736 = get_closure_ptr(null_u63);
void* procEnv8737 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8736);
function_ptr(procEnv8737, newarg8568);
}

void ptr8674(void* env8675, void* arglst8530)
{
cout<<"In ptr8674";
print_val(arglst8530);

void* cdr = get_env_value(env8675, encode_int((s32)4));
void* null_u63 = get_env_value(env8675, encode_int((s32)3));
void* car = get_env_value(env8675, encode_int((s32)2));
void* cons = get_env_value(env8675, encode_int((s32)1));
void* kont8306 = prim_car(arglst8530);
void* arg_u45lst8531 = prim_cdr(arglst8530);
void* append1 = prim_car(arg_u45lst8531);
void* arg_u45lst8532 = prim_cdr(arg_u45lst8531);
void* id8358 = encode_null();

//creating new closure instance
auto ptr8738 = reinterpret_cast<void (*)(void *, void *)>(&ptr8676);
env8675 = allocate_env_space(encode_int((s32)5));
void* id8359 = make_closure(reinterpret_cast<void *>(ptr8738), env8675);

//setting env list
set_env(env8675, encode_int((s32)1), cons);
set_env(env8675, encode_int((s32)2), car);
set_env(env8675, encode_int((s32)3), append1);
set_env(env8675, encode_int((s32)4), null_u63);
set_env(env8675, encode_int((s32)5), cdr);


void* oldarg8569 = encode_null();
void* newarg8570 = prim_cons(id8359, oldarg8569);
void* newarg8571 = prim_cons(id8358, newarg8570);

//app-clo
void* cloPtr8739 = get_closure_ptr(kont8306);
void* procEnv8740 = get_env(kont8306);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8739);
function_ptr(procEnv8740, newarg8571);
}

void ptr8700(void* env8701, void* arglst8501)
{
cout<<"In ptr8700";
print_val(arglst8501);

void* t8233 = get_env_value(env8701, encode_int((s32)3));
void* kont8300 = get_env_value(env8701, encode_int((s32)2));
void* append1 = get_env_value(env8701, encode_int((s32)1));
void* letk8305 = prim_car(arglst8501);
void* arg_u45lst8502 = prim_cdr(arglst8501);
void* t8235 = prim_car(arg_u45lst8502);
void* arg_u45lst8503 = prim_cdr(arg_u45lst8502);
void* oldarg8504 = encode_null();
void* newarg8505 = prim_cons(t8235, oldarg8504);
void* newarg8506 = prim_cons(t8233, newarg8505);
void* newarg8507 = prim_cons(kont8300, newarg8506);

//app-clo
void* cloPtr8741 = get_closure_ptr(append1);
void* procEnv8742 = get_env(append1);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8741);
function_ptr(procEnv8742, newarg8507);
}

void ptr8698(void* env8699, void* arglst8498)
{
cout<<"In ptr8698";
print_val(arglst8498);

void* t8233 = get_env_value(env8699, encode_int((s32)4));
void* kont8300 = get_env_value(env8699, encode_int((s32)3));
void* append1 = get_env_value(env8699, encode_int((s32)2));
void* cons = get_env_value(env8699, encode_int((s32)1));
void* letk8304 = prim_car(arglst8498);
void* arg_u45lst8499 = prim_cdr(arglst8498);
void* t8234 = prim_car(arg_u45lst8499);
void* arg_u45lst8500 = prim_cdr(arg_u45lst8499);

//creating new closure instance
auto ptr8743 = reinterpret_cast<void (*)(void *, void *)>(&ptr8700);
env8699 = allocate_env_space(encode_int((s32)3));
void* id8374 = make_closure(reinterpret_cast<void *>(ptr8743), env8699);

//setting env list
set_env(env8699, encode_int((s32)1), append1);
set_env(env8699, encode_int((s32)2), kont8300);
set_env(env8699, encode_int((s32)3), t8233);


void* id8375 = encode_null();
void* oldarg8508 = encode_null();
void* newarg8509 = prim_cons(id8375, oldarg8508);
void* newarg8510 = prim_cons(t8234, newarg8509);
void* newarg8511 = prim_cons(id8374, newarg8510);

//app-clo
void* cloPtr8744 = get_closure_ptr(cons);
void* procEnv8745 = get_env(cons);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8744);
function_ptr(procEnv8745, newarg8511);
}

void ptr8696(void* env8697, void* arglst8495)
{
cout<<"In ptr8696";
print_val(arglst8495);

void* lst = get_env_value(env8697, encode_int((s32)5));
void* kont8300 = get_env_value(env8697, encode_int((s32)4));
void* append1 = get_env_value(env8697, encode_int((s32)3));
void* car = get_env_value(env8697, encode_int((s32)2));
void* cons = get_env_value(env8697, encode_int((s32)1));
void* letk8303 = prim_car(arglst8495);
void* arg_u45lst8496 = prim_cdr(arglst8495);
void* t8233 = prim_car(arg_u45lst8496);
void* arg_u45lst8497 = prim_cdr(arg_u45lst8496);

//creating new closure instance
auto ptr8746 = reinterpret_cast<void (*)(void *, void *)>(&ptr8698);
env8697 = allocate_env_space(encode_int((s32)4));
void* id8373 = make_closure(reinterpret_cast<void *>(ptr8746), env8697);

//setting env list
set_env(env8697, encode_int((s32)1), cons);
set_env(env8697, encode_int((s32)2), append1);
set_env(env8697, encode_int((s32)3), kont8300);
set_env(env8697, encode_int((s32)4), t8233);


void* oldarg8512 = encode_null();
void* newarg8513 = prim_cons(lst, oldarg8512);
void* newarg8514 = prim_cons(id8373, newarg8513);

//app-clo
void* cloPtr8747 = get_closure_ptr(car);
void* procEnv8748 = get_env(car);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8747);
function_ptr(procEnv8748, newarg8514);
}

void ptr8694(void* env8695, void* arglst8492)
{
cout<<"In ptr8694";
print_val(arglst8492);

void* lst = get_env_value(env8695, encode_int((s32)6));
void* append1 = get_env_value(env8695, encode_int((s32)5));
void* car = get_env_value(env8695, encode_int((s32)4));
void* cons = get_env_value(env8695, encode_int((s32)3));
void* kont8300 = get_env_value(env8695, encode_int((s32)2));
void* reverse = get_env_value(env8695, encode_int((s32)1));
void* letk8302 = prim_car(arglst8492);
void* arg_u45lst8493 = prim_cdr(arglst8492);
void* t8232 = prim_car(arg_u45lst8493);
void* arg_u45lst8494 = prim_cdr(arg_u45lst8493);

//creating new closure instance
auto ptr8749 = reinterpret_cast<void (*)(void *, void *)>(&ptr8696);
env8695 = allocate_env_space(encode_int((s32)5));
void* id8372 = make_closure(reinterpret_cast<void *>(ptr8749), env8695);

//setting env list
set_env(env8695, encode_int((s32)1), cons);
set_env(env8695, encode_int((s32)2), car);
set_env(env8695, encode_int((s32)3), append1);
set_env(env8695, encode_int((s32)4), kont8300);
set_env(env8695, encode_int((s32)5), lst);


void* oldarg8515 = encode_null();
void* newarg8516 = prim_cons(t8232, oldarg8515);
void* newarg8517 = prim_cons(id8372, newarg8516);

//app-clo
void* cloPtr8750 = get_closure_ptr(reverse);
void* procEnv8751 = get_env(reverse);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8750);
function_ptr(procEnv8751, newarg8517);
}

void ptr8692(void* env8693, void* arglst8486)
{
cout<<"In ptr8692";
print_val(arglst8486);

void* cdr = get_env_value(env8693, encode_int((s32)7));
void* lst = get_env_value(env8693, encode_int((s32)6));
void* append1 = get_env_value(env8693, encode_int((s32)5));
void* car = get_env_value(env8693, encode_int((s32)4));
void* cons = get_env_value(env8693, encode_int((s32)3));
void* kont8300 = get_env_value(env8693, encode_int((s32)2));
void* reverse = get_env_value(env8693, encode_int((s32)1));
void* letk8301 = prim_car(arglst8486);
void* arg_u45lst8487 = prim_cdr(arglst8486);
void* t8231 = prim_car(arg_u45lst8487);
void* arg_u45lst8488 = prim_cdr(arg_u45lst8487);
}

void ptr8690(void* env8691, void* arglst8483)
{
cout<<"In ptr8690";
print_val(arglst8483);

void* cdr = get_env_value(env8691, encode_int((s32)6));
void* null_u63 = get_env_value(env8691, encode_int((s32)5));
void* reverse = get_env_value(env8691, encode_int((s32)4));
void* append1 = get_env_value(env8691, encode_int((s32)3));
void* car = get_env_value(env8691, encode_int((s32)2));
void* cons = get_env_value(env8691, encode_int((s32)1));
void* kont8300 = prim_car(arglst8483);
void* arg_u45lst8484 = prim_cdr(arglst8483);
void* lst = prim_car(arg_u45lst8484);
void* arg_u45lst8485 = prim_cdr(arg_u45lst8484);

//creating new closure instance
auto ptr8752 = reinterpret_cast<void (*)(void *, void *)>(&ptr8692);
env8691 = allocate_env_space(encode_int((s32)7));
void* id8369 = make_closure(reinterpret_cast<void *>(ptr8752), env8691);

//setting env list
set_env(env8691, encode_int((s32)1), reverse);
set_env(env8691, encode_int((s32)2), kont8300);
set_env(env8691, encode_int((s32)3), cons);
set_env(env8691, encode_int((s32)4), car);
set_env(env8691, encode_int((s32)5), append1);
set_env(env8691, encode_int((s32)6), lst);
set_env(env8691, encode_int((s32)7), cdr);


void* oldarg8521 = encode_null();
void* newarg8522 = prim_cons(lst, oldarg8521);
void* newarg8523 = prim_cons(id8369, newarg8522);

//app-clo
void* cloPtr8753 = get_closure_ptr(null_u63);
void* procEnv8754 = get_env(null_u63);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8753);
function_ptr(procEnv8754, newarg8523);
}

void ptr8688(void* env8689, void* arglst8480)
{
cout<<"In ptr8688";
print_val(arglst8480);

void* cdr = get_env_value(env8689, encode_int((s32)5));
void* null_u63 = get_env_value(env8689, encode_int((s32)4));
void* append1 = get_env_value(env8689, encode_int((s32)3));
void* car = get_env_value(env8689, encode_int((s32)2));
void* cons = get_env_value(env8689, encode_int((s32)1));
void* kont8299 = prim_car(arglst8480);
void* arg_u45lst8481 = prim_cdr(arglst8480);
void* reverse = prim_car(arg_u45lst8481);
void* arg_u45lst8482 = prim_cdr(arg_u45lst8481);
void* id8367 = encode_null();

//creating new closure instance
auto ptr8755 = reinterpret_cast<void (*)(void *, void *)>(&ptr8690);
env8689 = allocate_env_space(encode_int((s32)6));
void* id8368 = make_closure(reinterpret_cast<void *>(ptr8755), env8689);

//setting env list
set_env(env8689, encode_int((s32)1), cons);
set_env(env8689, encode_int((s32)2), car);
set_env(env8689, encode_int((s32)3), append1);
set_env(env8689, encode_int((s32)4), reverse);
set_env(env8689, encode_int((s32)5), null_u63);
set_env(env8689, encode_int((s32)6), cdr);


void* oldarg8524 = encode_null();
void* newarg8525 = prim_cons(id8368, oldarg8524);
void* newarg8526 = prim_cons(id8367, newarg8525);

//app-clo
void* cloPtr8756 = get_closure_ptr(kont8299);
void* procEnv8757 = get_env(kont8299);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8756);
function_ptr(procEnv8757, newarg8526);
}

void ptr8702(void* env8703, void* arglst8460)
{
cout<<"In ptr8702";
print_val(arglst8460);

void* halt = get_env_value(env8703, encode_int((s32)2));
void* _u43 = get_env_value(env8703, encode_int((s32)1));
void* letk8298 = prim_car(arglst8460);
void* arg_u45lst8461 = prim_cdr(arglst8460);
void* t8236 = prim_car(arg_u45lst8461);
void* arg_u45lst8462 = prim_cdr(arg_u45lst8461);
void* id8380 = reinterpret_cast<void *>(encode_int((s32)2));
void* oldarg8463 = encode_null();
void* newarg8464 = prim_cons(id8380, oldarg8463);
void* newarg8465 = prim_cons(t8236, newarg8464);
void* newarg8466 = prim_cons(halt, newarg8465);

//app-clo
void* cloPtr8758 = get_closure_ptr(_u43);
void* procEnv8759 = get_env(_u43);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8758);
function_ptr(procEnv8759, newarg8466);
}

void ptr8704(void* env8705, void* arglst8470)
{
cout<<"In ptr8704";
print_val(arglst8470);

void* halt = get_env_value(env8705, encode_int((s32)2));
void* _u43 = get_env_value(env8705, encode_int((s32)1));
void* letk8298 = prim_car(arglst8470);
void* arg_u45lst8471 = prim_cdr(arglst8470);
void* t8236 = prim_car(arg_u45lst8471);
void* arg_u45lst8472 = prim_cdr(arg_u45lst8471);
void* id8384 = reinterpret_cast<void *>(encode_int((s32)2));
void* oldarg8473 = encode_null();
void* newarg8474 = prim_cons(id8384, oldarg8473);
void* newarg8475 = prim_cons(t8236, newarg8474);
void* newarg8476 = prim_cons(halt, newarg8475);

//app-clo
void* cloPtr8760 = get_closure_ptr(_u43);
void* procEnv8761 = get_env(_u43);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8760);
function_ptr(procEnv8761, newarg8476);
}

void ptr8686(void* env8687, void* arglst8457)
{
cout<<"In ptr8686";
print_val(arglst8457);

void* halt = get_env_value(env8687, encode_int((s32)2));
void* _u43 = get_env_value(env8687, encode_int((s32)1));
void* letk8297 = prim_car(arglst8457);
void* arg_u45lst8458 = prim_cdr(arglst8457);
void* reverse = prim_car(arg_u45lst8458);
void* arg_u45lst8459 = prim_cdr(arg_u45lst8458);
void* id8376 = reinterpret_cast<void *>(encode_int((s32)1));
}

void ptr8672(void* env8673, void* arglst8454)
{
cout<<"In ptr8672";
print_val(arglst8454);

void* cdr = get_env_value(env8673, encode_int((s32)7));
void* null_u63 = get_env_value(env8673, encode_int((s32)6));
void* _u43 = get_env_value(env8673, encode_int((s32)5));
void* car = get_env_value(env8673, encode_int((s32)4));
void* cons = get_env_value(env8673, encode_int((s32)3));
void* Ycomb = get_env_value(env8673, encode_int((s32)2));
void* halt = get_env_value(env8673, encode_int((s32)1));
void* letk8296 = prim_car(arglst8454);
void* arg_u45lst8455 = prim_cdr(arglst8454);
void* append1 = prim_car(arg_u45lst8455);
void* arg_u45lst8456 = prim_cdr(arg_u45lst8455);

//creating new closure instance
auto ptr8762 = reinterpret_cast<void (*)(void *, void *)>(&ptr8686);
env8673 = allocate_env_space(encode_int((s32)2));
void* id8365 = make_closure(reinterpret_cast<void *>(ptr8762), env8673);

//setting env list
set_env(env8673, encode_int((s32)1), _u43);
set_env(env8673, encode_int((s32)2), halt);



//creating new closure instance
auto ptr8763 = reinterpret_cast<void (*)(void *, void *)>(&ptr8688);
env8673 = allocate_env_space(encode_int((s32)5));
void* id8366 = make_closure(reinterpret_cast<void *>(ptr8763), env8673);

//setting env list
set_env(env8673, encode_int((s32)1), cons);
set_env(env8673, encode_int((s32)2), car);
set_env(env8673, encode_int((s32)3), append1);
set_env(env8673, encode_int((s32)4), null_u63);
set_env(env8673, encode_int((s32)5), cdr);


void* oldarg8527 = encode_null();
void* newarg8528 = prim_cons(id8366, oldarg8527);
void* newarg8529 = prim_cons(id8365, newarg8528);

//app-clo
void* cloPtr8764 = get_closure_ptr(Ycomb);
void* procEnv8765 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8764);
function_ptr(procEnv8765, newarg8529);
}

void ptr8666(void* env8667, void* arglst8451)
{
cout<<"In ptr8666";
print_val(arglst8451);

void* cdr = get_env_value(env8667, encode_int((s32)6));
void* null_u63 = get_env_value(env8667, encode_int((s32)5));
void* Ycomb = get_env_value(env8667, encode_int((s32)4));
void* _u43 = get_env_value(env8667, encode_int((s32)3));
void* car = get_env_value(env8667, encode_int((s32)2));
void* cons = get_env_value(env8667, encode_int((s32)1));
void* letk8295 = prim_car(arglst8451);
void* arg_u45lst8452 = prim_cdr(arglst8451);
void* halt = prim_car(arg_u45lst8452);
void* arg_u45lst8453 = prim_cdr(arg_u45lst8452);

//creating new closure instance
auto ptr8766 = reinterpret_cast<void (*)(void *, void *)>(&ptr8672);
env8667 = allocate_env_space(encode_int((s32)7));
void* id8356 = make_closure(reinterpret_cast<void *>(ptr8766), env8667);

//setting env list
set_env(env8667, encode_int((s32)1), halt);
set_env(env8667, encode_int((s32)2), Ycomb);
set_env(env8667, encode_int((s32)3), cons);
set_env(env8667, encode_int((s32)4), car);
set_env(env8667, encode_int((s32)5), _u43);
set_env(env8667, encode_int((s32)6), null_u63);
set_env(env8667, encode_int((s32)7), cdr);



//creating new closure instance
auto ptr8767 = reinterpret_cast<void (*)(void *, void *)>(&ptr8674);
env8667 = allocate_env_space(encode_int((s32)4));
void* id8357 = make_closure(reinterpret_cast<void *>(ptr8767), env8667);

//setting env list
set_env(env8667, encode_int((s32)1), cons);
set_env(env8667, encode_int((s32)2), car);
set_env(env8667, encode_int((s32)3), null_u63);
set_env(env8667, encode_int((s32)4), cdr);


void* oldarg8572 = encode_null();
void* newarg8573 = prim_cons(id8357, oldarg8572);
void* newarg8574 = prim_cons(id8356, newarg8573);

//app-clo
void* cloPtr8768 = get_closure_ptr(Ycomb);
void* procEnv8769 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8768);
function_ptr(procEnv8769, newarg8574);
}

void ptr8654(void* env8655, void* arglst8448)
{
cout<<"In ptr8654";
print_val(arglst8448);

void* cdr = get_env_value(env8655, encode_int((s32)5));
void* null_u63 = get_env_value(env8655, encode_int((s32)4));
void* _u43 = get_env_value(env8655, encode_int((s32)3));
void* car = get_env_value(env8655, encode_int((s32)2));
void* cons = get_env_value(env8655, encode_int((s32)1));
void* letk8294 = prim_car(arglst8448);
void* arg_u45lst8449 = prim_cdr(arglst8448);
void* Ycomb = prim_car(arg_u45lst8449);
void* arg_u45lst8450 = prim_cdr(arg_u45lst8449);

//creating new closure instance
auto ptr8770 = reinterpret_cast<void (*)(void *, void *)>(&ptr8666);
env8655 = allocate_env_space(encode_int((s32)6));
void* id8351 = make_closure(reinterpret_cast<void *>(ptr8770), env8655);

//setting env list
set_env(env8655, encode_int((s32)1), cons);
set_env(env8655, encode_int((s32)2), car);
set_env(env8655, encode_int((s32)3), _u43);
set_env(env8655, encode_int((s32)4), Ycomb);
set_env(env8655, encode_int((s32)5), null_u63);
set_env(env8655, encode_int((s32)6), cdr);



//creating new closure instance
auto ptr8771 = reinterpret_cast<void (*)(void *, void *)>(&ptr8668);
env8655 = allocate_env_space(encode_int((s32)0));
void* id8352 = make_closure(reinterpret_cast<void *>(ptr8771), env8655);


void* oldarg8584 = encode_null();
void* newarg8585 = prim_cons(id8352, oldarg8584);
void* newarg8586 = prim_cons(id8351, newarg8585);

//app-clo
void* cloPtr8772 = get_closure_ptr(Ycomb);
void* procEnv8773 = get_env(Ycomb);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8772);
function_ptr(procEnv8773, newarg8586);
}

void ptr8652(void* env8653, void* arglst8442)
{
cout<<"In ptr8652";
print_val(arglst8442);

void* kont8316 = prim_car(arglst8442);
void* arg_u45lst8443 = prim_cdr(arglst8442);
void* x = prim_car(arg_u45lst8443);
void* arg_u45lst8444 = prim_cdr(arg_u45lst8443);
void* oldarg8445 = encode_null();
void* newarg8446 = prim_cons(x, oldarg8445);
void* newarg8447 = prim_cons(kont8316, newarg8446);

//app-clo
void* cloPtr8774 = get_closure_ptr(x);
void* procEnv8775 = get_env(x);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8774);
function_ptr(procEnv8775, newarg8447);
}

void ptr8650(void* env8651, void* args8292)
{
cout<<"In ptr8650";
print_val(args8292);

void* kkont8291 = prim_car(args8292);
void* args = prim_cdr(args8292);
void* prm8293 = apply_prim__u43(args);
void* id8342 = encode_null();
void* oldarg8439 = encode_null();
void* newarg8440 = prim_cons(prm8293, oldarg8439);
void* newarg8441 = prim_cons(id8342, newarg8440);

//app-clo
void* cloPtr8776 = get_closure_ptr(kkont8291);
void* procEnv8777 = get_env(kkont8291);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8776);
function_ptr(procEnv8777, newarg8441);
}

void ptr8648(void* env8649, void* args8289)
{
cout<<"In ptr8648";
print_val(args8289);

void* kkont8288 = prim_car(args8289);
void* args = prim_cdr(args8289);
void* prm8290 = apply_prim__u45(args);
void* id8341 = encode_null();
void* oldarg8436 = encode_null();
void* newarg8437 = prim_cons(prm8290, oldarg8436);
void* newarg8438 = prim_cons(id8341, newarg8437);

//app-clo
void* cloPtr8778 = get_closure_ptr(kkont8288);
void* procEnv8779 = get_env(kkont8288);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8778);
function_ptr(procEnv8779, newarg8438);
}

void ptr8646(void* env8647, void* args8286)
{
cout<<"In ptr8646";
print_val(args8286);

void* kkont8285 = prim_car(args8286);
void* args = prim_cdr(args8286);
void* prm8287 = apply_prim__u42(args);
void* id8340 = encode_null();
void* oldarg8433 = encode_null();
void* newarg8434 = prim_cons(prm8287, oldarg8433);
void* newarg8435 = prim_cons(id8340, newarg8434);

//app-clo
void* cloPtr8780 = get_closure_ptr(kkont8285);
void* procEnv8781 = get_env(kkont8285);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8780);
function_ptr(procEnv8781, newarg8435);
}

void ptr8644(void* env8645, void* args8283)
{
cout<<"In ptr8644";
print_val(args8283);

void* kkont8282 = prim_car(args8283);
void* args = prim_cdr(args8283);
void* prm8284 = apply_prim__u61(args);
void* id8339 = encode_null();
void* oldarg8430 = encode_null();
void* newarg8431 = prim_cons(prm8284, oldarg8430);
void* newarg8432 = prim_cons(id8339, newarg8431);

//app-clo
void* cloPtr8782 = get_closure_ptr(kkont8282);
void* procEnv8783 = get_env(kkont8282);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8782);
function_ptr(procEnv8783, newarg8432);
}

void ptr8642(void* env8643, void* args8280)
{
cout<<"In ptr8642";
print_val(args8280);

void* kkont8279 = prim_car(args8280);
void* args = prim_cdr(args8280);
void* prm8281 = apply_prim__u62(args);
void* id8338 = encode_null();
void* oldarg8427 = encode_null();
void* newarg8428 = prim_cons(prm8281, oldarg8427);
void* newarg8429 = prim_cons(id8338, newarg8428);

//app-clo
void* cloPtr8784 = get_closure_ptr(kkont8279);
void* procEnv8785 = get_env(kkont8279);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8784);
function_ptr(procEnv8785, newarg8429);
}

void ptr8640(void* env8641, void* args8277)
{
cout<<"In ptr8640";
print_val(args8277);

void* kkont8276 = prim_car(args8277);
void* args = prim_cdr(args8277);
void* prm8278 = apply_prim__u62_u61(args);
void* id8337 = encode_null();
void* oldarg8424 = encode_null();
void* newarg8425 = prim_cons(prm8278, oldarg8424);
void* newarg8426 = prim_cons(id8337, newarg8425);

//app-clo
void* cloPtr8786 = get_closure_ptr(kkont8276);
void* procEnv8787 = get_env(kkont8276);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8786);
function_ptr(procEnv8787, newarg8426);
}

void ptr8638(void* env8639, void* args8274)
{
cout<<"In ptr8638";
print_val(args8274);

void* kkont8273 = prim_car(args8274);
void* args = prim_cdr(args8274);
void* prm8275 = apply_prim__u60(args);
void* id8336 = encode_null();
void* oldarg8421 = encode_null();
void* newarg8422 = prim_cons(prm8275, oldarg8421);
void* newarg8423 = prim_cons(id8336, newarg8422);

//app-clo
void* cloPtr8788 = get_closure_ptr(kkont8273);
void* procEnv8789 = get_env(kkont8273);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8788);
function_ptr(procEnv8789, newarg8423);
}

void ptr8636(void* env8637, void* args8271)
{
cout<<"In ptr8636";
print_val(args8271);

void* kkont8270 = prim_car(args8271);
void* args = prim_cdr(args8271);
void* prm8272 = apply_prim__u60_u61(args);
void* id8335 = encode_null();
void* oldarg8418 = encode_null();
void* newarg8419 = prim_cons(prm8272, oldarg8418);
void* newarg8420 = prim_cons(id8335, newarg8419);

//app-clo
void* cloPtr8790 = get_closure_ptr(kkont8270);
void* procEnv8791 = get_env(kkont8270);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8790);
function_ptr(procEnv8791, newarg8420);
}

void ptr8634(void* env8635, void* args8268)
{
cout<<"In ptr8634";
print_val(args8268);

void* kkont8267 = prim_car(args8268);
void* args = prim_cdr(args8268);
void* prm8269 = apply_prim_car(args);
void* id8334 = encode_null();
void* oldarg8415 = encode_null();
void* newarg8416 = prim_cons(prm8269, oldarg8415);
void* newarg8417 = prim_cons(id8334, newarg8416);

//app-clo
void* cloPtr8792 = get_closure_ptr(kkont8267);
void* procEnv8793 = get_env(kkont8267);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8792);
function_ptr(procEnv8793, newarg8417);
}

void ptr8632(void* env8633, void* args8265)
{
cout<<"In ptr8632";
print_val(args8265);

void* kkont8264 = prim_car(args8265);
void* args = prim_cdr(args8265);
void* prm8266 = apply_prim_cdr(args);
void* id8333 = encode_null();
void* oldarg8412 = encode_null();
void* newarg8413 = prim_cons(prm8266, oldarg8412);
void* newarg8414 = prim_cons(id8333, newarg8413);

//app-clo
void* cloPtr8794 = get_closure_ptr(kkont8264);
void* procEnv8795 = get_env(kkont8264);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8794);
function_ptr(procEnv8795, newarg8414);
}

void ptr8630(void* env8631, void* args8262)
{
cout<<"In ptr8630";
print_val(args8262);

void* kkont8261 = prim_car(args8262);
void* args = prim_cdr(args8262);
void* prm8263 = apply_prim_cons(args);
void* id8332 = encode_null();
void* oldarg8409 = encode_null();
void* newarg8410 = prim_cons(prm8263, oldarg8409);
void* newarg8411 = prim_cons(id8332, newarg8410);

//app-clo
void* cloPtr8796 = get_closure_ptr(kkont8261);
void* procEnv8797 = get_env(kkont8261);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8796);
function_ptr(procEnv8797, newarg8411);
}

void ptr8628(void* env8629, void* args8259)
{
cout<<"In ptr8628";
print_val(args8259);

void* kkont8258 = prim_car(args8259);
void* args = prim_cdr(args8259);
void* prm8260 = apply_prim_list(args);
void* id8331 = encode_null();
void* oldarg8406 = encode_null();
void* newarg8407 = prim_cons(prm8260, oldarg8406);
void* newarg8408 = prim_cons(id8331, newarg8407);

//app-clo
void* cloPtr8798 = get_closure_ptr(kkont8258);
void* procEnv8799 = get_env(kkont8258);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8798);
function_ptr(procEnv8799, newarg8408);
}

void ptr8626(void* env8627, void* args8256)
{
cout<<"In ptr8626";
print_val(args8256);

void* kkont8255 = prim_car(args8256);
void* args = prim_cdr(args8256);
void* prm8257 = apply_prim_null_u63(args);
void* id8330 = encode_null();
void* oldarg8403 = encode_null();
void* newarg8404 = prim_cons(prm8257, oldarg8403);
void* newarg8405 = prim_cons(id8330, newarg8404);

//app-clo
void* cloPtr8800 = get_closure_ptr(kkont8255);
void* procEnv8801 = get_env(kkont8255);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8800);
function_ptr(procEnv8801, newarg8405);
}

void ptr8624(void* env8625, void* args8253)
{
cout<<"In ptr8624";
print_val(args8253);

void* kkont8252 = prim_car(args8253);
void* args = prim_cdr(args8253);
void* prm8254 = apply_prim_eq_u63(args);
void* id8329 = encode_null();
void* oldarg8400 = encode_null();
void* newarg8401 = prim_cons(prm8254, oldarg8400);
void* newarg8402 = prim_cons(id8329, newarg8401);

//app-clo
void* cloPtr8802 = get_closure_ptr(kkont8252);
void* procEnv8803 = get_env(kkont8252);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8802);
function_ptr(procEnv8803, newarg8402);
}

void ptr8622(void* env8623, void* args8250)
{
cout<<"In ptr8622";
print_val(args8250);

void* kkont8249 = prim_car(args8250);
void* args = prim_cdr(args8250);
void* prm8251 = apply_prim_equal_u63(args);
void* id8328 = encode_null();
void* oldarg8397 = encode_null();
void* newarg8398 = prim_cons(prm8251, oldarg8397);
void* newarg8399 = prim_cons(id8328, newarg8398);

//app-clo
void* cloPtr8804 = get_closure_ptr(kkont8249);
void* procEnv8805 = get_env(kkont8249);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8804);
function_ptr(procEnv8805, newarg8399);
}

void ptr8620(void* env8621, void* args8247)
{
cout<<"In ptr8620";
print_val(args8247);

void* kkont8246 = prim_car(args8247);
void* args = prim_cdr(args8247);
void* prm8248 = apply_prim_odd_u63(args);
void* id8327 = encode_null();
void* oldarg8394 = encode_null();
void* newarg8395 = prim_cons(prm8248, oldarg8394);
void* newarg8396 = prim_cons(id8327, newarg8395);

//app-clo
void* cloPtr8806 = get_closure_ptr(kkont8246);
void* procEnv8807 = get_env(kkont8246);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8806);
function_ptr(procEnv8807, newarg8396);
}

void ptr8618(void* env8619, void* args8244)
{
cout<<"In ptr8618";
print_val(args8244);

void* kkont8243 = prim_car(args8244);
void* args = prim_cdr(args8244);
void* prm8245 = apply_prim_even_u63(args);
void* id8326 = encode_null();
void* oldarg8391 = encode_null();
void* newarg8392 = prim_cons(prm8245, oldarg8391);
void* newarg8393 = prim_cons(id8326, newarg8392);

//app-clo
void* cloPtr8808 = get_closure_ptr(kkont8243);
void* procEnv8809 = get_env(kkont8243);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8808);
function_ptr(procEnv8809, newarg8393);
}

void ptr8616(void* env8617, void* args8241)
{
cout<<"In ptr8616";
print_val(args8241);

void* kkont8240 = prim_car(args8241);
void* args = prim_cdr(args8241);
void* prm8242 = apply_prim_positive_u63(args);
void* id8325 = encode_null();
void* oldarg8388 = encode_null();
void* newarg8389 = prim_cons(prm8242, oldarg8388);
void* newarg8390 = prim_cons(id8325, newarg8389);

//app-clo
void* cloPtr8810 = get_closure_ptr(kkont8240);
void* procEnv8811 = get_env(kkont8240);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8810);
function_ptr(procEnv8811, newarg8390);
}

void ptr8614(void* env8615, void* args8238)
{
cout<<"In ptr8614";
print_val(args8238);

void* kkont8237 = prim_car(args8238);
void* args = prim_cdr(args8238);
void* prm8239 = apply_prim_negative_u63(args);
void* id8324 = encode_null();
void* oldarg8385 = encode_null();
void* newarg8386 = prim_cons(prm8239, oldarg8385);
void* newarg8387 = prim_cons(id8324, newarg8386);

//app-clo
void* cloPtr8812 = get_closure_ptr(kkont8237);
void* procEnv8813 = get_env(kkont8237);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8812);
function_ptr(procEnv8813, newarg8387);
}

void root(void* rootenv8706, void* rootarg8707)
{
cout<<"In root";
print_val(rootarg8707);


//creating new closure instance
auto ptr8814 = reinterpret_cast<void (*)(void *, void *)>(&ptr8614);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* negative_u63 = make_closure(reinterpret_cast<void *>(ptr8814), rootenv8706);



//creating new closure instance
auto ptr8815 = reinterpret_cast<void (*)(void *, void *)>(&ptr8616);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* positive_u63 = make_closure(reinterpret_cast<void *>(ptr8815), rootenv8706);



//creating new closure instance
auto ptr8816 = reinterpret_cast<void (*)(void *, void *)>(&ptr8618);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* even_u63 = make_closure(reinterpret_cast<void *>(ptr8816), rootenv8706);



//creating new closure instance
auto ptr8817 = reinterpret_cast<void (*)(void *, void *)>(&ptr8620);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* odd_u63 = make_closure(reinterpret_cast<void *>(ptr8817), rootenv8706);



//creating new closure instance
auto ptr8818 = reinterpret_cast<void (*)(void *, void *)>(&ptr8622);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* equal_u63 = make_closure(reinterpret_cast<void *>(ptr8818), rootenv8706);



//creating new closure instance
auto ptr8819 = reinterpret_cast<void (*)(void *, void *)>(&ptr8624);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* eq_u63 = make_closure(reinterpret_cast<void *>(ptr8819), rootenv8706);



//creating new closure instance
auto ptr8820 = reinterpret_cast<void (*)(void *, void *)>(&ptr8626);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* null_u63 = make_closure(reinterpret_cast<void *>(ptr8820), rootenv8706);



//creating new closure instance
auto ptr8821 = reinterpret_cast<void (*)(void *, void *)>(&ptr8628);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* list = make_closure(reinterpret_cast<void *>(ptr8821), rootenv8706);



//creating new closure instance
auto ptr8822 = reinterpret_cast<void (*)(void *, void *)>(&ptr8630);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* cons = make_closure(reinterpret_cast<void *>(ptr8822), rootenv8706);



//creating new closure instance
auto ptr8823 = reinterpret_cast<void (*)(void *, void *)>(&ptr8632);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* cdr = make_closure(reinterpret_cast<void *>(ptr8823), rootenv8706);



//creating new closure instance
auto ptr8824 = reinterpret_cast<void (*)(void *, void *)>(&ptr8634);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* car = make_closure(reinterpret_cast<void *>(ptr8824), rootenv8706);



//creating new closure instance
auto ptr8825 = reinterpret_cast<void (*)(void *, void *)>(&ptr8636);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u60_u61 = make_closure(reinterpret_cast<void *>(ptr8825), rootenv8706);



//creating new closure instance
auto ptr8826 = reinterpret_cast<void (*)(void *, void *)>(&ptr8638);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u60 = make_closure(reinterpret_cast<void *>(ptr8826), rootenv8706);



//creating new closure instance
auto ptr8827 = reinterpret_cast<void (*)(void *, void *)>(&ptr8640);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u62_u61 = make_closure(reinterpret_cast<void *>(ptr8827), rootenv8706);



//creating new closure instance
auto ptr8828 = reinterpret_cast<void (*)(void *, void *)>(&ptr8642);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u62 = make_closure(reinterpret_cast<void *>(ptr8828), rootenv8706);



//creating new closure instance
auto ptr8829 = reinterpret_cast<void (*)(void *, void *)>(&ptr8644);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u61 = make_closure(reinterpret_cast<void *>(ptr8829), rootenv8706);



//creating new closure instance
auto ptr8830 = reinterpret_cast<void (*)(void *, void *)>(&ptr8646);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u42 = make_closure(reinterpret_cast<void *>(ptr8830), rootenv8706);



//creating new closure instance
auto ptr8831 = reinterpret_cast<void (*)(void *, void *)>(&ptr8648);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u45 = make_closure(reinterpret_cast<void *>(ptr8831), rootenv8706);



//creating new closure instance
auto ptr8832 = reinterpret_cast<void (*)(void *, void *)>(&ptr8650);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* _u43 = make_closure(reinterpret_cast<void *>(ptr8832), rootenv8706);



//creating new closure instance
auto ptr8833 = reinterpret_cast<void (*)(void *, void *)>(&ptr8652);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* id8343 = make_closure(reinterpret_cast<void *>(ptr8833), rootenv8706);



//creating new closure instance
auto ptr8834 = reinterpret_cast<void (*)(void *, void *)>(&ptr8654);
rootenv8706 = allocate_env_space(encode_int((s32)5));
void* id8344 = make_closure(reinterpret_cast<void *>(ptr8834), rootenv8706);

//setting env list
set_env(rootenv8706, encode_int((s32)1), cons);
set_env(rootenv8706, encode_int((s32)2), car);
set_env(rootenv8706, encode_int((s32)3), _u43);
set_env(rootenv8706, encode_int((s32)4), null_u63);
set_env(rootenv8706, encode_int((s32)5), cdr);



//creating new closure instance
auto ptr8835 = reinterpret_cast<void (*)(void *, void *)>(&ptr8656);
rootenv8706 = allocate_env_space(encode_int((s32)0));
void* id8345 = make_closure(reinterpret_cast<void *>(ptr8835), rootenv8706);


void* oldarg8611 = encode_null();
void* newarg8612 = prim_cons(id8345, oldarg8611);
void* newarg8613 = prim_cons(id8344, newarg8612);

//app-clo
void* cloPtr8836 = get_closure_ptr(id8343);
void* procEnv8837 = get_env(id8343);

//calling next proc using a function pointer
auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8836);
function_ptr(procEnv8837, newarg8613);
}

int main(int argc, char **argv)
{
//making a call to the root function to kick off our c++ emission.
root(0,0);
}

