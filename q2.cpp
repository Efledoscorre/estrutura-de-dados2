#include <stdio.h>
#include <stdlib.h>

struct Tipo {
    int valorInt;
    float valorFloat;
    char letra;
};

int main() {
    struct Tipo valor;

    (valor.valorInt = 10);
    (valor.valorFloat = 3.14);
    (valor.letra = 'A');
    
	system ("color f4");
    printf("Valor Inteiro: %d\n", valor.valorInt);
    printf("Valor Flutuante: %.2f\n", valor.valorFloat);
    printf("Letra: %c\n", valor.letra);

    return 0;
}
