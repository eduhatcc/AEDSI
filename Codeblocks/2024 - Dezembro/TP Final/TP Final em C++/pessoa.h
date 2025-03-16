#define PESSOA_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

class Pessoa {
private:
    char nome[50];
    Data nascimento;

public:

};

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

void escrevaPessoa(Pessoa PESSOAS[], int i) {
    escrevaEstaPessoa(PESSOAS[i]);
}

void escrevaEstaPessoa(Pessoa PESSOA) {
    cout << "\nNome: " << PESSOA.nome;
    cout << "\nData de Nascimento: "
              << PESSOA.nascimento.dia << "/"
              << PESSOA.nascimento.mes << "/"
              << PESSOA.nascimento.ano << "\n";
}

void cadastrePessoa(Pessoa PESSOAS[]) {
    fflush(stdin); //Linux __fpurge(stdin);
    cout << "\nNome: ";
    cin.getline(PESSOAS[TAM].nome, sizeof(PESSOAS[TAM].nome));
    cout << "\nData de Nascimento [dd/mm/aaaa]: ";
    cin >> PESSOAS[TAM].nascimento.dia
             >> PESSOAS[TAM].nascimento.mes
             >> PESSOAS[TAM].nascimento.ano;
    TAM++;
}

void gravaPessoas(Pessoa PESSOAS[]) {
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


void listaPessoas(Pessoa PESSOAS[]) {
    for (int i = 0; i < TAM; i++) {
        escrevaPessoa(PESSOAS, i);
    }
}

int pesquisarPessoa(Pessoa PESSOAS[], int numPessoas, const char* nomeBusca) {
    int n = -1;
    or (int i = 0; i < numPessoas; i++) {
        if (strcmp(PESSOAS[i].nome, nomeBusca) == 0) {
            n = i;
        }
    }
    return n;
}

void excluirPessoa(Pessoa PESSOAS[], const char* nomeExcluir) {
    int id = pesquisarPessoa(PESSOAS, TAM, nomeExcluir);
    if (id != -1) {
        for (int i = id; i < TAM - 1; i++) {
            PESSOAS[i] = PESSOAS[i + 1];
        }
        TAM--;
        cout << "\nPessoa '" << nomeExcluir << "' excluída com sucesso!\n";
    } else {
        cout << "\nPessoa não encontrada!\n";
    }
}

void excluirTodos(Pessoa PESSOAS[]) {
    TAM = 0; // Reseta o tamanho
    cout << "\nTodos os registros foram excluídos!\n";
}

#endif // PESSOA_H_INCLUDED
