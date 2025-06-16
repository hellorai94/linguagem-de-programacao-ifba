#include <stdio.h>

void media(float nota1, float nota2, float nota3, char tipo);

int main() {
    float nota1, nota2, nota3;
    char tipoMedia;

    printf("Digite a 1º nota:\n");
    scanf("%f", &nota1);
    printf("Digite a 2º nota:\n");
    scanf("%f", &nota2);
    printf("Digite a 3º nota:\n");
    scanf("%f", &nota3);
    printf("Média Aritmética - A\nMédia Ponderada - P.\n");
    scanf(" %c*[^\n]", &tipoMedia);

    media(nota1, nota2, nota3, tipoMedia);
}


void media(float nota1, float nota2, float nota3, char tipo) {

    float media;

    switch(tipo) {
        case 'A':
        case 'a':
            media = (nota1 + nota2 + nota3) / 3;
            printf("A média é %.2f.\n", media);
            break;
        case 'P':
        case 'p':
            media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / (5 + 3 + 2);
            printf("A média é %.2f.\n", media);
            break;
        default:
           printf("Tipo inválido.\n");
    }
}

https://pt.stackoverflow.com/questions/9427/limpeza-do-buffer-do-teclado-ap%C3%B3s-scanf