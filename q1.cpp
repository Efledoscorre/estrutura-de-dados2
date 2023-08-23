#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};


int main() {
    struct Pessoa Dados;

    strcpy(Dados.nome, "Joao");
    Dados.idade = 25;
    Dados.altura = 1.75;
	
	system ("color f4");
    printf("Nome: %s\n", Dados.nome);
    printf("Idade: %d\n", Dados.idade);
    printf("Altura: %.2f\n", Dados.altura);

    return 0;
}
