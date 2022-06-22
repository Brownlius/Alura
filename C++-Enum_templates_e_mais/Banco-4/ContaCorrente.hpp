#pragma once
#include <string>
#include "conta.hpp"

class ContaCorrente final : public Conta<5>
{
private:

public:

    ContaCorrente(std::string numero, Titular titular);
    void transferePara(Conta& conta,float valor);
    void operator+=(ContaCorrente& contaOrigem);

};

