#pragma once
#include <string>
#include <iostream>
#include "Cpf.hpp"
#include "Pessoa.hpp"

class Titular : public Pessoa
{
private:

public:
    Titular(Cpf cpf, std::string nome);

private:
};

