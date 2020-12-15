#include <iostream>
#include "Lista.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Lista<int> List;

    for (int i = 0; i < 15; ++i) {
        List.insertarUltimo(i);
    }
    List.Print();

    List.moverUlti(5);
    List.Print();

    return 0;
}