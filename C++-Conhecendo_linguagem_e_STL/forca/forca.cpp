#include <iostream>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

bool existe_letra(char chute){
    for(char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return 1;
        }
    }
    return 0;
}

int main(){

    bool acertou = false;
    bool enforcou = false;

    while(!acertou && !enforcou){
        char chute;
        cin >> chute;
    
    if(existe_letra(chute)){
        cout << "Acertou" << endl;
    }else{
        cout << "Errou" << endl;
    }
    }

}
