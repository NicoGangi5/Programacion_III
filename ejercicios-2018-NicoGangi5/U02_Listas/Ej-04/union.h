#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<int> *Unida;
    Unida = new Lista<int>();

    for (int i = 0; i < lisA.getTamanio(); ++i) {
       Unida->insertarUltimo(lisA.getDato(i));
    }
    for (int i = 0; i < lisB.getTamanio(); ++i) {
        Unida->insertarUltimo(lisB.getDato(i));
    }

    return Unida;
}


#endif //UNION_H
