#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include "ArbolBinario.h"
#include "Dato.h"
#include "HashMapConColi.h"
using namespace std;

void Print();
void RW (string archivo);
string wordCheck (string);

ifstream infile;
char fileName [100];
string Line;
string word;

ArbolBinario <Dato> Trie;
ArbolBinario <Dato> TrieConcu;

unsigned int myHashFunc(string k){
    int ret=0;
    for(char a: k){
        ret += a * a;
    }
    return ret;
}
HashMap<string, string> Hashi (100, myHashFunc);

int palabras = -1;
int ocurrencias = -1;
string mostrar = "";
string excluir = "";
string excluirf = "";
string archivoLeer = "";

char *array_point;
char c1;
int alp=0, digt=0, spcchr=0, oth=0, wor=0, lin=0;
char string_array[100];

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        if (argv[i][0] == '-') { // es un comando
            string arg = argv[i];
            if (arg == "-palabras") {
                try {palabras = stoi(argv[i + 1]);
                    i++;
                } catch (...) {palabras = 0;}
            }
            if (arg == "-ocurrencias") {
                try {ocurrencias = stoi(argv[i + 1]);
                    i++;
                } catch (...) {ocurrencias = 0;}
            }
            if(arg == "-mostrar"){
                mostrar = argv[i + 1];
                i++;
            }
            if(arg == "-excluir"){
                excluir = argv[i + 1];
                i++;
            }
            if(arg == "-excluirf"){
                excluirf = argv[i + 1];
                i++;
            }
        } else {
            archivoLeer = argv[i];
        }
    }

    cout << endl;
    cout << "palabras: " << palabras << endl;
    cout << "ocurrencias: " << ocurrencias << endl;
    cout << "mostrar: " << mostrar << endl;
    cout << "excluir: " << excluir << endl;
    cout << "excluirf: " << excluirf << endl;
    cout << "Archivo: " << archivoLeer << endl;

    infile.open(archivoLeer);
    if (!infile.is_open()) {
        cout << endl;
        cout << "---------------------Could not open file - " << archivoLeer << "---------------------" << endl;
        cout << endl;
        return 0;
    } else {
        cout << endl;
        cout << "---------------------File opened succesfully - " << archivoLeer << "---------------------" << endl;
        cout << endl;

        while (getline(infile, Line)) {
            stringstream aux(Line);
            lin++;

            while (getline(aux, word, ' ')) {

                word = wordCheck(word);

                if (!word.empty() | word != "") {
                    Hashi.put(word, word);
                    Trie.put(Dato(word));
                    strcpy(string_array, word.c_str());
                    wor++;
                    for (array_point = string_array; *array_point != '\0'; array_point++) {
                        c1 = *array_point;
                        if (isalpha(c1)) alp++;
                        else if (isdigit(c1)) digt++;
                        else oth++;
                    }
                }
                spcchr++;
            }
            spcchr--;
        }
    }
    infile.close();

    if(excluirf != ""){
        RW(excluirf);
    }

    if(ocurrencias != -1) TrieConcu = Trie.concurrence(TrieConcu);

    Print();
}

void Print() {                              //TODO espacios apenas empieza el renglon
    cout << endl;
    cout <<" The number of characters in the string is: "<<alp+digt+spcchr+oth<<endl;
    cout <<" The number of alphabets are: "<<alp<<endl;
    cout <<" The number of digits are: "<<digt<<endl;
    cout <<" The number of spaces are: "<<spcchr<<endl;
    cout <<" The number of other characters are: "<<oth<<endl;
    cout <<" The number of words are: "<<wor<<endl;
    cout <<" The number of different words are: "<<Trie.postorder_i() - 1<<endl;
    cout <<" The number of lines are: "<<lin<<endl;
    cout << endl;cout << endl;
    if (palabras == 0) Trie.inorder();
    else {
        if(palabras > 0){
            if (excluir != "") {
                if (Hashi.Coli(excluir, excluir)) Trie.inorder(palabras, excluir);
                else Trie.inorder(palabras);
            }
            else {
                Trie.inorder(palabras);
            }
        }

    }
    if(ocurrencias == 0) TrieConcu.inorder();
    else {
        if (ocurrencias > 0){
            if (excluir != "") {
                if (Hashi.Coli(excluir, excluir)) TrieConcu.inorder(ocurrencias, excluir);
                else TrieConcu.inorder(ocurrencias);
            }
            else {
                TrieConcu.inorder(ocurrencias);
            }
        }
    }

    if (mostrar != "") {
        cout << endl;
        cout << "Sus palabras a mostrar son: " << endl<<  Trie.search(mostrar) <<endl;
    }
    cout << endl;cout << endl;
    //Trie.print();
}

void RW (string archi){
    infile.open(archi);
    if (!infile.is_open()) {
        cout << "---------------------Could not open file - " << archi << "---------------------" << endl;
        return;
    } else {
        cout << "---------------------File opened succesfully - " << archi << "---------------------" << endl;
        cout << endl;
        while (getline(infile, Line)) {
            stringstream aux(Line);
            while (getline(aux, word, ' ')) {
                //HashiEx.put(word, word);
                if(Trie.search(word).getword() == word){
                    Trie.remove(word);
                }
                strcpy(string_array, word.c_str());
            }
        }
    }
    infile.close();
}

string wordCheck(string toCheck){
//    char word[toCheck.size()];
    string aux2 = "";

    int i2 = 0;

//    strcpy(word, toCheck.c_str());
    for (int i = 0; toCheck[i] != '\0'; i ++){


//        if (toCheck[i] == (',' | '.' | '!' | '?')){
//            for (i2; i2<i; i2++){
//                aux2 = toCheck[i2];
//
//            }
//            i2 = i+1;
//        }

//        switch (toCheck[i]){
//            case *",":
//                aux2 =
//                aux2 += "á";
//                i2++;
//                break;
//            case 'é':
//                aux2 += "é";
//                i2++;
//                break;
//            case *"´":
//                aux2 += "í";
//                i2++;
//                break;
//            case *"á":
//                break;
//            case *"á":
//                break;
//            case *"á":
//                break;
//        }
//
////        if (toCheck[i] == *"á"){
////
////        } else
////        if (toCheck[i] == *"é"){
////            aux2 += "é";
////            i2++;
////        } else
//        if (toCheck[i] == *"í"){
//            aux2 += "í";
//            i2++;
//        } else
//
//        if (toCheck[i] == *"ó"){
//            aux2 += "ó";
//            i2++;
//        } else
//
//        if (toCheck[i] == *"ú"){
//            aux2 += "ú";
//            i2++;
//        } else
//
//
//        if (toCheck[i] == "ads"){
//            aux2 += "ü";
//            i2++;
//        } else
//
//
        if (isalpha(toCheck[i])){
            aux2 += toCheck[i];
            i2++;
        }

    }
//    for (i2; i2<toCheck.size(); i2++){
//        aux2 = toCheck[i2];
//    }

    return aux2;
}