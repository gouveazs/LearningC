#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros; //vector é como uma fila
    
    //diferente de arrays, vector nao possui tamanho fixo.

    vector<int> v = {1, 2 ,3}; //inicializa com valores
    vector<int> y(5); //com tamanho fixo inicial

    cout << v[1] << endl;    //acesso direto mas perigoso
    cout << v.at(1) << endl; //lança erro caso posição nao existir

    numeros.push_back(1); //[1]
    numeros.push_back(2); //[1, 2]
    numeros.push_back(3); //[1, 2, 3]

    v.insert(v.begin() + 1, 99); //insere em posição especifica

    cout << numeros[0]; // saida: 1

    cout << numeros.size(); //tamanho do vector

    numeros.pop_back(); //remove ultimo elemento adicionado
    v.erase(v.begin() + 1); // remove posição especifica
    v.clear(); //limpa tudo

    //percorrer vector por range-based 
    for(int x : v) {
        cout << x << endl;
    }

    //com referência
    for (int &x : v) {
        x *=2; // altera o original
    }

    //vetor de vetores (matriz)
    vector<vector<int>> matriz = {
        {1, 2},
        {3, 4}
    };

    vector<int> inteiros;
    inteiros.reserve(100); //deixa reservado 100 espaços na memoria

    return 0;
}

void exercicio1() {
    vector<int> numeros;
    int num;

    for(int x; x < 5; x++) {
        cout << "Digite um número: " << endl;
        cin >> num;
        numeros.push_back(num);
    }

    for (int x : numeros) {
        cout << x << endl;
    }
}