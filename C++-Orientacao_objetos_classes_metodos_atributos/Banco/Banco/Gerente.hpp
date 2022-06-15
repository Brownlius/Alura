#pragma once
#include "Funcionario.hpp"
#include "autenticos.hpp"

class Gerente :
    public Funcionario,public Autenticos
{
    Gerente(Cpf cpf, std::string nome, float salario, std::string senha);
    virtual float bonificacao() const override;
};

