#include <stdio.h>
#include <string.h>
#include "header.h"
using namespace std;

void ptr4929(void *env4930, void *args4917)
{
    // cout<<"tag: "<<(reinterpret_cast<u64>(env4930) & 7) <<endl;
    // cout<<"tag: "<<(reinterpret_cast<u64>(args4917) & 7) <<endl;

    // cout<<"in ptr4929"<<endl;
    // recursive_prim_print(reinterpret_cast<u64>(args4917));
    // cout<<endl;

    void *kkont4916 = prim_car(args4917);
    void *args = prim_cdr(args4917);
    void *prm4918 = apply_prim__u43(args);

    void *id4919 = reinterpret_cast<void *>(encodeNull());
    void *oldarg4922 = reinterpret_cast<void *>(encodeNull());
    void *newarg4923 = prim_cons(prm4918, oldarg4922);
    void *newarg4924 = prim_cons(id4919, newarg4923);


    // recursive_prim_print(reinterpret_cast<u64>(newarg4924));

    void *cloPtr4933 = (void *)get_closure_ptr(kkont4916);

    // cout<<"\ncloPtr4933: - ";
    // cout<<reinterpret_cast<u64>(cloPtr4933) <<endl;
    // cout<<reinterpret_cast<u64>(&fhalt) <<endl;

    reinterpret_cast<void (*)(void *, void *)>(cloPtr4933)(kkont4916, newarg4924);
}

void root(void *rootenv4931, void *rootarg4932)
{

    auto ptr4934 = reinterpret_cast<void (*)(void *, void *)>(&ptr4929);
    void *_u43 = make_closure(0, reinterpret_cast<u64 *>(ptr4934));

    void *id4920 = reinterpret_cast<void *>(ENCODE_INT((s32)1));
    void *id4921 = reinterpret_cast<void *>(ENCODE_INT((s32)2));
    void *oldarg4925 = reinterpret_cast<void *>(encodeNull());
    void *newarg4926 = prim_cons(id4921, oldarg4925);
    void *newarg4927 = prim_cons(id4920, newarg4926);
    void *newarg4928 = prim_cons(halt, newarg4927);

    // cout<<"halt: ";
    // recursive_prim_print(reinterpret_cast<u64>(halt));
    // cout<<endl;


    void *cloPtr4935 = (void *)get_closure_ptr(_u43);
    reinterpret_cast<void (*)(void *, void *)>(cloPtr4935)(_u43, newarg4928);
}

int main(int argc, char **argv)
{

    halt = make_closure(0, reinterpret_cast<u64 *>(&fhalt));; //(void **)malloc(sizeof(void *) * 1);
    // halt[0] = (void *)&fhalt;

    root(0, 0);
}
