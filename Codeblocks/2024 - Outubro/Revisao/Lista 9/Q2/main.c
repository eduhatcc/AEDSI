#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_i;
    int valor_total = 0;
    int par = 0;

    while (num_i != 0)
    {
        printf("\nDigite os numeros (0 para sair): ");
        scanf("%d", &num_i);

        valor_total +=  num_i;
    }

        for(int i = 1; i <= valor_total; i++)
        {
            if(i % 2 == 0)
            {
                par++;
            }
        }

    printf("\n%d numeros sao pares!\n", par);

    return 0;
}
