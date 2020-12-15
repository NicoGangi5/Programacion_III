#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;

    int flag = 1;

    float num = 0.0;
    char where = '0';
    int pos = 0;
    Lista<float> *lista;
    lista = new Lista<float>();

    while (flag == 1){
        std::cout << "Ingrese el número a la lista: " << std::endl;
        std::cin >> num;

        std::cout << "¿Donde quiere ingresarlo? (First 'F', Last 'L', Posición X 'X' " << std::endl;
        std::cin >> where;

        if (where == 'F'){
            lista->insertarPrimero(num);
        }
        if (where == 'L'){
            lista->insertarUltimo(num);
        }
        if (where == 'X'){
            std::cout << "¿En que posición?" << std::endl;
            std::cin >> pos;

            lista->insertar(pos + 1, num);
        }

        for (int i = 0; i < lista->getTamanio(); ++i) {
            std::cout << " " << lista->getDato(i);
        }

        std::cout << std::endl;
        std::cout << "¿Desea ingresar otro dato? Si '1', No '0' " << std::endl;
        std::cin >> flag;
    }
    return 0;
}