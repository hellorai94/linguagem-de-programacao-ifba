// 6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC
// (índice de massa corporal) dessa pessoa: 
// IMC = peso/(altura * altura)

#include <stdio.h>

float calculaImc(float peso, float altura) {
  float imc = peso / (altura * altura);
  return imc;
};

int main() {
    float peso, altura, imc;

    printf("Digite o peso: \n");
    scanf("%f",&peso);
    printf("Digite a altura: \n");
    scanf("%f",&altura);

    imc = calculaImc(peso, altura);
    printf("O IMC é %.2f.\n", imc);
    return 0;
}