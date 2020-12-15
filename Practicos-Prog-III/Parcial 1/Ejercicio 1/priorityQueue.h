//
// Created by Nico Gangi on 09/10/2019.
//

#ifndef EJERCICIO_1_PRIORITYQUEUE_H
#define EJERCICIO_1_PRIORITYQUEUE_H

#include "Cola.h"

class priorityQueue {
    Cola<int> colas[10];
    priorityQueue();
    void enqueue(int d, int priority){
        colas[priority].encolar(d);
    }
    int dequeue(){
        for (int i = 0; i < 10; ++i) {
            if(!colas[i].esVacia())
                return colas[i].desencolar();

        }
        throw 404;
    }
};


#endif //EJERCICIO_1_PRIORITYQUEUE_H
