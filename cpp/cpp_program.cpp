// #include<stdio.h>
// #include<string.h>
// #include "header.h"
// using namespace std;

// void ptr4912(void* env4913, void* args)
// {

// void* kkont4900 = prim_car(void* args);
// void* args = prim_cdr(void* args);
// void* prm4901 = apply_prim__u43(void* args);
// void* id4902 = encodeNull();
// void* oldarg4905 = encodeNull();
// void* newarg4906 = prim_cons(void* prm4901, void* oldarg4905);
// void* newarg4907 = prim_cons(void* id4902, void* newarg4906);

// void (*fun_ptr) (void*,void*);
// fun_ptr = kkont4900[0];
// fun_ptr(kkont4900, newarg4907);

// }

// void main(void* mainenv4914, void* mainarg4915)
// {

// void** _u43 = (void**)malloc(sizeof(void*) * 1);
// _u43[0] = (void*)(&ptr4912);


// void* id4903 = encodeInt(1);
// void* id4904 = encodeInt(2);
// void* oldarg4908 = encodeNull();
// void* newarg4909 = prim_cons(void* id4904, void* oldarg4908);
// void* newarg4910 = prim_cons(void* id4903, void* newarg4909);
// void* newarg4911 = prim_cons(void* halt, void* newarg4910);

// void (*fun_ptr) (void*,void*);
// fun_ptr = _u43[0];
// fun_ptr(_u43, newarg4911);

// }

