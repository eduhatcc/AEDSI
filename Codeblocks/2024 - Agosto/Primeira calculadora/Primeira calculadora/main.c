#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("\n Calculadora \n\n");

    printf("\n Menu:");
    printf("\n\t + Adição");
    printf("\n\t - Subtração");
    printf("\n\t * Multiplicação");
    printf("\n\t / Divisão \n\n");

    char opcao;
    printf("\n Sua opção: ");
    scanf("%c", &opcao);


    char opcao2;
    printf("\n Sua opção: ");
    scanf("%c", &opcao);

    float A;
    printf("\n Primeiro operando: ");
    scanf("%f", &A);

    float B;
    printf("\n Segundo operando: ");
    scanf("%f", &B);

    float resultado;

    switch(opcao)
    {
        case '+' : resultado = A+B; break;
        case '-' : resultado = A-B; break;
        case '*' : resultado = A*B; break;
        case '/' : resultado = A/B; break;
        default : resultado = 0;
                  printf("\n\n Erro!!!");
    } //fim switch

    switch(opcao2)
    {
        case '+' : resultado = A+B; break;
        case '-' : resultado = A-B; break;
        case '*' : resultado = A*B; break;
        case '/' : resultado = A/B; break;
        default : resultado = 0;
                  printf("\n\n Erro!!!");
    } //fim switch

    printf("\n %.2f %c %.2f = %.2f", A, opcao, B, resultado);

    return 0;
} //fim da main
