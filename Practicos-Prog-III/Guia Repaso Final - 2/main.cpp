#include <iostream>
#include "Lista.h"

int Dec_Bin(unsigned int Dato);


int main() {
    std::cout << "Guia Repaso Final - Ejercicio Nº2" << std::endl;

    Lista<int> List_Dec;
    Lista<int> List_Bin;
    int q = 0;

    std::cout << "Cuantos números desea ingresar? " << std::endl;
    std::cin >> q;

    for (int i = 0; i < q; ++i) {
        int num = 0;
        std::cout << "Ingrese su número: ";
        std::cin >> num;
        List_Dec.insertarUltimo(num);
    }

    std::cout << "Lista en decimal: ";
    for (int l = 0; l < List_Dec.getTamanio(); ++l) {
        std::cout << List_Dec.getDato(l) << " ";
    }
    std::cout << std::endl;

    for (int j = 0; j < List_Dec.getTamanio(); ++j) {
        List_Bin.insertarUltimo(Dec_Bin(List_Dec.getDato(j)));
    }

    std::cout << "Lista en binario: ";
    for (int k = 0; k < List_Bin.getTamanio(); ++k) {
        std::cout << List_Bin.getDato(k) << " ";
    }

    return 0;
}



int Dec_Bin(unsigned int Dato) {

    if (Dato  < 2){
        return Dato;
    }
    else{
        return Dec_Bin(Dato/2) * 10 + Dato%2;
    }
}