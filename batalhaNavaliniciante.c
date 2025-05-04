#include <stdio.h>

#define TAMANHO 10 // Define o tamanho do tabuleiro
#define NAVIO 3 // Representa os navios no tabuleiro

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com água (0)

    // Posiciona um navio horizontalmente (começa na linha 2, coluna 3)
    tabuleiro[2][3] = NAVIO;
    tabuleiro[2][4] = NAVIO;
    tabuleiro[2][5] = NAVIO;

    // Posiciona um navio verticalmente (começa na linha 5, coluna 1)
    tabuleiro[5][1] = NAVIO;
    tabuleiro[6][1] = NAVIO;
    tabuleiro[7][1] = NAVIO;

    // Exibe o tabuleiro
    printf("TABULEIRO BATALHA NAVAL \n");
    printf("A B C D E F G H I J \n");
    
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha para melhor visualização
    }

    return 0;
}
