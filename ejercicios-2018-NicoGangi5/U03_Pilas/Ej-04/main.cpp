#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/04\n" << std::endl;

    char Form[100];
    Pila<char> Formula;
    int aux = 0;

    std::cout << "Ingrese la fórmula matemática: " << std::endl;
    std::cin >> Form;


    for (int i = 0; Form[i] != '\0' ; ++i) {
        switch (Form[i]) {
            case '(':
                Formula.push('(');
                break;
            case ')':
                if (Formula.peek() == '(')  Formula.pop();
                else throw 404;
                break;

            case '[':
                Formula.push('[');
                break;
            case ']':
                if (Formula.peek() == '[')  Formula.pop();
                else throw 404;
                break;

            case '{':
                Formula.push('{');
                break;
            case '}':
                if (Formula.peek() == '{')  Formula.pop();
                else throw 404;
                break;
        }
    }
    if (Formula.esVacia())  std::cout << "Su fórmula es correcta" << std::endl;
    else    std::cout << "Su fórmula es incorrecta" << std::endl;

    return 0;
}