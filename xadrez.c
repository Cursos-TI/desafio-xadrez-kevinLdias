#include <stdio.h>

int main() {

    int movTorre = 5, movBispo = 5, movRainha = 8;

    // movimentação da torre
    printf("TORRE: ");
    for (int i = 0; i < movTorre; i++)
    {
        printf("Direita");
        if (i < movTorre - 1) {
            printf("...");
        }
        else { printf("\n"); }
    }

    // movimentação bispo
    printf ("BISPO: ");
    int cont = 0;
    while (cont < movBispo) {
        printf("Cima, direita");
        cont++;
        if (cont < movBispo) {
            printf("...");
        }
        else { printf("\n"); }
    }

    // movimentação rainha
    printf("RAINHA: ");
    cont = 0;
    do {
        printf("Esquerda");
        cont++;
        if (cont < movRainha) {
            printf("...");
        }
        else { printf("\n"); }
    }
    while (cont < movRainha);

    return 0;
}