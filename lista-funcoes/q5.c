// Escreva uma função para o cálculo do volume de uma esfera 
// V = 4/3π* r 3, em que π= 3.1414592 valor do raio r deve ser passado por parâmetro. 

#include <stdio.h>
#include <math.h>

float calculaVolumeEsfera(float raio) {
    float pi = 3.1414592;
    float volume = (4.0 / 3.0) * pi * pow(raio, 3);
    return volume;
}

int main() {

    float raio, volume;
    printf("Qual o raio da esfera? \n");
    scanf("%f", &raio);

    volume = calculaVolumeEsfera(raio);
    printf("O volume da esfera é %.4f.\n", volume);

    return 0;
}