#include <stdio.h>

int main() {
    int sala[3][3];
    int livres = 0, ocupadas = 0;
    int numero = 1;

    // Preenchendo a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            do {
                printf("\nPoltrona %d\n", numero);
                printf("[0] para poltrona ocupada\n");
                printf("[1] para poltrona livre\n");
                printf("Digite: ");
                scanf("%d", &sala[i][j]);

                if (sala[i][j] != 0 && sala[i][j] != 1) {
                    printf("ERRO!!! Digite apenas [0] ou [1].\n");
                }

            } while (sala[i][j] != 0 && sala[i][j] != 1);

            // Contagem das poltronas
            if (sala[i][j] == 0) {
                ocupadas++;
            } else {
                livres++;
            }

            numero++;
        }
    }

    // Exibindo a situação de cada poltrona
    printf("\n===== Situacao da sala =====\n");

    numero = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (sala[i][j] == 0) {
                printf("Poltrona %d: Ocupada\n", numero);
            } else {
                printf("Poltrona %d: Livre\n", numero);
            }

            numero++;
        }

        printf("\n");
    }

    // Exibindo os totais
    printf("===== Total de poltronas =====\n");
    printf("Livres: %d\n", livres);
    printf("Ocupadas: %d\n", ocupadas);
    printf("==============================\n");

    return 0;
}


