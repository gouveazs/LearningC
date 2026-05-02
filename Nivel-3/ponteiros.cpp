#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    int* p = &numero;

    int notas[2] = {8, 9};
    //é a mesma coisa que 
    int* notas;
    //arrays sao ponteiros disfarçados

    int* p2 = notas;
    p2 + 1;

    cout << p << endl;  //endereço da memoria
    cout << *p << endl; // valor que esta nesse endereço

    return 0;
}