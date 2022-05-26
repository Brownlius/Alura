#define CIMA 'w'
#define BAIXO 's'
#define ESQ 'a'
#define DIR 'd'
#define FANTASMA 'F'

struct posicao{
    int x;
    int y;
};
typedef struct posicao POSICAO;

int ehDirecao (char direcao);
void fantasmas();
void move(char direcao);





