#include "Conta.hpp"


int Conta::numeroDeContas = 0;


Conta::Conta(std::string numero, Titular titular):
    numero(numero), 
    titular(titular),
    saldo(0)
{
    numeroDeContas++;
}

Conta::~Conta()
{
    numeroDeContas--;
}

std::variant<Conta::resultadoSaque,float>Conta::sacar(float valorASacar)
{
    std::cout << "Chamando método sacar da conta corrente" << std::endl;

    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return valorNegativo;
    }

    float tarifa = valorASacar * taxaSaque();
    float valorSaque = valorASacar + tarifa;

    if (valorSaque> saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return saldoInsuficiente;
    }

    saldo -= valorSaque;
    return saldo;
}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    saldo += valorADepositar;
}

void Conta::operator+=(float valorADepositar) {
    depositar(valorADepositar);
}

float Conta::recuperaSaldo() const
{
    return saldo;
}

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}


bool Conta::operator<(const Conta& outraConta) {
    return this->saldo < outraConta.saldo;
}