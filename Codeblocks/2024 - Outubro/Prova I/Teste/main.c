#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int A, int B)
{
    if(A == 0 || B == 0)
        return 0;

    return A + multiplicacao(A, B - 1);

}

int main (){

    int valor_1;
    int valor_2;

    printf("\nDigite: ");
    scanf("%i", &valor_1);

    printf("\nDigite: ");
    scanf("%i", &valor_2);

    printf("\nO resultado eh: %i\n", multiplicacao(valor_1, valor_2));


}
