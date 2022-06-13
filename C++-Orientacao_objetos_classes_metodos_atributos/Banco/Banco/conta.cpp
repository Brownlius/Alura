#include<string>
#include "conta.hpp"
#include <iostream>


int Conta::qtdContas = 0;


Conta::Conta(std::string nome_titular, std::string cpf_titular, std::string numero_conta, int idade_titular) :
	nome_titular(nome_titular),
	cpf_titular(cpf_titular),
	numero_conta(numero_conta),
	idade_titular(idade_titular),
	saldo(0)
{
	qtdContas++;
}

void Conta::sacar(float valorASacar) {
	if (valorASacar <= 0 || valorASacar > saldo) {
		std::cout << "Saldo insuficiente!" << std::endl;
		return;
	}
	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar <= 0) {
		std::cout << "Valor inválido para depósito" << std::endl;
		return;
	}
	saldo += valorADepositar;
}


std::string Conta::getNome() const {
	return nome_titular;
}

std::string Conta::getCPF() const {
	return cpf_titular;
}
int Conta::getIdade() const {
	return idade_titular;
}

float Conta::getSaldo() const {
	return saldo;
}
std::string Conta::getNumeroConta() const {
	return numero_conta;
}

int Conta::getQtdContas() {
	return qtdContas;
}