#include <stdio.h>
#include <stdlib.h>
#include "index.h"
#include "mapa.h"

void encontramapa(MAPA* m, POSICAO* p, char c){

    for (int i = 0; i < (m->linhas); i++){
        for (int j = 0; j  < m->colunas; j++){
            if(m->matrix[i][j] == c){
                p->x = i;
                p->y = j;
                break;
            }
        }
    }
}

void lemapa(MAPA* m) {
	FILE* f;
	f = fopen("mapa.txt", "r");
	if(f == 0) {
		printf("Erro na leitura do mapa");
		exit(1);
	}

	fscanf(f, "%d %d", &(m->linhas), &(m->colunas));
	alocamapa(m);
	
	for(int i = 0; i < 5; i++) {
		fscanf(f, "%s", m->matrix[i]);
	}

	fclose(f);
}

void alocamapa(MAPA* m) {
	m->matrix = malloc(sizeof(char*) * (m->linhas));

	for(int i = 0; i < (m->linhas); i++) {
		m->matrix[i] = malloc(sizeof(char) * m->colunas + 1);
	}
}

void liberamapa(MAPA* m) {
	for(int i = 0; i < ((m->linhas)); i++) {
		free(m->matrix[i]);
	}

	free(m->matrix);
}

void imprimeMapa(MAPA* m){
    for(int i = 0; i < (m->linhas); i++) {
		printf("%s\n", m->matrix[i]);
	}
}

int validaColisao(MAPA* m, int x, int y){
	if(x >= m->linhas)
        return 0;
    if(y >= m->colunas)
        return 0;
	
	return 1;
}

int ehVazia(MAPA* m, int x, int y){
	return m->matrix[x][y] == '.';
}

void andaNoMapa(MAPA* m, int xOrigem, int yOrigem, int xDestino, int yDestino){

	char personagem = m->matrix[xOrigem][yOrigem];
	m->matrix[xDestino][yDestino] = personagem;
	m->matrix[xOrigem][yOrigem] = VAZIO;
	
}