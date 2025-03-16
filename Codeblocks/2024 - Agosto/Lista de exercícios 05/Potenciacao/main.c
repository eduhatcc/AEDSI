#include <stdio.h>
#include <stdlib.h>

int main()
{
    float potenciacao = 1;
    float base;
    int expoente;

    printf("\n Base: ");
    scanf("%f", &base);
    do {
        printf("\n Expoente: ");
        scanf("%i", &expoente);
    }
    while(expoente < 0);  //fim do while
    for(int i = 1; i <= expoente; i++)
    {
        potenciacao = potenciacao * base;
    }
    printf("\n %1.f ^ %1.i = %1.f", base, expoente, potenciacao);

    return 0;
} //fim da main
