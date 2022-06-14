#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius");
    Conta umaConta("123456", titular);
    umaConta.depositar(500);
    umaConta.sacar(200);

    ExibeSaldo(umaConta);
  
    Titular outro(Cpf("098.765.432-10"), "Dias Pereirão");
    ContaPoupanca umaOutraConta("654321", titular);
    umaOutraConta.depositar(100);
    umaOutraConta.sacar(50);

    ExibeSaldo(umaOutraConta);

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Funcionario Funcionario1(Cpf("045.656.544-52"), "Dias Pedro", 168.00);

    return 0;
}
