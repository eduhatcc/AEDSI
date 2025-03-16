#include <stdio.h>
#include <stdlib.h>

int fibonacci (int x)
{
    int termo;
    if(x == 0)
        termo = 0;
    else if(x == 1)
        termo = 1;
    else if(x > 1)
        termo = fibonacci(x - 1) + fibonacci (x - 2);
}

int main()
{
    int x;
    printf("Digite o valor\n");
    scanf("%d", &x);

    printf("%d\n", fibonacci(x));

    return 0;
}
