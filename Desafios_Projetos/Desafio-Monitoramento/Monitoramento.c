#include <stdio.h>

int main()
{
    float temperatura;
    float temperaturas[100];

    float soma = 0;
    float maior = 0;
    float menor = 0;
    float media;

    int quantidade = 0;
    int continuar = 1;

    // ADICIONADO: contador de temperaturas acima de 80
    int temperaturasAcima80 = 0;

    char entrada[100];

    printf("========================================\n");
    printf("   SISTEMA DE MONITORAMENTO DE TEMPERATURA\n");
    printf("========================================\n");

    // Primeira temperatura
    do
    {
        printf("\nDigite a primeira temperatura (°C): ");
        fgets(entrada, sizeof(entrada), stdin);

        if (sscanf(entrada, "%f", &temperatura) != 1)
        {
            printf("ERRO: digite apenas um valor numerico.\n");
        }
        else
        {
            break;
        }

    } while (1);

    // Guarda a primeira temperatura
    temperaturas[quantidade] = temperatura;
    quantidade++;

    soma = temperatura;
    maior = temperatura;
    menor = temperatura;

    // ADICIONADO: verifica se a primeira temperatura é acima de 80
    if (temperatura > 80)
    {
        temperaturasAcima80++;
    }

    // Enquanto o usuário quiser continuar
    while (continuar == 1)
    {
        printf("\n----------------------------------------\n");

        if (temperatura >= 80)
        {
            printf("ALERTA: temperatura acima do limite!\n");
        }
        else
        {
            printf("Temperatura atual: %.1f °C\n", temperatura);
        }

        // ADICIONADO: verifica se atingiu 3 temperaturas acima de 80
        if (temperaturasAcima80 >= 3)
        {
            printf("\nALERTA: foram registradas 3 temperaturas acima de 80 °C!\n");
            printf("O monitoramento sera encerrado automaticamente.\n");
            break;
        }

        // Pergunta se deseja informar outra temperatura
        do
        {
            printf("\nDeseja informar uma nova temperatura?\n");
            printf("1 - Sim\n");
            printf("0 - Nao\n");
            printf("Escolha: ");

            fgets(entrada, sizeof(entrada), stdin);

            if (sscanf(entrada, "%d", &continuar) != 1 ||
                (continuar != 0 && continuar != 1))
            {
                printf("ERRO: digite apenas 1 para Sim ou 0 para Nao.\n");
                continuar = -1;
            }

        } while (continuar != 0 && continuar != 1);

        // Se escolher não, encerra o monitoramento
        if (continuar == 0)
        {
            break;
        }

        // Solicita nova temperatura
        do
        {
            printf("\nDigite a temperatura (°C): ");
            fgets(entrada, sizeof(entrada), stdin);

            if (sscanf(entrada, "%f", &temperatura) != 1)
            {
                printf("ERRO: digite apenas um valor numerico.\n");
            }
            else
            {
                break;
            }

        } while (1);

        // Guarda a temperatura
        temperaturas[quantidade] = temperatura;
        quantidade++;

        // Soma para calcular a média
        soma = soma + temperatura;

        // Verifica maior temperatura
        if (temperatura > maior)
        {
            maior = temperatura;
        }

        // Verifica menor temperatura
        if (temperatura < menor)
        {
            menor = temperatura;
        }

        // ADICIONADO: conta temperaturas acima de 80
        if (temperatura > 80)
        {
            temperaturasAcima80++;
        }
    }

    // Calcula a média
    media = soma / quantidade;

    // Relatório final
    printf("\n\n========================================\n");
    printf("           RELATORIO FINAL\n");
    printf("========================================\n");

    printf("Media das temperaturas: %.1f °C\n", media);
    printf("Maior temperatura: %.1f °C\n", maior);
    printf("Menor temperatura: %.1f °C\n", menor);

    printf("\nTemperaturas informadas:\n");

    for (int i = 0; i < quantidade; i++)
    {
        printf("%d - %.1f °C\n", i + 1, temperaturas[i]);
    }

    printf("\n========================================\n");
    printf("       MONITORAMENTO ENCERRADO\n");
    printf("========================================\n");

    return 0;
}
