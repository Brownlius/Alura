#pragma once
#include <string>



class Conta {
public:
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float getSaldo();
	void setNome(std::string nome);
	std::string getNome();

private:
	std::string numero_conta;
	std::string cpf_titular;
	std::string nome_titular;
	float saldo = 0;
};