#pragma once
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include "Leilao.hpp"

class Avaliador
{

public:
	Avaliador();
	void avalia(Leilao);
	float getmaiorValor() const;
	float getMenorValor() const;
	std::vector<Lance> get3MaioresLances();
	static bool ordenaLances(Lance&, Lance&);
private:
	float maiorValor = INT_MIN;
	float menorValor = INT_MAX;
	std::vector<Lance> maiores3Lances;

};