#include <string>
#include <vector>
#include "le_arquivo.cpp"

std::string palavra_secreta; 

void sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}