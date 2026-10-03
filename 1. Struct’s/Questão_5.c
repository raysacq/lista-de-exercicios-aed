#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[51];
    char cargo[31];
    float salario;
} Funcionario;

int main(void) {
    int quantidade;
    printf("Quantidade de funcionarios: ");
    scanf("%d", &quantidade);
    if (quantidade <= 0) return 0;
    Funcionario *funcionarios = malloc(quantidade * sizeof(Funcionario));
    if (funcionarios == NULL) return 1;
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: ");
        scanf(" %50[^\n]", funcionarios[i].nome);
        printf("Cargo: ");
        scanf(" %30[^\n]", funcionarios[i].cargo);
        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);
    }
    printf("\nFuncionarios cadastrados:\n");
    for (int i = 0; i < quantidade; i++)
        printf("%s | %s | R$ %.2f\n", funcionarios[i].nome, funcionarios[i].cargo, funcionarios[i].salario);
    free(funcionarios);
    return 0;
}