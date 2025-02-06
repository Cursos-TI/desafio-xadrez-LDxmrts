#include <stdio.h>

// Definindo as constantes para os movimentos das peças
const int MOVIMENTOS_CAVALO = 1;  // Cavalo se move uma vez em L para cima à direita
const int MOVIMENTOS_BISPO = 5;   // Bispo se move 5 casas na diagonal direita para cima
const int MOVIMENTOS_TORRE = 5;   // Torre se move 5 casas para a direita
const int MOVIMENTOS_RAINHA = 8;  // Rainha se move 8 casas para a esquerda

// Função recursiva para mover o bispo com loops aninhados
void movimento_bispo() {
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        for (int j = 0; j < MOVIMENTOS_BISPO; j++) {
            if (i == j) {  // A cada iteração em que i == j, o bispo se move na diagonal
                printf("Movimento do Bispo: Diagonal direita para cima, Casa %d\n", i + 1);
            }
        }
    }
}

// Função para movimentação do cavalo
void movimento_cavalo() {
    int i, j;
    for (i = 0; i < MOVIMENTOS_CAVALO; i++) {
        // Movimentos do cavalo (1 vez em L para cima à direita)
        for (j = 0; j < 3; j++) {
            if (j == 2) {
                break;  // Interrompe o loop ao atingir a última direção
            }
            if (j == 1) {
                continue;  // Pula o movimento "Cima" repetido
            }
            printf("Movimento do Cavalo (Cima, Cima, Direita): %s\n", j == 0 ? "Cima" : "Direita");
        }
    }
}

// Função para movimentação da torre
void movimento_torre() {
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Movimento da Torre: Casa %d para a direita\n", i + 1);
    }
}

// Função para movimentação da rainha
void movimento_rainha() {
    for (int i = 0; i < MOVIMENTOS_RAINHA; i++) {
        printf("Movimento da Rainha: Casa %d para a esquerda\n", i + 1);
    }
}


int main (){

    // Movimentação do Cavalo
    movimento_cavalo();

    // Movimentação do Bispo (5 casas na diagonal direita para cima)
    printf("\nMovimento do Bispo (Diagonal direita para cima):\n");
    movimento_bispo(0, MOVIMENTOS_BISPO);

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimento da Torre (5 casas para a direita):\n");
    movimento_torre();

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    movimento_rainha();

    return 0;


}