#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct Produto {
    char nome[100];
    float preco;
    int quantidadeEstoque;
};

void Comprar(struct Produto *produto, int quantidade) {
    if (quantidade <= produto->quantidadeEstoque) {
        produto->quantidadeEstoque -= quantidade;
        printf("Compra realizada. Total: %.2f\n", produto->preco * quantidade);
    } else {
        printf("Quantidade insuficiente em estoque.\n");
    }
}

int main() {
    struct Produto estoque;
	int Compra;
	
    strcpy(estoque.nome, "caderno");
    estoque.preco = 20.0;
    estoque.quantidadeEstoque = 100;

    system("color f4");
    setlocale(LC_ALL, "Portuguese");
    printf("Bem-vindo\n");
    printf("Produto: %s\n", estoque.nome);
    printf("Preço: %.2f\n", estoque.preco);
    printf("Quantidade em estoque: %d\n", estoque.quantidadeEstoque);

    printf("Digite a quantidade que deseja comprar: ");
    scanf("%d", &Compra);

    Comprar(&estoque, Compra);

    printf("Quantidade em estoque restante: %d\n", estoque.quantidadeEstoque);

    return 0;
}

