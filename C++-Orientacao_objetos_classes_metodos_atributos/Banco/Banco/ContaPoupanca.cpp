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
    std::cout << "Método conta poupança" << std::endl;

    float tarifa = valorASacar * 0.03;
    float valorSaque = valorASacar + tarifa;

    if (valorSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= valorSaque;

}
