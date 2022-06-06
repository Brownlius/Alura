#include <iostream>
#include <map>
#include <vector>
#include "le_arquivo.cpp"

std::string palavra_secreta; 
std::map<char, bool> chutou;
std::vector<char> chutes_errados;

std::vector<string> le_arquivo(){
    ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        int quantidade_palavras;
        arquivo >> quantidade_palavras;


        vector<string> palavras_do_arquivo;

        for(int i=0;i<quantidade_palavras;i++){
            string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
        }

        arquivo.close();
        return palavras_do_arquivo;
    }
    else{
        cout << "Não foi possível acessar o banco de palavras." << endl;
        exit(0);
    }
}
