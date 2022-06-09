#include <iostream>
#include <string>
#include "conta.hpp"

using namespace std;


int main() {

	Conta conta2;
	conta2.setNome("Gabi");
	conta2.depositar(500);
	conta2.sacar(200);

	cout << "O saldo final da conta2 é" << conta2.getSaldo() << endl;
	cout << "O nome do titular da conta2 é" << conta2.getSaldo() << endl;


	return 0;
}
