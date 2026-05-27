#include <stdio.h>
#include "function_fatorial.c"

int main()
{
    int n = 0;
    int fatorial = 1;

    printf("digite um numero\n");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("o fatorial de %d é %d \n", n, fatorial);
    printf("feito por Gustavo Moraes Orlando");

    return 0;
}
