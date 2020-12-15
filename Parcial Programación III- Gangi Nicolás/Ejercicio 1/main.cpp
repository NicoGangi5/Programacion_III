#include <iostream>
#include "Pila.h"

void remover(Pila<int> p, int num);
int n = 0;

int main() {
    std::cout << "Programación III - Ejercicio 1" << std::endl;

    Pila<int> Stack;

    std::cout << "FIN -- ";
    for (int i = 0; i < 15; ++i) {
        Stack.push(i);
        std::cout << i << " -- ";
    }
    std::cout << "TOPE" << std::endl;

    std::cout << "Que número quiere sacar?" << std::endl;
    std::cin >> n;

    remover(Stack, n);

    return 0;
}


void remover(Pila<int> p, int num) {
    Pila<int> aux;
    while (p.peek() != num){
        aux.push(p.pop());
        if (p.esVacia()) {
            std::cout << "Su número no está" << std::endl;
            return;
        }
    }
    p.pop();
    while (!aux.esVacia()){
        p.push(aux.pop());
    }

    std::cout << "TOPE -- ";
    while (!p.esVacia())    std::cout << p.pop() << " -- ";
    std::cout << "FIN" << std::endl;
}