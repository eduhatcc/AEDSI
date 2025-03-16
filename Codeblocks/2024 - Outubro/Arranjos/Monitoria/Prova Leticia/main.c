#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool lerLados (float lado1, float lado2, float lado3)
{
    bool erro = ((lado1 + lado2) == lado3);

        if(erro == false)
        {
            printf("\nO valor do lado tres nao eh correspondente ao lado1 + lado2. \n");
        }
        else {
            printf("\nA funcao esta correta! o lado3:'%f' corresponde o lado1:'%f' + lado2:'%f'. \n", lado3, lado1, lado2);
        }

    return erro;
}

bool lerLado3 (float lado1, float lado2)
{
    float lado3;

    printf("\nDigite o terceiro lado: ");
    scanf("%f", &lado3);

    bool erro = lerLados(lado1, lado2, lado3);

    return erro;
}

bool lerLado2 (float lado1)
{
    float lado2;

    printf("\nDigite o segundo lado: ");
    scanf("%f", &lado2);

    bool erro = lerLado3(lado1, lado2);

    return erro;
}

bool lerLado1 ()
{
    float lado1;

    printf("\nDigite o primeiro lado: ");
    scanf("%f", &lado1);

    bool erro = lerLado2(lado1);

    return erro;
}

int main ()
{
    bool erro;
    do{
        erro = lerLado1();
    } while(erro == false);

    return 0;
}
