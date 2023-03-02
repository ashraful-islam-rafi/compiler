#include <stdio.h>
#include <string.h>
#include "header.h"

using namespace std;

void ptr4912(void *env4913, void *args3805)
{
    cout << "in ptr4912" << endl;
    recursive_prim_print(reinterpret_cast<u64>(args3805));
    cout << endl;

    // new
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

    // recursive_prim_print(reinterpret_cast<u64>(newarg4907));
    // cout<<endl;

    cout << "kkont4900: " << DECODE_INT(reinterpret_cast<u64>(kkont4900)) << endl;

    // void *(*fptr3796666)(void*) = reinterpret_cast<void *(*)(void*)>(get_closure_ptr);
    // void *proc3797777 = fptr3796666(kkont4900);

    void *proc3797777 = (void *)get_closure_ptr(kkont4900);

    reinterpret_cast<void (*)(void *, void *)>(proc3797777)(kkont4900, newarg4907);

    // end
}

void root(void *rootenv4914, void *rootarg4915)
{
    cout << "in root" << endl;

    // new
    // s64 (*fptr)(s64, s64) = reinterpret_cast<s64 (*)(s64, s64)>(&ptr4912);
    // void (*fptr)(void *, void *) = reinterpret_cast<void (*)(void *, void *)>(&ptr4912);
    // void *_43 = make_closure(0, reinterpret_cast<u64 *>(fptr));

    auto fptr = reinterpret_cast<void (*)(void *, void *)>(&ptr4912);
    void *_43 = make_closure(0, reinterpret_cast<u64 *>(fptr));

    void *id4903 = reinterpret_cast<void *>(ENCODE_INT((s32)1));
    void *id4904 = reinterpret_cast<void *>(ENCODE_INT((s32)2));
    void *oldarg4908 = reinterpret_cast<void *>(encodeNull());
    void *newarg4909 = prim_cons(id4904, oldarg4908);
    void *newarg4910 = prim_cons(id4903, newarg4909);
    void *newarg4911 = prim_cons(halt, newarg4910);

    // void *(*fptr3796)(void*) = reinterpret_cast<void *(*)(void*)>(get_closure_ptr);
    // void *proc3797 = fptr3796(_43);

    void *proc3797 = (void *)get_closure_ptr(_43);

    reinterpret_cast<void (*)(void *, void *)>(proc3797)(_43, newarg4911);
    // end
}

int main(int argc, char **argv)
{
    halt = (void **)malloc(sizeof(void *) * 1);
    halt[0] = (void *)&fhalt;

    root(0, 0);
    return 0;
}