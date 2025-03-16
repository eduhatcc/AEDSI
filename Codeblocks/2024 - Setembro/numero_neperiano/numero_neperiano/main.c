#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NEPERIANO 2.71828182845904235360287

long int fatorial(int n){

    long int fat=1;

    if(n==0)
        return fat;

    for(int i=1; i<=n; i++)
        fat *= i;

    return fat;
} //FIM LONG FATORIAL


int main()
{
    int n=0;
    double erro=0.0001;
    double neperiano_aprox=0;

    while (erro < fabs(neperiano_aprox-NEPERIANO) ) {

        printf("\nAprox. com n: %d \t erro: %lf \t Neperiano Aproximado: %lf \n", n, erro, neperiano_aprox);
        neperiano_aprox += 1.0/fatorial(n);
        n++;
    } //FIM WHILE

    return 0;
}
