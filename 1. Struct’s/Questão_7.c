#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    char telefone[16];
} Contato;

int main(void) {
    Contato contatos[100];
    int quantidade, encontrado = 0;
    char busca[51];
    printf("Quantidade de contatos (ate 100): ");
    scanf("%d", &quantidade);
    if (quantidade < 1 || quantidade > 100) return 0;
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: ");
        scanf(" %50[^\n]", contatos[i].nome);
        printf("Telefone: ");
        scanf(" %15s", contatos[i].telefone);
    }
    printf("Nome para buscar: ");
    scanf(" %50[^\n]", busca);
    for (int i = 0; i < quantidade; i++)
        if (strcmp(contatos[i].nome, busca) == 0) {
            printf("Telefone: %s\n", contatos[i].telefone);
            encontrado = 1;
        }
    if (!encontrado) printf("Contato nao encontrado.\n");
    return 0;
}