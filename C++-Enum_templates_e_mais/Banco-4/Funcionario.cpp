#include "Funcionario.hpp"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario, diaDaSemana payDay) :
	Pessoa(cpf, nome), salario(salario), payDay(payDay)
{

}

std::string Funcionario::getNome() {
	return nome;
}

float Funcionario::getSalario() const {
	return salario;
}