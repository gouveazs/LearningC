#include <iostream>
using namespace std;

//funçoes sao blocos de codigo que vc pode usar varias vezes

void mensagem() { // uam função do tipo void nao retorna nenhum valor
    cout << "Oi vadia" << endl;
}

int soma() { // função que retorna um valor do tipo inteiro
    int a = 2 + 2;
    return a;
}

int multiplicar(int x, int y) { //essa função recebe parametros, lembre de especificar o tipo 
    return x * y;
}

bool par(int numero) { // uma função que diz se um numero inteiro é par ou impar
    return numero % 2 == 0;
}

bool exercicio(int idade) {
    return idade >= 18;
}

int main() {
    //puxando a função mensagem na funçao principal que é o main
    mensagem();

    int resultado = soma();
    cout << resultado;

    cout << multiplicar(5, 3); //atribuo 5 para x e 3 para y
    
    if (par(4)) { //aqui eu passo a condição do if com a cahada da função e seu parametro
        cout << "Par" << endl;
    }

    if (exercicio(19)) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade" << endl;
    }

    return 0;
}