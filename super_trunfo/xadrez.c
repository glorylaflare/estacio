#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int torre = 5; // Exemplo: Torre pode se mover 5 casas | 5 casas para a direita
    int bispo = 5; // Exemplo: Bispo pode se mover 5 casas | 5 cadas em diagonal cima e direita
    int rainha = 8; // Exemplo: Rainha pode se mover 8 casas | 8 casas para a esquerda

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while(bispo > 0) {
        printf("Cima, Direita\n");
        bispo--;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do {
        printf("Direita\n");
        torre--;
    } while(torre > 0);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for(int i = 0; i < rainha; i++) {
        printf("Esquerda\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int cavalo_horizontal = 2; // Exemplo: Cavalo pode se mover 2 casas | 2 casas para baixo
    int cavalo_vertical = 1; // Exemplo: Cavalo pode se mover 1 casa | 1 casa para a esquerda

    for(int i = 0; i < cavalo_vertical; i++) {
        while(cavalo_horizontal > 0) {
            printf("Baixo\n");
            cavalo_horizontal--;
        }
        printf("Esquerda\n");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Chamada da função recursiva para o movimento do Bispo
    movimento_bispo(5); // Exemplo: 5 casas para cima e direita
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // Exemplo: Crie uma função para o movimento do Cavalo.
    movimento_cavalo(2, 1); // Exemplo: 2 casas para baixo e 1 casa para a esquerda

    return 0;
}

void movimento_bispo(int casas) {
    if(casas > 0) {
        printf("Cima, Direita\n");
        movimento_bispo(casas - 1);
    }
}

void movimento_cavalo(int horizontal, int vertical) {
    for(int i = 0, j = 0; i < vertical, j < horizontal; j++,i++) {
        if(i <= 1) {
            printf("Baixo\n");
        }
        if(j < 1) {
            continue;
        } else {
            printf("Esquerda\n");
            break;
        }
    }
}