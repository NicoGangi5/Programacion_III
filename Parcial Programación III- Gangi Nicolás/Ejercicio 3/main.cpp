#include <iostream>
#include "Lista.h"

int result = 0;

int main() {
    std::cout << "Programación III - Ejercicio 3" << std::endl;

    Lista<int> list;

    for (int i = 0; i < 15; ++i) {
        list.insertarUltimo(i);
    }
    list.print();

    result = list.antePenultimo();
    std::cout << "El antepeúltimo valor es: " << result << std::endl;

    return 0;
}