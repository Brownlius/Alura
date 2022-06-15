#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, std::string senha) :
	Funcionario(cpf, nome, salario), Autenticos(senha)
{

}

float Gerente::bonificacao() const {
	return getSalario() * 0.5;
}