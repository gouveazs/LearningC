#include <iostream>
using namespace std;

int somar(int* numeros, int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma;
}

int main() {
    int tamanho;

    cout << "quantos números vc quer? " << endl;
    cin >> tamanho;

    int* numeros = new int[tamanho];

    for ( int i = 0; i < tamanho; i++) {
        cout << "Número " << i+1 << ": " << endl;
        cin >> numeros[i];
    }

    int resultado = somar(numeros, tamanho);

    cout << "Soma : " << resultado << endl;

    delete[] numeros;

    return 0;
}