#include <iostream>
#include "time.h"

int menor(int[], int len);

int main() {
    std::cout << "Hello, World!" << std::endl;

    int datos [15];
    int chico = 0;
    srand(time(0));

    for (int i = 0; i < 15; ++i) {
        datos[i] = rand() % 100;
        std::cout << datos[i] << " ";
    }

    chico = menor(datos, 15);
    std::cout << std::endl;
    std::cout << chico;

    return 0;
}


int menor(int dat[], int len){
    if(len == 0)
        return dat[len];
    if(len == 1) {
        if (dat[len] < dat[len - 1])
            return dat[len];
        else
            return dat[len - 1];
    }
    else
        menor(dat, len - 1);
}