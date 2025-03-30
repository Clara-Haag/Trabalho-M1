#include <iostream>
using namespace std;

int main() {

    int cpf, d1, d2, d3, d4, d5;

    cpf = 12345;

    // cpf / 10^(n-m) % 10 | n = número de dígitos do cpf e m indo de 1 até n | % 10 só a partir do segundo dígito

    d1 = cpf / 10000; // cpf / 10^4
    d2 = (cpf / 1000) % 10; // (cpf / 10^3) % 10
    d3 = (cpf / 100) % 10; // (cpf / 10^2) % 10
    d4 = (cpf / 10) % 10; // (cpf / 10^1) % 10
    d5 = cpf % 10; // (cpf / 10^0) % 10

    cout << "D1: " << d1 << " D2: " << d2 << " D3: " << d3 << " D4: " << d4 << " D5: " << d5;

    return 0;

}
