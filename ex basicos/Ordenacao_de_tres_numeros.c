#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a > b) trocar(&a, &b);
    if (b > c) trocar(&b, &c);
    if (a > b) trocar(&a, &b);

    printf("Numeros em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}