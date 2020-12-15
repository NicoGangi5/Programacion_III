#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;

    char chengue [100];
    Pila<char> Stack;
    Cola<char> Queue;
    bool flag = false;

    std::cout << "Intrese su palabra paligrialskdjaskld: " << std::endl;
    std::cin >> chengue;

    for (int i = 0; chengue[i] != '\0'; ++i) {
        if(chengue[i] != ' ' && chengue[i] != '.'){
            Stack.push(chengue[i]);
            Queue.encolar(chengue[i]);
        }
    }

    while (!Stack.esVacia() && !Queue.esVacia() && flag == false){
        if (Stack.pop() == Queue.desencolar())      flag = false;
        else                                        flag = true;
    }

    if (!flag)          std::cout << "Su palabra es palindjlksajdas"<< std::endl;
    else                    std::cout << "Su palabra NO es palindjlksajdas"<< std::endl;
}