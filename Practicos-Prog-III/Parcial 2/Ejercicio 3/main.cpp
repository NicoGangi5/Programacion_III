#include <iostream>
#include "Lista.h"

int Suma (Lista<int> *Asumar, int n);
int umbral = 0;
int resultado = 0;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Lista<int> *List;
    for (int i = 0; i < 20; ++i) {
        List->insertarUltimo(i);
    }
    List->Print();

    std::cout << "Cual será el umbral?" << std::endl;
    std::cin >> umbral;
    resultado = Suma(List, umbral);
    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}


int Suma(Lista<int> *Asumar, int n) {
    int result = 0;
    for (int i = 0; i < Asumar->getTamanio() ; ++i) {
        if(Asumar->getDato(i) > n)   result = result + Asumar->getDato(i);
    }
    return result;
}