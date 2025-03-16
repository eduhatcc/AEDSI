#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_1;
    int valor_2;

    printf("\nDigite: ");
    scanf("%i", &valor_1);

    printf("\nDigite: ");
    scanf("%i", &valor_2);

    for(int i=1; i <= valor_2; i++)
    {
        valor_1 += valor_1;
    }

    printf("%i", valor_1);

    return 0;
}
