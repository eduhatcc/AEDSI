#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *P;
    P = (int*)malloc(sizeof(int));
    scanf("%d", P);
    printf("O dobro do valor digitado eh: %d\n", *P*2);

    return 0;
}
