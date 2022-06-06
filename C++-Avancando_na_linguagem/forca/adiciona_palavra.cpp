#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "le_arquivo.hpp"

std::string palavra_secreta; 
std::map<char, bool> chutou;
std::vector<char> chutes_errados;

void adiciona_palavra(){
    std::cout << "Digite a nova palavra, usando letras maiúsculas." << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}
