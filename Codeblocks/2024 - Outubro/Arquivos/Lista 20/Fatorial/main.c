#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o fatorial: ");

    int fatorial;
    int resposta = 1;
    scanf("%i", &fatorial);

    for(int i=2; i <= fatorial; i++)
        resposta *= i;

    printf("%i\n", resposta);

    return 0;
}
