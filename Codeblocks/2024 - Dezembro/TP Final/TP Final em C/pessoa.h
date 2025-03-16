
#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdbool.h>

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;

int TAM = 0;

int tamanho(char* arq) {
    FILE* arqTamanho = fopen(arq,"r");
    if(arqTamanho == NULL){
        arqTamanho = fopen(arq,"w");
        TAM=0;
        fprintf(arqTamanho, "%i", TAM);
    } else {
        fscanf(arqTamanho, "%i", &TAM);
    }
    fclose(arqTamanho);
    return TAM;
}

void abertura(Pessoa PESSOAS[]){
    printf("\nControle de Pessoas\n");
    TAM = tamanho("tamanhoArq.dat");
    carregaPessoas(PESSOAS);
}

void escrevaPessoa(Pessoa PESSOAS[], int i){
    escrevaEstaPessoa(PESSOAS[i]);
}

void escrevaEstaPessoa(Pessoa PESSOA){
    printf("\nNome: %s", PESSOA.nome );
    printf("\nData de Nascimento: %d/%d/%d ",PESSOA.Nascimento.dia,PESSOA.Nascimento.mes,PESSOA.Nascimento.ano );
}

void cadastrePessoa(Pessoa PESSOAS[]){
    fflush(stdin); //Linux __fpurge(stdin);
    printf("\nNome: " );
    fgets(PESSOAS[TAM].nome , MAX_STR, stdin);
    printf("\nData de Nascimento [dd/mm/aaaa]: ");
    scanf("%d/%d/%d",&PESSOAS[TAM].Nascimento.dia,&PESSOAS[TAM].Nascimento.mes,&PESSOAS[TAM].Nascimento.ano );
    TAM++;
}

void gravaPessoas(Pessoa PESSOAS[]){
    FILE* arqPessoas = fopen("pessoas.dat", "w");
    fwrite(PESSOAS, sizeof(Pessoa), TAM, arqPessoas);
    fclose(arqPessoas);
    FILE* arqTamanho = fopen("tamanhoArq.dat", "w");
    fprintf(arqTamanho, "%i", TAM);
    fclose(arqTamanho);
}

void carregaPessoas(Pessoa PESSOAS[]) {
    FILE* arqPessoas = fopen("pessoas.dat", "r+");
    if(arqPessoas == NULL){
        arqPessoas = fopen("pessoas.dat","w+");
    }
    fread(PESSOAS, sizeof(Pessoa),TAM,arqPessoas);
    fclose(arqPessoas);
}

void listaPessoas(Pessoa pessoas[]){
    for(int i=0; i<TAM ; i++) {
        escrevaPessoa(pessoas[i]);
    }
}

int pesquisarPessoa(Pessoa* pessoas[], int numPessoas, const char* nomeBusca) {
    bool encontrou = false;
    int id = -1; // -1 para começar com um número não existente no vetor como forma de retornar "vazio"

    for (int i = 0; i < numPessoas; i++) {
        if (strcmp(pessoas[i]->getNome, nomeBusca) == 0) {
            id = i;  // Recebe o índice da pessoa encontrada
            encontrou = true;
        }
    }

    if (encontrou) {
        cout << endl << "Pessoa '%s' encontrada!" << nomeBusca << endl;
    } else {
        cout << endl << "Pessoa não encontrada!" << endl;
    }

    return id;  // Retorna o id da pessoa
}

int pesquisarPessoaCPF(Pessoa* pessoas[], int numPessoas, const char* CPFBusca) {
    bool encontrou = false;
    int id = -1; // -1 para começar com um número não existente no vetor como forma de retornar "vazio"

    for(int i = 0; i < numPessoas; i++) {
        if (strcmp(pessoas[i]->getCPF, CPFBusca) == 0) {
            id = i;  // Recebe o índice da pessoa encontrada
            encontrou = true;
        }
    }

    if (encontrou) {
        cout << endl << "Pessoa '%s' encontrada!" << pessoas[id]->getCPF << endl;
    } else {
        cout << endl << "Pessoa não encontrada!" << endl;
    }

    return id;  // Retorna o id da pessoa
}


void excluirPessoa(Pessoa PESSOAS[], const char* nomeExcluir) {
    bool encontrado = false;
    int id = -1;

    for (int i = 0; i < TAM; i++) {
        if (strcmp(PESSOAS[i].nome, nomeExcluir) == 0) {
            id = i;
            encontrado = true;
        }
    }

    if (encontrado) {
        // Move todos os elementos após a pessoa excluída uma posição para a esquerda
        for (int i = id; i < TAM - 1; i++) {
            PESSOAS[i] = PESSOAS[i + 1];
        }
        TAM--;
        printf("\nPessoa '%s' excluída com sucesso!\n", nomeExcluir);
    } else {
        printf("\nPessoa não encontrada!\n");
    }
}

void excluirTodos(Pessoa pessoa[TAM]){
    if (TAM >= 0) {
        excluirPessoa(pessoa[TAM], TAM-1);
    }
}


#endif // PESSOA_H_INCLUDED
