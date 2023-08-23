#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float Distancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

float Inclinacao(struct Ponto p1, struct Ponto p2) {
    return (p2.y - p1.y) / (p2.x - p1.x);
}

int main() {
    struct Ponto ponto1 = {1.0, 2.0};
    struct Ponto ponto2 = {4.0, 6.0};
    
	system ("color f4");
    printf("Distancia entre os pontos: %.2f\n", Distancia(ponto1, ponto2));
    printf("Inclinacao da reta: %.2f\n", Inclinacao(ponto1, ponto2));

    return 0;
}
