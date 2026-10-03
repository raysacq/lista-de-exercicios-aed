#include <stdio.h>

typedef struct {
    char titular[51];
    int numero;
    float saldo;
} ContaBancaria;

void depositar(ContaBancaria *conta, float valor) {
    if (valor > 0) conta->saldo += valor;
}

void sacar(ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) conta->saldo -= valor;
    else printf("Saque nao realizado.\n");
}

void exibir_saldo(ContaBancaria conta) {
    printf("Saldo: R$ %.2f\n", conta.saldo);
}

int main(void) {
    ContaBancaria conta;
    int opcao;
    float valor;
    printf("Titular: ");
    scanf(" %50[^\n]", conta.titular);
    printf("Numero da conta: ");
    scanf("%d", &conta.numero);
    printf("Saldo inicial: ");
    scanf("%f", &conta.saldo);
    do {
        printf("\n1 Depositar | 2 Sacar | 3 Ver saldo | 0 Sair\nOpcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Valor: "); scanf("%f", &valor); depositar(&conta, valor);
        } else if (opcao == 2) {
            printf("Valor: "); scanf("%f", &valor); sacar(&conta, valor);
        } else if (opcao == 3) exibir_saldo(conta);
    } while (opcao != 0);
    return 0;
}