#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
// #define NUMERO_TENTATIVAS 3 
int main(){

    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("\tJogo de adivinhação\n");
    printf("\t-------------------");
     
    int numeroSecreto = 42;
    int chute;
    int tentativas = 0;
    
    // for (int i = 0; i < NUMERO_TENTATIVAS; i++){
    while(1){

        tentativas++;

        printf("\nDiga seu chute!\n");
        scanf("%d", &chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos.\n");
            continue;
        }

        printf("Você chutou: %d\n", chute);

        int acertou = (chute == numeroSecreto);
        int menor = (chute < numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou){
            printf("Parabéns! Você acertou\n");
             printf("Você acertou na tentativa %d\n", tentativas);
            break;
        }
        else if(menor){
            printf("Você chutou um número menor que o correto.\n");       
        }
        else if(maior){
            printf("Você chutou um número maior que o correto\n");
        }
    }
    //exercício for
    // for(int i = 1; i <= 100; i++){
	// printf("%d\n", i);
    // }
    //exercício while
    // int i = 1;
    // while( i != 101){
    //   printf("%d\n", i++);  
    // }

    return 0;
   
    }