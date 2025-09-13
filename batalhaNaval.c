// novato.c — Desafio Batalha Naval (Nível Novato)
// Objetivo: posicionar 2 navios (1 vertical e 1 horizontal) usando vetores 2D
//           e exibir as coordenadas com printf.
//
// Regras do nível:
// - Entrada via variáveis no código (sem scanf).
// - Usar vetores/matrizes para representar coordenadas (X, Y).
// - Mostrar coordenadas de cada parte dos navios no console.
//
// Dica: altere os valores de x/y/len abaixo para testar.

#include <stdio.h>

int main(void) {
    // ================================
    // Configuração manual (edite aqui)
    // ================================
    // Navio Vertical: começa em (xV, yV) e ocupa lenV células para baixo (aumentando Y)
    int xV   = 2;
    int yV   = 1;
    int lenV = 3;

    // Navio Horizontal: começa em (xH, yH) e ocupa lenH células para a direita (aumentando X)
    int xH   = 0;
    int yH   = 4;
    int lenH = 4;

    // ==========================================
    // Vetores bidimensionais de coordenadas (X,Y)
    // Cada linha é uma parte do navio: [i][0] = X, [i][1] = Y
    // ==========================================
    int navioV[lenV][2];
    int navioH[lenH][2];

    // Preenche o navio vertical
    for (int i = 0; i < lenV; i++) {
        navioV[i][0] = xV;      // X fixo
        navioV[i][1] = yV + i;  // Y cresce
    }

    // Preenche o navio horizontal
    for (int i = 0; i < lenH; i++) {
        navioH[i][0] = xH + i;  // X cresce
        navioH[i][1] = yH;      // Y fixo
    }

    // ==========================
    // Saída organizada no console
    // ==========================
    printf("===== Nivel Novato =====\n");

    printf("Navio Vertical (inicio = (%d,%d), tamanho = %d):\n", xV, yV, lenV);
    for (int i = 0; i < lenV; i++) {
        printf("(%d, %d)\n", navioV[i][0], navioV[i][1]);
    }
    printf("\n");

    printf("Navio Horizontal (inicio = (%d,%d), tamanho = %d):\n", xH, yH, lenH);
    for (int i = 0; i < lenH; i++) {
        printf("(%d, %d)\n", navioH[i][0], navioH[i][1]);
    }
    printf("\n");

    return 0;
}
