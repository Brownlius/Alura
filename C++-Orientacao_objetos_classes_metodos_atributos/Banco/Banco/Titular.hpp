#pragma once
#include <string>
#include "Cpf.hpp"

class Titular
{
private:
    Cpf cpf;
    std::string nome;
public:
    Titular(Cpf cpf, std::string nome);

private:
    void verificaTamanhoDoNome();
};

