#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 12;

    cout << a + b << endl; //soma
    cout << a - b << endl; //subtração
    cout << a * b << endl; //multiplicação
    cout << a / b << endl; //divisao
    cout << a % b << endl; //resto da divisao

    //cuidado!!!!
    int divisao1 = 10 / 3;
    //isso aqui é diferente disso aqui
    double divisao2 = 10.0 / 3;

    int numero;

    cout << "DIgite um número: ";
    cin >> numero;

    int resto = numero % 2;

    if (resto == 0) {
        cout << "Par" << endl;
    } else {
        cout << "Impar" << endl;
    }

    return 0;
}