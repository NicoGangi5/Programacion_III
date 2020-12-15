#include <iostream>
#include "Torres.cpp"

using namespace std;

int main() {
    std::cout << "TORRES DE HANOI" << std::endl;
    int n = 3;
    char From = 'A';
    char To = 'C';
    char Aux = 'B';

    Resultado(n, From, To, Aux);

    return 0;
}