#include <stdio.h>

#define TAM 100
int main(void) {
    int fila[TAM], inicio = 0, fim = 0, op, senha = 1;
    do {
        printf("1 Cliente chegou 2 Atender proximo 0 Sair: "); scanf("%d", &op);
        if (op == 1) {
            if (fim == TAM) printf("Fila cheia.\n");
            else { fila[fim++] = senha; printf("Cliente recebeu a senha %d.\n", senha++); }
        } else if (op == 2) {
            if (inicio == fim) printf("Nao ha clientes aguardando.\n");
            else printf("Atendendo cliente com senha %d.\n", fila[inicio++]);
        }
    } while (op != 0);
    return 0;
}