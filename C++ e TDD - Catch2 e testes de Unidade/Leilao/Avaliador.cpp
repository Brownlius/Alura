#include "Avaliador.hpp"

void Avaliador::avalia(Leilao leilao) 
{
	std::vector<Lance> lances = leilao.recuperaLances();
	
	for (Lance lance : lances) {
		if (lance.recuperaValor() > maiorValor) {
			maiorValor = lance.recuperaValor();
		}
		else {
			menorValor = lance.recuperaValor();
		}
	}
}

float Avaliador::getmaiorValor() const 
{
	return maiorValor;
}
float Avaliador::getMenorValor() const
{
	return menorValor;
}
