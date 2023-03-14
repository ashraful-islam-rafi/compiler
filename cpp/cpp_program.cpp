#include <stdio.h>
#include <string.h>
#include "header.h"
using namespace std;

void ptr8482(void *env8483, void *arglst8416)
{
    cout << "In ptr8482";
    print_val(arglst8416);

    void *kkont8289 = get_env_value(env8483, encode_int((s32)2));
    void *vs = get_env_value(env8483, encode_int((s32)1));
    void *letk8292 = prim_car(arglst8416);
    void *arg_u45lst8417 = prim_cdr(arglst8416);
    void *t8225 = prim_car(arg_u45lst8417);
    void *arg_u45lst8418 = prim_cdr(arg_u45lst8417);
    void *lst8293 = prim_cons(kkont8289, vs);

    // app-clo
    void *cloPtr8492 = get_closure_ptr(t8225);
    void *procEnv8493 = get_env(t8225);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8492);
    function_ptr(procEnv8493, lst8293);
}

void ptr8480(void *env8481, void *arglst8413)
{
    cout << "In ptr8480";
    print_val(arglst8413);

    void *kkont8289 = get_env_value(env8481, encode_int((s32)3));
    void *vs = get_env_value(env8481, encode_int((s32)2));
    void *f = get_env_value(env8481, encode_int((s32)1));
    void *letk8291 = prim_car(arglst8413);
    void *arg_u45lst8414 = prim_cdr(arglst8413);
    void *t8224 = prim_car(arg_u45lst8414);
    void *arg_u45lst8415 = prim_cdr(arg_u45lst8414);

    // creating new closure instance
    auto ptr8494 = reinterpret_cast<void (*)(void *, void *)>(&ptr8482);
    env8481 = allocate_env_space(encode_int((s32)2));
    void *id8319 = make_closure(reinterpret_cast<void *>(ptr8494), env8481);

    // setting env list
    set_env(env8481, encode_int((s32)1), vs);
    set_env(env8481, encode_int((s32)2), kkont8289);

    void *oldarg8419 = encode_null();
    void *newarg8420 = prim_cons(f, oldarg8419);
    void *newarg8421 = prim_cons(id8319, newarg8420);

    // app-clo
    void *cloPtr8495 = get_closure_ptr(t8224);
    void *procEnv8496 = get_env(t8224);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8495);
    function_ptr(procEnv8496, newarg8421);
}

void ptr8478(void *env8479, void *vs8290)
{
    cout << "In ptr8478";
    print_val(vs8290);

    void *g = get_env_value(env8479, encode_int((s32)2));
    void *f = get_env_value(env8479, encode_int((s32)1));
    void *kkont8289 = prim_car(vs8290);
    void *vs = prim_cdr(vs8290);

    // creating new closure instance
    auto ptr8497 = reinterpret_cast<void (*)(void *, void *)>(&ptr8480);
    env8479 = allocate_env_space(encode_int((s32)3));
    void *id8318 = make_closure(reinterpret_cast<void *>(ptr8497), env8479);

    // setting env list
    set_env(env8479, encode_int((s32)1), f);
    set_env(env8479, encode_int((s32)2), vs);
    set_env(env8479, encode_int((s32)3), kkont8289);

    void *oldarg8422 = encode_null();
    void *newarg8423 = prim_cons(g, oldarg8422);
    void *newarg8424 = prim_cons(id8318, newarg8423);

    // app-clo
    void *cloPtr8498 = get_closure_ptr(g);
    void *procEnv8499 = get_env(g);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8498);
    function_ptr(procEnv8499, newarg8424);
}

void ptr8476(void *env8477, void *arglst8410)
{
    cout << "In ptr8476";
    print_val(arglst8410);

    void *g = get_env_value(env8477, encode_int((s32)1));
    void *kont8288 = prim_car(arglst8410);
    void *arg_u45lst8411 = prim_cdr(arglst8410);
    void *f = prim_car(arg_u45lst8411);
    void *arg_u45lst8412 = prim_cdr(arg_u45lst8411);

    // creating new closure instance
    auto ptr8500 = reinterpret_cast<void (*)(void *, void *)>(&ptr8478);
    env8477 = allocate_env_space(encode_int((s32)2));
    void *id8317 = make_closure(reinterpret_cast<void *>(ptr8500), env8477);

    // setting env list
    set_env(env8477, encode_int((s32)1), f);
    set_env(env8477, encode_int((s32)2), g);

    void *oldarg8425 = encode_null();
    void *newarg8426 = prim_cons(id8317, oldarg8425);
    void *newarg8427 = prim_cons(kont8288, newarg8426);

    // app-clo
    void *cloPtr8501 = get_closure_ptr(f);
    void *procEnv8502 = get_env(f);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8501);
    function_ptr(procEnv8502, newarg8427);
}

void ptr8474(void *env8475, void *arglst8407)
{
    cout << "In ptr8474";
    print_val(arglst8407);

    void *kont8287 = prim_car(arglst8407);
    void *arg_u45lst8408 = prim_cdr(arglst8407);
    void *g = prim_car(arg_u45lst8408);
    void *arg_u45lst8409 = prim_cdr(arg_u45lst8408);
    void *id8315 = encode_null();

    // creating new closure instance
    auto ptr8503 = reinterpret_cast<void (*)(void *, void *)>(&ptr8476);
    env8475 = allocate_env_space(encode_int((s32)1));
    void *id8316 = make_closure(reinterpret_cast<void *>(ptr8503), env8475);

    // setting env list
    set_env(env8475, encode_int((s32)1), g);

    void *oldarg8428 = encode_null();
    void *newarg8429 = prim_cons(id8316, oldarg8428);
    void *newarg8430 = prim_cons(id8315, newarg8429);

    // app-clo
    void *cloPtr8504 = get_closure_ptr(kont8287);
    void *procEnv8505 = get_env(kont8287);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8504);
    function_ptr(procEnv8505, newarg8430);
}

void ptr8488(void *env8489, void *args8284)
{
    cout << "In ptr8488";
    print_val(args8284);

    void *kkont8283 = prim_car(args8284);
    void *args = prim_cdr(args8284);
    void *prm8285 = apply_prim_halt(args);
    void *id8324 = encode_null();
    void *oldarg8398 = encode_null();
    void *newarg8399 = prim_cons(prm8285, oldarg8398);
    void *newarg8400 = prim_cons(id8324, newarg8399);

    // app-clo
    void *cloPtr8506 = get_closure_ptr(kkont8283);
    void *procEnv8507 = get_env(kkont8283);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8506);
    function_ptr(procEnv8507, newarg8400);
}

void ptr8486(void *env8487, void *arglst8395)
{
    cout << "In ptr8486";
    print_val(arglst8395);

    void *kont8282 = prim_car(arglst8395);
    void *arg_u45lst8396 = prim_cdr(arglst8395);
    void *halt = prim_car(arg_u45lst8396);
    void *arg_u45lst8397 = prim_cdr(arg_u45lst8396);
    void *id8322 = encode_null();

    // creating new closure instance
    auto ptr8508 = reinterpret_cast<void (*)(void *, void *)>(&ptr8488);
    env8487 = allocate_env_space(encode_int((s32)0));
    void *id8323 = make_closure(reinterpret_cast<void *>(ptr8508), env8487);

    void *oldarg8401 = encode_null();
    void *newarg8402 = prim_cons(id8323, oldarg8401);
    void *newarg8403 = prim_cons(id8322, newarg8402);

    // app-clo
    void *cloPtr8509 = get_closure_ptr(kont8282);
    void *procEnv8510 = get_env(kont8282);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8509);
    function_ptr(procEnv8510, newarg8403);
}

void ptr8484(void *env8485, void *arglst8389)
{
    cout << "In ptr8484";
    print_val(arglst8389);

    void *negative_u63 = get_env_value(env8485, encode_int((s32)1));
    void *letk8281 = prim_car(arglst8389);
    void *arg_u45lst8390 = prim_cdr(arglst8389);
    void *halt = prim_car(arg_u45lst8390);
    void *arg_u45lst8391 = prim_cdr(arg_u45lst8390);
    void *id8325 = reinterpret_cast<void *>(encode_int((s32)-500));
    void *oldarg8392 = encode_null();
    void *newarg8393 = prim_cons(id8325, oldarg8392);
    void *newarg8394 = prim_cons(halt, newarg8393);

    // app-clo
    void *cloPtr8511 = get_closure_ptr(negative_u63);
    void *procEnv8512 = get_env(negative_u63);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8511);
    function_ptr(procEnv8512, newarg8394);
}

void ptr8472(void *env8473, void *arglst8386)
{
    cout << "In ptr8472";
    print_val(arglst8386);

    void *negative_u63 = get_env_value(env8473, encode_int((s32)1));
    void *letk8280 = prim_car(arglst8386);
    void *arg_u45lst8387 = prim_cdr(arglst8386);
    void *Ycomb = prim_car(arg_u45lst8387);
    void *arg_u45lst8388 = prim_cdr(arg_u45lst8387);

    // creating new closure instance
    auto ptr8513 = reinterpret_cast<void (*)(void *, void *)>(&ptr8484);
    env8473 = allocate_env_space(encode_int((s32)1));
    void *id8320 = make_closure(reinterpret_cast<void *>(ptr8513), env8473);

    // setting env list
    set_env(env8473, encode_int((s32)1), negative_u63);

    // creating new closure instance
    auto ptr8514 = reinterpret_cast<void (*)(void *, void *)>(&ptr8486);
    env8473 = allocate_env_space(encode_int((s32)0));
    void *id8321 = make_closure(reinterpret_cast<void *>(ptr8514), env8473);

    void *oldarg8404 = encode_null();
    void *newarg8405 = prim_cons(id8321, oldarg8404);
    void *newarg8406 = prim_cons(id8320, newarg8405);

    // app-clo
    void *cloPtr8515 = get_closure_ptr(Ycomb);
    void *procEnv8516 = get_env(Ycomb);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8515);
    function_ptr(procEnv8516, newarg8406);
}

void ptr8470(void *env8471, void *arglst8380)
{
    cout << "In ptr8470";
    print_val(arglst8380);

    void *kont8286 = prim_car(arglst8380);
    void *arg_u45lst8381 = prim_cdr(arglst8380);
    void *x = prim_car(arg_u45lst8381);
    void *arg_u45lst8382 = prim_cdr(arg_u45lst8381);
    void *oldarg8383 = encode_null();
    void *newarg8384 = prim_cons(x, oldarg8383);
    void *newarg8385 = prim_cons(kont8286, newarg8384);

    // app-clo
    void *cloPtr8517 = get_closure_ptr(x);
    void *procEnv8518 = get_env(x);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8517);
    function_ptr(procEnv8518, newarg8385);
}

void ptr8468(void *env8469, void *args8278)
{
    cout << "In ptr8468";
    print_val(args8278);

    void *kkont8277 = prim_car(args8278);
    void *args = prim_cdr(args8278);
    void *prm8279 = apply_prim__u43(args);
    void *id8311 = encode_null();
    void *oldarg8377 = encode_null();
    void *newarg8378 = prim_cons(prm8279, oldarg8377);
    void *newarg8379 = prim_cons(id8311, newarg8378);

    // app-clo
    void *cloPtr8519 = get_closure_ptr(kkont8277);
    void *procEnv8520 = get_env(kkont8277);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8519);
    function_ptr(procEnv8520, newarg8379);
}

void ptr8466(void *env8467, void *args8275)
{
    cout << "In ptr8466";
    print_val(args8275);

    void *kkont8274 = prim_car(args8275);
    void *args = prim_cdr(args8275);
    void *prm8276 = apply_prim__u45(args);
    void *id8310 = encode_null();
    void *oldarg8374 = encode_null();
    void *newarg8375 = prim_cons(prm8276, oldarg8374);
    void *newarg8376 = prim_cons(id8310, newarg8375);

    // app-clo
    void *cloPtr8521 = get_closure_ptr(kkont8274);
    void *procEnv8522 = get_env(kkont8274);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8521);
    function_ptr(procEnv8522, newarg8376);
}

void ptr8464(void *env8465, void *args8272)
{
    cout << "In ptr8464";
    print_val(args8272);

    void *kkont8271 = prim_car(args8272);
    void *args = prim_cdr(args8272);
    void *prm8273 = apply_prim__u42(args);
    void *id8309 = encode_null();
    void *oldarg8371 = encode_null();
    void *newarg8372 = prim_cons(prm8273, oldarg8371);
    void *newarg8373 = prim_cons(id8309, newarg8372);

    // app-clo
    void *cloPtr8523 = get_closure_ptr(kkont8271);
    void *procEnv8524 = get_env(kkont8271);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8523);
    function_ptr(procEnv8524, newarg8373);
}

void ptr8462(void *env8463, void *args8269)
{
    cout << "In ptr8462";
    print_val(args8269);

    void *kkont8268 = prim_car(args8269);
    void *args = prim_cdr(args8269);
    void *prm8270 = apply_prim__u61(args);
    void *id8308 = encode_null();
    void *oldarg8368 = encode_null();
    void *newarg8369 = prim_cons(prm8270, oldarg8368);
    void *newarg8370 = prim_cons(id8308, newarg8369);

    // app-clo
    void *cloPtr8525 = get_closure_ptr(kkont8268);
    void *procEnv8526 = get_env(kkont8268);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8525);
    function_ptr(procEnv8526, newarg8370);
}

void ptr8460(void *env8461, void *args8266)
{
    cout << "In ptr8460";
    print_val(args8266);

    void *kkont8265 = prim_car(args8266);
    void *args = prim_cdr(args8266);
    void *prm8267 = apply_prim__u62(args);
    void *id8307 = encode_null();
    void *oldarg8365 = encode_null();
    void *newarg8366 = prim_cons(prm8267, oldarg8365);
    void *newarg8367 = prim_cons(id8307, newarg8366);

    // app-clo
    void *cloPtr8527 = get_closure_ptr(kkont8265);
    void *procEnv8528 = get_env(kkont8265);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8527);
    function_ptr(procEnv8528, newarg8367);
}

void ptr8458(void *env8459, void *args8263)
{
    cout << "In ptr8458";
    print_val(args8263);

    void *kkont8262 = prim_car(args8263);
    void *args = prim_cdr(args8263);
    void *prm8264 = apply_prim__u62_u61(args);
    void *id8306 = encode_null();
    void *oldarg8362 = encode_null();
    void *newarg8363 = prim_cons(prm8264, oldarg8362);
    void *newarg8364 = prim_cons(id8306, newarg8363);

    // app-clo
    void *cloPtr8529 = get_closure_ptr(kkont8262);
    void *procEnv8530 = get_env(kkont8262);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8529);
    function_ptr(procEnv8530, newarg8364);
}

void ptr8456(void *env8457, void *args8260)
{
    cout << "In ptr8456";
    print_val(args8260);

    void *kkont8259 = prim_car(args8260);
    void *args = prim_cdr(args8260);
    void *prm8261 = apply_prim__u60(args);
    void *id8305 = encode_null();
    void *oldarg8359 = encode_null();
    void *newarg8360 = prim_cons(prm8261, oldarg8359);
    void *newarg8361 = prim_cons(id8305, newarg8360);

    // app-clo
    void *cloPtr8531 = get_closure_ptr(kkont8259);
    void *procEnv8532 = get_env(kkont8259);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8531);
    function_ptr(procEnv8532, newarg8361);
}

void ptr8454(void *env8455, void *args8257)
{
    cout << "In ptr8454";
    print_val(args8257);

    void *kkont8256 = prim_car(args8257);
    void *args = prim_cdr(args8257);
    void *prm8258 = apply_prim__u60_u61(args);
    void *id8304 = encode_null();
    void *oldarg8356 = encode_null();
    void *newarg8357 = prim_cons(prm8258, oldarg8356);
    void *newarg8358 = prim_cons(id8304, newarg8357);

    // app-clo
    void *cloPtr8533 = get_closure_ptr(kkont8256);
    void *procEnv8534 = get_env(kkont8256);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8533);
    function_ptr(procEnv8534, newarg8358);
}

void ptr8452(void *env8453, void *args8254)
{
    cout << "In ptr8452";
    print_val(args8254);

    void *kkont8253 = prim_car(args8254);
    void *args = prim_cdr(args8254);
    void *prm8255 = apply_prim_car(args);
    void *id8303 = encode_null();
    void *oldarg8353 = encode_null();
    void *newarg8354 = prim_cons(prm8255, oldarg8353);
    void *newarg8355 = prim_cons(id8303, newarg8354);

    // app-clo
    void *cloPtr8535 = get_closure_ptr(kkont8253);
    void *procEnv8536 = get_env(kkont8253);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8535);
    function_ptr(procEnv8536, newarg8355);
}

void ptr8450(void *env8451, void *args8251)
{
    cout << "In ptr8450";
    print_val(args8251);

    void *kkont8250 = prim_car(args8251);
    void *args = prim_cdr(args8251);
    void *prm8252 = apply_prim_cdr(args);
    void *id8302 = encode_null();
    void *oldarg8350 = encode_null();
    void *newarg8351 = prim_cons(prm8252, oldarg8350);
    void *newarg8352 = prim_cons(id8302, newarg8351);

    // app-clo
    void *cloPtr8537 = get_closure_ptr(kkont8250);
    void *procEnv8538 = get_env(kkont8250);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8537);
    function_ptr(procEnv8538, newarg8352);
}

void ptr8448(void *env8449, void *args8248)
{
    cout << "In ptr8448";
    print_val(args8248);

    void *kkont8247 = prim_car(args8248);
    void *args = prim_cdr(args8248);
    void *prm8249 = apply_prim_cons(args);
    void *id8301 = encode_null();
    void *oldarg8347 = encode_null();
    void *newarg8348 = prim_cons(prm8249, oldarg8347);
    void *newarg8349 = prim_cons(id8301, newarg8348);

    // app-clo
    void *cloPtr8539 = get_closure_ptr(kkont8247);
    void *procEnv8540 = get_env(kkont8247);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8539);
    function_ptr(procEnv8540, newarg8349);
}

void ptr8446(void *env8447, void *args8245)
{
    cout << "In ptr8446";
    print_val(args8245);

    void *kkont8244 = prim_car(args8245);
    void *args = prim_cdr(args8245);
    void *prm8246 = apply_prim_null_u63(args);
    void *id8300 = encode_null();
    void *oldarg8344 = encode_null();
    void *newarg8345 = prim_cons(prm8246, oldarg8344);
    void *newarg8346 = prim_cons(id8300, newarg8345);

    // app-clo
    void *cloPtr8541 = get_closure_ptr(kkont8244);
    void *procEnv8542 = get_env(kkont8244);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8541);
    function_ptr(procEnv8542, newarg8346);
}

void ptr8444(void *env8445, void *args8242)
{
    cout << "In ptr8444";
    print_val(args8242);

    void *kkont8241 = prim_car(args8242);
    void *args = prim_cdr(args8242);
    void *prm8243 = apply_prim_eq_u63(args);
    void *id8299 = encode_null();
    void *oldarg8341 = encode_null();
    void *newarg8342 = prim_cons(prm8243, oldarg8341);
    void *newarg8343 = prim_cons(id8299, newarg8342);

    // app-clo
    void *cloPtr8543 = get_closure_ptr(kkont8241);
    void *procEnv8544 = get_env(kkont8241);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8543);
    function_ptr(procEnv8544, newarg8343);
}

void ptr8442(void *env8443, void *args8239)
{
    cout << "In ptr8442";
    print_val(args8239);

    void *kkont8238 = prim_car(args8239);
    void *args = prim_cdr(args8239);
    void *prm8240 = apply_prim_equal_u63(args);
    void *id8298 = encode_null();
    void *oldarg8338 = encode_null();
    void *newarg8339 = prim_cons(prm8240, oldarg8338);
    void *newarg8340 = prim_cons(id8298, newarg8339);

    // app-clo
    void *cloPtr8545 = get_closure_ptr(kkont8238);
    void *procEnv8546 = get_env(kkont8238);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8545);
    function_ptr(procEnv8546, newarg8340);
}

void ptr8440(void *env8441, void *args8236)
{
    cout << "In ptr8440";
    print_val(args8236);

    void *kkont8235 = prim_car(args8236);
    void *args = prim_cdr(args8236);
    void *prm8237 = apply_prim_odd_u63(args);
    void *id8297 = encode_null();
    void *oldarg8335 = encode_null();
    void *newarg8336 = prim_cons(prm8237, oldarg8335);
    void *newarg8337 = prim_cons(id8297, newarg8336);

    // app-clo
    void *cloPtr8547 = get_closure_ptr(kkont8235);
    void *procEnv8548 = get_env(kkont8235);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8547);
    function_ptr(procEnv8548, newarg8337);
}

void ptr8438(void *env8439, void *args8233)
{
    cout << "In ptr8438";
    print_val(args8233);

    void *kkont8232 = prim_car(args8233);
    void *args = prim_cdr(args8233);
    void *prm8234 = apply_prim_even_u63(args);
    void *id8296 = encode_null();
    void *oldarg8332 = encode_null();
    void *newarg8333 = prim_cons(prm8234, oldarg8332);
    void *newarg8334 = prim_cons(id8296, newarg8333);

    // app-clo
    void *cloPtr8549 = get_closure_ptr(kkont8232);
    void *procEnv8550 = get_env(kkont8232);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8549);
    function_ptr(procEnv8550, newarg8334);
}

void ptr8436(void *env8437, void *args8230)
{
    cout << "In ptr8436";
    print_val(args8230);

    void *kkont8229 = prim_car(args8230);
    void *args = prim_cdr(args8230);
    void *prm8231 = apply_prim_positive_u63(args);
    void *id8295 = encode_null();
    void *oldarg8329 = encode_null();
    void *newarg8330 = prim_cons(prm8231, oldarg8329);
    void *newarg8331 = prim_cons(id8295, newarg8330);

    // app-clo
    void *cloPtr8551 = get_closure_ptr(kkont8229);
    void *procEnv8552 = get_env(kkont8229);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8551);
    function_ptr(procEnv8552, newarg8331);
}

void ptr8434(void *env8435, void *args8227)
{
    cout << "In ptr8434";
    print_val(args8227);

    void *kkont8226 = prim_car(args8227);
    void *args = prim_cdr(args8227);
    void *prm8228 = apply_prim_negative_u63(args);
    void *id8294 = encode_null();
    void *oldarg8326 = encode_null();
    void *newarg8327 = prim_cons(prm8228, oldarg8326);
    void *newarg8328 = prim_cons(id8294, newarg8327);

    // app-clo
    void *cloPtr8553 = get_closure_ptr(kkont8226);
    void *procEnv8554 = get_env(kkont8226);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8553);
    function_ptr(procEnv8554, newarg8328);
}

void root(void *rootenv8490, void *rootarg8491)
{
    cout << "In root";
    print_val(rootarg8491);

    // creating new closure instance
    auto ptr8555 = reinterpret_cast<void (*)(void *, void *)>(&ptr8434);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *negative_u63 = make_closure(reinterpret_cast<void *>(ptr8555), rootenv8490);

    // creating new closure instance
    auto ptr8556 = reinterpret_cast<void (*)(void *, void *)>(&ptr8436);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *positive_u63 = make_closure(reinterpret_cast<void *>(ptr8556), rootenv8490);

    // creating new closure instance
    auto ptr8557 = reinterpret_cast<void (*)(void *, void *)>(&ptr8438);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *even_u63 = make_closure(reinterpret_cast<void *>(ptr8557), rootenv8490);

    // creating new closure instance
    auto ptr8558 = reinterpret_cast<void (*)(void *, void *)>(&ptr8440);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *odd_u63 = make_closure(reinterpret_cast<void *>(ptr8558), rootenv8490);

    // creating new closure instance
    auto ptr8559 = reinterpret_cast<void (*)(void *, void *)>(&ptr8442);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *equal_u63 = make_closure(reinterpret_cast<void *>(ptr8559), rootenv8490);

    // creating new closure instance
    auto ptr8560 = reinterpret_cast<void (*)(void *, void *)>(&ptr8444);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *eq_u63 = make_closure(reinterpret_cast<void *>(ptr8560), rootenv8490);

    // creating new closure instance
    auto ptr8561 = reinterpret_cast<void (*)(void *, void *)>(&ptr8446);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *null_u63 = make_closure(reinterpret_cast<void *>(ptr8561), rootenv8490);

    // creating new closure instance
    auto ptr8562 = reinterpret_cast<void (*)(void *, void *)>(&ptr8448);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *cons = make_closure(reinterpret_cast<void *>(ptr8562), rootenv8490);

    // creating new closure instance
    auto ptr8563 = reinterpret_cast<void (*)(void *, void *)>(&ptr8450);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *cdr = make_closure(reinterpret_cast<void *>(ptr8563), rootenv8490);

    // creating new closure instance
    auto ptr8564 = reinterpret_cast<void (*)(void *, void *)>(&ptr8452);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *car = make_closure(reinterpret_cast<void *>(ptr8564), rootenv8490);

    // creating new closure instance
    auto ptr8565 = reinterpret_cast<void (*)(void *, void *)>(&ptr8454);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u60_u61 = make_closure(reinterpret_cast<void *>(ptr8565), rootenv8490);

    // creating new closure instance
    auto ptr8566 = reinterpret_cast<void (*)(void *, void *)>(&ptr8456);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u60 = make_closure(reinterpret_cast<void *>(ptr8566), rootenv8490);

    // creating new closure instance
    auto ptr8567 = reinterpret_cast<void (*)(void *, void *)>(&ptr8458);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u62_u61 = make_closure(reinterpret_cast<void *>(ptr8567), rootenv8490);

    // creating new closure instance
    auto ptr8568 = reinterpret_cast<void (*)(void *, void *)>(&ptr8460);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u62 = make_closure(reinterpret_cast<void *>(ptr8568), rootenv8490);

    // creating new closure instance
    auto ptr8569 = reinterpret_cast<void (*)(void *, void *)>(&ptr8462);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u61 = make_closure(reinterpret_cast<void *>(ptr8569), rootenv8490);

    // creating new closure instance
    auto ptr8570 = reinterpret_cast<void (*)(void *, void *)>(&ptr8464);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u42 = make_closure(reinterpret_cast<void *>(ptr8570), rootenv8490);

    // creating new closure instance
    auto ptr8571 = reinterpret_cast<void (*)(void *, void *)>(&ptr8466);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u45 = make_closure(reinterpret_cast<void *>(ptr8571), rootenv8490);

    // creating new closure instance
    auto ptr8572 = reinterpret_cast<void (*)(void *, void *)>(&ptr8468);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *_u43 = make_closure(reinterpret_cast<void *>(ptr8572), rootenv8490);

    // creating new closure instance
    auto ptr8573 = reinterpret_cast<void (*)(void *, void *)>(&ptr8470);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *id8312 = make_closure(reinterpret_cast<void *>(ptr8573), rootenv8490);

    // creating new closure instance
    auto ptr8574 = reinterpret_cast<void (*)(void *, void *)>(&ptr8472);
    rootenv8490 = allocate_env_space(encode_int((s32)1));
    void *id8313 = make_closure(reinterpret_cast<void *>(ptr8574), rootenv8490);

    // setting env list
    set_env(rootenv8490, encode_int((s32)1), negative_u63);

    // creating new closure instance
    auto ptr8575 = reinterpret_cast<void (*)(void *, void *)>(&ptr8474);
    rootenv8490 = allocate_env_space(encode_int((s32)0));
    void *id8314 = make_closure(reinterpret_cast<void *>(ptr8575), rootenv8490);

    void *oldarg8431 = encode_null();
    void *newarg8432 = prim_cons(id8314, oldarg8431);
    void *newarg8433 = prim_cons(id8313, newarg8432);

    // app-clo
    void *cloPtr8576 = get_closure_ptr(id8312);
    void *procEnv8577 = get_env(id8312);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8576);
    function_ptr(procEnv8577, newarg8433);
}

int main(int argc, char **argv)
{
    // making a call to the root function to kick off our c++ emission.
    root(0, 0);
}
