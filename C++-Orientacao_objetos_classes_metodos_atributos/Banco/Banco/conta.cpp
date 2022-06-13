#include "conta.hpp"

int Conta::qtd_contas = 0;

void Conta::sacar(float valorASacar) {
	if (valorASacar <= 0 || valorASacar > saldo) {
		std::cout << "Saldo insuficiente!" << std::endl;
		return;
	}
	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar <= 0) {
		std::cout << "Valor inv�lido para dep�sito" << std::endl;
		return;
	}
	saldo += valorADepositar;
}

float Conta::getSaldo() {
	return saldo;
}

std::string Conta::getNome() {
	return nome_titular;
}

std::string Conta::getCpf() {
	return cpf_titular;
}

std::string Conta::getNumeroConta() {
	return numero_conta;
}
Conta::Conta(std::string nome_titular, std::string cpf_titular, std::string numero_conta) : //Construtor
	nome_titular(nome_titular),
	cpf_titular(cpf_titular),
	numero_conta(numero_conta),
	saldo(0)
{
	validaNameSize();
	qtd_contas += 1;
}

Conta::~Conta() {																			//Destrutor
	qtd_contas -= 1;
}

void getData(Conta& conta) {

	std::cout << "Nome do titular: " << conta.getNome() << std::endl;
	std::cout << "CPF do Titular: " << conta.getCpf() << std::endl;
	std::cout << "Conta do titular: " << conta.getNumeroConta() << std::endl;
	std::cout << "O n�mero de contas no sistema: " << conta.getQtdContas() << std::endl;

}

void getSaldoFinal(Conta& conta) {
	std::cout << "Saldo de " << conta.getNome() << " � de : " << conta.getSaldo() << std::endl;
}

int Conta::getQtdContas() {
	return qtd_contas;
}
void Conta::validaNameSize() {
	if (nome_titular.size() < 5) {
		exit(1);
	}
}
