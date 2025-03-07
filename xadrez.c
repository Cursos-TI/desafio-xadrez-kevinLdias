#include <stdio.h>

// Recursividade no movimento da torre
void moverTorre(int movimento) {
    if (movimento > 0) {
        printf("Direita");
        if (movimento > 1) {
            printf("...\n");
        }
        else  {printf(" (parou)\n"); }
        moverTorre(movimento - 1);
    }
}
// Recursividade no movimento do bispo
void moverBispo(int movimento) {
    if (movimento > 0) {
        for (int i = 1; i <= 1; i++) {
            for (int j = 1; j <= 1; j++) {
                printf("Cima, ");
            }
            printf("Direita");
        }
        if (movimento > 1) {
            printf("...\n");
        }
        else { printf("(parou)\n"); }
        moverBispo(movimento - 1);
    }
}
// Recursividade no movimento da rainha
void moverRainha(int movimento) {
    if (movimento > 0) {
        printf("Esquerda");
        if (movimento > 1) {
            printf("...\n");
        }
        else  {printf(" (parou)\n"); }
        moverRainha(movimento - 1);
    }
}
// Movimentação do cavalo com loop aninhado
void moverCavalo(int movimento) {
int cont = 1;
while(cont <= movimento) {
    for (int i = 1; i <= 2; i++) {
        printf("Cima...\n");
    }
    printf("Direita");
    if (cont < movimento) {
        printf("!\n");
    }
    else { printf("(parou)\n"); }
    cont++;
}
}

int main() {
    // resp definida como padrao S ou s
    char resp = 'S';
    // Escolhendo qual peca usuário deseja mover e adicionando uma observacao:
    printf("\n<<<ESCOLHA A PECA QUE DESEJA MOVER>>>\n");
    printf("\nOBSERVACAO:\n---Uma movimentacao do BISPO equivale a: Cima, Direta\n");
    printf("---Uma movimentacao do CAVALO equivale a: Cima, Cima, Direita\n");

    do {
        printf("\n[1] TORRE\n");
        printf("[2] BISPO\n");
        printf("[3] RAINHA\n");
        printf("[4] CAVALO\n");

        printf("\nDIGITE: ");
        int escolha, mov;
        scanf("%d", &escolha);

        // Definindo a quantidade de movimentos da peca
        printf("Muito bem! Agora informe quantas vezes deseja mover essa peca: ");
        scanf("%d", &mov);

        switch (escolha)
        {
            case 1:
                printf("\nTORRE:\n");
                moverTorre(mov);
                break; 
            case 2:
                printf("\nBISPO:\n");
                moverBispo(mov);
                break;
            case 3: 
                printf("\nRAINHA:\n");
                moverRainha(mov);
                break;
            case 4:
                printf("\nCAVALO:\n");
                moverCavalo(mov);
                break;
            default: printf("OPCÃO INVÁLIDA!\n");
        } 

        printf("\nDESEJA JOGAR NOVAMENTE? [S/N] ");
        scanf(" %c", &resp);

    }
    while (resp != 'N' && resp != 'n');
    
    return 0;
}