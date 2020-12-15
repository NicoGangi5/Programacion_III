#include <iostream>
#include "potencia.h"

using namespace std;

unsigned int Valor = 0;

int main() {
    Valor = potencia(3, 1);
    std::cout << "Su resultado es: " << Valor << std::endl;
    std::cout << "Ejercicio 01/01\n" << std::endl;
    return 0;
}