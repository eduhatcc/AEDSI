#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void apresentacao() {
    printf("Calcular o peso ideal por genero!\n\n");
}

char genero() {
    char sexo;
    printf("\nQual o seu genero? [M/F]: ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);
    while(sexo != M || sexo != F)
        printf("\nApenas [M ou F]");

    return sexo;
}

int idade () {
    int idade;
    do{
        printf("Digite a sua idade: \n");
        scanf("%d", &idade);
    } while(idade < 0 || idade > 150)

    return idade;
}

float peso_ideal() {

}

void escreva () {

}


int main()
{
    apresentacao();

    idade ();

    genero();




    return 0;
}
