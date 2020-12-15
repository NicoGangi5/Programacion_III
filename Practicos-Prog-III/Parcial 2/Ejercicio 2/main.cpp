/*
 * El programa es iterativo, no recursivo --- Función Find ---
 * Se basa en pasarle como parámetro un array de enteros, su inicio de busqueda, su fin de busqueda, el número a buscar, una posición y un retorno
 * El algoritmo busca el valor X en el array y retorna un TRUE si lo encuentra o FALSE  si no.
 */


#include <iostream>

bool fn (int x, int v[], int ini, int fin);

int array[10];
int bus, in, fin;
bool esta = true;

int main() {
    std::cout << "Hello, World!" << std::endl;

    for (int i = 0; i < 10; ++i) {
        array[i] = i;
    }
    for (int j = 0; j < 10; ++j) {
        std::cout << array[j] << " ";
    }
    std::cout << std::endl;

    std::cout << "Que número quiere buscar? ";
    std::cin >> bus;
    std::cout << "Desde: ";
    std::cin >> in;
    std::cout << "Hasta: ";
    std::cin >> fin;

    esta = fn(bus, array, in, fin);
    if (esta == true)   std::cout << "Está" << std::endl;
    else    std::cout << "No está" << std::endl;

    return 0;
}

bool fn(int x, int *v, int ini, int fin) {
    if (ini == fin){
        if (v[ini] == x) return true;
        else return false;
    }
    if (v[ini] == x) return true;
    else return fn(x, v, ini + 1, fin);
}