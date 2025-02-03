#include <stdio.h>

// Nível Novato - Movimentação das Peças

//Declaração de constantes

#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main (){

     // Movimentação do Bispo: Diagonal Superior Direita
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
    printf("Diagonal Superior Direita\n");
    }

    // Movimentação da Torre: Direita
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
    printf("Direita\n");
    }

    // Movimentação da Rainha: Esquerda
    printf("\nMovimentação da Rainha:\n");
    for (int i = 0; i < MOVIMENTO_RAINHA; i++) {
    printf("Esquerda\n");
    }

}