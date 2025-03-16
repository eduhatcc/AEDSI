#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int MAX_STR = 50;
const int MAX = 5;
int TAM = 0;

typedef struct
{
    float A;
    float B;
    float C;
} Triangulo;

void cadastreTriangulos(Triangulo triangulos[])
{
    for(int i=0; i < MAX; i++) {
        printf("\nA = ");
        scanf("%f", &triangulos[i].A);

        printf("\nB = ");
        scanf("%f", &triangulos[i].B);

        printf("\nC = ");
        scanf("%f", &triangulos[i].C);
    }
}

bool ehTriangulo(Triangulo triangulos[], int i)
{
    bool eh = false;

    if(triangulos[i].A == triangulos[i].B && triangulos[i].A == triangulos[i].C) {
        eh = true;
    }

    return eh;
}

int qtEquilateros(Triangulo triangulos[])
{
    int qt = 0;

    for(int i=0; i < MAX; i++)
    {
        if(ehTriangulo(triangulos, i)) {
            qt++;
        }
    }

    return qt;
}

int main()
{
    Triangulo triangulos[MAX];

    cadastreTriangulos(triangulos);

    printf("\nHa %i triangulos equilateros\n", qtEquilateros(triangulos));

    return 0;
}
