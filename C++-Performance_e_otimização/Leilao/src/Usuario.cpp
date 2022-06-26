#include "Usuario.hpp"

Usuario::Usuario(std::string nome): nome(nome)
{
}

std::string  Usuario::recuperaNome() const
{
    return nome;
}

std::string_view Usuario::recuperaPrimeiroNome() 
{
    std::string_view primeiroNome(nome.c_str(), nome.find(' '));
    return primeiroNome;
}
