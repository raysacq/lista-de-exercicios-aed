#include <stdio.h>

int maior_elemento(int vet[], int n) {
    if (n == 1) return vet[0];
    int maior = maior_elemento(vet, n - 1);
    return vet[n - 1] > maior ? vet[n - 1] : maior;
}

int main(void) {
    int n, vet[1000];
    scanf("%d", &n);
    if (n < 1 || n > 1000) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &vet[i]);
    printf("%d\n", maior_elemento(vet, n));
    return 0;
}