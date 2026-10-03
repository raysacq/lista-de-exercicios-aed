#include <stdio.h>

typedef struct {
    char nome[51];
    int idade;
    float altura;
} Pessoa;

int main(void) {
    Pessoa pessoa;
    printf("Nome: ");
    scanf(" %50[^\n]", pessoa.nome);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    printf("Altura: ");
    scanf("%f", &pessoa.altura);
    printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n", pessoa.nome, pessoa.idade, pessoa.altura);
    return 0;
}