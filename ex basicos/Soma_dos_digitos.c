#include <stdio.h>

void soma_digitos(int n)
{
    int soma = 0;
    
    while (n != 0)
    {
        soma += n % 10;
        n /= 10;
    } 
    printf("A soma dos digitos e: %d\n", soma);  
}

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    soma_digitos(num);

    return 0;
}