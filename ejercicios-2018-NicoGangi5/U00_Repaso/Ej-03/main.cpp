#include <iostream>
#include "Calculadora.h"
#include <stdlib.h>

using namespace std;

int main() {
    Calculadora<int, float> miCalc;

    cout << miCalc.divi(10, 0) << endl;
    cout << "Ejercicio 00/03\n" << endl;
    return 0;
}