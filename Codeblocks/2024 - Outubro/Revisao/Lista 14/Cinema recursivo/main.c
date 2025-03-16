#include <stdio.h>
#include <stdlib.h>

void imprimeInvertido (int x)
{
    if (x > 0)
    {
        printf("%d\n", x);
        imprimeInvertido(x-1);
        printf("%d", x);
    }




    switch(x)
    {
        case 5:
            printf("Estou na funcao 5\n");
            break;

        case 4:
            printf("Estou na funcao 4\n");
            break;

        case 3:
            printf("Estou na funcao 3\n");
            break;

        case 2:
            printf("Estou na funcao 2\n");
            break;

        case 1:
            printf("Estou na funcao 1\n");
            break;

        case 0:
            printf("\nCheguei na funcao 0\n");
            break;
    }
}

int main()
{
    int x;
    scanf("%d", &x);

    imprimeInvertido(x);

    printf("Cheguei na main\n");

    return 0;
}
