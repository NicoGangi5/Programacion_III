#include <iostream>
#include "priorityQueue.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    priorityQueue<int> bvo;

    bvo.enqueue(2, 3);
    bvo.enqueue(5, 6);
    bvo.enqueue(7, 2);
    bvo.enqueue(5, 1);
    bvo.enqueue(6, 1);

    for (int i = 0; i < 5; ++i) {
        std::cout << " " << bvo.dequeue() << endl;
    }

    return 0;
}