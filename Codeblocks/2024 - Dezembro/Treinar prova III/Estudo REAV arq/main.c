#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arq = fopen("cinema.txt", "w");

    for(int x = 10; x <= 20; x+=2){
        fprintf(arq, "%d\n", x);
    }
    fclose(arq);

    //Abrindo novamente o arquivo para escrita
    /*
    arq = fopen("cinema.txt", "a");
    printf("Escreva seu nome: ");

    char nome[30];
    scanf("%s", &nome);
    fprintf(arq, "%s", nome);
    fclose(arq);
    */

    //Abrindo novamente o arquivo para leitura e escrita na tela
    arq = fopen("cinema.txt", "r");

    char var[100];

    fscanf(arq, "%s", &var);

    while(!feof(arq)){
        printf("%s\n", var);
        fscanf(arq, "%s", &var);
    }

    return 0;
}
