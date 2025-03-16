#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STR 30
#define MAX 14

int TAM = 5;

typedef struct
{
    char nome[MAX_STR];
    char cpf[MAX];
} Pessoa;

void despedida()
{
    printf("\n\nObrigado por usar o programa!");
}

void cadastrarPessoa(Pessoa pessoas)
{
    char nomeCadastro[MAX_STR];
    char cpfCadastro[MAX];

    do {
        printf("\nDigite o nome: [Ex: Ryan] ");
        scanf("%s", nomeCadastro);
    }while(strlen(nomeCadastro) > MAX_STR);

    do {
        printf("\nDigite o CPF: [Ex: 123.456.789-01]");
        scanf("%s", cpfCadastro);
    }while(strlen(cpfCadastro) > MAX);

    strcpy(pessoas[TAM].nome, nomeCadastro);
    strcpy(pessoas[TAM].cpf, cpfCadastro);

    TAM++;

    printf("\nPessoa cadastrada!\n");

}

void listaTodos(Pessoa pessoas)
{
    for(int i=0; i < TAM; i++) {
        printf("\n%da pessoa: ", i+1);
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nCPF: %s\n", pessoas[i].cpf);
    }
}

bool pesquisaNome2(Pessoa pessoas, char pesquisa[])
{
    bool encontrou = false;
    int i = 0;

    while(i < TAM) {
        if(!strcmp(pessoas[i], pesquisa)) {
            printf("\n%s", pessoas[i].nome);
            printf("\n%s", pessoas[i].cpf);
            encontrou = true;
        }
    }

    return encontrou;
}

bool pesquisaNome(Pessoa pessoas)
{
    char pesquisa[];
    bool encontrou = false;

    do {
        printf("\nDigite o nome para pesquisa: [Ex: Eduardo] ");
        scanf("%s", pesquisa);

        if(pesquisaNome2(pessoas, pesquisa)); {
            printf("\nUsuario(s) encontrado(s)!\n");
            encontrou = true;
        } else {
            printf("\nUsuario nao encontrado!\n");
        }
    }

    return encontrou;
}

bool pesquisaCpf2(Pessoa pessoas, char pesquisa[])
{
    bool encontrou = false;
    int i = 0;

    while(i < TAM) {
        if(!strcmp(pessoas[i].cpf, pesquisa)) {
            printf("\n%s", pessoas[i].nome);
            printf("\n%s", pessoas[i].cpf);
            encontrou = true;
        }
    }

    return encontrou;
}

bool pesquisaCpf(Pessoa pessoas)
{
    char pesquisa[];
    bool encontrou = false;
    do {
        printf("\nDigite o CPF para pesquisa: [Ex: 123.456.789-01] ");
        scanf("%s", pesquisa);

        if(pesquisaCpf2(pessoas, pesquisa)); {
            printf("\nUsuario(s) encontrado(s)!\n");
            encontrou = true;
        } else {
            printf("\nUsuario nao encontrado!\n");
        }
    }

    return encontrou;
}

void excluiPessoa(Pessoa pessoas)
{
    int i = 0;
    int j = TAM-1;

    while(i < TAM) {
        if(pesquisaCpf2(pessoas, pessoas[i].nome)){
            while(j >= i) {
                  pessoa[j+1] = pessoa[j];
            }
            TAM--;
        }
        i++;
    }
}

void excluiTodos(Pessoa pessoas)
{

    for(int i=TAM; i >= 0; i--) {
        pessoas[i-1] = 0;
        TAM--;
    }

    if(TAM == 0) {
        printf("\nTodas as pessoas foram excluidas!\n");
    }
}

int main()
{
    Pessoa pessoas = {
        {"Eduardo", "111.111.111-11"},
        {"Patricia", "019.876.543-21"},
        {"Lucas", "222.222.222-22"},
        {"Sonia", "195.125.633.63"},
        {"Nathalia","333.333.333-33"}
    };

    int resp = 0;
    do {
        do {
            printf("\n\tMenu");
            printf("\n[0] sair");
            printf("\n[1] cadastrar pessoa");
            printf("\n[2] listas todas pessoas");
            printf("\n[3] pesquisa por nome");
            printf("\n[4] pesquisa por cpf");
            printf("\n[5] excluir pessoa");
            printf("\n[6] excluir todas as pessoas");
            printf("\n\tSua opcao: ");
        }while(resp < 0 && resp > 6);

        switch(resp) {
            case 0; despedir();
                    break;
            case 1: cadastrarPessoa(pessoas);
                    break;
            case 2: listaTodos(pessoas);
                    break;
            case 3: pesquisaNome(pessoas);
                    break;
            case 4: pesquisaCpf}(pessoas);
                    break;
            case 5: excluiPessoa(pessoas);
                    break;
            case 6: excluiTodos(pessoas);
        }
    }

    return 0;
}
