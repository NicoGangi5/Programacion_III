//
// Created by Nico Gangi on 08/09/2019.
//
#include "Torres.h"

void Resultado (int n, char From, char To, char Aux){
    if(n == 1){
        std::cout << "Mover pieza " << n << " desde poste " << From << " hacia poste " << To << std::endl;
        return;
    }
    Resultado(n-1, From, Aux, To);
    std::cout << "Mover pieza " << n << " desde poste " << From << " hacia poste " << To << std::endl;
    Resultado(n-1, Aux, To, From);
}
