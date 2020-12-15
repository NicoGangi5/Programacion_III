//
// Created by Nico Gangi on 07/10/2019.
//

#ifndef EJERCICIO_1_COLA_H
#define EJERCICIO_1_COLA_H

#include "cmake-build-debug/nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {
private:
    Nodo<T> *frente, *fondo;

public:
    Cola();

    ~Cola();

    void encolar(T dato);

    void encolar_priority(T dato, int priority);

    T desencolar();

    bool esVacia();

    T peek();

    void insert(T dato, unsigned int p);
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
    frente = nullptr;
    fondo = nullptr;
}

// live.marku.me
/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {

}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {

    auto *nuevo = new Nodo<T>();
    nuevo->setDato(dato);
    nuevo->setSiguiente(nullptr);

    if (fondo == nullptr) {
        frente = nuevo;
    } else {
        fondo->setSiguiente(nuevo);
    }

    fondo = nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
    T aux;
    Nodo<T> *aBorrar;

    if (frente == nullptr)
        throw 404;

    aux = frente->getDato();

    aBorrar = frente;
    frente = frente->getSiguiente();

    if (frente == nullptr) {
        fondo = nullptr;
    }

    delete aBorrar;

    return aux;
}

void encolar_priority(T dato, int priority){
    int prio [10];

}


/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
    return frente == nullptr;
}

template<class T>
T Cola<T>::peek() {
    if (frente == nullptr)
        throw 404;

    return frente->getDato();
}

template<class T>
void Cola<T>::insert(T dato, unsigned int p){
    int posActual = 0;
    Nodo<T> *aux = frente, *New;

    if (p == 0) {
        New = new Nodo<T>;
        New->setDato(dato);
        New->setSiguiente(frente);
        frente = New;
        return;
    }

    for (int i = 0; i < p; ++i) {
        if(New->getSiguiente() == nullptr){
            throw 404;
        }

    }

}

#endif //EJERCICIO_1_COLA_H
