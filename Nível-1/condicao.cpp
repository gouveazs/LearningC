#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    bool condicao1;
    bool condicao2;

    cout << "Qual seu nome? ";
    cin >> nome;

    cout << "Qual sua idade? ";
    cin >> idade;

    if (idade >= 18) { //se ... senao e bla bla bla
        cout << nome << " tem " << idade << " anos.";
        cout << "Você é maior de idade" << endl;
    } else {
        cout << nome << " tem " << idade << " anos.";
        cout << "Você é não é maior de idade" << endl;
    }

    //operadores de comparação

        // ==  igual
        // !=  diferente
        // >   maior
        // <   menor
        // >=  maior ou igual
        // <=  menor ou igual

    //operadores logicos

        if (condicao1 && condicao2) {
            cout << "&& significa 'e', ou seja, precisa as duas condiçoes acontecerem" << endl;
        }

        if (condicao1 || condicao2) {
            cout << "|| significa 'ou', ou seja, precisa uma ou a outra condiçao acontecer" << endl;
        }

        if (!condicao1) {
            cout << "! significa 'e', ou seja, a condição nao pode acontecer" << endl;
        }
    
    return 0;
}