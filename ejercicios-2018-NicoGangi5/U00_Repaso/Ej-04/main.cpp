#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int min = 0;
    int seg = 0;
    int hr = 0;

    cout << "Ingrese un número de segundos (entero): ";
    cin >> num;

    min = (num / 60);
    hr = min / 60;
    min = (num / 60) - (hr * 60);
    seg = num - (min * 60) - (hr * 60 * 60);

    cout << num << " segundos equivalen a: "<< hr <<" horas " << min << " minutos " << seg << " segundos "<< endl;
    cout << "Ejercicio 00/04\n" << endl;
    return 0;
}