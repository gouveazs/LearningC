#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 0;

    while (i < 5) { //simples 
        cout << i << endl;
        i++;
    }

    for (int j = 0; j < 5; j++) { //compacto
        cout << j << endl;
    }

    string nome;
    int idade;
    int decisao = 1;

    while (decisao == 1) {
        cout << "Qual seu nome? ";
        cin >> nome;

        cout << "Qual sua idade? ";
        cin >> idade;

        cout << "Deseja repetir? (1 = sim / 0 = nao) ";
        cin >> decisao;
    }

    cout << "Programa finalizado." << endl;

    return 0;
}