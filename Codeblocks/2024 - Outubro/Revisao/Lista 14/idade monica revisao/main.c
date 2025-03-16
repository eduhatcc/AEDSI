#include <stdio.h>
#include <stdlib.h>

int maisVelho (int M, int A, int B)
{
    int C = M - (A + B);
    int MV = A;

    if(B > MV)
        MV = B;
    if(C > MV)
        MV = C;

    return MV;
}

int main()
{
     int M; scanf("%i", &M); // Idade da Dona Mônica
     int A; scanf("%i", &A); // Idade de um dos filhos
     int B; scanf("%i", &B); // Idade de outro filho
     printf("%i", maisVelho(M,A,B) );

     return 0;
}
