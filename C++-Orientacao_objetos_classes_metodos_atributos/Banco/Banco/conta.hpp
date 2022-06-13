#pragma once
#include <iostream>
#include <string>


class Conta {
public:																					//M�TODOS P�BLICOS

	Conta(std::string nome_titular, std::string cpf_titular, std::string numero_conta);						//M�todo Construtor
	~Conta();																								//M�todo Destrutor

	static int getQtdContas();

	void sacar(float valorASacar);
	void depositar(float valorADepositar);

	float getSaldo();
	std::string getNome();
	std::string getCpf();
	std::string getNumeroConta();
	

private:																				//M�TODOS PRIVADOS

	void validaNameSize();	

public:																					//PROPIEDADES P�BLICAS



private:																				//PROPIEDADES PRIVADAS
	
	static int qtd_contas;																						//Propiedade da Classe
	std::string numero_conta;																					//Propiedade do objeto
	std::string cpf_titular;
	std::string nome_titular;
	float saldo = 0;
};

void getData(Conta& conta);
void getSaldoFinal(Conta& conta);