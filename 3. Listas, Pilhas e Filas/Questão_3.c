#include <stdio.h>
#include <stdlib.h>

typedef struct No { int valor; struct No *proximo; } No;

void inserir_ordenado(No **lista, int valor) {
    No *novo = malloc(sizeof(No));
    if (!novo) return;
    novo->valor = valor;
    if (*lista == NULL || valor < (*lista)->valor) { novo->proximo = *lista; *lista = novo; return; }
    No *atual = *lista;
    while (atual->proximo && atual->proximo->valor <= valor) atual = atual->proximo;
    novo->proximo = atual->proximo; atual->proximo = novo;
}

int main(void) {
    No *lista = NULL;
    int n, valor;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { scanf("%d", &valor); inserir_ordenado(&lista, valor); }
    while (lista) { No *temp = lista; printf("%d ", lista->valor); lista = lista->proximo; free(temp); }
    printf("\n");
    return 0;
}