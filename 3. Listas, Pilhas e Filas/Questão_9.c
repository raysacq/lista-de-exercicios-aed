#include <stdio.h>

#define TAM 100
int fila[TAM], inicio = 0, fim = 0;

int vazia(void) { return inicio == fim; }

void enqueue(int valor) {
    if (fim == TAM) printf("Fila cheia.\n");
    else fila[fim++] = valor;
}

void dequeue(void) {
    if (vazia()) printf("Fila vazia.\n");
    else printf("Removido: %d\n", fila[inicio++]);
}

int main(void) {
    int op, valor;
    do {
        printf("1 Enqueue 2 Dequeue 3 Front 4 Vazia? 0 Sair: "); scanf("%d", &op);
        if (op == 1) { scanf("%d", &valor); enqueue(valor); }
        else if (op == 2) dequeue();
        else if (op == 3) {
            if (vazia()) printf("Fila vazia.\n"); else printf("Inicio: %d\n", fila[inicio]);
        } else if (op == 4) printf(vazia() ? "Sim\n" : "Nao\n");
    } while (op != 0);
    return 0;
}