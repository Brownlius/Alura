#pragma once
#include <iostream>
#include <string>


class Conta {
public:																					//MÉTODOS PÚBLICOS

	Conta(std::string nome_titular, std::string cpf_titular, std::string numero_conta);						//Método Construtor
	~Conta();																								//Método Destrutor

	static int getQtdContas();

	void sacar(float valorASacar);
	void depositar(float valorADepositar);

	float getSaldo();
	std::string getNome();
	std::string getCpf();
	std::string getNumeroConta();
	

private:																				//MÉTODOS PRIVADOS

	void validaNameSize();	

public:																					//PROPIEDADES PÚBLICAS



private:																				//PROPIEDADES PRIVADAS
	
	static int qtd_contas;																						//Propiedade da Classe
	std::string numero_conta;																					//Propiedade do objeto
	std::string cpf_titular;
	std::string nome_titular;
	float saldo = 0;
};

void getData(Conta& conta);
void getSaldoFinal(Conta& conta);