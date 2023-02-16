#include<stdio.h>
#include<string.h>
#include "header.h"
using namespace std;

void root(void* rootenv4904, void* rootarg4905)
{

void** _u2b = (void**)malloc(sizeof(void*) * 1);
_u2b[0] = (void*)(&ptr4902);
void* id4893 = encodeInt(1);
void* id4894 = encodeInt(2);
void* oldarg4898 = encodeInt(());
void* newarg4899 = encode_cons((id4894 oldarg4898));
void* newarg4900 = encode_cons((id4893 newarg4899));
void* newarg4901 = encode_cons((halt newarg4900));
void (*fun_ptr) (void*, void*); 
fun_ptr = _u2b[0];
fun_ptr(_u2b, newarg4901);

}

