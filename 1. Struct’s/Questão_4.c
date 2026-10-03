#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char modelo[31];
    int ano;
    float preco;
} Carro;

int main(void) {
    Carro *carro = malloc(sizeof(Carro));
    if (carro == NULL) return 1;
    printf("Modelo: ");
    scanf(" %30[^\n]", carro->modelo);
    printf("Ano: ");
    scanf("%d", &carro->ano);
    printf("Preco: ");
    scanf("%f", &carro->preco);
    printf("\nModelo: %s\nAno: %d\nPreco: R$ %.2f\n", carro->modelo, carro->ano, carro->preco);
    free(carro);
    return 0;
}