#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

int diasMes(Data data)
{
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dias[data.mes-1];
}

char* mesExtenso(Data data)
{
    char* mes[] = {"janeiro", "fevereiro", "março", "abril",
                    "maio", "junho", "julho", "agosto",
                    "setembro", "outubro", "novembro", "dezembro"
                    };
    return mes[data.mes-1];
}

bool ehBissexto(Data data)
{
    bool ehBissexto = false;

    if(data.ano % 4 == 0){
        ehBissexto = true;
    }

    return ehBissexto;
}
// integer diasMes()
//string mesExtenso
//boolean ehBissexto()
// boolean dataValida()
//string diaSemana()

void escreveData(Data data)
{
    printf("\n%d/%d/%d\n",
           data.dia,
           data.mes,
           data.ano
           );
}

void leiaData(Data* data)
{
    printf("\nData de nascimento[Ex. 01/01/2000]:  ");
    scanf("%d/%d/%d",
          &data -> dia,
          &data -> mes,
          &data -> ano
          );
}

#endif // DATA_H_INCLUDED
