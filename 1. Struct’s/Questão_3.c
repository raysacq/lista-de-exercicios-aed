#include <stdio.h>

typedef struct {
    char nome[31];
    int codigo;
    float preco;
} Produto;

void exibir_produto(Produto produto) {
    printf("\nProduto: %s\nCodigo: %d\nPreco: R$ %.2f\n", produto.nome, produto.codigo, produto.preco);
}

int main(void) {
    Produto produto;
    printf("Nome do produto: ");
    scanf(" %30[^\n]", produto.nome);
    printf("Codigo: ");
    scanf("%d", &produto.codigo);
    printf("Preco: ");
    scanf("%f", &produto.preco);
    exibir_produto(produto);
    return 0;
}