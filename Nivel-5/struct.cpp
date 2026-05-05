#include <iostream>
using namespace std;

struct Produto {
    //atributos (dados)
    string nome;
    float preco;
    int estoque;

    //construtor
    Produto(string n, float p, int e) {
        nome = n;
        preco = p;
        estoque = e;
    }

    //método (função dentro da struct)
    void exibir() {
        cout << "Produto: " << nome << endl;
        cout << "Preco: R$" << preco << endl;
        cout << "Estoque: " << estoque << endl;
    }

    //lógica simples
    void vender(int quantidade) {
        if (quantidade <= estoque) {
            estoque -= quantidade;
            cout << "Venda realizada!\n";
        } else {
            cout << "Estoque insuficiente!\n";
        }
    }

    //função que retorna valor
    bool temEstoque() {
        return estoque > 0;
    }
};

int main() {
    Produto p("Mouse Gamer", 150.0, 10);

    p.exibir();

    p.vender(3);

    cout << "\nDepois da venda:\n";
    p.exibir();

    if (p.temEstoque()) {
        cout << "Ainda tem produto\n";
    } else {
        cout << "Acabou o estoque\n";
    }

    return 0;
}