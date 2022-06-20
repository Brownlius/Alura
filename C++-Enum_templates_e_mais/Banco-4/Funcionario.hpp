#pragma once
#include <string>
#include "conta.hpp"
#include "Titular.hpp"
#include "Pessoa.hpp"
#include "diaDaSemana.hpp"


class Funcionario : public Pessoa
{
public:

	Funcionario(Cpf cpf, std::string nome, float salario, diaDaSemana payDay);
	std::string getNome();
	virtual float bonificacao() const = 0;
	float getSalario() const;

private:
	diaDaSemana payDay;
	float salario;
	
};

