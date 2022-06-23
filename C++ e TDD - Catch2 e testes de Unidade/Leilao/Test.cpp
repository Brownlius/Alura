#define CATCH_CONFIG_MAIN
#include "Avaliador.hpp"
#include <iostream>
#include "catch.hpp"

TEST_CASE("Recupe o maior lance em ordem crescente") {
		Lance primeiroLance(Usuario("Pedro Almeida"), 1000);
		Lance segundoLance(Usuario("Nykole da Trindade"), 2000);
		Leilao leilao("Fiat 147 0km");
		
		leilao.recebeLance(primeiroLance);
		leilao.recebeLance(segundoLance);
		
	
		Avaliador leiloeiro;
		leiloeiro.avalia(leilao);

		float valorEsperado = 2000;
		REQUIRE(valorEsperado == leiloeiro.getmaiorValor());
}
TEST_CASE("Recupe o maior lance em ordem decrescente") {
	Lance primeiroLance(Usuario("Pedro Almeida"), 2000);
	Lance segundoLance(Usuario("Nykole da Trindade"), 1000);
	Leilao leilao("Fiat 147 0km");

	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);

	float valorEsperado = 2000;
	REQUIRE(valorEsperado == leiloeiro.getmaiorValor());
}

TEST_CASE("Recupe o menor lance em ordem decrescente") {
	Lance primeiroLance(Usuario("Pedro Almeida"), 2000);
	Lance segundoLance(Usuario("Nykole da Trindade"), 1000);
	Leilao leilao("Fiat 147 0km");

	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);

	float menorValorEsperado = 1000;
	REQUIRE(menorValorEsperado == leiloeiro.getmaiorValor());
}