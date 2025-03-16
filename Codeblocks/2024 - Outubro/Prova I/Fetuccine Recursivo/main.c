#include <stdio.h>
#include <stdlib.h>

void func(int A, int B, int C, int contador)
{
    if(contador == 10)
    {
        return 0;
    }

    if(contador % 2 == 0)
    {
        C = A + B;
        A = B;
        B = C;
    } else {
        C = A - B;
        A = B;
        B = C;
    }

    printf("%d, ", C);

    func(A, B, C, (contador + 1));
}

int main()
{
    int A = 3;
    int B = 6;
    int C = 0;

    func(A, B, C, 3);

    return 0;
}
