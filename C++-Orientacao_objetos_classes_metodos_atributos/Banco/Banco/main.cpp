#include <iostream>
#include <string>
#include "conta.hpp"

using namespace std; 

void exibeInfo(const Conta& conta) {

	cout << "O nome do titular é : " << conta.getNome() << endl;
	cout << "O CPF do titular é : " << conta.getCPF() << endl;
	cout << "A idade do titular é : " << conta.getIdade() << endl;
	cout << "O número da conta é : " << conta.getNumeroConta() << endl;

}

int main() {

	Conta conta2("Pedro", "043.159.411-10", "6993-0", 20);
	conta2.depositar(500); 
	conta2.sacar(200);
	exibeInfo(conta2);

	cout << "O saldo final da conta2 é" << conta2.getSaldo() << endl;

	Conta conta1("Flávio", "654.449.654-90", "8546-0", 54);
	conta2.depositar(300);
	conta2.sacar(50);
	exibeInfo(conta1);

	cout << "O saldo final da conta2 é" << conta1.getSaldo() << endl;

	cout << "A quantidade de contas no sistema: " << Conta::getQtdContas() << endl;


	return 0;
}
