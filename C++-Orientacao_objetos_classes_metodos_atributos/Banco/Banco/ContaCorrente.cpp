#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular)
{

}

float ContaCorrente::taxaSaque() const {
    return 0.05;
}
void ContaCorrente::transferePara(Conta& destino, float valor) {
    sacar(valor);
    destino.depositar(valor);
}