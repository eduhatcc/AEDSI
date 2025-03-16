#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x;
    printf("Digite\n");
    scanf("%d", &x);

    int temp = x;
    int divisor = 1;

    while(temp > 10)
    {
        temp /= 10;
        divisor *= 10;
    }

    while (divisor > 0)
    {
        int resp = x / divisor;
        divisor /= 10;
        resp %= 10;
        printf("%i\n", resp);
    }

    return 0;
}
