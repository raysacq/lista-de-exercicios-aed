#include <stdio.h>

#define TAM 5
int fila[TAM], inicio = 0, quantidade = 0;

int vazia(void) { return quantidade == 0; }

void enqueue(int valor) {
    if (quantidade == TAM) { printf("Fila cheia.\n"); return; }
    int fim = (inicio + quantidade) % TAM;
    fila[fim] = valor;
    quantidade++;
}

void dequeue(void) {
    if (vazia()) { printf("Fila vazia.\n"); return; }
    printf("Removido: %d\n", fila[inicio]);
    inicio = (inicio + 1) % TAM;
    quantidade--;
}

int main(void) {
    int op, valor;
    do {
        printf("1 Enqueue 2 Dequeue 3 Front 0 Sair: "); scanf("%d", &op);
        if (op == 1) { scanf("%d", &valor); enqueue(valor); }
        else if (op == 2) dequeue();
        else if (op == 3) {
            if (vazia()) printf("Fila vazia.\n"); else printf("Inicio: %d\n", fila[inicio]);
        }
    } while (op != 0);
    return 0;
}