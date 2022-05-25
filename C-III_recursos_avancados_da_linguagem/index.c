#include <stdio.h>
#include <stdlib.h>
#include "index.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;


int acabou(){
    return 0;
}



void move(char direcao){

    if(direcao != 'a' && direcao != 's' && direcao !='d' && direcao !='w' )
    return;

    int proxX = heroi.x;
    int proxY = heroi.y;


    switch(direcao){
        case 'a':
            proxY--;
            break;
        case 's':
            proxX++;
            break;
        case 'd':
            proxY++;
            break;
        case 'w':
            proxX--;
            break;
    }
    if(proxX >= m.linhas)
        return;
    if(proxY >= m.colunas)
        return;
    if(m.matrix[proxX][proxY] != '.')
        return;
    m.matrix[proxX][proxY] = '@';
    m.matrix[heroi.x][heroi.y] = '.';
    heroi.x = proxX;
    heroi.y = proxY;    
}
int main() {
	
	lemapa(&m);
    encontramapa(&m,&heroi,'@');

    do{

    imprimeMapa(&m);

    char comando;
    scanf(" %c", &comando);
    move(comando);

    }while(!acabou());
        
	liberamapa(&m);

}