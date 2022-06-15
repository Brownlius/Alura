#pragma once
#include "conta.hpp"
#include <string>
#include <iostream>

class ContaPoupanca : public Conta {

public:

	ContaPoupanca(std::string numero, Titular titular);
	float taxaSaque()const override;

};

