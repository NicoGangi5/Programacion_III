//
// Created by Nico Gangi on 07/10/2019.
//

#ifndef EJERCICIO_1_NODO_H
#define EJERCICIO_1_NODO_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T> *siguiente;
public:
    T getDato()  {
        return dato;
    }

    void setDato(T d) {
        dato = d;
    }

    Nodo<T> *getSiguiente()  {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente) {
        this->siguiente = siguiente;
    }

};


#endif //EJERCICIO_1_NODO_H
