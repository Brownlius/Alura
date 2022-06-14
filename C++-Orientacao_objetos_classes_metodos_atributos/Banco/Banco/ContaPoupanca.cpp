#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
    Conta(numero, titular)
{

}

void ContaPoupanca::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    float tarifa = valorASacar * 0.03;
    float valorSaque = valorASacar + tarifa;

    if (valorSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= valorSaque;

}
void ContaPoupanca::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    saldo += valorADepositar;
}