#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ContaBancaria {
    char nomeTitular[50];
    int numeroConta;
    float saldo;
};

void depositar(struct ContaBancaria *conta, float valor) {
    conta->saldo += valor;
}

int sacar(struct ContaBancaria *conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        return 1; 
    } else {
        return 0; 
    }
}

float verificarSaldo(struct ContaBancaria conta) {
    return conta.saldo;
}

int main() {
    struct ContaBancaria conta1;

    strcpy(conta1.nomeTitular, "Mario");
    conta1.numeroConta = 892105;
    conta1.saldo = 1000.0;

    depositar(&conta1, 500.0);
    system ("color f4");
    printf("Saldo atual: %.2f\n", verificarSaldo(conta1));

    if (sacar(&conta1, 300.0)) {
        printf("Saque realizado com sucesso no valor de 300 reais\n. Saldo atual: %.2f\n", verificarSaldo(conta1));
    } else {
        printf("Saldo insuficiente para saque.\n");
    }

    return 0;
}

