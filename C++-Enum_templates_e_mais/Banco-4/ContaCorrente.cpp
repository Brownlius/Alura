#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular)
{

}

float ContaCorrente::taxaSaque() const {
    return 0.05;
}
void ContaCorrente::transferePara(Conta& destino, float valor) {
    auto resultado = sacar(valor);

    if (resultado.index() == 1) {
        destino.depositar(valor);
    }
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem) {
    contaOrigem.transferePara(*this, contaOrigem.recuperaSaldo() / 2);
}