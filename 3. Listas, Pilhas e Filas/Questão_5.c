#include <stdio.h>

#define TAM 100
int pilha[TAM], topo = -1;

void push(int valor) {
    if (topo == TAM - 1) printf("Pilha cheia.\n");
    else pilha[++topo] = valor;
}

void pop(void) {
    if (topo == -1) printf("Pilha vazia.\n");
    else printf("Removido: %d\n", pilha[topo--]);
}

void mostrar_topo(void) {
    if (topo == -1) printf("Pilha vazia.\n");
    else printf("Topo: %d\n", pilha[topo]);
}

int main(void) {
    int op, valor;
    do {
        printf("1 Push 2 Pop 3 Top 4 Vazia? 0 Sair: "); scanf("%d", &op);
        if (op == 1) { scanf("%d", &valor); push(valor); }
        else if (op == 2) pop();
        else if (op == 3) mostrar_topo();
        else if (op == 4) printf(topo == -1 ? "Sim\n" : "Nao\n");
    } while (op != 0);
    return 0;
}