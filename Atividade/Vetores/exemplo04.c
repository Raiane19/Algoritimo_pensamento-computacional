#include <stdio.h>

int main()
{
    int numeros[20];
    int i, soma = 0, somaPares = 0, somaMult3 = 0;
    int negativos = 0, positivos = 0, maior, menor;
    float mediaPares = 0.0;

    // Leitura dos 20 números
    printf("Digite os 20 números inteiros:\n");

    for (i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
    }

    // Inicializa maior e menor com o primeiro elemento
    maior = numeros[0];
    menor = numeros[0];

    // Processa os dados do vetor
    for (i = 0; i < 20; i++) {

        soma = soma + numeros[i];

        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        if (numeros[i] % 3 == 0) {
            somaMult3 = somaMult3 + numeros[i];
        }

        if (numeros[i] % 2 == 0) {
            somaPares = somaPares + numeros[i];
        }

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }

    // Calcula a média dos números pares
    if (positivos + negativos >= 0) {
        int quantidadePares = 0;

        for (i = 0; i < 20; i++) {
            if (numeros[i] % 2 == 0) {
                quantidadePares++;
            }
        }

        if (quantidadePares > 0) {
            mediaPares = (float)somaPares / quantidadePares;
        }
    }

    // Exibe os resultados
    printf("\nResultado:\n");
    printf("Soma: %d\n", soma);
    printf("Soma dos multiplos de 3: %d\n", somaMult3);
    printf("Media dos pares: %.2f\n", mediaPares);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);

    // Mostra todos os elementos do vetor
    printf("\nElementos do vetor:\n");

    for (i = 0; i < 20; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    printf("\n");

    return 0;
}
