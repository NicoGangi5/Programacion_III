#include <iostream>

using namespace std;

void funtion(int n){
    if (n % 2 == 0){        //Es par
        n--;
    }
    else{
        n = n - 2;
    }

    if (n > 1){
        std::cout << n << endl;
        funtion(n);
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    funtion(1);
    return 0;
}