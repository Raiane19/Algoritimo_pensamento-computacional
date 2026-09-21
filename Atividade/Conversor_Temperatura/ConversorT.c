#include <stdio.h>

int main() {
    int opcao = 0;
    float temperatura, resultado;

    while (opcao != 5) {
        printf("\n=== CONVERSOR DE TEMPERATURA ===\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n");
        printf("3 - Celsius para Kelvin\n");
        printf("4 - Kelvin para Celsius\n");
        printf("5 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite a temperatura: ");
            scanf("%f", &temperatura);
        }

        if (opcao == 1) {
            resultado = (temperatura * 9 / 5) + 32;
            printf("Resultado: %.2f Fahrenheit\n", resultado);
        }

        if (opcao == 2) {
            resultado = (temperatura - 32) * 5 / 9;
            printf("Resultado: %.2f Celsius\n", resultado);
        }

        if (opcao == 3) {
            resultado = temperatura + 273.15;
            printf("Resultado: %.2f Kelvin\n", resultado);
        }

        if (opcao == 4) {
            resultado = temperatura - 273.15;
            printf("Resultado: %.2f Celsius\n", resultado);
        }

        if (opcao == 5) {
            printf("Programa encerrado!\n");
        }

        if (opcao < 1 || opcao > 5) {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
