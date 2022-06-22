#pragma once
#include <iostream>
#include "autenticos.hpp"
#include <string>
#include <iostream>

template<typename Documentos>	
class Pessoa
{
public:
	Pessoa(Documentos documento, std::string nome) : documento(documento), nome(nome)
	{

		verificaTamanhoDoNome();
	}

	std::string getNome() {
		return nome;
	}
	
protected:

	Documentos documento;
	std::string nome;

public:

private:
	void verificaTamanhoDoNome() {
		if (nome.size() < 5) {
			std::cout << "Nome muito curto" << std::endl;
			exit(1);
		}
	}
};

