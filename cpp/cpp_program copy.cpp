#include <stdio.h>
#include <string.h>
#include "header.h"

using namespace std;

void ptr4912(void *env4913, void *args3805)
{
    cout << "in ptr4912" << endl;
    recursive_prim_print(reinterpret_cast<u64>(args3805));
    cout<<endl;

    void *kkont4900 = prim_car(args3805);
    // cout << "car: " << DECODE_INT(reinterpret_cast<u64>(kkont4900)) << endl;

    void *args = prim_cdr(args3805);
    // cout << "cdr: " << DECODE_INT(reinterpret_cast<u64>(args)) << endl;

    void *prm4901 = apply_prim__u43(args);
    cout << "SumVal: " << DECODE_INT(reinterpret_cast<u64>(prm4901)) << endl;

    void *id4902 = reinterpret_cast<void *>(encodeNull());
    void *oldarg4905 = reinterpret_cast<void *>(encodeNull());
    void *newarg4906 = prim_cons(prm4901, oldarg4905);
    void *newarg4907 = prim_cons(id4902, newarg4906);

    print_halt(newarg4907);

    // void *(*fun_ptr)(void *, void *);
    // fun_ptr = (void *(*)(void *, void *))kkont4900[0];
    // fun_ptr(kkont4900, newarg4907);

    // fun_ptr, store the address of a function allowing a program to call that function indirectly through the pointer.
    // void* (*fun_ptr) (void*,void*);
    // // fun_ptr = *((void (**)(void*,void*)) kkont4900); //((void**)kkont4900)[0];
    // fun_ptr = ((void*)kkont4900)[0];
    // fun_ptr(kkont4900, newarg4907);
}

void root(void *rootenv4914, void *rootarg4915)
{
    cout << "in root" << endl;

    void **_u43 = (void **)malloc(sizeof(void *) * 1);
    _u43[0] = (void *)(&ptr4912);

    // new
    //_u43[1] = rootenv4914;
    void *clo = reinterpret_cast<void *>(ENCODE_CLO(_u43));
    u64 val = reinterpret_cast<u64>(clo);

    void *id4903 = reinterpret_cast<void *>(ENCODE_INT(1));
    void *id4904 = reinterpret_cast<void *>(ENCODE_INT(2));
    void *oldarg4908 = reinterpret_cast<void *>(encodeNull());
    void *newarg4909 = prim_cons(id4904, oldarg4908);
    void *newarg4910 = prim_cons(id4903, newarg4909);
    void *newarg4911 = prim_cons(halt, newarg4910);
    // print_halt(newarg4910);

    void *(*fun_ptr)(void *, void *);
    fun_ptr = (void *(*)(void *, void *))_u43[0];
    fun_ptr(_u43, newarg4911);

    // void* (*add_ptr2)(void*, void*);
    // void* (*add_ptr3)(void*, void*);
    // //add_ptr2 = (void *(*)(void *, void *))_u43[0];
    // //add_ptr3 = (void *(*)(void *, void *))_u43[1];
    // fun_ptr(DECODE_CLO(_u43[1]), newarg4911);
}

int main(int argc, char *argv[])
{
    halt = (void **)malloc(sizeof(void *) * 1);
    halt[0] = (void *)&fhalt;

    // void *(*fun_ptr)(void *, void *);
    // fun_ptr = (void *(*)(void *, void *))halt[0];
    // fun_ptr(halt, nullptr);

    // halt = (void**)malloc(sizeof(void*) * 1);
    // halt[0] = &fhalt;
    // void (*add_ptr2)(void*, void*) = &fhalt;

    // void *(*fun_ptr)(void *);
    // fun_ptr = (void *(*)(void *))halt[0];
    // fun_ptr(halt);

    root(0, 0);

    return 0;
}

/* void ptr4912(void* env4913, void* args)
{

void* kkont4900 = prim_car(args);
void* args_2 = prim_cdr(args);
void* prm4901 = apply_prim__u43(args_2);
void* id4902 = encodeNull();
void* oldarg4905 = encodeNull();
void* newarg4906 = prim_cons(prm4901, oldarg4905);
void* newarg4907 = prim_cons(id4902, newarg4906);

void (*fun_ptr) (void*,void*);
// fun_ptr = *((void (**)(void*,void*)) kkont4900); //((void**)kkont4900)[0];
fun_ptr = (void (*)(void*, void*)) kkont4900;
fun_ptr(kkont4900, newarg4907);

}


void root(void* rootenv4914, void* rootarg4915)
{

void** _u43 = (void**)malloc(sizeof(void*) * 1);
_u43[0] = (void*)(&ptr4912);


void* id4903 = encodeInt(1);
void* id4904 = encodeInt(2);
void* oldarg4908 = encodeNull();
void* newarg4909 = prim_cons(id4904, oldarg4908);
void* newarg4910 = prim_cons(id4903, newarg4909);
void* newarg4911 = prim_cons(halt, newarg4910);

void (*fun_ptr) (void*,void*);
fun_ptr = (void (*)(void*, void*)) _u43[0];
fun_ptr(_u43, newarg4911);
}



int main(int argc, char* argv[])
{

halt = (void**)malloc(sizeof(void*) * 1);
// halt[0] = &fhalt;
void (*halt)(void*, void*) = &fhalt;

root(0,0);

return 0;
}
 */