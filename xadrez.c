#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para quantidade de movimentos
const int BISPO_MOVS = 5;
const int TORRE_MOVS = 5;
const int RAINHA_MOVS = 8;

int main() {
    int i;

    // ===== Movimento do Bispo (Diagonal superior direita) =====

    printf("Movimentos do Bispo (5 casas na diagonal superior direita):\n");
    for (i = 1; i <= BISPO_MOVS; i++) {
        printf("Movimento %d: ", i);
        printf("Cima ");
        printf("Direita\n");
    }

    // ===== Movimento da Torre (5 casas para a direita) =====
    printf("\nMovimentos da Torre (5 casas para a direita):\n");
    i = 1;
    while (i <= TORRE_MOVS) {
        printf("Movimento %d: Direita\n", i);
        i++;
    }

    // ===== Movimento da Rainha (8 casas para a esquerda) =====
    printf("\nMovimentos da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Movimento %d: Esquerda\n", i);
        i++;
    } while (i <= RAINHA_MOVS);

    return 0;
}