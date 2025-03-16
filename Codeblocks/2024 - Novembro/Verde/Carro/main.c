#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[30];
    int ano;
    float preco;
} Carro;

int numCarros()
{
    int x;
    scanf("%i", &x);

    return x;
}

void lerCarros(Carro carros[],int x)
{

    for (int i = 0; i < x; i++)
    {
        while (getchar() != '\n');
        fgets(carros[i].marca,30,stdin);

    size_t len = strlen(carros[i].marca);
    	if (len > 0 && carros[i].marca[len - 1] == '\n') {
        carros[i].marca[len - 1] = '\0';
    	}

        scanf(" %i", &carros[i].ano);
        scanf(" %f", &carros[i].preco);
    }
}

float precoMaximo()
{
    float x;
    scanf("%f", &x);
    return x;
}

void escreveCarrosPrecoMenor(Carro carros[], int x, float precoMax)
{
    printf("Carros com preco menor que %.2f:", precoMax);
    for (int i = 0; i < x; i++)
    {
        if (carros[i].preco < precoMax)
        {
            printf("\nMarca: %s, ", carros[i].marca);
            printf("Ano: %i, ", carros[i].ano);
            printf("Preco: %.2f", carros[i].preco);
        }
    }
}


int main()
{
    int x = numCarros();
    Carro carros[x];
    lerCarros(carros,x);

    float precoMax = precoMaximo();
    escreveCarrosPrecoMenor(carros, x, precoMax);

    return 0;
}
