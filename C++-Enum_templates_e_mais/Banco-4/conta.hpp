#pragma once
#include <string>
#include <iostream>
#include <utility>
#include <variant>
#include "Titular.hpp"

class Conta
{
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();
    enum ResultadoSaque {
        valorNegativo, saldoInsuficiente
    };

private:
    std::string numero;
    Titular titular;

protected:
    float saldo;

public:
    Conta(std::string numero, Titular titular);
    ~Conta();
    std::variant<ResultadoSaque, float> sacar(float valorASacar);
    void depositar(float valorADepositar);
    void operator+=(float valorADepositar);
    float recuperaSaldo() const;
    virtual float taxaSaque() const = 0;
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
};