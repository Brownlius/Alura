#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

void realizaSaque(Conta& conta, float valorASacar)
{
    conta.sacar(valorASacar);
}

int main()
{
    Titular titular(Cpf("098.765.432-10"), "Dias Pereirão");

    ContaPoupanca umaConta("654321", titular);
    umaConta.depositar(100);
    realizaSaque(umaConta, 50);

    ExibeSaldo(umaConta);

    Titular titular2(Cpf("098.765.432-10"), "Dias Antônio");

    Conta umaConta2("6543212", titular2);
    umaConta2.depositar(5000);
    realizaSaque(umaConta2, 1000);

    ExibeSaldo(umaConta2);

    return 0;
}
