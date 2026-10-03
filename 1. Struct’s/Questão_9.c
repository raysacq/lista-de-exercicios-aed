#include <stdio.h>

typedef struct {
    char nome[51];
    int idade;
    char diagnostico[101];
} Paciente;

void exibir_maiores_de_60(Paciente pacientes[], int quantidade) {
    for (int i = 0; i < quantidade; i++)
        if (pacientes[i].idade > 60)
            printf("%s, %d anos - %s\n", pacientes[i].nome, pacientes[i].idade, pacientes[i].diagnostico);
}

int main(void) {
    Paciente pacientes[100];
    int quantidade;
    printf("Quantidade de pacientes (ate 100): ");
    scanf("%d", &quantidade);
    if (quantidade < 1 || quantidade > 100) return 0;
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: ");
        scanf(" %50[^\n]", pacientes[i].nome);
        printf("Idade: ");
        scanf("%d", &pacientes[i].idade);
        printf("Diagnostico: ");
        scanf(" %100[^\n]", pacientes[i].diagnostico);
    }
    exibir_maiores_de_60(pacientes, quantidade);
    return 0;
}