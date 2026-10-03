#include <stdio.h>

int main(void) {
    int n, valor, maior;
    scanf("%d", &n);
    if (n < 1) return 0;
    scanf("%d", &maior);
    for (int i = 1; i < n; i++) {
        scanf("%d", &valor);
        if (valor > maior) maior = valor;
    }
    printf("%d\n", maior);
    return 0;
}