#include <stdio.h>
#include <math.h>

void quadradoPerfeito(double numero) {
    double resultado = sqrt(numero);
    if (resultado == (int)resultado) {
        printf("%d é um quadrado perfeito.\n", (int)numero);
    } else {
        printf("%d não é um quadrado perfeito.\n", (int)numero);
    }
}

int main() {
    double numero;
    printf("Digite um número: ");
    scanf("%lf", &numero);

    quadradoPerfeito(numero);
}
