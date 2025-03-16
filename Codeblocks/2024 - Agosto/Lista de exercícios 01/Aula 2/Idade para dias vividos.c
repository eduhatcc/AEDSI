#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARE
    float idade;
    float dias_vividos;

    //LEIA
    printf("Digite a sua idade para convertermos em dias vividos: \n");
    scanf("%f", &idade);

    dias_vividos = idade * 365;

    //ESCREVA
    printf("Voce tem %.2f dias vividos. \n", dias_vividos);

    return 0;

} //FIM DA MAIN
