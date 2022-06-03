#include <iostream>
#include <string>
#include<map>
#include<vector>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char>chutes_errados;

bool existe_letra(char chute){
    for(char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return 1;
        }
    }
    return 0;
}

bool nao_acertou(){
    for(char letra : PALAVRA_SECRETA){
        if(!chutou[letra]){
            return true;
        }
    }
        return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}

void imprime_cabeca(){
    cout << "************************" <<endl;
    cout << "**JOGO DO ENFORCAMENTO**" <<endl;
    cout << "************************" <<endl;
    cout << endl;
    cout << endl;
}

void imprime_erros(){
    cout << "Chutes errados: ";
    for(char letra: chutes_errados){
        cout << letra << " ";
    }
    cout << endl;
}

void imprime_palavra(){
    for(char letra : PALAVRA_SECRETA){
            if (chutou [letra]){
                cout << letra << " ";
            }
            else{
                cout << "_ ";
            }
        }
        cout << endl;
}

void chuta(){
    cout << "Digite seu chute: " ;
    char chute;
    cin >> chute;
    chutou[chute] = true;

    if(existe_letra){
        cout << "Acertou" <<endl;
    }else{
        chutes_errados.push_back(chute);
    }
    
    cout << endl;
}
int main(){

    imprime_cabeca();
    
    bool acertou = false;
    bool enforcou = false;

    while(nao_acertou() && nao_enforcou()){
        imprime_erros();
        imprime_palavra();
        chuta();

    }
    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << PALAVRA_SECRETA <<endl;
    if(nao_acertou()){
        cout << "Você perdeu! Tente novamente!" << endl;
    }else{ 
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;
    }
    
}
