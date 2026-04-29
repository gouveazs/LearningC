#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    string nome2;
    
    //o problema aqui é que nao pega nome composto por exemplo
    //entrada = João Silva
    //saida = João
    //cout << "Digite seu nome: ";
    //cin >> nome;
    //cout << nome << endl;

    //aqui ele lê a linha inteira
    cout << "Digite seu nome: ";
    getline(cin, nome2);
    cout << nome2 << endl;

    return 0;
}