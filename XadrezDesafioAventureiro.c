#include <stdio.h>

    // Nível Aventureiro - Movimentação das Peças
    //Movimentação do cavalo

    // Definindo as constantes para os movimentos
    const int MOVIMENTOS_CAVALO = 3;  // Definindo quantos movimentos o cavalo fará

    // Direções do cavalo
    const char* direcao1[] = {"Cima", "Cima", "Direita"};
    const char* direcao2[] = {"Cima", "Cima", "Esquerda"};
    const char* direcao3[] = {"Baixo", "Baixo", "Direita"};
    const char* direcao4[] = {"Baixo", "Baixo", "Esquerda"};



int main (){

        // Usando o for para controlar o número de repetições dos movimentos
        for (int i = 0; i < MOVIMENTOS_CAVALO; i++) {
        // Usando o while para mover o cavalo para a direção 1: Cima, Cima, Direita
        int j = 0;
        printf("\nMovimento do Cavalo (Cima, Cima, Direita):\n");
        while (j < 3) {
            printf("%s\n", direcao1[j]);
            j++;
        }

        // Usando o while para mover o cavalo para a direção 2: Cima, Cima, Esquerda
        j = 0;
        printf("\nMovimento do Cavalo (Cima, Cima, Esquerda):\n");
        while (j < 3) {
            printf("%s\n", direcao2[j]);
            j++;
        }

        // Usando o while para mover o cavalo para a direção 3: Baixo, Baixo, Direita
        j = 0;
        printf("\nMovimento do Cavalo (Baixo, Baixo, Direita):\n");
        while (j < 3) {
            printf("%s\n", direcao3[j]);
            j++;
        }

        // Usando o while para mover o cavalo para a direção 4: Baixo, Baixo, Esquerda
        j = 0;
        printf("\nMovimento do Cavalo (Baixo, Baixo, Esquerda):\n");
        while (j < 3) {
            printf("%s\n", direcao4[j]);
            j++;
        }
    }







}