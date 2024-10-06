#include <stdio.h>

int eh_primo(int n)
{
    if(n <= 1)
    {
        return 0;
    }

    int primo = 1;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            primo = 0;
            break;
        }
    }
    return primo;
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int resultado = eh_primo(num);
    
    if(resultado == 1)
    {
        printf("Esse numero e primo!");
    }
    else{
        printf("Esse numero nao e primo!");
    }

    return 0;
}