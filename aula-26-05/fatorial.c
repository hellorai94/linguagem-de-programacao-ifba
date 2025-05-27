#include <stdio.h>

int fatorial(int valor) {
    int result = 1;
    for(int i = valor; i >= 1; i--) {
        result = result * i;
    }
    return result;
};


int main() {
    int num;
    printf("Informe um númerio inteiro positivo: \n");
    scanf("%d", &num);
    int fat = fatorial(num);

    printf("O fatorial de %d é %d.", num, fatorial(num));

}