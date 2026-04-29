#include <iostream>
#include <string>
using namespace std;

double media(double soma) {
    return soma / 3;
}

int main() {
    string nome;
    double soma = 0;
    double mediaAluno;
    double notas[3];
    string situacao;

    cout << "Digite o nome completo do aluno: " << endl;
    getline(cin, nome);

    cout << "Digite a primeira nota do aluno: " << endl;
    cin >> notas[0];

    cout << "Digite a segunda nota do aluno: " << endl;
    cin >> notas[1];

    cout << "Digite a terceira nota do aluno: " << endl;
    cin >> notas[2];

    for (int i = 0; i < 3; i++) {
        soma += notas[i];
    }

    mediaAluno = media(soma);

    if (mediaAluno >= 7) {
        situacao = "Aprovado";
    } else {
        situacao = "Reprovado";
    }

    cout << "Aluno: " << nome << endl;
    cout << "Média: " << mediaAluno << endl;
    cout << "Situação: " << situacao << endl;
}