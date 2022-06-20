#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, short int payDay, std::string senha) :
	Funcionario(cpf, nome, salario, payDay), Autenticos(senha)
{

}

float Gerente::bonificacao() const {
	return getSalario() * 0.5;
}