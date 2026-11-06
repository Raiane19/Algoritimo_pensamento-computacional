//Desenvolva um programa em linguagem C que utilize quatro matrizes de 10 linhas 
//e 5 colunas para armazenar os resultados das operações de soma, subtração, 
//multiplicação e divisão do número 8 pelos números de 1 a 10. 
//O programa deverá apresentar um menu interativo para que o usuário escolha 
//qual operação deseja visualizar. Utilize as estruturas de repetição `for` 
//e `do/while`, além da estrutura `switch/case` para controlar as opções. 
//O programa deverá continuar em execução até que o usuário escolha a opção 0 para encerrar.
#include <stdio.h>

int main() {

    // Declaracao das 4 matrizes
    int soma[10][5];
    int subtracao[10][5];
    int multiplicacao[10][5];
    float divisao[10][5];

    int i, j;
    int opcao;
    int numero = 8;

    // Preenchimento das matrizes
    for (i = 0; i < 10; i++) {

        for (j = 0; j < 5; j++) {

            int valor = i + 1;

            soma[i][j] = numero + valor;
            subtracao[i][j] = numero - valor;
            multiplicacao[i][j] = numero * valor;
            divisao[i][j] = (float) numero / valor;
        }
    }

    // Menu
    do {

        printf("\n===== TABUADA DO 8 =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");

        printf("\nEscolha a operacao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\n===== SOMA =====\n");

                for (i = 0; i < 10; i++) {
                    printf("8 + %d = %d\n",
                           i + 1, soma[i][0]);
                }
                break;

            case 2:
                printf("\n===== SUBTRACAO =====\n");

                for (i = 0; i < 10; i++) {
                    printf("8 - %d = %d\n",
                           i + 1, subtracao[i][0]);
                }
                break;

            case 3:
                printf("\n===== MULTIPLICACAO =====\n");

                for (i = 0; i < 10; i++) {
                    printf("8 x %d = %d\n",
                           i + 1, multiplicacao[i][0]);
                }
                break;

            case 4:
                printf("\n===== DIVISAO =====\n");

                for (i = 0; i < 10; i++) {
                    printf("8 / %d = %.2f\n",
                           i + 1, divisao[i][0]);
                }
                break;

            case 0:
                printf("\nCalculadora encerrada!\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
