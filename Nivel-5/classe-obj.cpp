#include <iostream>
using namespace std;

//classe é como uma planta de uma casa
//ela define os dados que existem e as ações feitas
class Carro {
    public:
        //dados
        string cor;
        int velocidade;

        //ações
        void acelerar() {
            velocidade += 10;
        }
};

int main() {
    // objeto é uma coisa criada a partir de uma classe
    //aqui eu chamo a classe Carro e dou o nome do meu objeto
    Carro corcel97;

    //atribuo os dados da classe pro meu objeto
    corcel97.cor = "Vermelho";
    corcel97.velocidade = 0;

    //uso a ação da classe no meu objeto
    corcel97.acelerar();

    cout << corcel97.velocidade << endl;


    return 0;
}