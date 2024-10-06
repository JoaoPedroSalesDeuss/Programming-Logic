#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n)
{
    if(n < 0)
    {
        return;
    }
    
    int atual = 1;
    int proximo;
    int anterior = 0;

    for(i = 0; i < n; i++){
        printf("%d ", atual);
        proximo = atual + anterior;
        atual = proximo;
        anteior = atual;
    }
    printf("\n");
}

int main(void)
{
    int n;

    printf("Digite uma quantidade: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
