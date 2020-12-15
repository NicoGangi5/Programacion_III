#include <iostream>

void cambie(char word[], int i);


char palabra [1000];
int cont = 0;

int main() {
    std::cout << "Guia de repaso - 7" << std::endl;

    std::cout << "Ingrese su palabra: ";
    std::cin >> palabra;

    cambie(palabra, 0);

    std::cout << palabra;

    return 0;
}


void cambie(char word[], int i) {
    if (word[i] == '\0') return;
    else{
        if (word[i] == 'a')     word[i] = 'e';
        cambie(word, i=i+1);
    }
}
