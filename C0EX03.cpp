// C02EX02.cpp // std declarado no inicio

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    char NOME[40], SOBRENOME[40];

    cout << "Informe seu nome: "; // operador de exma��o
    cin >> NOME; // << operador de inser��o
    cin.ignore (80, '\n'); // fun��o limpeza de caracteres depois do enter

    cout << "Informe seu sobrenome: "; // operador de exma��o
    cin >> SOBRENOME; // << operador de inser��o
    cin.ignore (80, '\n'); // fun��o limpeza de caracteres depois do enter

    cout << "Ola, " << NOME << " " << SOBRENOME;
    cout << std::endl; // :: operador de escopo

    cout << "Tecle <enter> para encerrar...";
    cin.get();
    return (0);
}
