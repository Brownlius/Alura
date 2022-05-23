#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>
// #define NUMERO_TENTATIVAS 3 
int main(){

    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("\tJogo de adivinhação\n");
    printf("\t-------------------");
     
    srand(time(0));
    int numeroSecreto = rand() % 100;
    int chute;
    int tentativas = 0;
    double pontos = 1000;
    
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
        double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
        if(pontos > 0){
        pontos = pontos - pontosPerdidos;
        }else{
            pontos = 0;
        }
    }
        printf("%.2f\n", pontos);












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