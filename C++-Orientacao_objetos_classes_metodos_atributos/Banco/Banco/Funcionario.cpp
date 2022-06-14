#include "Funcionario.hpp"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario) :
	Pessoa(cpf, nome), salario(salario)
{

}

std::string Funcionario::getNome() {
	return nome;
}