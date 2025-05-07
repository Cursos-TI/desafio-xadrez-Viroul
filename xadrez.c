#include <stdio.h>

// Variavel para os loops
#define movimentacao 5

int main() {
    // inicializa das variáveis de movimentacao
    int movimentacao_rainha = 0;
    int movimentacao_torre = 1;

    // movimentacao do bispo: 5 casas na diagonal superior direita
    printf("Bispo:\n");
    for (int i = 0; i < movimentacao; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }

    // movimentacao da torre: 5 casas para a direita
    printf("\nTorre:\n");
    do {
        printf("Direita\n");
        movimentacao_torre++;
    } while (movimentacao_torre <= movimentacao);

    // Movimentacao da rainha: 8 casas para a esquerda
    printf("\nRainha:\n");
    while (movimentacao_rainha < 8) {
        printf("Esquerda\n");
        movimentacao_rainha++;
    }

    return 0;
}
