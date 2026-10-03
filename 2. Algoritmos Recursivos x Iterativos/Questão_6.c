#include <stdio.h>
#include <string.h>

int palindromo(char texto[], int inicio, int fim) {
    if (inicio >= fim) return 1;
    if (texto[inicio] != texto[fim]) return 0;
    return palindromo(texto, inicio + 1, fim - 1);
}

int main(void) {
    char texto[201];
    scanf(" %200[^\n]", texto);
    printf("%d\n", palindromo(texto, 0, (int)strlen(texto) - 1));
    return 0;
}