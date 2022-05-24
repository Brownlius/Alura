#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h> 
#include "index.h"

char palavraSecreta[20];
char chutes[26];
int chutesDados = 0;


void abertura(){

    printf("***********************\n");
    printf("     JOGO DA FORCA    \n");
    printf("***********************\n\n");
}

void chuta(){
    char chute;
    printf("Digite o seu chute:");        
       scanf(" %c", &chute);
        chutes[chutesDados]   = chute;
        chutesDados++;
}

int jaChutou(char letra){
    int achou = 0;
        
        for (int j = 0; j < (chutesDados); j++){
            if(chutes[j] == letra){
                achou = 1;
                break;
            }
        }
    return achou;
}

void desenhaForca(){
    for (int i = 0; i < strlen(palavraSecreta); i++){
            
            int achou = jaChutou(palavraSecreta[i]);

            if (achou){
                printf("%c ", palavraSecreta[i]);
            }else{
                printf("_ ");
            }
        }
       printf("\n");
}

void escolhePalavra(){

  FILE* f;
    if(f == 0){
        printf("Banco de dados não disponível.\n\n");
        exit(1);
    }
  
    f = fopen("palavras.txt", "r");

    int qtdPalavras;
    fscanf(f, "%d", &qtdPalavras);

    srand(time(0));
    int linhas = rand() % qtdPalavras;

    for (int i = 0; i <= linhas; i++){
        fscanf(f, "%s", palavraSecreta);
    }
    
    fclose(f);
}

void adicionaPalavra(){

    FILE* f;
    
    char quer;
    printf("Deseja adionar uma nova palavra? (S/N)");
    scanf(" %c", &quer);

    if(quer == 'S'){

        char novaPalavra[20];
        printf("Qual a nova palavra?");
        scanf("%s", novaPalavra);

        f = fopen("palavras.txt", "r+");

        if(f == 0){
        printf("Banco de dados não disponível.\n\n");
        exit(1);
    }
        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;

        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qtd);

        fseek(f,0, SEEK_END);
        fprintf(f, "\n%s", novaPalavra);

        fclose(f);
    }
}


int enforcou(){
    
    int erros = 0;

    for (int i = 0; i < chutesDados; i++){
        
        int existe = 0;

        for (int j = 0; j < chutesDados; j++){
            if(chutes[i] == palavraSecreta[j]){
                existe = 1;
                break;
            }
        }   
        if(!existe){
             erros++;
        }
    }
    return erros >= strlen(palavraSecreta);
}

int ganhou(){
    for (int i = 0; i < strlen(palavraSecreta); i++){

        if(!jaChutou(palavraSecreta[i])){
            return 0;
        }
    }
    return 1;
}

int main() {

    abertura();
    escolhePalavra();
    
    do{ 

        chuta();
        desenhaForca();

    }while(!ganhou() && !enforcou());

    if(ganhou()){
        printf("Você conseguiu acertar a palavra! PARABÉNS.");
    }else{
        printf("Você infelizmente não acertou.\n
        A palavra era %s", palavraSecreta);
    }





















    return 0;
}