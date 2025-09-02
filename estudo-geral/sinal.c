// Crie uma função chamada inverterSinal que receba um ponteiro para inteiro. A função deve inverter o sinal do número apontado (positivo vira negativo, negativo vira positivo). No main, leia o número do usuário, chame a função e imprima o novo valor.

#include <stdio.h>

int inverteSinal(int *num) {
    return *num = *num * (-1);
}

int main() {
    int num;

    printf("Digite o número: \n");
    scanf("%d", &num);

    printf("O número com sinal invertido é %d.\n", inverteSinal(&num));
}
