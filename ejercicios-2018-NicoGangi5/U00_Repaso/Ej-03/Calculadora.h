#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H


#include <iostream>

template<class T, class P>
class Calculadora {
public:
    P divi(T a, T b);
};


template<class T, class P>
P Calculadora<T, P>::divi(T a, T b) {
    try{
        if (b == 0){
            throw 1;
        }
        else{
            return (P)a / b;
        }
    }
    catch(int)
    {
        std::cout << "Pusiste cero en el divisor culiau" << std::endl;
    }
    std::cin.get();
}



#endif //REPASO_CALCULADORA_H
