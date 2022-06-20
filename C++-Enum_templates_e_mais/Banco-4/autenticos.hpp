#pragma once
#include <string>

class Autenticos
{
public:

	Autenticos(std::string senha);
	bool autentica(std::string senha) const;

private:

	std::string senha;
};

