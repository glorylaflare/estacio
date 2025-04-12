#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

void aplicarHabilidade(int tabuleiro[10][10], int habilidade[3][5], int linhaBase, int colunaBase);

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navioVertical[3][2] = { {5, 1}, {5, 1}, {5, 1} };
    int navioHorizontal[3][2] = { {0, 1}, {0, 1}, {0, 1} }; 

    // Preenche o tabuleiro com os navios vertical e horizontal
    for (int i = 0; i < 3; i++) {
        int linha = navioHorizontal[i][0];
        int coluna = navioHorizontal[i][1];
        
        for (int k = 0; k < 3; k++) { 
            tabuleiro[linha][coluna + k] = 3; 
        }
    }

    for (int i = 0; i < 3; i++) {
        int linha = navioVertical[i][0];
        int coluna = navioVertical[i][1];
        
        for (int k = 0; k < 3; k++) {
            tabuleiro[linha + k][coluna] = 3;
        }
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int navioDiagonalA[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} }; 
    int navioDiagonalB[3][3] = { {0, 0, 1}, {0, 1, 0}, {1, 0, 0} }; 

    int linhaBaseA = 2;
    int colunaBaseA = 2;

    int linhaBaseB = 5;
    int colunaBaseB = 4;
    
    // Preenche o tabuleiro com os navios diagonais
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (navioDiagonalA[i][j] == 1) {
                tabuleiro[linhaBaseA + i][colunaBaseA + j] = 3;
            }

            if (navioDiagonalB[i][j] == 1) {
                tabuleiro[linhaBaseB + i][colunaBaseB + j] = 3;
            }
        }
    }
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    int cone[3][5] = { {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1} };    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    int octaedro[3][5] = { {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0} };
    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int cruz[3][5] = { {0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 0, 0} }; 
    
    // Função para aplicar a habilidade no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 7, 5);         
    aplicarHabilidade(tabuleiro, octaedro, 4, 1);     
    aplicarHabilidade(tabuleiro, cruz, 1, 5);        

    // Exibe o tabuleiro final
    printf("Tabuleiro Final:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void aplicarHabilidade(int tabuleiro[10][10], int habilidade[3][5], int linhaBase, int colunaBase) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidade[i][j] == 1) {
                int linha = linhaBase + i;
                int coluna = colunaBase + j;
                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (tabuleiro[linha][coluna] != 3) {
                        tabuleiro[linha][coluna] = 1;
                    }
                }
            }
        }
    }
}