// 2) Faça uma função que receba um número inteiro de 1 a 12 e
// imprima em tela o mês e a sua quantidade de dias de acordo
// com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril.
// 31 dias: Janeiro, Março, Maio, Julho, Agosto, Outubro, Dezembro
// 30 dias: Abril, Junho, Setembro, Novembro
// 28/29 dias: Fevereiro (28 em anos não bissextos, 29 em anos bissextos) 


#include <stdio.h>

char* mostrarMes(int num);

int main() {
    int num;
    printf("Digite o número de 1 a 12.\n");
    scanf("%d", &num);

    if (num < 1 || num > 12) {
        printf("Digite um valor válido.\n");
    } else {
        printf("%s\n", mostrarMes(num));
    }

    return 0;
}

char* mostrarMes(int num)  {

    switch (num)
    {
    case 1: return "Janeiro - 31 dias."; break;
    case 2: return "Fevereiro - 28 dias."; break;
    case 3: return "Março - 31 dias."; break;
    case 4: return "Abril - 30 dias."; break;
    case 5: return "Maio - 31 dias."; break;
    case 6: return "Junho - 30 dias."; break;
    case 7: return "Julho - 31 dias."; break;
    case 8: return "Agosto - 31 dias."; break;
    case 9: return "Setembro - 30 dias."; break;
    case 10: return "Outubro - 31 dias."; break;
    case 11: return "Novembro - 30 dias."; break;
    case 12: return "Dezembro - 31 dias."; break;
    default: "Mês inválido."; break;
    }
}

