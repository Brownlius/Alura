#include "Avaliador.hpp"


void Avaliador::avalia(Leilao leilao) 
{
	std::vector<Lance> lances = leilao.recuperaLances();
	
	for (Lance lance : lances) {
		if (lance.recuperaValor() > maiorValor) {
			maiorValor = lance.recuperaValor();
		}
		if (lance.recuperaValor() < menorValor) {
			menorValor = lance.recuperaValor();
		}
	}
	
	std::sort(lances.begin(), lances.end(), ordenaLances);
	
	size_t tamanho = lances.size() > 3 ? 3 : lances.size();

	maiores3Lances = std::vector<Lance>(lances.begin(), lances.begin() + tamanho);
}


bool Avaliador::ordenaLances(Lance& lance1, Lance& lance2) {
	return (lance1.recuperaValor() > lance2.recuperaValor());
}

float Avaliador::getmaiorValor() const 
{
	return maiorValor;
}
float Avaliador::getMenorValor() const
{
	return menorValor;
}
std::vector<Lance>Avaliador::get3MaioresLances() {
	return maiores3Lances;

}

Avaliador::Avaliador() {
	std::cout << "Criado novo avaliador" << std::endl;
}