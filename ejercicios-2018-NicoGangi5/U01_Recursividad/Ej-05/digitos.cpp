#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b){
    if(b == 0)      throw 404;
    if(b == 1)      return a;
    if(a == 0)      return 0;
    if(a >= b){
        return cociente(a-b, b) + 1;
    }
    return 0;
}

unsigned int resto(unsigned int a, unsigned int b){
    if( a < b)      return a;
    else            return resto(a-b, b);
}

void escribir_espaciado(unsigned int num){
    if(num < 10)     std::cout << num << " ";
    else{
        escribir_espaciado(cociente(num, 10));
        std::cout << resto(num, 10) << " ";
    }
}
