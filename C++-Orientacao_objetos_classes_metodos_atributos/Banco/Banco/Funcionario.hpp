#pragma once
#include <string>
#include "conta.hpp"
#include "Titular.hpp"
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{
public:

	Funcionario(Cpf cpf, std::string nome, float salario);
	std::string getNome();

private:

	float salario;
	
};

