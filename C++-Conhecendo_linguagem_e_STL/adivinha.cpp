#include <iostream>
#include <cstdlib>
#include <ctime>

bool errou = false;

using namespace std;

int main(){

srand(time(NULL));
const int NUMERO_SECRETO = rand() % 100;

    cout << "##################################" << endl;
    cout << "#Bem-vindo ao jogo da advinhação!#"<< endl;
    cout << "##################################" << endl;

    char dificuldade;
    int chances;

    cout << "Escolha sua dificuldade: (F)Fácil, (M)Médio ou (D)Difícil." << endl;
    cin >> dificuldade;

    
       switch (dificuldade){
        case 'F':
            chances = 10;
            break;
        case 'M':
            chances = 6;
            break;
        case 'D':
            chances = 3;
            break;
        }
    
    int pontos = 100;
    int tentativas;
    double pontos_perdidos;

    for (int i = 1; i <= chances; i++){

        int chute;
        tentativas++;
        
        cout << "Qual o seu chute? " << endl;
        cin >> chute;
        
        pontos_perdidos += abs(chute - NUMERO_SECRETO)/2.0;
        
        bool acertou = (chute == NUMERO_SECRETO);
        bool chuteMaior = (chute > NUMERO_SECRETO);
        
        if(acertou){
            break;
        }else if(chuteMaior){
            cout << "Infelizmente não tens o que é necessário." << endl;
            cout << "o número correto é menor." << endl;
        }else{
            cout << "Infelizmente não tens o que é necessário." << endl;
            cout << "o número correto é maior." << endl;
        }
        if(i == chances){
             errou = true;
        }
    }
    if(errou){
        cout << "Infelizmente não teve o que era necessário para macetar o número correto." << endl;    
    }else{
        cout << "Parabéns. Tu é o brabo." << endl;        
        cout << "Você acertou em " << tentativas << " tentativas." << endl;
        double pontos_final = (pontos - pontos_perdidos);  
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi: "<< pontos_final <<"." << endl;
    }





}