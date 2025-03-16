#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //DECLARE
    int num1, num2;

    //LEIA
    printf("Digite os numeros: \n");
    scanf("%i" "%i", &num1, &num2);

    //ESCREVA
    if (num1 % 2 == 0)
    {
        printf("\n O numero %i eh par e ", num1);
    }
    else{
        printf("\n O numero %i eh impar e ", num1);
    }
    if(num1 > num2)
    {
        printf("eh o numero maior");
    }
    else{
        printf("eh o numero menor");
    }



    if (num2 % 2 == 0)
    {
        printf("\n O numero %i eh par e ", num2);
    }
    else{
        printf("\n O numero %i eh impar e ", num2);
    }

    if (num2 > num1)
    {
        printf("eh o numero maior");
    }
    else{
        printf("eh o numero menor");
    }

} //FIM DA MAIN
