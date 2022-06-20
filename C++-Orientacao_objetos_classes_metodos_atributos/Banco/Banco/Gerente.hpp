#pragma once
#include "Funcionario.hpp"
#include "autenticos.hpp"

class Gerente :
    public Funcionario,public Autenticos
{
public:
    Gerente(Cpf cpf, std::string nome, float salario, short int payDay, std::string senha);
    virtual float bonificacao() const override;

private: 
  
};

