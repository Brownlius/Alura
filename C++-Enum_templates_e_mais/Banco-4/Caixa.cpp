#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario, diaDaSemana payDay) : Funcionario(cpf, nome, salario, payDay)
{

}

float Caixa::bonificacao() const {
	return getSalario() * 0.1;
}