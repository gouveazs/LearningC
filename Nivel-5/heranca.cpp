#include <iostream>
using namespace std;

//aqui uma classe normal
class Animal {
    public:
        void fazerSom() {
            cout << "Som Desconhecido\n";
        }
};

//aqui uma classe Cachorro que herda coisas da classe Animal
class Cachorro : public Animal {
    public:
        void latir() {
            cout << "Au Au\n";
        }
};

int main() {
    Cachorro dog;

    dog.fazerSom(); //função da classe Animal
    dog.latir(); //função da classe Cachorro

    return 0;
}