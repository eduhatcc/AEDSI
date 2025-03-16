#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ola, intruducao a arquivos! \n");
    fprintf(stdout, "Ola, introducao a arquivos! \n");

    FILE *arq = fopen("exenplo.dat", "w");

    int x = 10;
    printf("%i\n", x);
    fprintf(stdout, "%i\n", x);
    fprintf(arq, "%i\n", x);

    return 0;
}
