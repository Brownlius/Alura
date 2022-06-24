#define CATCH_CONFIG_MAIN
#include "Avaliador.hpp"
#include <iostream>
#include "catch.hpp"



Leilao ordemCrescente() {

	Lance primeiroLance(Usuario("Pedro Almeida"), 1000);
	Lance segundoLance(Usuario("Nykole da Trindade"), 2000);
	Leilao leilao("Fiat 147 0km");

	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);

	return leilao;
}
Leilao ordemDecrescente() {
	Lance primeiroLance(Usuario("Pedro Almeida"), 1000);
	Lance segundoLance(Usuario("Nykole da Trindade"), 2000);
	Leilao leilao("Fiat 147 0km");

	leilao.recebeLance(segundoLance);
	leilao.recebeLance(primeiroLance);
	
	return leilao;
}
TEST_CASE("Avaliador") {

	Avaliador leiloeiro;
	
	SECTION("Valores ordenados") {

		Leilao leilao = GENERATE(ordemCrescente(), ordemDecrescente());
		leiloeiro.avalia(leilao);

		SECTION("Recupera o maior lance") {

			REQUIRE(2000 == leiloeiro.getmaiorValor());
		}

		SECTION("Recupera o menor lance") {

			leiloeiro.avalia(leilao);

			REQUIRE(1000 == leiloeiro.getMenorValor());

		}
	}

	SECTION("Deve recperar os 3 maiores lances") {
		Lance primeiroLance(Usuario("Pedro Almeida"), 2000);
		Lance segundoLance(Usuario("Nykole da Trindade"), 3000);
		Lance terceiroLance(Usuario("Antonieta Trindade"), 1000);
		Lance quartoLance(Usuario("Cassambam Passos"), 5000);

		Leilao leilao("Fiat 147 0km");

		leilao.recebeLance(primeiroLance);
		leilao.recebeLance(segundoLance);
		leilao.recebeLance(terceiroLance);
		leilao.recebeLance(quartoLance);


		leiloeiro.avalia(leilao);

		auto maiores3Lances = leiloeiro.get3MaioresLances();
		float menorValorEsperado = 1000;
		REQUIRE(maiores3Lances.size() == 3);
	}
}
TEST_CASE("Proibido lances consecutivos da mesma pessoa") {
	Leilao leilao("Uno com escada em cima");

	Usuario Pedro("Pedroca");
	Lance lance(Pedro, 1000);
	Lance lance2(Pedro, 2000);

	leilao.recebeLance(lance);
	leilao.recebeLance(lance);

	REQUIRE(leilao.recuperaLances().size() == 1);
	REQUIRE(leilao.recuperaLances()[0].recuperaValor() == 1000);
}

TEST_CASE("Apenas o primeiro nome") {
	
	Usuario pedro("Pedro Almeida");
	std::string primeiroNome = pedro.recuperaPrimeiroNome();
	
	REQUIRE(primeiroNome == "Pedro");
}
