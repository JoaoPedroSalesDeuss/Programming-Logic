#include <stdio.h>

void vogais(char *str)
{
    int contador = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' 
        || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            contador++;
        }
    }
    printf("O numero de vogais e: %d\n", contador);
}

int main()
{
    char str[100];

    printf("Digite um palavra: ");
    scanf("%s", str);

    vogais(str);

    return 0;
}
