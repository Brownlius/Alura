#include "conta.hpp"

using namespace std;
	
int main() {


	Conta conta1("Nykole", "067.571.551-55", "1325-x");
		getData(conta1);
	
		conta1.depositar(800);
		conta1.sacar(300);
		getSaldoFinal(conta1);

	Conta conta2("Pedro", "043.159.411-55", "6993-x");
		getData(conta2);

		conta2.depositar(500);
		conta2.sacar(200);
		getSaldoFinal(conta2);
	
	return 0;
}
