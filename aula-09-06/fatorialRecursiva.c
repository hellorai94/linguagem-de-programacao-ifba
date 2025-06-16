#include <stdio.h>

int fatorial(int n);

int main() {
    int x;
    x = fatorial(4);
    printf("4! = %d\n.", x);
    return 0;
}

int fatorial(int n) {
    if (n == 1) 
        return 1;
    return n * fatorial(n - 1);
}



