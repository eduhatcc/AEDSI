#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arq = fopen("exemplo.txt", "w");

    for(int x=10; x <= 20; x+=2){
        fprintf(arq, "%d\n", x);
    }

    fclose(arq);


    arq = fopen("exemplo.txt", "r");
    if(arq != NULL){
        int y;
        fscanf(arq, "%d", &y);
        while(!feof(arq)){
            printf("%d\n", y);
            fscanf(arq, "%d", &y);
        }
        printf("\n");
        rewind(arq);
        fscanf(arq, "%d", &y);
        while(!feof(arq)){
            printf("%d\n", y);
            fscanf(arq, "%d", &y);        }
        fclose(arq);
    }


    return 0;
}
