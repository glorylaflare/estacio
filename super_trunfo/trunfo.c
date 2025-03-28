/*
- Usuário deve inserir duas cartas
- Informações a cada carta 
    - Estado | char
    - Código da carta | char[] string
    - Nome da cidade | char[] string
    - População | int
    - Área | float
    - PIB | float
    - Números de pontos turísticos | int

## Requisitos funcionais ##

+ O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
+ O programa deve armazenar os dados lidos em variáveis apropriadas.
+ O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

## Requisitos não funcionais ##

+ Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
+ Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
+ Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado_carta1, estado_carta2, codigo_carta1[3], codigo_carta2[3], nome_da_cidade_carta1[30], nome_da_cidade_carta2[30];
    int populacao_carta1, populacao_carta2, pontos_turisticos_carta1, pontos_turisticos_carta2;
    float area_carta1, area_carta2, pib_carta1, pib_carta2;
    
    printf("\nCarta 1:\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta1);
    printf("Digite o código da carta (2 caracteres): ");
    scanf("%2s", codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta1);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta1);
    printf("Digite a área: ");
    scanf("%f", &area_carta1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    printf("\nCarta 2:\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta2);
    printf("Digite o código da carta (2 caracteres): ");
    scanf("%2s", codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta2);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta2);
    printf("Digite a área: ");
    scanf("%f", &area_carta2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta2);

    return 0;
}
