// Controle de temperatura; 
//o programa resgistra as temperaturas dos 7 dias da semana e armazena os valores em um vetor.
//Depois, calula a média das temperaturas, 
//identifica o dia mais quente e o dia mais frio e apresenta os resultados na tela. Fazer quatro matriz 10/4,
#include <stdio.h>

int main(){
    float temperatura[7];
    int i;
    float soma = 0, media;
    float maior, menor;
    int diaMaior, diaMenor;

    
    //Leitura dos 7 temperatura
    printf("\n-- Teperatura dos 7 dias da semana --\n");
    
    for (i = 0; i < 7; i++){
    
        printf("\nDigite a %dº temperatura:", i + 1);
        scanf("%f", &temperatura[i]);
        
        soma += temperatura[i];
    }
    
    //Inicializa maior e menor com o primeiro elemento
    maior = temperatura[0];
    menor = temperatura[0];
    
    diaMaior = 0;
    diaMenor = 0;
    
    //Identifica a maior e a menor temperatura
    for ( i = 1; i < 7; i++) {

        if (temperatura[i] > maior) {   //acumula a soma
            maior = temperatura[i];
            diaMaior = i; 
        }
        if (temperatura[i] < menor) {   //verifica o menor
            menor = temperatura[i];
            diaMenor = i;
        }
    }
    
    media = soma / 7;   //calcula a  média
    

    //Exibi os resultados
    printf("-----------------------------------------");
    printf("\n---------- RESULTADO DA SEMANA ----------\n");
    printf("Temperatura Média: %.2f \n", media);
    printf("Dia da semana mais quente: Dia%d %.2f\n", diaMaior +1, maior);
    printf("Dia da semana mais frio: Dia%d %.2f\n", diaMenor +1, menor);
    printf("------------------------------------------");
 
    

    return 0;
}
