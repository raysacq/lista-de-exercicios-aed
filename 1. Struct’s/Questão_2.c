#include <stdio.h>

typedef struct {
    char nome[51];
    int matricula;
    float nota;
} Aluno;

int main(void) {
    Aluno alunos[5];
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %50[^\n]", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        soma += alunos[i].nota;
    }
    printf("Media das notas: %.2f\n", soma / 5);
    return 0;
}