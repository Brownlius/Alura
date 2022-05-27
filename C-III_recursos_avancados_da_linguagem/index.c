#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "index.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

int direcaoFantasma(int xatual, int yatual, int* xdestino, int* ydestino){

    int opcoes[4][2] = {
        {xatual, yatual +1},
        {xatual + 1, yatual},
        {xatual - 1, yatual},
        {xatual, yatual - 1}
    };

    srand(time(0));
    for (int i = 0; i < 10; i++){
        int posicao =  rand() % 4;

        if(podeandar(&m, opcoes[posicao][0],opcoes[posicao][1])){
            *xdestino = opcoes[posicao][0];
            *ydestino = opcoes[posicao][1];
        
            return 1;
        }
        
    }
            return 0;
}

int acabou() {
    POSICAO pos; 
    int heroinomapa = encontramapa(&m, &pos, HEROI);
	return !heroinomapa;
}

int ehdirecao(char direcao) {
	return
		direcao == ESQUERDA || 
		direcao == CIMA ||
		direcao == BAIXO ||
		direcao == DIREITA;
}

void move(char direcao) {

	if(!ehdirecao(direcao))	
		return;

	int proximox = heroi.x;
	int proximoy = heroi.y;

	switch(direcao) {
		case ESQUERDA:
			proximoy--;
			break;
		case CIMA:
			proximox--;
			break;
		case BAIXO:
			proximox++;
			break;
		case DIREITA:
			proximoy++;
			break;
	}

	if(!podeandar(&m, proximox, proximoy))
		return;

	andanomapa(&m, heroi.x, heroi.y, proximox, proximoy);
	heroi.x = proximox;
	heroi.y = proximoy;
}

void fantasmas() {
	MAPA copia;

	copiamapa(&copia, &m);

	for(int i = 0; i < copia.linhas; i++) {
		for(int j = 0; j < copia.colunas; j++) {
			if(copia.matriz[i][j] == FANTASMA) {

                int xdestino;
                int ydestino;

                int encontrou = direcaoFantasma(i, j, &xdestino, &ydestino);

                if(encontrou){
                    andanomapa(&m, i, j, xdestino, ydestino);
                }

				if(podeandar(&m, i, j+1)) {
				    andanomapa(&m, i, j, i, j+1);
				}
			}
		}
	}

	liberamapa(&copia);
}

int main() {
	
	lemapa(&m);
	encontramapa(&m, &heroi, HEROI);

	do {
		imprimemapa(&m);

		char comando;
		scanf(" %c", &comando);

		move(comando);
		fantasmas();

	} while (!acabou());

	liberamapa(&m);
}