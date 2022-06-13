#pragma once
#include <string>

class Conta {
public: 

	Conta(std::string nome_titular, std::string cpf_titular, std::string numero_conta, int idade_titular);
	
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	static int getQtdContas();
	float getSaldo() const;
	int getIdade() const;
	std::string getNome() const;
	std::string getCPF() const;
	std::string getNumeroConta() const;
		
private:

	static int qtdContas;
	std::string nome_titular;
	std::string cpf_titular;
	std::string numero_conta;
	int idade_titular;
	float saldo;
};