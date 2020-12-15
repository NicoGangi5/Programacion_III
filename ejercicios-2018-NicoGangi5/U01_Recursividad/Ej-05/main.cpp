#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int a = 11;
unsigned int b = 3;
unsigned int num = 5342;

int main() {
    std::cout << "El resultado de " << a << " dividido " << b << " es: " << cociente(a, b) << std::endl;
    std::cout << "El resto de " << a << " dividido " << b << " es: " << resto(a, b) << std::endl;

    escribir_espaciado(num);

    std::cout << std::endl;
    std::cout << "Ejercicio 01/05\n" << std::endl;
    return 0;
}