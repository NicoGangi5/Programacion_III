#include <iostream>
#include "Lista.h"

int result = 0;
int num = 0;

int main() {
    std::cout << "Programación III - Ejercicio 2" << std::endl;

    Lista<int> list;

    for (int i = 0; i < 15; ++i) {
        list.insertarUltimo(i);
    }
    list.print();


    std::cout << "Cual es su umbral? ";
    std::cin >> num;

    result = list.sumatoria(num);
    std::cout << "Su resultado es: " << result << std::endl;

    return 0;
}