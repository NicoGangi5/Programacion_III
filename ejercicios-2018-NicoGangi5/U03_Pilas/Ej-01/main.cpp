#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/01\n" << std::endl;

    char chengue [100];
    Pila<char> Stack;

    std::cout << "Introduzca su palabra: " << std::endl;
    std::cin >> chengue;

    for (int i = 0; chengue[i] != '\0'; ++i) {
        Stack.push(chengue[i]);
    }

    while (!Stack.esVacia()){
        std::cout << Stack.pop();
    }

    return 0;
}