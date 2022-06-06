#include <iostream>
#include <string>
#include "salva_arquivo.hpp"

extern string palavra_secreta; 
extern map<char, bool> chutou;
extern vector<char> chutes_errados;

void salva_arquivo(std::vector<std::string> nova_lista){
    std::ofstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open()){
        std::arquivo << nova_lista.size() << std::endl;

        for(std::string palavra : nova_lista){
            std::arquivo << palavra << std::endl;
        }
        arquivo.close();
    }
    else{
        std::cout << "Não foi possível acessar o banco de palavras." << std::endl;
        exit(0);
    }
}