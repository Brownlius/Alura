#include "catch.hpp"
#include "Usuario.hpp"

TEST_CASE("Apenas o primeiro nome") {

	Usuario pedro("Pedro Almeida");
	std::string nome = pedro.recuperaPrimeiroNome();

	REQUIRE(nome == "Pedro");
}