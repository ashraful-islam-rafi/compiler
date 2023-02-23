#include <iostream>
#include <cstdint>
#include <string>

using namespace std;

typedef unsigned long long u64;
typedef signed long long s64;
typedef unsigned long u32;
typedef signed long s32;


// Macros
#define NUL 0


enum DataType {
  INTEGER = 0x1,
  BOOLEAN = 0x2,
  STRING = 0x3,
  FLOAT = 0x4,
  CLOSURE = 0x5,
  NULLL = 0x6,
  CONS = 0x7
};

void* halt;
void fhalt(void* env, void* arglist){
    car = prim_car(arglist)
    cout << car <<endl;
    exit(0);

}

void* encodeInt(int value) {
  int64_t encoded = value;
  encoded = (encoded << 3) | INTEGER;
  return reinterpret_cast<void*>(new int64_t(encoded));
}

// 
u64 encodeInt(s32 value){
  u64 res = ((u64) value) << 32;
  return res | INTEGER;
}

s32 decodeInt(u64 value){
  //extracting upper 32 bits and then casting back to s32
  return (s32)(u32)(value >> 32);
}


int decodeInt(void* data) {
  int64_t encoded = *reinterpret_cast<int64_t*>(data);
  encoded = encoded >> 3;
  int decoded = static_cast<int>(encoded);
  delete reinterpret_cast<int64_t*>(data);
  return decoded;
}

void* encodeBool(bool value) {
  int64_t encoded = value;
  encoded = (encoded << 3) | BOOLEAN;
  return reinterpret_cast<void*>(new int64_t(encoded));
}

bool decodeBool(void* data) {
  int64_t encoded = *reinterpret_cast<int64_t*>(data);
  encoded = encoded >> 3;
  bool decoded = static_cast<bool>(encoded);
  delete reinterpret_cast<int64_t*>(data);
  return decoded;
}

void* encodeString(const string& value) {
  string *str = new string(value);
  int64_t encoded = reinterpret_cast<int64_t>(str);
  encoded = (encoded << 3) | STRING;
  return reinterpret_cast<void*>(new int64_t(encoded));
}

string decodeString(void* data) {
  int64_t encoded = *reinterpret_cast<int64_t*>(data);
  encoded = encoded >> 3;
  string *decoded = reinterpret_cast<string*>(encoded);
  string s = *decoded;
  delete decoded;
  delete reinterpret_cast<int64_t*>(data);
  return s;
}


void* encodeFloat(float value) {
  int64_t *encoded = new int64_t;
  *encoded = *reinterpret_cast<int64_t*>(&value);
  *encoded = (*encoded << 3) | FLOAT;
  return reinterpret_cast<void*>(encoded);
}

float decodeFloat(void* data) {
  int64_t encoded = *reinterpret_cast<int64_t*>(data);
  encoded = encoded >> 3;
  float decoded = *reinterpret_cast<float*>(&encoded);
  delete reinterpret_cast<int64_t*>(data);
  return decoded;
}

void* encodeCons(int value) {
  int64_t encoded = value;
  encoded = (encoded << 3) | INTEGER;
  return reinterpret_cast<void*>(new int64_t(encoded));
}

void* decodeCons(){

}

void* encodeNull() {
  return 0;
}

void* prim_car(void* obj){

}

/* int main() {
  int value = 1001;
  void* encodedInt = encodeInt(value);
  int decodedInt = decodeInt(encodedInt);
  cout << "Encoded int value: " << encodedInt << endl;
  cout << "Decoded int value: " << decodedInt << endl;
  
  bool bvalue = true;
  void* encodedBool = encodeBool(bvalue);
  bool decodedBool = decodeBool(encodedBool);
  cout << "Encoded boolean value: " << encodedBool << endl;
  cout << "Decoded boolean value: " << decodedBool << endl;
  
  string svalue = "is this working?";

  void* encodedString = encodeString(svalue);
  string decodedString = decodeString(encodedString);
  cout << "Encoded string value: " << encodedString << endl;
  cout << "Decoded string value: " << decodedString << endl;

  float fvalue = 42.203;
  void* encodedFloat = encodeFloat(fvalue);
  float decodedFloat = decodeFloat(encodedFloat);
  cout << "Encoded float value: " << encodedFloat << endl;
  cout << "Decoded float value: " << decodedFloat << endl;
} */
