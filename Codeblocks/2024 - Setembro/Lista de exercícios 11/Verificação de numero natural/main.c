#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao (){
    printf("Verificador de numeros primos!\n\n");
}


float verificacao(float x) {
    bool primo = false;
    if(x / 2 == 0){
        bool primo = true;
    }
    return primo;

}

void escrevaResultado(float resultado) {
    if(resultado == 1)
        printf("\nO numero %d eh primo!", resultado);
    else printf("\nO numero %d nao eh primo!", resultado);
}

int main()
{
    apresentacao();

    int valor;
    printf("Digite um numero natural: \n");
    scanf("%f", &valor);

    int resultado = verificacao(valor);

    escrevaResultado(resultado);


    return 0;
}
