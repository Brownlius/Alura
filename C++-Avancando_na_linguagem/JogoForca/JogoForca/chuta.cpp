#include <iostream>
#include "chuta.hpp"
#include "letra_existe.hpp"

void chuta(std::map<char, bool>& chutou, std::array<char, 5>& chutes_errados, std::string& palavra_secreta, int& qtd_chutes_errados)
{
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;

    chutou[chute] = true;
    

    if(letra_existe(chute, palavra_secreta)){
        std::cout << "Você acertou! Seu chute está na palavra." << std::endl;
    }
    else{
        std::cout << "Você errou! Seu chute não está na palavra." << std::endl;
            if (qtd_chutes_errados <= 4){
                chutes_errados[qtd_chutes_errados] += chute;
                qtd_chutes_errados += 1;
    }
        }
    std::cout << std::endl;
}