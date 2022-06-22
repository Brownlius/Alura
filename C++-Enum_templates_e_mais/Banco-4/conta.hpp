#pragma once
#include <string>
#include <utility>
#include <iostream>
#include "Titular.hpp"
#include <variant>

class Conta
{
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();
    enum resultadoSaque {
        sucesso, valorNegativo, saldoInsuficiente
    };

private:
    std::string numero;
    Titular titular;

protected:
    float saldo;

public:
    Conta(std::string numero, Titular titular);
    ~Conta();
    std::variant <resultadoSaque, float> sacar(float valorASacar);
    void depositar(float valorADepositar);
    void operator+=(float valorADepositar);
    bool operator<(const Conta& outraConta);
    float recuperaSaldo() const;
    virtual float taxaSaque() const = 0;
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
};

