#include <stdio.h>

int armstrong(int n)
{
    int original = n;
    int tam = 0;
    int soma = 0;

    while (n != 0) {
        n /= 10;
        tam++;
    }
    
    n = original;

    while (n != 0) {
        int digito = n % 10;
        int potencia = 1;
        for (int i = 0; i < tam; i++) {
            potencia *= digito;
        }
        soma += potencia;
        n /= 10;
    }
    return (soma == original);
}

int main()
{
    int n;

    printf("Digite um numero para ver se e um numero de armstrong: ");
    scanf("%d", &n);

    int resultado = armstrong(n);

    if(resultado == 1)
    {
        printf("E um numero de Armstrong!");
    }
    else
    {
        printf("Nao e um numero de Armstrong!");
    }

    return 0;
}