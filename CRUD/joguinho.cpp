#include <iostream>
#include <vector>
#include <string>
using namespace std;

void verCena() {
    cout << "A vitima foi encontrada em um beco escuro por volta das 22h." << endl;
}

void verPistas(vector<string> pistas) {
    cout << pistas.at(1) << endl;
    cout << pistas.at(2) << endl;
}

void ouvirSuspeitos(vector<string> suspeitos, vector<string> roupas, vector<string> alibes) {
    int escolha = -1;

    while(escolha != 0) {
        cout << "SALA DE INTERROGATÓRIO" << endl;
        cout << "1 - Paulão" << endl;
        cout << "2 - Maria" << endl;
        cout << "3 - Jonas" << endl;
        cout << "0 - Voltar" << endl;

        cout << "Quando suspeito você quer interrogar: " << endl;
        cin >> escolha;

        if(escolha == 1) {
            cout << "Suspeito: " << suspeitos.at(0) << endl;
            cout << "Roupa: " << roupas.at(0) << endl;
            cout << "alibe: " << alibes.at(0) << endl;
        } else if(escolha == 2) {
            cout << "Suspeito: " << suspeitos.at(1) << endl;
            cout << "Roupa: " << roupas.at(1) << endl;
            cout << "alibe: " << alibes.at(1) << endl;
        } else if (escolha == 3) {
            cout << "Suspeito: " << suspeitos.at(2) << endl;
            cout << "Roupa: " << roupas.at(2) << endl;
            cout << "alibe: " << alibes.at(2) << endl;
        }
    }
}

void acusarSuspeito(int assasino) {
    int escolha;

    cout << "SALA DE ACUSAÇÃO" << endl;
    cout << "1 - Paulão" << endl;
    cout << "2 - Maria" << endl;
    cout << "3 - Jonas" << endl;
    cout << "0 - Voltar" << endl;
    
    cout << "Quem é o assasino: " << endl;
    cin >> escolha;

    if(escolha == assasino) {
        cout << "Parabens!" << endl;
        cout << "Voce resolveu o caso." << endl;
        cout << "O culpado foi preso." << endl; 
    } else {
        cout << "Game Over!" << endl;
        cout << "Voce acusou uma pessoa inocente." << endl;
        cout << "O culpado não foi preso." << endl; 
    }
}

int main() {
    vector<string> suspeitos = {"Paulão", "Maria", "Jonas"};
    vector<string> roupas = {"Roupa azul", "Casaco Vermelho", "Boné vermelho e blusa roxa"};
    vector<string> alibes = {"Disse que estava em casa", "Disse que estava trabalhando", "Disse que estava passeando perto do local"};
    vector<string> pistas = {"O culpado nao estava trabalhando no momento do crime.", "O culpado foi visto usando roupa vermelha."};
    int assasino = 2;

    int escolha = -1;

    while(escolha != 0) {
        cout << "DELEGACIA DE MOCOCA" << endl;
        cout << "Um crime aconteceu na cidade..." << endl;
        cout << "Voce precisa descobrir quem é o culpado." << endl;

        cout << "1 - Ver cena do crime" << endl;
        cout << "2 - Ouvir suspeitos" << endl;
        cout << "3 - Ver pistas" << endl;
        cout << "4 - Acusar um suspeito" << endl;
        cout << "0 - Desistir do caso" << endl;

        cout << "Por favor, escolha uma opção: " << endl;
        cin >> escolha;

        if(escolha == 1) {
            verCena();
        } else if(escolha == 2) {
            ouvirSuspeitos(suspeitos, roupas, alibes);
        } else if (escolha == 3) {
            verPistas(pistas);
        } else if (escolha == 4) {
            acusarSuspeito(assasino);
        }
    }

    return 0;
}