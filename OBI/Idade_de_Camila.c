#include <stdio.h>

int encontrarIdadeCamila(int *idade)
{
    if (idade[0] == idade[1] && idade[1] == idade[2]) {
        return idade[0];
    }

    if ((idade[0] >= idade[1] && idade[0] <= idade[2]) ||
        (idade[0] <= idade[1] && idade[0] >= idade[2])) {
        return idade[0];
    }
    if ((idade[1] >= idade[0] && idade[1] <= idade[2]) ||
        (idade[1] <= idade[0] && idade[1] >= idade[2])) {
        return idade[1];
    }
    return idade[2];
}

int main(void)
{
    int idade[3];

    scanf("%d %d %d", &idade[0], &idade[1], &idade[2]);

    int resultado = encontrarIdadeCamila(idade);

    printf("%d\n", resultado);

    return 0;
}