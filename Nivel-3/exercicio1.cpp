#include <iostream>
using namespace std;

int main() {
    int numero = 10;

    int* ponteiroNmero = &numero;

    *ponteiroNmero = 50;

    cout << numero << endl;

    return 0;
}