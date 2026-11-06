#include <stdio.h>

float calcularMedia(float nota1, float nota2){
    return (nota1 + nota2) / 2.0;
}

void exibirSituacao(float media){
    if (media >= 7.0){
        printf("APROVADO!\n");
    } else {
        printf("REPROVADO\n");
    }
}

int main(){
    float media, nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = calcularMedia(nota1, nota2);

    printf("Media: %.1f\n", media);

    exibirSituacao(media);

    return 0;
}
