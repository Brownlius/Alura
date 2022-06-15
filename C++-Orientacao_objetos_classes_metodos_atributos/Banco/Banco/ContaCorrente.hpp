#pragma once
#include <string>
#include "conta.hpp"

class ContaCorrente final : public Conta
{
private:

public:

    ContaCorrente(std::string numero, Titular titular);

    float taxaSaque() const override;
    void transferePara(Conta& conta,float valor);

};

