#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;

    Lista<int> *List;
    for (int i = 0; i < 15; ++i) {
        List->insertarUltimo(i);
    }

    List->Print();

    fnInvierte(List);

    List->Print();
}