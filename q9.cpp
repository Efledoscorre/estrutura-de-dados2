#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

struct Funcionario {
    char nome[50];
    char cargo[50];
    float salario;
    time_t dataAdmissao;
};

void Aumento(struct Funcionario *funcionario, float aumento) {
    funcionario->salario += aumento;
}

int TempoEmpresa(struct Funcionario funcionario) {
    time_t now;
    time(&now);
    double diferenca = difftime(now, funcionario.dataAdmissao);
    return (int)(diferenca / (60 * 60 * 24 * 365));
}

int main() {
    struct Funcionario dados;

    system("color f4");
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o nome do funcionário: ");
    scanf("%s", dados.nome);

    printf("Digite o cargo do funcionário: ");
    scanf("%s", dados.cargo);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &dados.salario);

    printf("Digite o tempo de empresa do funcionário (em anos): ");
    int tempoEmpresa;
    scanf("%d", &tempoEmpresa);

    dados.dataAdmissao = time(NULL) - (tempoEmpresa * 365 * 24 * 60 * 60); // Calcula a data de admissão baseada no tempo de empresa

    Aumento(&dados, 500.0);
    printf("Salário atualizado: %.2f\n", dados.salario);

    printf("Tempo na empresa: %d anos\n", TempoEmpresa(dados));

    return 0;
}

