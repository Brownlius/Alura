#include<string>
#include "conta.hpp"
#include <iostream>

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

void Conta::setNome(std::string nome) {
	nome_titular = "nome";
}




float Conta::getSaldo() {
	return saldo;
}
std::string Conta::getNome() {
	return nome_titular;
}
