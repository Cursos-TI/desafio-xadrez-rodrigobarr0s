#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda)
    printf("\nMovimento do Cavalo:\n");

    // O cavalo se move 2 casas para baixo e 1 para a esquerda, 
    // usando um loop aninhado
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");  // Primeira direção: Baixo
    }

    // Usamos o `while` para o segundo movimento do Cavalo
    int l = 0;
    while (l < 1) {
        printf("Esquerda\n");  // Segunda direção: Esquerda
        l++;
    }

    return 0;
}
