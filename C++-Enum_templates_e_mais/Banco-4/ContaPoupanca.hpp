#pragma once
#include "conta.hpp"
#include <string>
#include <iostream>

class ContaPoupanca : public Conta<3> {

public:

	ContaPoupanca(std::string numero, Titular titular);

};

