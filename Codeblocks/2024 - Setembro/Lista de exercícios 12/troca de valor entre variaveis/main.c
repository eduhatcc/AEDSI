#include <stdio.h>
#include <stdlib.h>

void troca (float *a, float *b) {
    float aux = *a;

    *a = *b;
    *b = aux;
}


int main()
{
    float x = 5;
    float y = 7;

    troca(&x,&y);

    printf("\n%.1f, %.1f", x, y);

    return 0;
}
