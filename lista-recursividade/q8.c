// 8) A multiplicação de dois números inteiros pode ser feita através de somas sucessivas (por exemplo, 2 * 3 = 2 +
// 2 + 2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois inteiros.

#include <stdio.h>

int somaSucessiva(int x, int y) {
    if (y == 0) {
        return 0;
    } else {
        return x + somaSucessiva(x, y - 1); (2, 2), (2, 1), (2, 0) 
    }
}

int main() {
    int x, y;

    printf("Digite (x): ");
    scanf("%d", &x);

    printf("Digite (y): ");
    scanf("%d", &y);

    int resultado = somaSucessiva(x, y);

    printf("A soma é %d\n", resultado);

    return 0;
}