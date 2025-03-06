#include <stdio.h>

int main() {

    int movTorre = 5, movBispo = 5, movRainha = 8;

    // movimentação da torre
    printf("\nTORRE:\n");
    for (int i = 0; i < movTorre; i++)
    {
        printf("Direita");
        if (i < movTorre - 1) {
            printf("...\n");
        }
        else { printf("(parou)\n"); }
    }

    // movimentação bispo
    printf ("\nBISPO:\n");
    int cont = 0;
    while (cont < movBispo) {
        printf("Cima, direita");
        cont++;
        if (cont < movBispo) {
            printf("...\n");
        }
        else { printf("(parou)\n"); }
    }

    // movimentação rainha
    printf("\nRAINHA:\n");
    cont = 0;
    do {
        printf("Esquerda");
        cont++;
        if (cont < movRainha) {
            printf("...\n");
        }
        else { printf("(parou)\n"); }
    }
    while (cont < movRainha);

    // Implementando a movimentação do cavalo
    int movCavalo = 1;
    int j = 1;
    printf("\nCAVALO:\n");
    for (int i = 1; i <= movCavalo; i++) {
        printf("Baixo...Baixo...");
        while (j <= i) {
            printf("Esquerda(parou)\n");
            j++;
        }
    }

    return 0;
}