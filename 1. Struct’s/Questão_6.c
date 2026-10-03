#include <stdio.h>

typedef struct {
    char titulo[51];
    char autor[51];
    int ano;
} Livro;

void exibir_apos_ano(Livro livros[], int quantidade, int ano) {
    for (int i = 0; i < quantidade; i++)
        if (livros[i].ano > ano)
            printf("%s, de %s (%d)\n", livros[i].titulo, livros[i].autor, livros[i].ano);
}

int main(void) {
    Livro livros[100];
    int quantidade, ano;
    printf("Quantidade de livros (ate 100): ");
    scanf("%d", &quantidade);
    if (quantidade < 1 || quantidade > 100) return 0;
    for (int i = 0; i < quantidade; i++) {
        printf("Titulo: ");
        scanf(" %50[^\n]", livros[i].titulo);
        printf("Autor: ");
        scanf(" %50[^\n]", livros[i].autor);
        printf("Ano de publicacao: ");
        scanf("%d", &livros[i].ano);
    }
    printf("Mostrar livros publicados depois de qual ano? ");
    scanf("%d", &ano);
    exibir_apos_ano(livros, quantidade, ano);
    return 0;
}