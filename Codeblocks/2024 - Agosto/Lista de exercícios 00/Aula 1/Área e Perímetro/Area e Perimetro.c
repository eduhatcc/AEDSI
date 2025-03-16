#include <Stdio.h>
#include <stdlib.h>

int main ()
{
    //DECLARE
    float lado;
    float area;
    float perimetro;

    //LEIA
    printf("Digite o valor dos lados do quadrado \n");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = 4 * lado;

    //ESCREVA
    printf("O valor da area eh: %.2f \n", area);
    printf("O valor do perimetro eh: %.2f \n", perimetro);

}
