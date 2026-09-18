#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846
#define E  2.71828182845904523536

// ======================================================
// FUNÇÕES AUXILIARES
// ======================================================

// Limpa caracteres que ficaram no teclado
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Calcula o MDC
int calcular_mdc(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// Calcula o MMC
long long calcular_mmc(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }

    return llabs((long long)a / calcular_mdc(a, b) * b);
}

// Calcula o fatorial
long long calcular_fatorial(int n) {
    long long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

// Converte graus para radianos
double graus_para_radianos(double graus) {
    return graus * PI / 180.0;
}

// ======================================================
// MENU
// ======================================================

void mostrar_menu() {
    printf("\n");
    printf("=====================================\n");
    printf("          CALCULADORA 20 OPERAÇÕES\n");
    printf("=====================================\n");

    printf(" 1 - Soma\n");
    printf(" 2 - Subtração\n");
    printf(" 3 - Multiplicação\n");
    printf(" 4 - Divisão\n");
    printf(" 5 - Potência\n");
    printf(" 6 - Raiz quadrada\n");
    printf(" 7 - Número PI\n");
    printf(" 8 - Número E\n");
    printf(" 9 - Seno\n");
    printf("10 - Cosseno\n");
    printf("11 - Tangente\n");
    printf("12 - Gamma\n");
    printf("13 - Fatorial\n");
    printf("14 - MDC\n");
    printf("15 - MMC\n");
    printf("16 - Raiz cúbica\n");
    printf("17 - Logaritmo\n");
    printf("18 - Valor absoluto\n");
    printf("19 - Porcentagem\n");
    printf("20 - Média aritmética\n");
    printf(" 0 - Encerrar\n");
    printf("=====================================\n");
}

// ======================================================
// MAIN
// ======================================================

int main() {

    int escolha;

    do {

        mostrar_menu();

        printf("\nEscolha uma opção: ");

        if (scanf("%d", &escolha) != 1) {
            printf("\nErro: digite apenas números.\n");
            limpar_buffer();
            continue;
        }

        switch (escolha) {

            // ==========================================
            // 1 - SOMA
            // ==========================================
            case 1: {
                double n1, n2;

                printf("\nDigite o primeiro número: ");
                scanf("%lf", &n1);

                printf("Digite o segundo número: ");
                scanf("%lf", &n2);

                printf("\nResultado: %.2f\n", n1 + n2);
                break;
            }

            // ==========================================
            // 2 - SUBTRAÇÃO
            // ==========================================
            case 2: {
                double n1, n2;

                printf("\nDigite o primeiro número: ");
                scanf("%lf", &n1);

                printf("Digite o segundo número: ");
                scanf("%lf", &n2);

                printf("\nResultado: %.2f\n", n1 - n2);
                break;
            }

            // ==========================================
            // 3 - MULTIPLICAÇÃO
            // ==========================================
            case 3: {
                double n1, n2;

                printf("\nDigite o primeiro número: ");
                scanf("%lf", &n1);

                printf("Digite o segundo número: ");
                scanf("%lf", &n2);

                printf("\nResultado: %.2f\n", n1 * n2);
                break;
            }

            // ==========================================
            // 4 - DIVISÃO
            // ==========================================
            case 4: {
                double n1, n2;

                printf("\nDigite o primeiro número: ");
                scanf("%lf", &n1);

                printf("Digite o segundo número: ");
                scanf("%lf", &n2);

                if (n2 == 0) {
                    printf("\nErro: não é possível dividir por zero.\n");
                } else {
                    printf("\nResultado: %.2f\n", n1 / n2);
                }

                break;
            }

            // ==========================================
            // 5 - POTÊNCIA
            // ==========================================
            case 5: {
                double base, expoente;

                printf("\nDigite a base: ");
                scanf("%lf", &base);

                printf("Digite o expoente: ");
                scanf("%lf", &expoente);

                printf("\nResultado: %.2f\n", pow(base, expoente));
                break;
            }

            // ==========================================
            // 6 - RAIZ QUADRADA
            // ==========================================
            case 6: {
                double numero;

                printf("\nDigite o número: ");
                scanf("%lf", &numero);

                if (numero < 0) {
                    printf("\nErro: não existe raiz quadrada real de número negativo.\n");
                } else {
                    printf("\nResultado: %.2f\n", sqrt(numero));
                }

                break;
            }

            // ==========================================
            // 7 - PI
            // ==========================================
            case 7:
                printf("\nPI = %.15f\n", PI);
                break;

            // ==========================================
            // 8 - E
            // ==========================================
            case 8:
                printf("\nE = %.15f\n", E);
                break;

            // ==========================================
            // 9 - SENO
            // ==========================================
            case 9: {
                double graus;

                printf("\nDigite o ângulo em graus: ");
                scanf("%lf", &graus);

                double radianos = graus_para_radianos(graus);

                printf("\nsen(%.2f°) = %.4f\n",
                       graus, sin(radianos));

                break;
            }

            // ==========================================
            // 10 - COSSENO
            // ==========================================
            case 10: {
                double graus;

                printf("\nDigite o ângulo em graus: ");
                scanf("%lf", &graus);

                double radianos = graus_para_radianos(graus);

                printf("\ncos(%.2f°) = %.4f\n",
                       graus, cos(radianos));

                break;
            }
