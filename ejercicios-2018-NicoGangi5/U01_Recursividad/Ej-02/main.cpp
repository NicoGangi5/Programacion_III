#include <iostream>
#include "sumatoria.h"

using namespace std;

int Datos [5] = { 4, 5, 3, 7, 1};       //Sumatoria = 20


int main() {
    std::cout << "El valor total es: " << sumatoria(Datos, 5) << std::endl;
    std::cout << "Ejercicio 01/02\n" << std::endl;
    return 0;
}