#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int A=10, int B; A<20; A++, B++)
    {
        if(A%2 == 0)
            printf("\n%i/%i, ", A, B);
        else printf("%i/%i ",   B, A);
    }
    return 0;
}
