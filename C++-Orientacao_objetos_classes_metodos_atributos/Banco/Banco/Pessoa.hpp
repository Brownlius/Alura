#pragma once
#include <iostream>
#include <string>
#include "Cpf.hpp"

class Pessoa
{
public:
	std::string getNome();
	Pessoa(Cpf cpf, std::string nome);
	
protected:

	Cpf cpf;
	std::string nome;

public:

private:
	void verificaTamanhoDoNome();
};

