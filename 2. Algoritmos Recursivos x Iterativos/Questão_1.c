#include <stdio.h>

int contar_digitos(int n) {
    if (n > -10 && n < 10) return 1;
    return 1 + contar_digitos(n / 10);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", contar_digitos(n));
    return 0;
}