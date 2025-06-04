#include <stdio.h>

// Número de casas que cada peça vai se mover
const int casasTorre = 4;
const int casasBispo = 3;
const int casasRainha = 2;

// Funções Recursivas

// Movimento recursivo da Torre (apenas para cima)
void moverTorre(int passo) {
    if (passo == 0) return;

    printf("Cima\n");
    moverTorre(passo - 1);
}

// Movimento recursivo do Bispo (diagonal superior direita)
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    printf("Diagonal Superior Direita\n");
    moverBispoRecursivo(vertical - 1, horizontal - 1);
}

// Movimento recursivo da Rainha (esquerda)
void moverRainhaEsquerda(int passo) {
    if (passo == 0) return;

    printf("Esquerda\n");
    moverRainhaEsquerda(passo - 1);
}

// ================================
// Movimento com Loops Complexos: Cavalo
// ================================

void moverCavalo() {
    // O cavalo se moverá para cima e para a direita, em "L"
    printf("\nMovimentos do Cavalo:\n");

    int i, j;
    for (i = 0; i < 8; i++) { // linhas do tabuleiro
        for (j = 0; j < 8; j++) { // colunas do tabuleiro
            // Movimento em L: 2 para cima, 1 para a direita
            int novaLinha = i - 2;
            int novaColuna = j + 1;

            if (novaLinha < 0 || novaColuna > 7) {
                // Posição inválida, ignora
                continue;
            }

            // Simula o movimento válido
            printf("De (%d,%d) para (%d,%d): Cima, Cima, Direita\n", i, j, novaLinha, novaColuna);

            // Simula apenas um movimento por posição para evitar repetição excessiva
            break;
        }
    }
}

// ================================
// Movimento do Bispo com Loops Aninhados
// ================================

void moverBispoComLoops() {
    printf("\nMovimentos do Bispo com loops aninhados:\n");

    for (int v = 0; v < casasBispo; v++) {
        for (int h = 0; h < casasBispo; h++) {
            if (v == h) {
                printf("Diagonal Superior Direita\n");
            }
        }
    }
}

// ================================
// Função principal
// ================================

int main() {
    // Torre
    printf("Movimentos da Torre:\n");
    moverTorre(casasTorre);

    // Linha em branco para separação
    printf("\n");

    // Rainha
    printf("Movimentos da Rainha:\n");
    moverRainhaEsquerda(casasRainha);

    // Linha em branco para separação
    printf("\n");

    // Bispo (recursivo)
    printf("Movimentos do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo, casasBispo);

    // Linha em branco
    printf("\n");

    // Bispo com loops aninhados
    moverBispoComLoops();

    // Linha em branco
    printf("\n");

    // Cavalo
    moverCavalo();

    return 0;
}

