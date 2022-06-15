#include "autenticos.hpp"

Autenticos::Autenticos(std::string senha) : senha(senha)
{

}

bool Autenticos::autentica(std::string senha) const {
	return senha == this->senha;
	
	}
