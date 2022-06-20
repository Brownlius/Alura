#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Caixa.hpp"
#include "diaDaSemana.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

void realizaSaque(Conta& conta, float valorASacar)
{
    conta.sacar(valorASacar);
}

void fazLogin(Autenticos& alguem, string senha) {
    if (alguem.autentica(senha)) {
        cout << "Login realizado com sucesso" << endl;
    }
    else {
        cout << "Senha não confere" << endl;
    }
}

int main()
{
    Titular titular(Cpf("098.765.432-10"), "Dias Pereirão", "novaSenha");
    ContaPoupanca umaConta("654321", titular);
    umaConta.depositar(100);
    realizaSaque(umaConta, 50);
    ExibeSaldo(umaConta);

    Titular titular2(Cpf("098.765.432-10"), "Dias Antônio", "outraNovaSenha");
    ContaCorrente umaConta2("6543212", titular2);
    umaConta2.depositar(5000);
    umaConta2.transferePara(umaConta, 50);
    ExibeSaldo(umaConta2);

    Gerente gerente1(Cpf("087.654.251-56"), "Alberto Roberto", 4892.90, 2, "senhaGerente");

    return 0;
}
