#include <iostream>
#include <stdlib.h>
#include "../Arbol/ArbolBinario.h"


using namespace std;

ArbolBinario<int> Three;
int nums [30];

int main() {
    std::cout << "Ejercicio 05/01\n" << std::endl;

    for (int i = 0; i < 30; ++i) {
        nums [i] = rand() % 500 + 100;
        Three.put(nums[i]);
    }
    for (int j = 0; j < 30; ++j) {
        std::cout << nums [j] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    Three.print();


    return 0;
}