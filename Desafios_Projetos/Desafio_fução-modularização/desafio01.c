
#include <stdio.h>

void lerNotas(float notas[][3], int alunos) {
    int i, j;

    for (i = 0; i < alunos; i++) {
        printf("\nAluno %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            do {
                printf("Digite a nota %d (0 a 10): ", j + 1);
                scanf("%f", &notas[i][j]);

                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Nota invalida! Digite entre 0 e 10.\n");
                }

            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
    }
}

float calcularMedia(float notas[][3], int aluno) {
    return (notas[aluno][0] + notas[aluno][1] +
            notas[aluno][2]) / 3.0;
}

void exibirSituacao(float media) {
    if (media >= 7.0) {
        printf("APROVADO!\n");
    } else if (media >= 5.0) {
        printf("RECUPERACAO!\n");
    } else {
        printf("REPROVADO!\n");
    }
}

float calcularMediaTurma(float notas[][3], int alunos) {
    float soma = 0;
    int i;

    for (i = 0; i < alunos; i++) {
        soma += calcularMedia(notas, i);
    }

    return soma / alunos;
}

int encontrarMelhorAluno(float notas[][3], int alunos) {
    int i;
    int melhor = 0;
    float maiorMedia = calcularMedia(notas, 0);

    for (i = 1; i < alunos; i++) {
        if (calcularMedia(notas, i) > maiorMedia) {
            maiorMedia = calcularMedia(notas, i);
            melhor = i;
        }
    }

    return melhor;
}

int main() {
    float notas[5][3];
    float media;
    float mediaTurma;
    int melhor;
    int aprovados = 0;
    int recuperados = 0;
    int reprovados = 0;
    int i;

    lerNotas(notas, 5);

    printf("\n--- RESULTADO ---\n");

    for (i = 0; i < 5; i++) {
        media = calcularMedia(notas, i);

        printf("Aluno %d - Media: %.2f - ", i + 1, media);
        exibirSituacao(media);

        if (media >= 7) {
            aprovados++;
        } else if (media >= 5) {
            recuperados++;
        } else {
            reprovados++;
        }
    }

    mediaTurma = calcularMediaTurma(notas, 5);

    printf("\nMedia geral da turma: %.2f\n", mediaTurma);

    melhor = encontrarMelhorAluno(notas, 5);

    printf("\nAluno(s) com maior media:\n");

    for (i = 0; i < 5; i++) {
        media = calcularMedia(notas, i);

        if (media == calcularMedia(notas, melhor)) {
            printf("Aluno %d - Media: %.2f\n", i + 1, media);
        }
    }

    printf("\nQuantidade de aprovados: %d\n", aprovados);
    printf("Quantidade em recuperacao: %d\n", recuperados);
    printf("Quantidade de reprovados: %d\n", reprovados);

    return 0;
}
