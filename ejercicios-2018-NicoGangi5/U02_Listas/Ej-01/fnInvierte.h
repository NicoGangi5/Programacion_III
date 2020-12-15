#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis){
    int aux = 0;

    for (int i = 0; i < lis->getTamanio(); ++i) {
        aux = lis->getDato(lis->getTamanio()-1);
        lis->insertar(i, aux);
        lis->remover(lis->getTamanio()-1);
    }
}

#endif //FNINVIERTE_H
