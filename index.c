#include <stdio.h>
#include <stdbool.h>
int main()
    {   
    printf("\tJogo de adivinhação\n");
    printf("\t-------------------");
     
    int numeroSecreto = 42;
    int chute;
        
    for (int i = 0; i < 3; i++){
    
        printf("\nDiga seu chute!\n");
        scanf("%d", &chute);

        printf("Você chutou: %d\n", chute);

        int acertou = (chute == numeroSecreto);
        int menor = (chute < numeroSecreto);

        if(acertou){
            printf("Parabéns! Você acertou\n");
            break;
        }else if(menor){
            printf("Você chutou um número menor que o correto.\n");       
        }else{
            printf("Você chutou um número maior que o correto\n");
        }

    }
    
    return 0;
   
    }
	