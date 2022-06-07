#include <vector>
#include <ctime>
#include "le_arquivo.hpp"
#include "forca.cpp"


std::string sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();

    srand(time(0));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];

    return palavras[indice_sorteado];
}