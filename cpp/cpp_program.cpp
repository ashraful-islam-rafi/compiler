#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void root(void* rootenv4806, void* rootarg4807)
{

void** _u43 = (void**)malloc(sizeof(void*) * 1);
_u43[0] = (void*)(&ptr4804);


void* id4795 = encodeInt(1);
void* id4796 = encodeInt(2);
void* oldarg4800 = encodeNull();
void* newarg4801 = prim_cons(id4796, oldarg4800);
void* newarg4802 = prim_cons(id4795, newarg4801);
void* newarg4803 = prim_cons(halt, newarg4802);

void (*fun_ptr) (void*,void*);
fun_ptr = ((void**)_u43)[0];
fun_ptr(_u43, newarg4803);

}

void ptr4804(void* env4805, void* args)
{

void* kkont4792 = prim_car(args);
void* args = prim_cdr(args);
void* prm4793 = apply_prim__u43(args);
void* id4794 = encodeNull();
void* oldarg4797 = encodeNull();
void* newarg4798 = prim_cons(prm4793, oldarg4797);
void* newarg4799 = prim_cons(id4794, newarg4798);

void (*fun_ptr) (void*,void*);
fun_ptr = ((void**)kkont4792)[0];
fun_ptr(kkont4792, newarg4799);

}

int main(int argc, char* argv[])
{

halt = (void**)malloc(sizeof(void*) * 1);
halt[0] = &fhalt;
root(0,0);

return 0;
}
