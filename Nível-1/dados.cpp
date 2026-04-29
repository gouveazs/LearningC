#include <iostream>
#include <string>
using namespace std; //evita conflito com coisas do mesmo nome e facilita os ngc
// com essa biblioteca nao precisa escrever std::cout por exemplo no arquivo ola.cpp

void nome() { //void é uma função que nao retorna nada
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    cin >> nome; //atribue oq foi digitado para essa variavel

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << nome << ", você tem " << idade << " anos.";
}

int main() {
    // int idade;

    // cout << "Digite sua idade: ";
    // cin >> idade;

    // cout << "Você tem " << idade << " anos." << endl;

    nome();
    return 0;
}
