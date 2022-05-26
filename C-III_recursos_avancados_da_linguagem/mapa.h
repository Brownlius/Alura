#define HEROI '@'

#define VAZIO '.'
#define PAREDE_HOR '-'
#define PAREDE_VER '|'

struct mapa{

    char** matrix;
    int linhas;
    int colunas;

};

typedef struct mapa MAPA;

int ehVazia(MAPA* m, int x, int y);
int validaColisao(MAPA* m, int x, int y);
void alocamapa(MAPA* m);
void andaNoMapa(MAPA* m, int xOrigem, int yOrigem, int xDestino, int yDestino);
void imprimeMapa(MAPA* m);
void lemapa(MAPA* m);
void liberamapa(MAPA* m); 
void encontramapa(MAPA* m, POSICAO* p, char c);