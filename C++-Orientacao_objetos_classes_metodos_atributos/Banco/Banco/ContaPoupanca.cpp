#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
    Conta(numero, titular)
{

}

void ContaPoupanca::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "N�o pode sacar valor negativo" << std::endl;
        return;
    }
    std::cout << "M�todo conta poupan�a" << std::endl;

    float tarifa = valorASacar * 0.03;
    float valorSaque = valorASacar + tarifa;

    if (valorSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= valorSaque;

}
