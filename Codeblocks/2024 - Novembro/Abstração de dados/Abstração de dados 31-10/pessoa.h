#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#define MAX_STR 50
#define MAX 100
#include "data.h"
#include <string.h>

typedef struct
{
    char CPF[14];
    char nome[MAX_STR];
    Data dataNascimento;
} Pessoa;

int TAM = 0;

int tamanho(char* arq)
{
    FILE* arqTamanho = fopen(arq,"rb");

    if(arqTamanho == NULL){
        arqTamanho = fopen(arq,"wb");
        TAM = 0;
        fprintf(arqTamanho, "%i", TAM);
    }
    else {
        fscanf(arqTamanho, "%i", &TAM);
    }
    fclose(arqTamanho);
    return TAM;
}

void pesquisaPessoaNome(Pessoa pessoas[], char* nome)
{
    for(int i=0; i < TAM; i++) {
        if(strcmp(pessoas[i].nome, nome)) {
            escrevaEstPessoa(pessoas[i]);
        }
    }
}

bool deletaPessoa(Pessoa pessoas[], char* CPF)
{
    bool deletou = false;
    int i = 0;

    while(!deletou && i < TAM) {
        if(strcmp(pessoas[i].CPF, CPF == 0)) { //Ou if(strcmp(pessoas[i].CPF, CPF) == 0)
            for(int j = i; j < TAM-1; j++) {
                pessoas[j].CPF = pessoas[j+1];
            }
            deletou = true;
        } //Fim if
        i++;
    } TAM--;

    return deletou;
}

Pessoa* pesquisaPessoaCPF(Pessoa pessoas[], char* CPF)
{
    Pessoa* PESSOA = NULL;
    bool encontrou = false;
    int i = 0;

    while(!encontrou && i < TAM){
        if(!strcmp(pessoas[i].CPF, CPF)) {  //Ou if(strcmp(pessoas[i].CPF, CPF) == 0)
            PESSOA = &pessoas[i];
            encontrou = true;
        }
        i++;
    }

    return PESSOA;
}

void escrevaEstPessoa(Pessoa pessoa)
{
    printf("\nNome: %s", pessoa.nome);
    printf("\nData de nascmento: %d/%d/%d",
        pessoa.dataNascimento.dia,
        pessoa.dataNascimento.mes,
        pessoa.dataNascimento.ano
    );
    printf("\nCPF: %s", pessoa.CPF);
}

void escrevaPessoa(Pessoa pessoas[], int i)
{
    escrevaEstPessoa(pessoas[i]);
}

void cadastrePessoa(Pessoa pessoas[])
{
    fflush(stdin); //Linux__fpurge(stdin);
    printf("\nNome: ");
    fgets(pessoas[TAM].nome, MAX_STR, stdin);

    printf("\nData de nascimento [Ex: 01/01/2000]: ");
    scanf("%d/%d/%d",
          &pessoas[TAM].dataNascimento.dia,
          &pessoas[TAM].dataNascimento.mes,
          &pessoas[TAM].dataNascimento.ano
          );
          TAM++;
    printf("\nCPF: [Ex. 123.456.789-00]: ");
    fgets(pessoas[TAM].CPF, MAX_STR, stdin);
}

void abertura()
{
    printf("\nControle de pessoas\n");
    TAM = tamanho("tamanhoArq.dat");
}

//Ao abrir – Por exemplo, em abertura()
void carregaPessoas(Pessoa PESSOAS[])
{
    FILE* arqPessoas = fopen("pessoas.dat", "rb+");

    if(arqPessoas == NULL){
        arqPessoas = fopen("pessoas.dat","wb+");
    }

    fread(PESSOAS, sizeof(Pessoa), TAM, arqPessoas);
    fclose(arqPessoas);
}

//Ao fechar – Por exemplo, em despedida()
void gravaPessoas(Pessoa PESSOAS[])
{
    FILE* arqPessoas = fopen("pessoas.dat", "wb");

    fwrite(PESSOAS, sizeof(Pessoa), TAM, arqPessoas);
    fclose(arqPessoas);

    FILE* arqTamanho = fopen("tamanhoArq.dat", "wb");
    fprintf(arqTamanho, "%i", TAM);
    fclose(arqTamanho);
}


#endif // PESSOA_H_INCLUDED
