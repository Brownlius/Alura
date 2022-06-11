#include <iostream>
#include <string>
#include "conta.hpp"

using namespace std;

int main() {

	Conta conta2("Pedro", "043.159.411-55", "6993-x");
	getData(conta2);

	conta2.depositar(500);
	conta2.sacar(200);
	getSaldoFinal(conta2);
	
	return 0;
}
