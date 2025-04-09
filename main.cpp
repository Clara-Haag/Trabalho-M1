# include <iostream>
using namespace std;

int main() {
  int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9; // Inicia as variáveis do CPF e dos dígitos de 1 a 9 (D1..D9)

  cout << "Informe um número de 9 dígitos: ";
  cin >> cpf;

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
  int r1, r2, r3, r4, r5, r6, r7, r8, r9; // Inicia as váriaveis de resultado da múltiplicação dos dígitos
  r1 = d1 * 10;
  r2 = d2 * 9;
  r3 = d3 * 8;
  r4 = d4 * 7;
  r5 = d5 * 6;
  r6 = d6 * 5;
  r7 = d7 * 4;
  r8 = d8 * 3;
  r9 = d9 * 2;
  int r_soma = r1+ r2+ r3 + r4 + r5+ r6 + r7 + r8 + r9; // Soma os resultados anteriores

  int d_verificador_1 = r_soma % 11; // Caso o resultado seja igual ou menor a 2, o dígito será igual a 0!
  if (d_verificador_1 <= 2){
    d_verificador_1 = 0;
  } else {
      d_verificador_1 = 11 - d_verificador_1;
  }

  cout << "Dígito verificador 1: " << d_verificador_1 << endl; // endl é o comando para dar quebra de linha!

  // Cálculo do segundo dígito verificador: reutilizando váriaveis anteriores (R1..R9)
  int r10;
  r1 = d1 * 11;
  r2 = d2 * 10;
  r3 = d3 * 9;
  r4 = d4 * 8;
  r5 = d5 * 7;
  r6 = d6 * 6;
  r7 = d7 * 5;
  r8 = d8 * 4;
  r9 = d9 * 3;
  r10 = d_verificador_1 * 2;

  r_soma = r1+ r2+ r3 + r4 + r5+ r6 + r7 + r8 + r9 + r10; // Soma os resultados anteriores

  int d_verificador_2 = r_soma % 11; // Caso o resultado seja igual ou menor a 2, o dígito será igual a 0!
  if (d_verificador_2 <= 2){
    d_verificador_2 = 0;
  } else {
      d_verificador_2 = 11 - d_verificador_2;
  }

  cout << "Dígito verificador 2: " << d_verificador_2 << endl;

  // Formata o CPF (xxx.xxx.xxx-xx) e mostra ao usuário
  cout << "CPF completo: " << d1 << d2 << d3 << "." << d4 << d5 << d6 << "." << d7 << d8 << d9 << "-" << d_verificador_1 << d_verificador_2 << endl;
}
