#include <stdio.h>
#include <stdlib.h>

int minimoDeViagens(int C, int A)
{
    int C_A = C-1;
    int num_viagens;

    if(C_A > 0)
    {
        num_viagens = (A + C_A - 1) / C_A;
    } else {
        num_viagens = 1;
    }


    return num_viagens;
}

int main()
{
     int C; scanf("%i", &C); // Capacidade da cabine
     int A; scanf("%i", &A); // Número total de alunos na turma
     printf("%i", minimoDeViagens(C,A) );
     return 0;
}
