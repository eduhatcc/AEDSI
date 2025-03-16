#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int valor_1, int valor_2)
{
    if(valor_2 == 0)
    {
        return 0;
    }

    return valor_1 + multiplicacao(valor_1, valor_2 - 1);

}


int multiplicacao2(int valor_1, int valor_2)
{
    int tmp = 0;
    if(valor_2 == 0)
    {
        tmp = 0;
    } else {
        tmp = valor_1 + multiplicacao(valor_1, valor_2 - 1);
    }
    return tmp;
}


int main ()
{
    int valor_1;
    int valor_2;

    printf("\nDigite: ");
    scanf("%i", &valor_1);

    printf("\nDigite: ");
    scanf("%i", &valor_2);

    // printf("\nO resultado eh: %i\n", multiplicacao(valor_1, valor_2));

    printf("\nO resultado eh: %i\n", multiplicacao2(valor_1, valor_2));

    return 0;
}
