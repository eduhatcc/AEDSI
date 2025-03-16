#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    FILE *arq;
    if((arq = fopen("Exemplo.dat", "r")) != NULL )
    {
        fscanf(arq, "%i", &x);
        while(!feof(arq))
        {
            printf("%i\n", x);
               fscanf(arq, "%i", &x);
        }

        rewind(arq);
        fscanf(arq, "%i", &x);
        while(!feof(arq))
        {
            printf("%i\n", x);
            fscanf(arq, "%i", &x);
        }
    fclose(arq);
    }
}
