#include "catch.hpp"
#include "Avaliador.hpp"
#include "Usuario.hpp"	
#include "Leilao.hpp"

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