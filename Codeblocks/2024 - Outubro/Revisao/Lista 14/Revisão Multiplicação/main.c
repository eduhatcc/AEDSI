#include <stdio.h>
#include <stdlib.h>

int multiplicacao (int n)
{
 if(n < 1 || n > 9)
    {
        printf("Valor inesperado!");
        return;
    }

    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
    printf("\n");
    }

}

int main()
{
    int n;
    printf("Digite\n");
    scanf("%d", &n);

    multiplicacao(n);

    return 0;
}
