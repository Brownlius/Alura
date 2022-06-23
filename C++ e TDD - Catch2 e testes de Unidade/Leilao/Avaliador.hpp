#pragma once
#include "Leilao.hpp"

class Avaliador
{

public:
	void avalia(Leilao);
	float getmaiorValor() const;
	float getMenorValor() const;

private:
	float maiorValor = INT_MIN;
	float menorValor = INT_MIN;
};