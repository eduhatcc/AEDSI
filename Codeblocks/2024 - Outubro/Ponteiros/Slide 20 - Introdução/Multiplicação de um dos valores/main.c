#include <stdio.h>
#include <stdlib.h>

void teste (int a, int *b)
{
    a = a * 2;
    *b = *b * 2;
}


int main()
{
    int a = 7;
    int b = 2;
    teste(a, &b);
    printf("%i, %i\n", a, b);

    return 0;
}
