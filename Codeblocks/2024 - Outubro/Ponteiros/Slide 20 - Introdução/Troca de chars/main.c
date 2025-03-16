#include <stdio.h>
#include <stdlib.h>

void troca(char *x, char *y)
{
    char aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{
    printf("Digite 3 letras: ");

    char c1;
    scanf(" %c", &c1);

    char c2;
    scanf(" %c", &c2);

    char c3;
    scanf(" %c", &c3);

    if(c1 > c2)
    {
        troca(&c1, &c2);
    }

    if(c2 > c3)
    {
        troca(&c2, &c3);
    }

    if(c1 > c2)
    {
        troca(&c1, &c2);
    }

    printf(" %c %c %c", c1, c2, c3);

    return 0;
}
