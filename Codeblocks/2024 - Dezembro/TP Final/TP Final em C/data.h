#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

char* mesExtenso(Data data) {
    char* mes[]={“janeiro”,”fevereiro”,”março”,”abril”,“maio”,”junho”,
                ”julho”,”agosto”,“setembro”,”outubro”,”novembro”,”dezembro”};
    return mes[data.mes-1];
}

void escreveData(Data data){
    printf(“%d/%d/%d”,data.dia,data.mes,data.ano);
}

void leiaData(Data* data){
    printf("\nDigite a data [Ex: dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &data->dia, &data->mes, &data-> ano);
}

void bissexto(int ano) {
    bool eh_bissexto = true

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        eh_bissexto = true;
    } else {
        eh_bissexto = false;
    }

    return eh_bissexto;
}

int diaSemana(Data data) {
    if (data.mes < 3) {
        data.mes += 12;
        data.ano -= 1;
    }

    int d = data.dia;
    int m = data.mes;
    int a = data.ano % 100;
    int da = data.ano / 100;

    int s = (q + (13 * (m + 1)) / 5 + K + K / 4 + J / 4 - 2 * J) % 7;

    return s;
}

#endif // DATA_H_INCLUDED
