#include <iostream>
using namespace std;

void dobrar(int* numero) {
    *numero = *numero * 2;
}

int main() {
    // esta funcionando só nao sei salvar a variavel 2. saida ta vindo 4 e 4
    int numero = 2;

    int antes = numero;

    dobrar(&numero);

    cout << antes << endl;
    cout << numero << endl;

    return 0;
}