#include <stdio.h>
#include <stdlib.h>

typedef struct No { int valor; struct No *proximo; } No;

void reverter(No **lista) {
    No *anterior = NULL, *atual = *lista;
    while (atual) {
        No *proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    *lista = anterior;
}

int main(void) {
    No *lista = NULL, *fim = NULL;
    int n, valor;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor); No *novo = malloc(sizeof(No));
        if (!novo) return 1;
        novo->valor = valor; novo->proximo = NULL;
        if (!lista) lista = novo; else fim->proximo = novo;
        fim = novo;
    }
    reverter(&lista);
    while (lista) { No *temp = lista; printf("%d ", lista->valor); lista = lista->proximo; free(temp); }
    printf("\n");
    return 0;
}