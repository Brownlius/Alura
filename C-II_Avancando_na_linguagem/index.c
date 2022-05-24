#include <stdio.h>
#include <string.h>

int main() {

    char palavraSecreta[20];

    sprintf(palavraSecreta,"MELANCIA");
    printf("%s\n",palavraSecreta);
    
    int acertou = 0;
    int enforcou = 1;
    char chute;

    do{
        printf("Digite o seu chute:");        
        scanf("%c", &chute);

        for (int i = 0; i < strlen(palavraSecreta); i++){
            if(palavraSecreta[i] == chute){
                printf("A posição %d tem essa letra!\n", i+1);
            }
        }
    }while(!acertou && !enforcou);























    return 0;
}