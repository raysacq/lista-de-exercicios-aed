#include <stdio.h>

int soma_digitos(int n) {
    if (n < 0) n = -n;
    if (n < 10) return n;
    return n % 10 + soma_digitos(n / 10);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", soma_digitos(n));
    return 0;
}