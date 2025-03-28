#include <stdio.h>

int main() {
    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("Digite a altura do aluno: ");
    scanf("%f", &altura);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("matricula: %.d\n", matricula);

    return 0;
}