#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_1 = 0;
    int valor_2 = 0;
    int resultado = 0;

    printf("Multiplicacao dos produtos por soma\n");

    printf("\nDigite: ");
    scanf("%i", &valor_1);

    printf("\nDigite: ");
    scanf("%i", &valor_2);

    for(int i=1; i <= valor_2; i++)
    {
        resultado += valor_1;
    }

    printf("\n%i\n", resultado);

    return 0;
}
