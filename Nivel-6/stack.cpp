#include <iostream>
#include <stack>

int main() {
    //funciona como uma pilha de pratos
    //o ultimo que entra é o primeiro que sai
    
    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);

    pilha.pop(); //remove 20

    return 0;
}