#pragma once
#include <string>
#include <iostream>
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include "autenticos.hpp"

class Titular : public Pessoa, public Autenticos
{
public:
    Titular(Cpf cpf, std::string nome, std::string senha);
    

};

