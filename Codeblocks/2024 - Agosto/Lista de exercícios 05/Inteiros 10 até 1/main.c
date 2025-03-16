#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    do {
        printf("%i, ", x);
        x=x-1;
    }
    while(x>=1);

    return 0;
}
