#include <stdio.h>
#include <math.h>  // Para usar a constante M_PI

int main() {
    double raio = 1.0;   // Raio do círculo
    double area;

    // Calcula a área usando a fórmula
    area = M_PI * raio * raio;

    // Exibe a área
    printf("A area de um circulo com raio %.1f eh %.6f\n", raio, area);

    return 0;
}
