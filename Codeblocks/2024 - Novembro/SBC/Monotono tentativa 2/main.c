#include <stdio.h>
#include <stdlib.h>
#define _MAX 50

int main()
{
    int n;
    do {
        scanf("%d", &n);
    }while(n < 0 || n > _MAX);

    char monotono[n];
    scanf("%s", monotono);

    int i=0;
    int cont=0;

    while(monotono[i] != '\0') {
        if(i+1 < n && monotono[i] == 'a' && monotono[i+1] == 'a') {
            cont++;
            printf("\nAlo dentro");
        }
        if(i-1 > 0 && monotono[i] == 'a' && monotono[i-1] == 'a') {
            cont++;
            printf("\nAlo dentro 2");
        }
        printf("\nAlo fora");
        i++;
    }

    printf("\n%d\n", cont);

    return 0;
}
