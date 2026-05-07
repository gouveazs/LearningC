#include <vector>

int main() {
    vector<int> lista

    //busca linear
    //pros: simples
    //contras: lento se a lista for grande
    for(int i = 0; i < lista.size(); i++) {
        if(lista[i] == 20) {
            cout << "achou";
        }
    }

    //binária
    //pros: rapida pra carai
    //contras: precisa estar ordenado
    int inicio = 0, fim = lista.size() - 1;
    while(inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if(lista[meio] == valor) {
            cout << "achou";
            break;
        }
    }

    //ordenação
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(lista[j] > lista[j+1]) {
                swap(lista[j], lista[j+1]);
            }
        }
    }

    return 0;
}