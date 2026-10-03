#include <stdio.h>

int main(void) {
    int a, b, resultado = 0, sinal = 1;
    scanf("%d %d", &a, &b);
    if (b < 0) { b = -b; sinal = -1; }
    for (int i = 0; i < b; i++) resultado += a;
    printf("%d\n", resultado * sinal);
    return 0;
}