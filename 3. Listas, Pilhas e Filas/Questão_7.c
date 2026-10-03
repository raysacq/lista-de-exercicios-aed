#include <stdio.h>
#include <string.h>

int main(void) {
    char texto[1001], pilha[1001];
    int topo = -1;
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    for (int i = 0; texto[i] != '\0'; i++) pilha[++topo] = texto[i];
    while (topo >= 0) putchar(pilha[topo--]);
    putchar('\n');
    return 0;
}