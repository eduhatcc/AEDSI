#include <stdio.h>
#include <stdlib.h>

int recursivo (int n)
{
    int resp;
    if(n == 1)
        resp = 1;
    else if(n >= 1)
        resp = n * recursivo(n-1);

}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Fatorial de %d eh %d", n, recursivo(n));
    return 0;
}
