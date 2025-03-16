#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func(int valor_1, int valor_2, int divisor)
{
    bool sao_primos = false;

    if(divisor > 1 && divisor < valor_1 && divisor < valor_2)
    {
        valor_aux1 = valor_1 % divisor;
        valor_aux2 = valor_2 % dividor;

        if(valor_aux1 != 0 && valor_aux2 != 0)
        {
            sao_primos = true;
            return sao_primos;
        }
    }
    func(divisor + 1);
}

int main()
{
    int valor_1;
    int valor_2;
    int valor_aux1;
    int valor_aux2;

    printf("Digite o primeiro valor\n");
    scanf("%i", &valor_1);

    printf("\nDigite o segundo valor\n");
    scanf("%i", &valor_2);

    int divisor = 2;

    printf("%i", func(valor_1, valor_2, divisor));
    return 0;
}
