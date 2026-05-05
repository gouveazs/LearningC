#include <iostream>
using namespace std;

// aqui uma classe qualquer
class Conta {
    //parte da classe que apenas a classe pode acessar
    //para acessar a variavel saldo criamos uma função especifica
    private:
        float saldo;

    //qualquer parte do código pode acessar
    public:
        void depositar(float valor) {
            saldo += valor;
        }

        float verSaldo() {
            return saldo;
        }
};

int main() {
    Conta conta;

    conta.depositar(100);
    cout << conta.verSaldo();
    //conta.saldo = 1000; errado
    //pois saldo é private e só pode ser acessado por verSaldo();
    return 0;
}