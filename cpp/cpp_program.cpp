#include <stdio.h>
#include <string.h>
#include "header.h"
using namespace std;

void ptr8403(void *env8404, void *arglst8355)
{
    cout << "In ptr8403";
    print_val(arglst8355);

    void *vs = get_env_value(env8404, encode_int((s32)2));
    void *kkont8262 = get_env_value(env8404, encode_int((s32)1));
    void *letk8265 = prim_car(arglst8355);
    void *arg_u45lst8356 = prim_cdr(arglst8355);
    void *t8225 = prim_car(arg_u45lst8356);
    void *arg_u45lst8357 = prim_cdr(arg_u45lst8356);
    void *lst8266 = prim_cons(kkont8262, vs);

    // app-clo
    void *cloPtr8413 = get_closure_ptr(t8225);
    void *procEnv8414 = get_env(t8225);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8413);
    function_ptr(procEnv8414, lst8266);
}

void ptr8401(void *env8402, void *arglst8352)
{
    cout << "In ptr8401";
    print_val(arglst8352);

    void *kkont8262 = get_env_value(env8402, encode_int((s32)3));
    void *vs = get_env_value(env8402, encode_int((s32)2));
    void *f = get_env_value(env8402, encode_int((s32)1));
    void *letk8264 = prim_car(arglst8352);
    void *arg_u45lst8353 = prim_cdr(arglst8352);
    void *t8224 = prim_car(arg_u45lst8353);
    void *arg_u45lst8354 = prim_cdr(arg_u45lst8353);

    // creating new closure instance
    auto ptr8415 = reinterpret_cast<void (*)(void *, void *)>(&ptr8403);
    env8402 = allocate_env_space(encode_int((s32)2));
    void *id8283 = make_closure(reinterpret_cast<void *>(ptr8415), env8402);

    // setting env list
    set_env(env8402, encode_int((s32)1), kkont8262);
    set_env(env8402, encode_int((s32)2), vs);

    void *oldarg8358 = encode_null();
    void *newarg8359 = prim_cons(f, oldarg8358);
    void *newarg8360 = prim_cons(id8283, newarg8359);

    // app-clo
    void *cloPtr8416 = get_closure_ptr(t8224);
    void *procEnv8417 = get_env(t8224);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8416);
    function_ptr(procEnv8417, newarg8360);
}

void ptr8399(void *env8400, void *vs8263)
{
    cout << "In ptr8399";
    print_val(vs8263);

    void *g = get_env_value(env8400, encode_int((s32)2));
    void *f = get_env_value(env8400, encode_int((s32)1));
    void *kkont8262 = prim_car(vs8263);
    void *vs = prim_cdr(vs8263);

    // creating new closure instance
    auto ptr8418 = reinterpret_cast<void (*)(void *, void *)>(&ptr8401);
    env8400 = allocate_env_space(encode_int((s32)3));
    void *id8282 = make_closure(reinterpret_cast<void *>(ptr8418), env8400);

    // setting env list
    set_env(env8400, encode_int((s32)1), f);
    set_env(env8400, encode_int((s32)2), vs);
    set_env(env8400, encode_int((s32)3), kkont8262);

    void *oldarg8361 = encode_null();
    void *newarg8362 = prim_cons(g, oldarg8361);
    void *newarg8363 = prim_cons(id8282, newarg8362);

    // app-clo
    void *cloPtr8419 = get_closure_ptr(g);
    void *procEnv8420 = get_env(g);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8419);
    function_ptr(procEnv8420, newarg8363);
}

void ptr8397(void *env8398, void *arglst8349)
{
    cout << "In ptr8397";
    print_val(arglst8349);

    void *g = get_env_value(env8398, encode_int((s32)1));
    void *kont8261 = prim_car(arglst8349);
    void *arg_u45lst8350 = prim_cdr(arglst8349);
    void *f = prim_car(arg_u45lst8350);
    void *arg_u45lst8351 = prim_cdr(arg_u45lst8350);

    // creating new closure instance
    auto ptr8421 = reinterpret_cast<void (*)(void *, void *)>(&ptr8399);
    env8398 = allocate_env_space(encode_int((s32)2));
    void *id8281 = make_closure(reinterpret_cast<void *>(ptr8421), env8398);

    // setting env list
    set_env(env8398, encode_int((s32)1), f);
    set_env(env8398, encode_int((s32)2), g);

    void *oldarg8364 = encode_null();
    void *newarg8365 = prim_cons(id8281, oldarg8364);
    void *newarg8366 = prim_cons(kont8261, newarg8365);

    // app-clo
    void *cloPtr8422 = get_closure_ptr(f);
    void *procEnv8423 = get_env(f);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8422);
    function_ptr(procEnv8423, newarg8366);
}

void ptr8395(void *env8396, void *arglst8346)
{
    cout << "In ptr8395";
    print_val(arglst8346);

    void *kont8260 = prim_car(arglst8346);
    void *arg_u45lst8347 = prim_cdr(arglst8346);
    void *g = prim_car(arg_u45lst8347);
    void *arg_u45lst8348 = prim_cdr(arg_u45lst8347);
    void *id8279 = encode_null();

    // creating new closure instance
    auto ptr8424 = reinterpret_cast<void (*)(void *, void *)>(&ptr8397);
    env8396 = allocate_env_space(encode_int((s32)1));
    void *id8280 = make_closure(reinterpret_cast<void *>(ptr8424), env8396);

    // setting env list
    set_env(env8396, encode_int((s32)1), g);

    void *oldarg8367 = encode_null();
    void *newarg8368 = prim_cons(id8280, oldarg8367);
    void *newarg8369 = prim_cons(id8279, newarg8368);

    // app-clo
    void *cloPtr8425 = get_closure_ptr(kont8260);
    void *procEnv8426 = get_env(kont8260);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8425);
    function_ptr(procEnv8426, newarg8369);
}

void ptr8409(void *env8410, void *args8257)
{
    cout << "In ptr8409";
    print_val(args8257);

    void *kkont8256 = prim_car(args8257);
    void *args = prim_cdr(args8257);
    void *prm8258 = apply_prim_halt(args);
    void *id8288 = encode_null();
    void *oldarg8337 = encode_null();
    void *newarg8338 = prim_cons(prm8258, oldarg8337);
    void *newarg8339 = prim_cons(id8288, newarg8338);

    // app-clo
    void *cloPtr8427 = get_closure_ptr(kkont8256);
    void *procEnv8428 = get_env(kkont8256);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8427);
    function_ptr(procEnv8428, newarg8339);
}

void ptr8407(void *env8408, void *arglst8334)
{
    cout << "In ptr8407";
    print_val(arglst8334);

    void *kont8255 = prim_car(arglst8334);
    void *arg_u45lst8335 = prim_cdr(arglst8334);
    void *halt = prim_car(arg_u45lst8335);
    void *arg_u45lst8336 = prim_cdr(arg_u45lst8335);
    void *id8286 = encode_null();

    // creating new closure instance
    auto ptr8429 = reinterpret_cast<void (*)(void *, void *)>(&ptr8409);
    env8408 = allocate_env_space(encode_int((s32)0));
    void *id8287 = make_closure(reinterpret_cast<void *>(ptr8429), env8408);

    void *oldarg8340 = encode_null();
    void *newarg8341 = prim_cons(id8287, oldarg8340);
    void *newarg8342 = prim_cons(id8286, newarg8341);

    // app-clo
    void *cloPtr8430 = get_closure_ptr(kont8255);
    void *procEnv8431 = get_env(kont8255);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8430);
    function_ptr(procEnv8431, newarg8342);
}

void ptr8405(void *env8406, void *arglst8327)
{
    cout << "In ptr8405";
    print_val(arglst8327);

    void *equal_u63 = get_env_value(env8406, encode_int((s32)1));
    void *letk8254 = prim_car(arglst8327);
    void *arg_u45lst8328 = prim_cdr(arglst8327);
    void *halt = prim_car(arg_u45lst8328);
    void *arg_u45lst8329 = prim_cdr(arg_u45lst8328);
    void *id8289 = reinterpret_cast<void *>(encode_string(new string("yes")));
    void *id8290 = reinterpret_cast<void *>(encode_string(new string("yes")));
    void *oldarg8330 = encode_null();
    void *newarg8331 = prim_cons(id8290, oldarg8330);
    void *newarg8332 = prim_cons(id8289, newarg8331);
    void *newarg8333 = prim_cons(halt, newarg8332);

    // app-clo
    void *cloPtr8432 = get_closure_ptr(equal_u63);
    void *procEnv8433 = get_env(equal_u63);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8432);
    function_ptr(procEnv8433, newarg8333);
}

void ptr8393(void *env8394, void *arglst8324)
{
    cout << "In ptr8393";
    print_val(arglst8324);

    void *equal_u63 = get_env_value(env8394, encode_int((s32)1));
    void *letk8253 = prim_car(arglst8324);
    void *arg_u45lst8325 = prim_cdr(arglst8324);
    void *Ycomb = prim_car(arg_u45lst8325);
    void *arg_u45lst8326 = prim_cdr(arg_u45lst8325);

    // creating new closure instance
    auto ptr8434 = reinterpret_cast<void (*)(void *, void *)>(&ptr8405);
    env8394 = allocate_env_space(encode_int((s32)1));
    void *id8284 = make_closure(reinterpret_cast<void *>(ptr8434), env8394);

    // setting env list
    set_env(env8394, encode_int((s32)1), equal_u63);

    // creating new closure instance
    auto ptr8435 = reinterpret_cast<void (*)(void *, void *)>(&ptr8407);
    env8394 = allocate_env_space(encode_int((s32)0));
    void *id8285 = make_closure(reinterpret_cast<void *>(ptr8435), env8394);

    void *oldarg8343 = encode_null();
    void *newarg8344 = prim_cons(id8285, oldarg8343);
    void *newarg8345 = prim_cons(id8284, newarg8344);

    // app-clo
    void *cloPtr8436 = get_closure_ptr(Ycomb);
    void *procEnv8437 = get_env(Ycomb);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8436);
    function_ptr(procEnv8437, newarg8345);
}

void ptr8391(void *env8392, void *arglst8318)
{
    cout << "In ptr8391";
    print_val(arglst8318);

    void *kont8259 = prim_car(arglst8318);
    void *arg_u45lst8319 = prim_cdr(arglst8318);
    void *x = prim_car(arg_u45lst8319);
    void *arg_u45lst8320 = prim_cdr(arg_u45lst8319);
    void *oldarg8321 = encode_null();
    void *newarg8322 = prim_cons(x, oldarg8321);
    void *newarg8323 = prim_cons(kont8259, newarg8322);

    // app-clo
    void *cloPtr8438 = get_closure_ptr(x);
    void *procEnv8439 = get_env(x);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8438);
    function_ptr(procEnv8439, newarg8323);
}

void ptr8389(void *env8390, void *args8251)
{
    cout << "In ptr8389";
    print_val(args8251);

    void *kkont8250 = prim_car(args8251);
    void *args = prim_cdr(args8251);
    void *prm8252 = apply_prim__u43(args);
    void *id8275 = encode_null();
    void *oldarg8315 = encode_null();
    void *newarg8316 = prim_cons(prm8252, oldarg8315);
    void *newarg8317 = prim_cons(id8275, newarg8316);

    // app-clo
    void *cloPtr8440 = get_closure_ptr(kkont8250);
    void *procEnv8441 = get_env(kkont8250);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8440);
    function_ptr(procEnv8441, newarg8317);
}

void ptr8387(void *env8388, void *args8248)
{
    cout << "In ptr8387";
    print_val(args8248);

    void *kkont8247 = prim_car(args8248);
    void *args = prim_cdr(args8248);
    void *prm8249 = apply_prim__u45(args);
    void *id8274 = encode_null();
    void *oldarg8312 = encode_null();
    void *newarg8313 = prim_cons(prm8249, oldarg8312);
    void *newarg8314 = prim_cons(id8274, newarg8313);

    // app-clo
    void *cloPtr8442 = get_closure_ptr(kkont8247);
    void *procEnv8443 = get_env(kkont8247);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8442);
    function_ptr(procEnv8443, newarg8314);
}

void ptr8385(void *env8386, void *args8245)
{
    cout << "In ptr8385";
    print_val(args8245);

    void *kkont8244 = prim_car(args8245);
    void *args = prim_cdr(args8245);
    void *prm8246 = apply_prim__u42(args);
    void *id8273 = encode_null();
    void *oldarg8309 = encode_null();
    void *newarg8310 = prim_cons(prm8246, oldarg8309);
    void *newarg8311 = prim_cons(id8273, newarg8310);

    // app-clo
    void *cloPtr8444 = get_closure_ptr(kkont8244);
    void *procEnv8445 = get_env(kkont8244);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8444);
    function_ptr(procEnv8445, newarg8311);
}

void ptr8383(void *env8384, void *args8242)
{
    cout << "In ptr8383";
    print_val(args8242);

    void *kkont8241 = prim_car(args8242);
    void *args = prim_cdr(args8242);
    void *prm8243 = apply_prim_car(args);
    void *id8272 = encode_null();
    void *oldarg8306 = encode_null();
    void *newarg8307 = prim_cons(prm8243, oldarg8306);
    void *newarg8308 = prim_cons(id8272, newarg8307);

    // app-clo
    void *cloPtr8446 = get_closure_ptr(kkont8241);
    void *procEnv8447 = get_env(kkont8241);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8446);
    function_ptr(procEnv8447, newarg8308);
}

void ptr8381(void *env8382, void *args8239)
{
    cout << "In ptr8381";
    print_val(args8239);

    void *kkont8238 = prim_car(args8239);
    void *args = prim_cdr(args8239);
    void *prm8240 = apply_prim_cdr(args);
    void *id8271 = encode_null();
    void *oldarg8303 = encode_null();
    void *newarg8304 = prim_cons(prm8240, oldarg8303);
    void *newarg8305 = prim_cons(id8271, newarg8304);

    // app-clo
    void *cloPtr8448 = get_closure_ptr(kkont8238);
    void *procEnv8449 = get_env(kkont8238);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8448);
    function_ptr(procEnv8449, newarg8305);
}

void ptr8379(void *env8380, void *args8236)
{
    cout << "In ptr8379";
    print_val(args8236);

    void *kkont8235 = prim_car(args8236);
    void *args = prim_cdr(args8236);
    void *prm8237 = apply_prim_cons(args);
    void *id8270 = encode_null();
    void *oldarg8300 = encode_null();
    void *newarg8301 = prim_cons(prm8237, oldarg8300);
    void *newarg8302 = prim_cons(id8270, newarg8301);

    // app-clo
    void *cloPtr8450 = get_closure_ptr(kkont8235);
    void *procEnv8451 = get_env(kkont8235);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8450);
    function_ptr(procEnv8451, newarg8302);
}

void ptr8377(void *env8378, void *args8233)
{
    cout << "In ptr8377";
    print_val(args8233);

    void *kkont8232 = prim_car(args8233);
    void *args = prim_cdr(args8233);
    void *prm8234 = apply_prim_null_u63(args);
    void *id8269 = encode_null();
    void *oldarg8297 = encode_null();
    void *newarg8298 = prim_cons(prm8234, oldarg8297);
    void *newarg8299 = prim_cons(id8269, newarg8298);

    // app-clo
    void *cloPtr8452 = get_closure_ptr(kkont8232);
    void *procEnv8453 = get_env(kkont8232);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8452);
    function_ptr(procEnv8453, newarg8299);
}

void ptr8375(void *env8376, void *args8230)
{
    cout << "In ptr8375";
    print_val(args8230);

    void *kkont8229 = prim_car(args8230);
    void *args = prim_cdr(args8230);
    void *prm8231 = apply_prim_eq_u63(args);
    void *id8268 = encode_null();
    void *oldarg8294 = encode_null();
    void *newarg8295 = prim_cons(prm8231, oldarg8294);
    void *newarg8296 = prim_cons(id8268, newarg8295);

    // app-clo
    void *cloPtr8454 = get_closure_ptr(kkont8229);
    void *procEnv8455 = get_env(kkont8229);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8454);
    function_ptr(procEnv8455, newarg8296);
}

void ptr8373(void *env8374, void *args8227)
{
    cout << "In ptr8373";
    print_val(args8227);

    void *kkont8226 = prim_car(args8227);
    void *args = prim_cdr(args8227);
    void *prm8228 = apply_prim_equal_u63(args);
    void *id8267 = encode_null();
    void *oldarg8291 = encode_null();
    void *newarg8292 = prim_cons(prm8228, oldarg8291);
    void *newarg8293 = prim_cons(id8267, newarg8292);

    // app-clo
    void *cloPtr8456 = get_closure_ptr(kkont8226);
    void *procEnv8457 = get_env(kkont8226);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8456);
    function_ptr(procEnv8457, newarg8293);
}

void root(void *rootenv8411, void *rootarg8412)
{
    cout << "In root";
    print_val(rootarg8412);

    // creating new closure instance
    auto ptr8458 = reinterpret_cast<void (*)(void *, void *)>(&ptr8373);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *equal_u63 = make_closure(reinterpret_cast<void *>(ptr8458), rootenv8411);

    // creating new closure instance
    auto ptr8459 = reinterpret_cast<void (*)(void *, void *)>(&ptr8375);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *eq_u63 = make_closure(reinterpret_cast<void *>(ptr8459), rootenv8411);

    // creating new closure instance
    auto ptr8460 = reinterpret_cast<void (*)(void *, void *)>(&ptr8377);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *null_u63 = make_closure(reinterpret_cast<void *>(ptr8460), rootenv8411);

    // creating new closure instance
    auto ptr8461 = reinterpret_cast<void (*)(void *, void *)>(&ptr8379);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *cons = make_closure(reinterpret_cast<void *>(ptr8461), rootenv8411);

    // creating new closure instance
    auto ptr8462 = reinterpret_cast<void (*)(void *, void *)>(&ptr8381);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *cdr = make_closure(reinterpret_cast<void *>(ptr8462), rootenv8411);

    // creating new closure instance
    auto ptr8463 = reinterpret_cast<void (*)(void *, void *)>(&ptr8383);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *car = make_closure(reinterpret_cast<void *>(ptr8463), rootenv8411);

    // creating new closure instance
    auto ptr8464 = reinterpret_cast<void (*)(void *, void *)>(&ptr8385);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *_u42 = make_closure(reinterpret_cast<void *>(ptr8464), rootenv8411);

    // creating new closure instance
    auto ptr8465 = reinterpret_cast<void (*)(void *, void *)>(&ptr8387);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *_u45 = make_closure(reinterpret_cast<void *>(ptr8465), rootenv8411);

    // creating new closure instance
    auto ptr8466 = reinterpret_cast<void (*)(void *, void *)>(&ptr8389);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *_u43 = make_closure(reinterpret_cast<void *>(ptr8466), rootenv8411);

    // creating new closure instance
    auto ptr8467 = reinterpret_cast<void (*)(void *, void *)>(&ptr8391);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *id8276 = make_closure(reinterpret_cast<void *>(ptr8467), rootenv8411);

    // creating new closure instance
    auto ptr8468 = reinterpret_cast<void (*)(void *, void *)>(&ptr8393);
    rootenv8411 = allocate_env_space(encode_int((s32)1));
    void *id8277 = make_closure(reinterpret_cast<void *>(ptr8468), rootenv8411);

    // setting env list
    set_env(rootenv8411, encode_int((s32)1), equal_u63);

    // creating new closure instance
    auto ptr8469 = reinterpret_cast<void (*)(void *, void *)>(&ptr8395);
    rootenv8411 = allocate_env_space(encode_int((s32)0));
    void *id8278 = make_closure(reinterpret_cast<void *>(ptr8469), rootenv8411);

    void *oldarg8370 = encode_null();
    void *newarg8371 = prim_cons(id8278, oldarg8370);
    void *newarg8372 = prim_cons(id8277, newarg8371);

    // app-clo
    void *cloPtr8470 = get_closure_ptr(id8276);
    void *procEnv8471 = get_env(id8276);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr8470);
    function_ptr(procEnv8471, newarg8372);
}

int main(int argc, char **argv)
{
    // making a call to the root function to kick off our c++ emission.
    root(0, 0);
}
