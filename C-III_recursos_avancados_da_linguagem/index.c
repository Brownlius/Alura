#include <stdio.h>
#include <stdlib.h>
#include "index.h"

struct mapa m;
int x;
int y;

void lemapa() {
	FILE* f;
	f = fopen("mapa.txt", "r");
	if(f == 0) {
		printf("Erro na leitura do mapa");
		exit(1);
	}

	fscanf(f, "%d %d", &(m.linhas), &(m.colunas));
	alocamapa();
	
	for(int i = 0; i < 5; i++) {
		fscanf(f, "%s", m.matrix[i]);
	}

	fclose(f);
}

void alocamapa() {
	m.matrix = malloc(sizeof(char*) * (m.linhas));

	for(int i = 0; i < (m.linhas); i++) {
		m.matrix[i] = malloc(sizeof(char) * m.colunas + 1);
	}
}

void liberamapa() {
	for(int i = 0; i < ((m.linhas)); i++) {
		free(m.matrix[i]);
	}

	free(m.matrix);
}

void imprimeMapa(){
    for(int i = 0; i < (m.linhas); i++) {
		printf("%s\n", m.matrix[i]);
	}
}
int acabou(){
    return 0;
}

int achaPosicao(){

    for (int i = 0; i < (m.linhas); i++){
        for (int j = 0; j  < m.colunas; j++){
            if(m.matrix[i][j] == '@'){
                x = i;
                y = j;
                break;
            }
        }
    }
    return x, y;
}

int move(char direcao){
    
    achaPosicao();

    switch(direcao){
        case 'a':
            m.matrix[x][y - 1] = '@';
              break;
        case 's':
            m.matrix[x + 1][y] = '@';
            break;
        case 'd':
            m.matrix[x][y + 1] = '@';
            break;
        case 'w':
            m.matrix[x - 1][y] = '@';
            break;
    }
    m.matrix[x][y] = '.';
}
int main() {
	
	lemapa();

    do{

    imprimeMapa();

    char comando;
    scanf(" %c", &comando);
    move(comando);

    }while(!acabou());
        
	liberamapa();

}