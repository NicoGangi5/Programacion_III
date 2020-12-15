#include <iostream>
#include "Lista.h"


int main() {
    std::cout << "Programación III - Ejercicio 4" << std::endl;

    Lista<int> list;

    for (int i = 0; i < 15; ++i) {
        list.insertarUltimo(i);
    }
    list.print();

    list.aSegundo();
    list.print();

    return 0;
}