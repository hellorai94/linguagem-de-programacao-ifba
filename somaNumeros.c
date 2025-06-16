#include <stdio.h>

int somaNumeros(int n);

int main() {
    int n;
    printf("Digite o número: \n");
    scanf("%d", &n);
    printf("A soma é: %d.\n", somaNumeros(n));

    return 0;

}
int somaNumeros(int n) {
    if (n == 1)
        return 1;
    return n + somaNumeros(n - 1);
}

