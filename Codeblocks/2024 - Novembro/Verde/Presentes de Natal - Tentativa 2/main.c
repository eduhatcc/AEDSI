#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR 100
#define MAX 90

typedef struct {
    char nome[MAX_STR];
    float preco;
    int prioridade;
} Presente;

typedef struct {
    char nomeDono[MAX_STR];
    int quantidade;
    Presente presentes[MAX];
} Lista;

int ordenaPresentes(Lista *lista) {
     for(int i = 0; i < lista->quantidade - 1; i++) {
        for (int j = 0; j < lista->quantidade - 1 - i; j++) {
            if (lista->presentes[j].prioridade < lista->presentes[j+1].prioridade) {
                Presente temp = lista->presentes[j];
                lista->presentes[j] = lista->presentes[j+1];
                lista->presentes[j+1] = temp;
            }//Fim if
            else if (lista->presentes[j].prioridade == lista->presentes[j+1].prioridade) {
                if (lista->presentes[j].preco > lista->presentes[j+1].preco) {
                    Presente temp = lista->presentes[j];
                    lista->presentes[j] = lista->presentes[j+1];
                    lista->presentes[j+1] = temp;
                }//Fim if
                else if (lista->presentes[j].preco == lista->presentes[j+1].preco) {
                    if (strcmp(lista->presentes[j].nome, lista->presentes[j+1].nome) > 0) {
                        Presente temp = lista->presentes[j];
                        lista->presentes[j] = lista->presentes[j+1];
                        lista->presentes[j+1] = temp;
                    }//Fim if
                }//Fim else if
            }//Fim else if
        }//For for j
    }//Fim for i
}

void imprimirLista(Lista lista) {
    printf("Lista de %s\n", lista.nomeDono);
    for (int i = 0; i < lista.quantidade; i++) {
        printf("%s - R$%.2f\n", lista.presentes[i].nome, lista.presentes[i].preco);
    }
    printf("\n");
}

int main() {
    char nomeDono[MAX_STR];
    int quantidade;
    Lista lista;

    // Lê até EOF
    while (scanf("%s %d", nomeDono, &quantidade) == 2) {
        // Inicializa lista
        strcpy(lista.nomeDono, nomeDono);
        lista.quantidade = 0;

        // Lê os itens
        for (int i = 0; i < quantidade; i++) {
            // Lê nome do item (pode conter espaços)
            scanf(" %[^\n]", lista.presentes[lista.quantidade].nome);

            // Lê valor e prioridade na próxima linha
            scanf("%f %d", &lista.presentes[lista.quantidade].preco,
                         &lista.presentes[lista.quantidade].prioridade);

            lista.quantidade++;
        }

        ordenaPresentes(&lista);
        imprimirLista(lista);
    }
    return 0;
}
