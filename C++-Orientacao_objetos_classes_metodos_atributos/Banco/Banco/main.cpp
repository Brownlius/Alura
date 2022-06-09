#include <iostream>
#include <string>

using namespace std;

struct Conta {

	string numero_conta;
	string cpf_titular;
	string nome_titular;
	float saldo;

	void sacar(float valorSacado) {
		if (valorSacado <= 0 || valorSacado > saldo) {
			cout << "Saldo insuficiente!" << endl;
			return;
		}
		saldo -= valorSacado;
	}

	void depositar(float valorDepositado) {
		if (valorDepositado <= 0) {
			cout << "Valor inválido para depósito" << endl;
			return;
		}
		saldo += valorDepositado;
	}
};


int main() {

	Conta conta1;
	conta1.numero_conta = "1234568";
	conta1.cpf_titular = "043.159.411-24";
	conta1.nome_titular = "Pedro";
	conta1.saldo = 1520;

	Conta conta2;
	conta2.saldo = 3225;

	conta2.depositar(500);
	conta1.sacar(200);

	cout << "O saldo final da conta2 é" << conta2.saldo << endl;
	cout << "O saldo final da conta1 é" << conta1.saldo << endl;





	return 0;
}
