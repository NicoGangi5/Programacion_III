//
// Created by Nico Gangi on 03/10/2019.
//

#ifndef GUIA_REPASO_FINAL___2_NODO_H
#define GUIA_REPASO_FINAL___2_NODO_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T> *siguiente;
public:
    T getDato()  {
        return dato;
    }

    void setDato(T dato) {
        this->dato = dato;
    }

    Nodo<T> *getSiguiente()  {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente) {
        this->siguiente = siguiente;
    }

};

#endif //GUIA_REPASO_FINAL___2_NODO_H
