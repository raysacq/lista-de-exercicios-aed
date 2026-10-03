#include <stdio.h>
#include <stdlib.h>

typedef struct No { int valor; struct No *proximo; } No;

int contar(No *lista) {
    int quantidade = 0;
    while (lista) { quantidade++; lista = lista->proximo; }
    return quantidade;
}

int main(void) {
    No *lista = NULL, *fim = NULL;
    int n, valor;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        No *novo = malloc(sizeof(No));
        if (!novo) return 1;
        novo->valor = valor; novo->proximo = NULL;
        if (!lista) lista = novo; else fim->proximo = novo;
        fim = novo;
    }
    printf("Quantidade: %d\n", contar(lista));
    while (lista) { No *temp = lista; lista = lista->proximo; free(temp); }
    return 0;
}