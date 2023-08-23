#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct Livro {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
};

int main() {
    struct Livro biblioteca[100];
    int totalLivros = 0;

    strcpy(biblioteca[totalLivros].titulo, "Helena");
    strcpy(biblioteca[totalLivros].autor, "Machado de Assis");
    biblioteca[totalLivros].anoPublicacao = 1899;
    totalLivros++;

    int op;
    char autorBusca[50];

    do {
    	system ("color f4");
    	setlocale(LC_ALL, "Portuguese");
        printf("\nMENU\n");
        printf("1 - Mostrar livros\n");
        printf("2 - Buscar livros por autor\n");
        printf("3 - Adicionar livro\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
            	system ("cls");
                printf("Livros:\n");
                for (int i = 0; i < totalLivros; i++) {
                    printf("Título: %s\nAutor: %s\nAno: %d\n", biblioteca[i].titulo, biblioteca[i].autor, biblioteca[i].anoPublicacao);
                }
                break;

            case 2:
                
                system ("cls");
                printf("Digite o autor para buscar: ");
                scanf("%s", autorBusca);

                printf("Livros do autor %s:\n", autorBusca);
                for (int i = 0; i < totalLivros; i++) {
                    if (strcmp(biblioteca[i].autor, autorBusca) == 0) {
                        printf("Título: %s\tAno: %d\n", biblioteca[i].titulo, biblioteca[i].anoPublicacao);
                    }
                }
                break;

            case 3:
                if (totalLivros < 100) {
                	system ("cls");
                    printf("Digite o título do livro: ");
                    scanf("%s", biblioteca[totalLivros].titulo);
                    printf("Digite o autor do livro: ");
                    scanf("%s", biblioteca[totalLivros].autor);
                    printf("Digite o ano de publicação do livro: ");
                    scanf("%d", &biblioteca[totalLivros].anoPublicacao);
                    totalLivros++;
                    printf("Livro adicionado com sucesso!\n");
                } else {
                    printf("A biblioteca está cheia!\n");
                }
                break;

            case 4:
                printf("Saindo do programa...\n");
                return 0;

            default:
                printf("Opção inválida! Escolha uma opção válida.\n");
                break;
        }
    } while (1);

    return 0;
}

