#include <iostream>
using namespace std;

//classe Animal -> classe Mãe
class Animal {
    public:
        void fazerSom() {
            cout << "Som\n";
        }
};

//classe Gato -> classe filha de Animal
class Gato : public Animal {
    public:
        void fazerSom() {
            cout << "Miau\n";
        }
};

class Cachorro : public Animal {
    public:
        void fazerSom() {
            cout << "Au au\n";
        }
};

int main() {
    Animal* a; //pontiero que aponta para classe Animal
    Gato g; //objeto da classe Gato
    Cachorro c; //objeto da classe Cachorro

    a = &g; //ponteiro aponta para memória do objeto
    //isso só é possivel por causa da herança
    a->fazerSom(); //saida: Miau

    a = &c; //ponteiro aponta para memoria do obj cachorro
    a->fazerSom(); //saida Au Au

    return 0;
}