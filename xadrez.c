#include <stdio.h>

// Função recursiva para a Torre (5 casas para a direita)
void movimentoTorre(int casas) {
    if (casas == 0) return;  // Condição de parada da recursão
    printf("Direita\n");
    movimentoTorre(casas - 1);  // Chamada recursiva para a próxima casa
}

// Função recursiva para o Bispo (5 casas na diagonal para cima e à direita)
void movimentoBispo(int casas) {
    if (casas == 0) return;  // Condição de parada da recursão
    printf("Cima Direita\n");
    movimentoBispo(casas - 1);  // Chamada recursiva para a próxima casa
}

// Função recursiva para a Rainha (8 casas para a esquerda)
void movimentoRainha(int casas) {
    if (casas == 0) return;  // Condição de parada da recursão
    printf("Esquerda\n");
    movimentoRainha(casas - 1);  // Chamada recursiva para a próxima casa
}

// Função para o movimento do Cavalo (duas casas para cima e uma para a direita)
void movimentoCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");  // Movimento vertical (para cima)
    }

    for (int j = 0; j < 1; j++) {
        printf("Direita\n");  // Movimento horizontal (para a direita)
    }
}

// Função recursiva para o Bispo utilizando loops aninhados
void movimentoBispoComLoops(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return;  // Condição de parada da recursão
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Cima Direita\n");  // Movimento diagonal (cima e direita)
    }
    movimentoBispoComLoops(casasVerticais - 1, casasHorizontais);  // Chamada recursiva para o movimento vertical
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    movimentoTorre(5);
    
    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    movimentoBispo(5);
    
    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(8);

    // Movimento do Cavalo (duas casas para cima e uma para a direita)
    printf("\nMovimento do Cavalo:\n");
    movimentoCavalo();

    // Movimento do Bispo com Loops Aninhados (5 casas verticais e 1 horizontal)
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    movimentoBispoComLoops(5, 1);

    return 0;
}
