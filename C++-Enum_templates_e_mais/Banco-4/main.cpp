#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "diaDaSemana.hpp"
#include "Gerente.hpp"
#include "Caixa.hpp"

using namespace std;



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

ostream& operator<<(ostream& cout, const Conta& conta) {
    Pessoa titular = conta.titular;
    cout << "O titular da conta é: " << titular.getNome() << endl;
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
    
    return cout;
}

int main()
{
    Titular titular(Cpf("098.765.432-10"), "Dias Pereirão", "novaSenha");

    ContaPoupanca umaConta("654321", titular);
    umaConta.depositar(100);
    realizaSaque(umaConta, 50);

    cout << umaConta;

    Titular titular2(Cpf("098.765.432-10"), "Dias Antônio", "outraNovaSenha");

    ContaCorrente umaConta2("6543212", titular2);
    (Conta&)umaConta2+= 5000;
    //umaConta2.transferePara(umaConta, 50);
    (ContaCorrente&)umaConta+= umaConta2;

    cout << umaConta2;

    Gerente umGerente(Cpf("154.698.654-96"), "Alberto Roberto", 5400.36, diaDaSemana ::Terca, "senhaDoGerente");
    return 0;
}
