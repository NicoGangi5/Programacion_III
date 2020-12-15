#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;

    char word_1[100];
    char word_2[100];
    Pila<char> cachengue_1;
    Pila<char> cachengue_2;
    char aux_1 = 0;
    char aux_2 = 0;

    std::cout << "Introduzca una palabra (Máx.: 100): " << std::endl;
    std::cin >> word_1;
    std::cout << "Introduzca otra palabra (Máx.: 100): " << std::endl;
    std::cin >> word_2;

    for (int i = 0; word_1[i] != '\0' ; ++i) {
        cachengue_1.push(word_1[i]);
    }
    for (int i = 0; word_2[i] != '\0' ; ++i) {
        cachengue_2.push(word_2[i]);
    }

    while (!cachengue_1.esVacia() && !cachengue_1.esVacia()){
        aux_1 = cachengue_1.pop();
        aux_2 = cachengue_2.pop();
        if (aux_1 != aux_2){
            std::cout << "No son iguales" << std::endl;
            return 0;
        }
    }
    std::cout << "Son iguales" << std::endl;

    return 0;
}