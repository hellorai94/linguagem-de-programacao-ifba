#include <stdio.h>

int somaCubos(int n);

int main() {
    int x;
    printf("Digite a quantidade: \n");
    scanf("%d", &x);
    somaCubos(x);
    printf("%d! = %d\n.", x, somaCubos(x));

    return 0;

}
int somaCubos(int n) {
    if (n == 1)
        return 1;
    return n * n * n + somaCubos(n - 1);
}

