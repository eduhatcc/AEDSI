#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    fprintf(stdout, "Hello world!\n");

    FILE *arq = fopen("exemplo.dat", "w");

    for(int x=10; x<=20; x+=2)
    {
        fprintf(arq, "%i\n", x);
    }



    fclose(arq);
}
