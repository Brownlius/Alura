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

    m.matrix[heroi.x][heroi.y] = '.';


    switch(direcao){
        case 'a':
            m.matrix[heroi.x][heroi.y - 1] = '@';
            heroi.y--;
              break;
        case 's':
            m.matrix[heroi.x + 1][heroi.y] = '@';
            heroi.x++;
            break;
        case 'd':
            m.matrix[heroi.x][heroi.y + 1] = '@';
            heroi.y++;
            break;
        case 'w':
            m.matrix[heroi.x - 1][heroi.y] = '@';
            heroi.x--;
            break;
    }
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