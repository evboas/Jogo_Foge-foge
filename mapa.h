#ifndef _MAPA_H_
#define _MAPA_H_

#define HEROI '@'
#define FANTASMA 'F'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define PILULA 'P'

struct mapa{
    //Declarando a matriz
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

struct posicao {
    int x;
    int y;
};

typedef struct posicao POSICAO;

void libera_mapa(MAPA* m);
void le_mapa(MAPA* m);
void aloca_mapa(MAPA* m);
int encontra_mapa(MAPA* m, POSICAO* p, char c);
int validaMove(MAPA* m, int x, int y);
int mapa_vazio(MAPA* m, int x, int y);
void anda_mapa(MAPA* m, int xorigem, int yorigem,
int xdestino, int ydestino);
void copiamapa(MAPA* destino, MAPA* origem);

int podeandar(MAPA* m, char personagem, int x, int y);
//int ehparede(MAPA* m, int x, int y);
int ehpersonagem(MAPA* m, char personagem, int x, int y);

#endif