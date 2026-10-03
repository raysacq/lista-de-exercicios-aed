#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) return 0;
    if (b < 0) return -produto(a, -b);
    return a + produto(a, b - 1);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", produto(a, b));
    return 0;
}
