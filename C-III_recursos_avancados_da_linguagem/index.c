#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){

    char mapa[5][10 + 1];

    FILE* f;
    f = fopen("mapa.txt", "r");

    if(f == 0){
        printf("Arquivo não encontrado!");
        exit(1);
    }
    for (int i = 0; i < 5; i++){
        fscanf(f, "%s", mapa[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",mapa[i]);
    }    
    


    fclose(f);










    return 0;

}