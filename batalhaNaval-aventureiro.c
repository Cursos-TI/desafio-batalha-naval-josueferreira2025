#include <stdio.h>

#define TAMANHO 10 // Define o tamanho do tabuleiro
#define NAVIO 3 // Representa os navios no tabuleiro

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com água (0)

    // Posiciona dois navios horizontalmente e verticalmente (tamanho fixo = 3)
    tabuleiro[2][5] = NAVIO;
    tabuleiro[2][6] = NAVIO;
    tabuleiro[2][7] = NAVIO;

    tabuleiro[5][1] = NAVIO;
    tabuleiro[6][1] = NAVIO;
    tabuleiro[7][1] = NAVIO;

    // Posiciona dois navios diagonalmente (tamanho fixo = 3)
    tabuleiro[1][1] = NAVIO;
    tabuleiro[2][2] = NAVIO;
    tabuleiro[3][3] = NAVIO;

    tabuleiro[7][8] = NAVIO;
    tabuleiro[8][7] = NAVIO;
    tabuleiro[9][6] = NAVIO;

    // Exibe o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  A B C D E F G H I J\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", i); // Exibe índice da linha
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha para melhor visualização
    }

    return 0;
}

