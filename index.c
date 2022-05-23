#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("\tJogo de adivinhação\n");
    printf("\t-------------------\n");

    int nivel = 0;
    int tentativasTotal = 0;
    srand(time(0));
    int numeroSecreto = rand() % 100;
    int chute;
    int tentativas = 0;
    int acertou = 0;

    printf("O nível no qual você quer jogar? Fácil (1), Médio (2) ou Difícil (3).\n");
    scanf("%d", &nivel);
    
        while((nivel < 1) || (nivel > 3) ){
            printf("Dificuldade inválida! Digite novamente.");
            scanf("%d", &nivel);
        }
        if (nivel == 1){
                tentativasTotal = 100;
        }if (nivel == 2){
                tentativasTotal = 10;
        }if (nivel == 3){
                tentativasTotal = 5;
        }
        
    for (int i = 0; i < tentativasTotal; i++){
        printf("\nDiga seu chute:\n");
        scanf("%d", &chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos.\n");
            continue;
        }
        tentativas++ ;
        printf("Você chutou: %d\n", chute);

         acertou = (chute == numeroSecreto);
        int menor = (chute < numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou){
            break;
        }
        else if(menor){
            printf("Você chutou um número menor que o correto.\n");       
        }
        else if(maior){
            printf("Você chutou um número maior que o correto\n");
        }
    }
        if(acertou){
            printf("Parabéns! Você acertou.\n");
            printf("Você acertou na tentativa. %d\n", tentativas);
        }else{
            printf("você não acertou. Acabou as tentativas\n");
        }











    //exercício for
    // for(int i = 1; i <= 100; i++){
	// printf("%d\n", i);
    // }
    //exercício while
    // int i = 1;
    // while( i <= 100){
    //   printf("%d\n", i++);  
    // }
    // exercício for soma
    // int soma = 0; 
    // for(int i = 1; i <= 100; i++){
	// soma = soma + i;
    // }
    // printf("A soma dos números é: %d", soma);
    // exercício tabuada
    // int num;
    // printf("Digite um número a ser calculado: ");
    // scanf("%d", &num);
    // for(int i = 1; i <= 10; i++){
    //     int mult = num * i;
    //     printf("%d X %d = %d\n",num, i, mult);
    // }
    
    return 0;
   
    }