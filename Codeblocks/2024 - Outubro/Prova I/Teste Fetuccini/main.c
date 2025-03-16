#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 3;
    int B = 6;
    int C = 0;

    for(int i=3; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
            C = A + B;
            A = B;
            B = C;

        } else {
            C = A - B;
            A = B;
            B = C;
        }

        //A = B;
        //B = C;
        //C = A+B;

        printf("%d, ", C);
    }

    printf("\n");
    return 0;
}
