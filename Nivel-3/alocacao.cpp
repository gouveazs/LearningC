#include <iostream>
using namespace std;

void dobrar(int* x) {
    *x = *x * 2;
}

int main() {
    int* p = new int; //cria um espaço na memoria
    *p = 10; // usa esse espaço na memoria
    delete p; // deleta ele e libera espaço

    int tamanho;
    cout << "Quantas notas? " << endl;
    cin >> tamanho;

    int * notas = new int[tamanho];

    for(int i = 0; i < tamanho; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];
    }

    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    cout << "Média: " << (float)soma / tamanho << endl;

    delete[] notas;

    int numero = 10;

    dobrar(&numero);
    cout << numero;

    return 0;
}