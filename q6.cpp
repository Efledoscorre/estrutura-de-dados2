#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudante {
    char nome[50];
    int matricula;
    float notas[6];
};

float calcularMedia(struct Estudante aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno.notas[i];
    }
    return soma / 3;
}

int Aprovado(struct Estudante aluno) {
    float media = calcularMedia(aluno);
    if (media >= 7.0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    struct Estudante notas;
	strcpy (notas.nome, "Julio");
	notas.matricula = 16546;
	notas.notas [3] = 8.4;
	notas.notas [4] = 8.2;
	notas.notas [5] = 10.0;
    strcpy(notas.nome, "Joana");
    notas.matricula = 12345;
    notas.notas[0] = 3.5;
    notas.notas[1] = 4.0;
    notas.notas[2] = 5.5;
    
	system ("color f4");
    printf("Nome: %s\n", notas.nome);
    printf("Matricula: %d\n", notas.matricula);
    printf("Media: %.2f\n", calcularMedia(notas));
    
    if (Aprovado(notas)) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}

