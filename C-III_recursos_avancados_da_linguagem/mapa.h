struct mapa{

    char** matrix;
    int linhas;
    int colunas;

};

typedef struct mapa MAPA;

void alocamapa(MAPA* m);
void imprimeMapa(MAPA* m);
void lemapa(MAPA* m);
void liberamapa(MAPA* m); 
void encontramapa(MAPA* m, POSICAO* p, char c);