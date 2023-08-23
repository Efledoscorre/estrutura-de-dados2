#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    struct Contato agenda[100];
    int totalContatos = 0;
    char nomeProcura[50];
    int op;

    setlocale(LC_ALL, "Portuguese");

    do {
        system("color f4");
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Mostrar contatos\n");
        printf("2 - Buscar contatos\n");
        printf("3 - Adicionar contatos\n");
        printf("4 - Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                system("cls");
                printf("Contatos:\n");
                for (int i = 0; i < totalContatos; i++) {
                    printf("Nome: %s\tTelefone: %s\n", agenda[i].nome, agenda[i].telefone);
                }
                break;

            case 2:
                system("cls");
                printf("Digite o nome para buscar: ");
                scanf("%s", nomeProcura);
                int contatoEncontrado = 0;
                for (int i = 0; i < totalContatos; i++) {
                    if (strcmp(agenda[i].nome, nomeProcura) == 0) {
                        printf("Contato encontrado!\n");
                        printf("Nome: %s\tTelefone: %s\n", agenda[i].nome, agenda[i].telefone);
                        contatoEncontrado = 1;
                        break;
                    }
                }
                if (!contatoEncontrado) {
                    printf("Contato não encontrado :(\n");
                }
                break;

            case 3:
                system("cls");
                if (totalContatos < 100) {
                    printf("Digite o nome do contato: ");
                    scanf("%s", agenda[totalContatos].nome);
                    printf("Digite o telefone do contato: ");
                    scanf("%s", agenda[totalContatos].telefone);
                    totalContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("Agenda de contatos está cheia!\n");
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

