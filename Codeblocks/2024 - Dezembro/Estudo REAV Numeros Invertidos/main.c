#include <stdio.h>
#include <stdlib.h>

void escreveInvertido(int N)
{
    for(int i=0; i < 4; i++){
        printf("%d", N%10);
        N = N/10;
    }
    printf("\n\n");
}

void escreveInvertidoRec(int N, int i)
{
    if(i > 0){
        printf("%d", N%10);
        N = N/10;
        escreveInvertidoRec(N, i-1);
    }
}

int main()
{
    int N = 1234;

    printf("\tIterativo: \n");
    escreveInvertido(N);

    printf("\tRecusrivo: \n");
    escreveInvertidoRec(N, 4);

    printf("\n");
    return 0;
}
