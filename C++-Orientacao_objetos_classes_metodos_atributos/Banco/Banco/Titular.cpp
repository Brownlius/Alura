#include "Titular.hpp"
#include <iostream>

Titular::Titular(Cpf cpf, std::string nome): cpf(cpf), nome(nome)
{
    verificaTamanhoDoNome();
}

void Titular::verificaTamanhoDoNome()
{
    if (nome.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}