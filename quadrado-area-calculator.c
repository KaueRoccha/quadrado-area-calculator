// Calculo da area de um quadrado
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float lado, area;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area = pow(lado, 2);
    printf("A area do quadrado e: %.2f\n", area);
    return 0;
}