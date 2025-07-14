// Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida
// em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), sendo F a temperatura em
// Fahrenheit e C a temperatura em Celsius. 

#include <stdio.h>

float converteFahrenheit (float fahrenheit) {
    float celsius;

    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celsius;
}

int main() {
    float fahrenheit;
    printf("Qual a temperatura em Fahrenheit? ");
    scanf("%f", &fahrenheit);
    printf("%.2f Fahrenheit em Celsius é %.2f.\n", fahrenheit, converteFahrenheit(fahrenheit));
    return 0;
}