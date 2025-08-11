#include <stdio.h>

int main() {
    // Constantes para número de casas
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    int i;

    // ---------------- BISPO ----------------
    printf("Movimento do Bispo (diagonal superior direita):\n");
    for (i = 1; i <= casasBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // ---------------- TORRE ----------------
    printf("\nMovimento da Torre (direita):\n");
    i = 1;
    while (i <= casasTorre) {
        printf("Direita\n");
        i++;
    }

    // ---------------- RAINHA ----------------
    printf("\nMovimento da Rainha (esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0
}
