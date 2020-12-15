#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;

    int flag = 1;



    while(flag == 1){
        int pos = 0;
        std::cout << "Ingrese el número que desea eliminar: " << std::endl;
        std::cin >> pos;

        Lista<int> *lista;
        lista = new Lista<int>();
        for(int i = 15; i < 25; i++){
            lista->insertarUltimo(i);
        }

        if (pos > lista->getTamanio()){
            std::cout << "Número incorrecto" << std::endl;
        }
        else{
            lista->remover(pos-1);
            for (int i = 0; i < lista->getTamanio(); i++) {
                std::cout << " " << lista->getDato(i);
            }
            flag = 0;
        }
    }
}