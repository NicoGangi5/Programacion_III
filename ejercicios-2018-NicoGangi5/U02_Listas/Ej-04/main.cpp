#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;

    Lista<int> *lista_1;
    lista_1 = new Lista<int>();
    Lista<int> *lista_2;
    lista_2 = new Lista<int>();
    Lista<int> *ListaBVO;
    ListaBVO = new Lista<int>();


    for (int i = 0; i < 10; ++i) {
        lista_1->insertarUltimo(i);
        lista_2->insertarUltimo(i + 100);
    }


    for (int j = 0; j < lista_1->getTamanio(); ++j) {
        std::cout << " " << lista_1->getDato(j);
    }
    std::cout << std::endl;
    for (int k = 0; k < lista_2->getTamanio(); ++k) {
        std::cout << " " << lista_2->getDato(k);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    ListaBVO = unir(*lista_1, *lista_2);
    for (int k = 0; k < ListaBVO->getTamanio(); ++k) {
        std::cout << " " << ListaBVO->getDato(k);
    }

    return 0;
}