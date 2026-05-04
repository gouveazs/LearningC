#include <iostream>
#include <vector>
#include <string>
using namespace std;

void cadastrarPessoa(vector<string>& nomes, vector<int>& idades) {
    string nome;
    int idade;

    cout << "Digite o nome da pessoa: " << endl;
    cin.ignore();
    getline(cin, nome);

    cout << "Digite a idade de " << nome << ": " << endl;
    cin >> idade;

    nomes.push_back(nome);
    idades.push_back(idade);

    cout << nome << " foi cadastrado!" << endl;
}

void listarPessoas(vector<string>& nomes) {
    for(string x : nomes) {
        cout << x << endl;
    }
}

void buscarPessoa(vector<string>& nomes, vector<int>& idades) {
    string busca;

    cout << "Digite o nome de quem quer buscar: " << endl;
    cin.ignore();
    getline(cin, busca);

    for (int i = 0; i < nomes.size(); i++) {
        if (busca == nomes[i]) {
            cout << "Nome: " << nomes[i] << endl;
            cout << "Idade: " << idades[i] << endl;
            return;
        }
    }

    cout << "Pessoa não encontrada." << endl;
}

int main() {
    int escolha = -1;
    vector<string> nomes;
    vector<int> idades;

    while (escolha != 0) {
        cout << "Bem vindo ao sistema!" << endl;

        cout << "1 - Cadastrar pessoa" << endl;
        cout << "2 - Listar pessoas" << endl;
        cout << "3 - Buscar pessoa" << endl;
        cout << "0 - Sair" << endl;

        cout << "Por favor, escolha uma opção: " << endl;
        cin >> escolha;

        if(escolha == 1) {
            cadastrarPessoa(nomes, idades);
        } else if(escolha == 2) {
            listarPessoas(nomes);
        } else if (escolha == 3) {
            buscarPessoa(nomes, idades);
        }
    }
    return 0;
}