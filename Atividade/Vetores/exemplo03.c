#include <stdio.h>

int main(){
    int numeros[10];
    int i;
    float media;
    int soma = 0;
    int maior, menor;
    
    //Leitura dos 10 números
    printf("Digite o 10 números inteiros:\n" );
    for ( i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    
    //Inicializa maior e menor com o primeiro elemento
    maior = numeros[0];
    menor = numeros[0];
    
    //Proceessa os dados d vetor
    for ( i = 0; i < 10; i++) {
        soma = soma + numeros[i];
        if (numeros[i] > maior) {   //acumula a soma
            maior = numeros[i];      //veifica o maior
        }
        if (numeros[i] < menor) {   //verifica o menor
            menor = numeros[i];
        }
    }
    
    media = (float)soma / 10;   //calcula a  média
    

    //Exibi os resultados
    printf("\nResultado:\n");
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    //Mostra todos os elementos do vetor
    printf("\nElementos do vetor:\n");
    for (int i = 0; i < 10; i++){
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }
    printf("\n");
    return 0;
}
