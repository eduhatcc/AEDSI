#include <stdio.h>
#include <stdlib.h>

void funcaoRecursiva (int x, int divisor, int temp)
{

    if(temp > 10)
    {
        temp /= 10;
        divisor *= 10;
        funcaoRecursiva(x, temp, divisor);

    } else if (divisor > 0)
            {
                int resp = x / divisor;
                divisor /= 10;
                resp %= 10;
                printf("%i\n", resp);
                funcaoRecursiva(x/divisor, temp, divisor/10);
            }
}

int main ()
{
    int x;
    printf("Digite\n");
    scanf("%d", &x);

    int temp = x;
    int divisor = 1;

    funcaoRecursiva(x, divisor, temp);

    return 0;
}
