#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {1, 2, 3, 4, 5}; //estou criando um espaço na memoria para armazenar 5 numeros inteiros
    
    cout << numeros[0] << endl; //primeiro posição da array = 1
    cout << numeros[4] << endl; //quarta posição da array = 4

    //exemplo de loop com array
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << endl;
        // enquanto i for menor que 5, i acrescenta mais um
        // entao como i começa no 0 ele vai imprimir toda a array
    }

    return 0;
}