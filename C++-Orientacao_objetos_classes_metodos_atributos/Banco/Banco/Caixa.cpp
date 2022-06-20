#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario, short int payDay) : Funcionario(cpf, nome, salario, payDay)
{

}

float Caixa::bonificacao() const {
	return getSalario() * 0.1;
}