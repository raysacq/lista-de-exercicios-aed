#include <stdio.h>

#define TAM 100
int main(void) {
    int fila[TAM], pilha[TAM], inicio = 0, fim = 0, topo = -1, n;
    printf("Quantidade de elementos (ate 100): "); scanf("%d", &n);
    if (n < 0 || n > TAM) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &fila[fim++]);
    while (inicio < fim) pilha[++topo] = fila[inicio++];
    printf("Fila invertida: ");
    while (topo >= 0) printf("%d ", pilha[topo--]);
    printf("\n");
    return 0;
}