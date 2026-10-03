#include <stdio.h>
#include <stdlib.h>

typedef struct No { int valor; struct No *proximo; } No;

void inserir_inicio(No **lista, int valor) {
    No *novo = malloc(sizeof(No));
    if (!novo) return;
    novo->valor = valor; novo->proximo = *lista; *lista = novo;
}

void inserir_final(No **lista, int valor) {
    No *novo = malloc(sizeof(No));
    if (!novo) return;
    novo->valor = valor; novo->proximo = NULL;
    if (*lista == NULL) { *lista = novo; return; }
    No *atual = *lista;
    while (atual->proximo) atual = atual->proximo;
    atual->proximo = novo;
}

void remover_valor(No **lista, int valor) {
    No *atual = *lista, *anterior = NULL;
    while (atual && atual->valor != valor) { anterior = atual; atual = atual->proximo; }
    if (!atual) return;
    if (anterior) anterior->proximo = atual->proximo; else *lista = atual->proximo;
    free(atual);
}

void exibir(No *lista) {
    while (lista) { printf("%d ", lista->valor); lista = lista->proximo; }
    printf("\n");
}

int main(void) {
    No *lista = NULL;
    int op, valor;
    do {
        printf("1 Inicio 2 Final 3 Remover 4 Exibir 0 Sair: "); scanf("%d", &op);
        if (op >= 1 && op <= 3) { printf("Valor: "); scanf("%d", &valor); }
        if (op == 1) inserir_inicio(&lista, valor);
        else if (op == 2) inserir_final(&lista, valor);
        else if (op == 3) remover_valor(&lista, valor);
        else if (op == 4) exibir(lista);
    } while (op != 0);
    while (lista) { No *temp = lista; lista = lista->proximo; free(temp); }
    return 0;
}