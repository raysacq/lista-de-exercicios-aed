#include <stdio.h>

int main(void) {
    int n, soma = 0;
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    printf("%d\n", soma);
    return 0;
}