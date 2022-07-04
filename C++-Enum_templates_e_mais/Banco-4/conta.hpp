#pragma once
#include <string>
#include <utility>
#include <iostream>
#include "Titular.hpp"
#include <variant>


template<int taxaSaque>

class Conta
{
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas() {
        return numeroDeContas;
    }
    enum resultadoSaque {
        sucesso, valorNegativo, saldoInsuficiente
    };

private:
    std::string numero;
    Titular titular;

protected:
    float saldo;

public:
    Conta(std::string numero, Titular titular) :
    numero(numero),
    titular(titular),
    saldo(0)
    {
        numeroDeContas++;
	    std::cout << "Conta Criada!" << std::endl;
    }

    ~Conta() {
        numeroDeContas--;
    }

    std::variant<resultadoSaque, float>sacar(float valorASacar){
        std::cout << "Chamando m�todo sacar da conta corrente" << std::endl;

        if (valorASacar < 0) {  
            std::cout << "N�o pode sacar valor negativo" << std::endl;
            return valorNegativo;
        }

        float tarifa = valorASacar * (taxaSaque/100);
        float valorSaque = valorASacar + tarifa;

        if (valorSaque > saldo) {
            std::cout << "Saldo insuficiente" << std::endl;
            return saldoInsuficiente;
        }

        saldo -= valorSaque;
        return saldo;
    }

    void depositar(float valorADepositar) {
        if (valorADepositar < 0) {
            std::cout << "N�o pode sacar valor negativo" << std::endl;
            return;
        }
        saldo += valorADepositar;
    }

    void operator+=(float valorADepositar) {
        depositar(valorADepositar);
    }

    bool operator<(const Conta& outraConta) {
        return this->saldo < outraConta.saldo;
    }

    float recuperaSaldo() const {
        return saldo;
    }
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);

};

