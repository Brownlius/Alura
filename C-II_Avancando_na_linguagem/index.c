#include <stdio.h>
#include <string.h>

void abertura(){

    printf("***********************\n");
    printf("     JOGO DA FORCA    \n");
    printf("***********************\n\n");
}

void chuta(char chutesFuncao[26], int tentativasFuncao){
    char chute;
    printf("Digite o seu chute:");        
       scanf(" %c", &chute);

        chutesFuncao[tentativasFuncao] = chute;
}

int main() {

    abertura();

    char palavraSecreta[20];

    sprintf(palavraSecreta,"MELANCIA");
    int acertou = 0;
    int enforcou = 0;
    char chutes[26];
    int tentativas = 0;
    

    do{
        for (int i = 0; i < strlen(palavraSecreta); i++){
                int achou = 0;
                for (int j = 0; j < tentativas; j++){
                        if(chutes[j] == palavraSecreta[i]){
                        achou = 1;
                        break;
                    }
                }
            if (achou){
                printf("%c ", palavraSecreta[i]);
            }else{
                printf("_ ");
            }
        }
       printf("\n");

       chuta(chutes, tentativas);
        tentativas++;
        
    }while(!acertou || !enforcou);























    return 0;
}