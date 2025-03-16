#include <stdio.h>
#include <stdlib.h>

void escreveN(int n)
{
    if(n <=5)
    {
        printf("%d ", n);
        escreveN(n+1);
    }


}

int main()
{
    int n = 1;
    escreveN(n);
}
