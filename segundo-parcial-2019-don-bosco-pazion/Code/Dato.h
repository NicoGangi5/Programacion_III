//
// Created by Nico Gangi on 04/11/2019.
//

#ifndef CODE_DATO_H
#define CODE_DATO_H

#include <ostream>

using namespace std;

class Dato {
    // Access specifier
public:
    // Data Members
    string word;
    int ocurrencia;

    Dato(const string &word) : word(word) {
        ocurrencia=1;
    }

    // Member Functions()
    void print(){
        cout << "word is: " << word << endl;
        cout << "ocurrencia is: " << ocurrencia << endl;
    }

    string getword(){
        return word;
    }
    int getocurrencia(){
        return ocurrencia;
    }

    bool operator==(const Dato &rhs) const {
        return word == rhs.word;
    }

    bool operator<(const Dato &rhs) const {
        return word < rhs.word;
    }

    bool operator>(const Dato &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Dato &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Dato &rhs) const {
        return !(*this < rhs);
    }

    Dato& operator++(){ // ++i
        ocurrencia++;
        return *this;
    }

    Dato operator++(int){ // i++
        Dato temp = *this;
        ++*this;
        return temp;
    }

    friend ostream &operator<<(ostream &os, const Dato &dato) {
        os << dato.ocurrencia << " " << dato.word;
        return os;
    }
};

#endif //CODE_DATO_H
