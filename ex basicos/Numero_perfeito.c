#include <stdio.h>

int eh_perfeito(int n)
{
    int soma_divisores = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            soma_divisores += i;
        }
    }

    return soma_divisores == n;
}

int main()
{
    int num;

    printf("Digite um numero para verificar se e perfeito: ");
    scanf("%d", &num);

    if(eh_perfeito(num)){
        printf("Esse numero e perfeito!");
    }
    else{
        printf("Esse numero nao e perfeito!");
    }

    return 0;
}