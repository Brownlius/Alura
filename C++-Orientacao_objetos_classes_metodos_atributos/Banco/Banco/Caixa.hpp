#pragma once
#include "Funcionario.hpp"
class Caixa :
    public Funcionario
{
    Caixa(Cpf cpf, std::string nome, float salario);
    virtual float bonificacao() const override;
};

