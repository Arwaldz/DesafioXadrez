#include <stdio.h>

/* 
 * Desafio MateCheck – Movimentação de Peças
 * 
 * O que é necessário:
 * - Uso de constantes para definir quantos passos cada peça deve mover.
 * - Uso de 3 estruturas de repetição diferentes: for, while e do–while.
 * - Separação em funções (funções avançadas) para cada peça, garantindo modularidade.
 * 
 */

/* --- Constantes de movimentação --- */
#define BISHOP_STEPS 5    // Bispo: 5 casas na diagonal
#define ROOK_STEPS 5      // Torre: 5 casas na horizontal
#define QUEEN_STEPS 8     // Rainha: 8 casas na horizontal

/* 
 * moverBispo:
 *   - Mostra passo a passo a movimentação do bispo
 *   - Utiliza “for” para iterar exatamente BISHOP_STEPS vezes
 *   - Como é diagonal “superior direita”, combina as direções básicas
 */
void moverBispo() {
    printf("Movimentos do Bispo (diagonal superior direita):\n");
    for (int passo = 1; passo <= BISHOP_STEPS; passo++) {
        // Cada passo é uma combinação de cima + direita
        printf("  Passo %d: Cima+Direita\n", passo);
    }
    printf("\n");
}

/* 
 * moverTorre:
 *   - Mostra passo a passo a movimentação da torre
 *   - Utiliza “while” para iterar ROOK_STEPS vezes
 *   - Direção única: direita
 */
void moverTorre() {
    printf("Movimentos da Torre (direita):\n");
    int passo = 1;
    while (passo <= ROOK_STEPS) {
        printf("  Passo %d: Direita\n", passo);
        passo++;
    }
    printf("\n");
}

/* 
 * moverRainha:
 *   - Mostra passo a passo a movimentação da rainha
 *   - Utiliza “do–while” para iterar QUEEN_STEPS vezes
 *   - Direção única: esquerda
 */
void moverRainha() {
    printf("Movimentos da Rainha (esquerda):\n");
    int passo = 1;
    do {
        printf("  Passo %d: Esquerda\n", passo);
        passo++;
    } while (passo <= QUEEN_STEPS);
    printf("\n");
}

int main() {
    /* 
     * Função principal:
     * Chama em sequência cada rotina de movimentação.
     * Garante saída organizada e legível.
     */
    moverBispo();
    moverTorre();
    moverRainha();
    return 0;
}
