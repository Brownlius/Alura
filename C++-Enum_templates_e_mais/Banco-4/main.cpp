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
    std::variant<Conta::resultadoSaque, float> resultado = conta.sacar(valorASacar);
    if(auto saldo = std::get_if<float>(&resultado)) {
        cout << "Novo saldo da conta: " << *saldo << endl;
    }
    
}

void fazLogin(Autenticos& alguem, string senha) {
    if (alguem.autentica(senha)) {
        cout << "Login realizado com sucesso" << endl;
    }
    else {
        cout << "Senha não confere" << endl;
    }
}
template<typename meuTipo>
meuTipo Menor(meuTipo a, meuTipo b) {
    return a < b ? a : b;
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
    umaConta.depositar(1100);
    cout << "\n";
    Titular titular2(Cpf("098.765.432-10"), "Antônio", "outraNovaSenha");
    ContaCorrente umaConta2("6543212", titular2);
    umaConta2.depositar(1020);
    cout <<  Menor<Conta&>(umaConta2, umaConta);

    return 0;
}
