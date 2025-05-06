#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3
#define HABILIDADE 5

// Função para aplicar uma matriz de habilidade ao tabuleiro
void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int habilidade[5][5], int origemX, int origemY) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origemX + i - 2;
            int y = origemY + j - 2;

            if (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO && habilidade[i][j] == 1) {
                tabuleiro[x][y] = HABILIDADE;
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Posiciona navios
    tabuleiro[2][3] = tabuleiro[2][4] = tabuleiro[2][5] = NAVIO;
    tabuleiro[5][1] = tabuleiro[6][1] = tabuleiro[7][1] = NAVIO;

    // Matriz em forma de Cone
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Matriz em forma de Cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    // Matriz em forma de Octaedro (losango)
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplicar habilidades em posições predefinidas
    aplicarHabilidade(tabuleiro, cone, 4, 4);
    aplicarHabilidade(tabuleiro, cruz, 6, 6);
    aplicarHabilidade(tabuleiro, octaedro, 8, 8);

    // Exibir o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
