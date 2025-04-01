#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //VARIÁVEIS DA CARTA 1;
    char estado_carta_1, codigo_carta_1[3], nome_da_cidade_carta_1[30];
    int pontos_turisticos_carta_1;
    unsigned long int populacao_carta_1;
    float area_carta_1, pib_carta_1;
    //VARIÁVEIS DA CARTA 2;
    char estado_carta_2, codigo_carta_2[3], nome_da_cidade_carta_2[30];
    int pontos_turisticos_carta_2;
    unsigned long int populacao_carta_2;
    float area_carta_2, pib_carta_2;

    int MAX_NUMBER = 5;
    int MIN_NUMBER = 1;

    printf("\n----- CONFIGURAÇÃO DA CARTA 1: -----\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta_1);
    printf("Digite o código da carta (3 caracteres): ");
    scanf("%3s", codigo_carta_1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta_1);
    printf("Digite a população: ");
    scanf("%lu", &populacao_carta_1);
    printf("Digite a área: ");
    scanf("%f", &area_carta_1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_1);

    float densidade_populacional_1 = (float) populacao_carta_1 / area_carta_1;
    float pib_per_capita_1 = (pib_carta_1 * (float) pow(10,9)) / (float) populacao_carta_1;
    
    printf("\n----- CONFIGURAÇÃO DA CARTA 2: -----\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta_2);
    printf("Digite o código da carta (3 caracteres): ");
    scanf("%3s", codigo_carta_2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta_2);
    printf("Digite a população: ");
    scanf("%lu", &populacao_carta_2);
    printf("Digite a área: ");
    scanf("%f", &area_carta_2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_2);

    float densidade_populacional_2 = (float) populacao_carta_2 / area_carta_2;
    float pib_per_capita_2 = (pib_carta_2 * (float) pow(10,9)) / (float) populacao_carta_2;
    
    int numeroAleatorio = rand() % (MAX_NUMBER + 1 - MIN_NUMBER) + MIN_NUMBER;

    if(numeroAleatorio == 1) {
        if (pib_carta_1 > pib_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, pib_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade_carta_1);
        } else if (pib_carta_1 < pib_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, pib_carta_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
    } else if(numeroAleatorio == 2) {
        if (densidade_populacional_1 < densidade_populacional_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, densidade_populacional_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, densidade_populacional_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade_carta_1);
        } else if (densidade_populacional_1 > densidade_populacional_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, densidade_populacional_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, densidade_populacional_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
    } else if(numeroAleatorio == 3) {
        if (populacao_carta_1 > populacao_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %lu\n", nome_da_cidade_carta_1, populacao_carta_1);
            printf("\nCarta 2 - %s: %lu\n", nome_da_cidade_carta_2, populacao_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade_carta_1);
        } else if (populacao_carta_1 < populacao_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %lu\n", nome_da_cidade_carta_1, populacao_carta_1);
            printf("\nCarta 2 - %s: %lu\n", nome_da_cidade_carta_2, populacao_carta_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
    } else if(numeroAleatorio == 4) {
        if (area_carta_1 > area_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, area_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, area_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade_carta_1);
        } else if (area_carta_1 < area_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, area_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, area_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade_carta_1);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
    } else if(numeroAleatorio == 5) {
        if (pib_per_capita_1 > pib_per_capita_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, pib_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade_carta_1);
        } else if (pib_per_capita_1 < pib_per_capita_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_da_cidade_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_da_cidade_carta_2, pib_carta_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
    } else {
        printf("Número aleatório inválido.\n");
    }
}
