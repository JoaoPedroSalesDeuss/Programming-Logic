#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    int fatorial = 1;
    int i;

    for(i = 1; i <= n; i++){
        fatorial *= i;
    }
    return fatorial;
}

//1 x 1 = 1
//1 x 2 = 2
//2 x 3 = 6
//6 x 4 = 24
//24 x 5 = 120

int main(void)
{
    int n;

    printf("Digite uma quantidade: ");
    scanf("%d", &n);

    int resultado = fatorial(n);

    printf("O resultado do fatorial eh: %d", resultado);

    return 0;
}