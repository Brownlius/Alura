#include <stdio.h>
#include <stdlib.h>
#include "index.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;


void fantasmas(){
    for (int i = 0; i < m.linhas; i++){
        for (int j = 0; j < m.colunas; j++){
            if(m.matrix[i][j] == FANTASMA){
                if(validaColisao(&m, i, j + 1)){
                    andaNoMapa(&m, i, j, i, j + 1);
                }
            }
        }   
    }
}

int acabou(){
    return 0;
}

int ehDirecao(char direcao){

return (direcao == 'a' || direcao == 's' || direcao == 'd' || direcao == 'w' );
    
}

int verificaColisao(){
    
}

void move(char direcao){

    if(!ehDirecao(direcao))
    return;
    
    int proxX = heroi.x;
    int proxY = heroi.y;

    switch(direcao){
        case ESQ:
            proxY--;
            break;
        case BAIXO:
            proxX++;
            break;
        case DIR:
            proxY++;
            break;
        case CIMA:
            proxX--;
            break;
    }
    if(!verificaColisao(&m, proxX, proxY))
        return;

    if(!ehVazia(&m, proxX, proxY))
        return;

    andaNoMapa(&m, heroi.x,heroi.y, proxX, proxY); 
    heroi.x = proxX;
	heroi.y = proxY;  
}

int main() {
	
	lemapa(&m);
    encontramapa(&m,&heroi, HEROI);

    do{

    imprimeMapa(&m);

    char comando;
    scanf(" %c", &comando);
    move(comando);
    fantasmas();

    }while(!acabou());
        
	liberamapa(&m);

}