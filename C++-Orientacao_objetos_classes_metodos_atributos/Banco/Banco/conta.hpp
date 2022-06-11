#pragma once
#include <iostream>
#include <string>



class Conta {
public:

	Conta(std::string nome_titular, std::string cpf_titular, std::string numero_conta);
	
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float getSaldo();
	std::string getNome();
	std::string getCpf();
	std::string getNumeroConta();

private:

	std::string numero_conta;
	std::string cpf_titular;
	std::string nome_titular;
	float saldo = 0;
};

void getData(Conta& conta);
void getSaldoFinal(Conta& conta);