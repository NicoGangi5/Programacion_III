#include <iostream>
#include "../Cola/Cola.h"

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;


    Cola<int> Queue_1;
    Cola<int> Queue_2;
    int status = 0;

    for (int i = 0; i < 10; ++i) {
        Queue_1.encolar(i);
    }
    for (int j = 0; j < 10; ++j) {
        Queue_2.encolar(j);
    }

    while ( !(Queue_1.esVacia()) && !(Queue_2.esVacia()) ){
        if ( Queue_1.desencolar() != Queue_2.desencolar() ) status = 0;
        else status = 1;
    }

    if (status == 0) std::cout << "Las colas son distintas" << std::endl;
    else std::cout << "Las colas son iguales" << std::endl;

    return 0;
}