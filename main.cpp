# include <iostream>
using namespace std;

int main() {
  int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11; // Inicia as variáveis do CPF e dos dígitos de 1 a 9 (D1..D9) e os dos dígitos verificadores (d10 e d11)

  cout << "Informe um número de 9 dígitos: ";
  cin >> cpf;

  // entre 10⁷ a 9*10⁷ OU 10⁸ a 9*10⁸
  if (cpf >= 10000000 && cpf <= 99999999 || cpf >= 100000000 && cpf <= 999999999) { // se for entre os números da condição, significa que tem entre 8 a 9 dígitos!
        // Separa cada dígito em sua respectiva variável
        d1 = cpf / 100000000; // Para o primeiro dígito, se divide o valor de CPF por 10⁸
        d2 = (cpf / 10000000) % 10; // Para os demais, se divide a partir de 10⁷..10¹, e retirando o módulo da divisão por 10
        d3 = (cpf / 1000000) % 10;
        d4 = (cpf / 100000) % 10;
        d5 = (cpf /10000) % 10;
        d6 = (cpf / 1000) % 10;
        d7 = (cpf / 100) % 10;
        d8 = (cpf / 10) % 10;
        d9 = cpf % 10;

        // Calculando o primeiro dígito verificador:
        d10 = (d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9 * 2)%11;

        if (d10 < 2){ // Se for 1 ou 0, ele é igual a 0
            d10 = 0;
            } else { d10 = 11 - d10; // Caso for 2 ou mais, subtrai de 11
            }

        // Calculando o segundo dígito verificador
        d11 = (d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 6 + d7 * 5 + d8 * 4 + d9 * 3 + d10 * 2)%11;

        if (d11 < 2){ // Se for 1 ou 0, ele é igual a 0
            d11 = 0;
            } else { d11 = 11 - d11; // Caso for 2 ou mais, subtrai de 11
            }

        // Formata o CPF (xxx.xxx.xxx-xx) e mostra ao usuário
        cout << "CPF completo: " << d1 << d2 << d3 << "." << d4 << d5 << d6 << "." << d7 << d8 << d9 << "-" << d10 << d11 << endl; // endl = end line, comando de pular linha

        return 0;
    } else {
        cout << "Você digitou um número inválido (maior ou menor que 8 a 9 dígitos)." << endl;
        return 0;
    }
  // INTEGRANTES: Cauê Osei Ballotin da Silva, Clara Haag Rodrigues, Enzo Schiavi Dazzi & João Pedro da Conceição

}
