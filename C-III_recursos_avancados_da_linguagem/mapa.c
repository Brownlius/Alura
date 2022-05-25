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