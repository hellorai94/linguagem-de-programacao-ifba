// 4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume
// desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:
// V = π* raio2 * altura,
// em que π= 3.1414592 

#include <stdio.h>

float volumeCilindro(float altura, float raio) {
    float volume, pi = 3.1414592;
    
    volume = pi * raio * raio * altura;
    return volume;
}

int main() {
    float altura, raio, volume;
    printf("Digite a altura do cilindro circular: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro circular: ");
    scanf("%f", &raio);

    volume = volumeCilindro(altura, raio);
    printf("O volume do cilindro circular é %f.", volume);

    return 0;
}