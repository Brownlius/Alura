#include "catch.hpp"
#include "../SRC/Usuario.hpp"

TEST_CASE("Usuário deve saber informar seu primeiro nome") {
    Usuario vinicius("Vinicius Dias");

    std::string_view primeiroNome = vinicius.recuperaPrimeiroNome();

    REQUIRE("Vinicius" == primeiroNome);
}
