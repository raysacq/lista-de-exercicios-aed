#include <stdio.h>

int main(void) {
    char texto[1001];
    int quantidade = 0, valido = 1;
    scanf(" %1000[^\n]", texto);
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '(') quantidade++;
        else if (texto[i] == ')') {
            quantidade--;
            if (quantidade < 0) valido = 0;
        }
    }
    if (quantidade != 0) valido = 0;
    printf(valido ? "Valido\n" : "Invalido\n");
    return 0;
}