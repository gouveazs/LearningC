#include <iostream>
#include <string>
using namespace std;

//modularização é quebrar e colocar tudo em funçoẽs diferentes
//e nao deixar tudo no main

int soma (int a, int b) {
    return a + b;
}

void resultado(int valor) {
    cout << "Resultado" << valor << endl;
}

int main() {
    int r = soma(2, 3);
    resultado(r);

    return 0;
}