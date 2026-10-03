#include <stdio.h>

int main(void) {
    int numero, pilha[32], topo = -1;
    scanf("%d", &numero);
    if (numero == 0) { printf("0\n"); return 0; }
    if (numero < 0) { printf("-"); numero = -numero; }
    while (numero > 0) { pilha[++topo] = numero % 2; numero /= 2; }
    while (topo >= 0) printf("%d", pilha[topo--]);
    printf("\n");
    return 0;
}