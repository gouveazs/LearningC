#include <iostream>
using namespace std;

//um contrutor e uma função que roda quando o objeto nasce
class Pessoa {
    public:
        string nome;

    Pessoa(string n) {
        nome = n;
    }
};

int main() {
    //sem um construtor teriamos que lembrar de setar a variavel
    //em outras palavras contrutor é uma configuração inicial obrigatória
    Pessoa p("João");
    cout << p.nome;
    
    return 0;
}