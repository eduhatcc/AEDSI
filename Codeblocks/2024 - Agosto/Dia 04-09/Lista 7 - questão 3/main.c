#include <stdio.h>
#include <stdlib.h>

int main()
{
    //IDEIAS DE COMO FAZER
    //PRIMEIRA IDEIA (nao muito recomendada)
    int n;
    int divisiveis;

    do{
        printf("\nNumero: ");
        scanf("%i", &n);
    } while (n<1);

    //CALCULO
    for(int i=2; i < n/2; i++){
        if(n%i == 0);
            divisiveis++;
    }

    //CONFIRMAÇÃO DO NUMERO
    if(divisiveis > 0)
        printf("\nNao primo!");
    else printf("\nPrimo!!");

    return 0;
}


    //SEGUNDA IDEIA (recomendado)
    int i=2;
    bool primo=true;
    do{

    } while()

    while (primo && i = n/2){
        if(n%i == 0)
            primo = false;
        else i++;
    }

    if(primo)
        printf("\nEh primo!");
    else printf("\nNao eh Primo!!");

    return 0;
