#define HEROI '@'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define FANTASMA 'F'

struct mapa {
	char** matriz;
	int linhas;
	int colunas; 
};

typedef struct mapa MAPA;

void alocamapa(MAPA* m);
void lemapa(MAPA* m);
void liberamapa(MAPA* m);
void imprimemapa(MAPA* m);
int podeandar(MAPA* m, int x, int y);
struct posicao {
	int x;
	int y;
};

typedef struct posicao POSICAO;

int encontramapa(MAPA* m, POSICAO* p, char c);

int ehvalida(MAPA* m, int x, int y);
int ehvazia(MAPA* m, int x, int y);

void andanomapa(MAPA* m, int xorigem, int yorigem, 
	int xdestino, int ydestino);

void copiamapa(MAPA* destino, MAPA* origem);