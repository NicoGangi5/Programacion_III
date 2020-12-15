#include <iostream>
#include "Pila.h"


char word [100];
char aux[20];
int cont = 0;
Pila<char> Stack;
Pila<char> Stack_2;

int main() {
    std::cout << "Hello, World!" << std::endl;


    std::cout << "Ingrese su frase: ";
    std::cin.getline(word, 100);

    for (int i = 0; word[i] != '\0' ; ++i){
        Stack.push(word[i]);
    }

    while (!Stack.esVacia()){
        if (Stack.peek() != ' '){
            Stack_2.push(Stack.pop());
        }
        else{
            while (!Stack_2.esVacia()) std::cout << Stack_2.pop();
            std::cout << " ";
            Stack.pop();

        }
    }
    for (int i = 0; aux[i] != '\0'; ++i) Stack_2.push(aux[i]);
    while (!Stack_2.esVacia()) std::cout << Stack_2.pop();
    std::cout << " ";

    return 0;
}