#include <iostream>
#define _MAX 100

using namespace std;

class Candidato {
private:
    string nome;
    double nota;

public:
    Candidato(string nome, double nota)
    {
        setNome(nome);
        setNota(nota);
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    void setNota(double nota)
    {
        this->nota = nota;
    }

    string getNome()
    {
        return this->nome;
    }

    double getNota()
    {
        return this->nota;
    }
};

Candidato* criarCandidato(int i)
{
    string nome;
    double nota;

    cout << "\n\tDigite os dados do " << i+1 << ".o candidato";

    cout << "\nDigite o nome: ";
    cin >> nome;

    cout << "\nDigite a nota: ";
    cin >> nota;
    cout << endl;

    return new Candidato(nome, nota);

}

double calcularMedia(Candidato* CANDIDATO[], int N)
{
    double soma = 0;

    for(int i=0; i < N; i++) {
        soma += CANDIDATO[i]->getNota();
    }

    return soma / N;
}

void listarAcimamedia(Candidato* CANDIDATO[], double media, int N)
{
    cout << "\n\tCandidatos acima da media: " << endl;

    for(int i=0; i < N; i++) {
        if(CANDIDATO[i]->getNota() > media) {
            cout << CANDIDATO[i]->getNome() << " " << CANDIDATO[i]->getNota() << endl;
        }
    }
}

int lerQtCandidatos()
{
    int N;
    do {
        cout << "\nDigite a quantidade de alunos a ser lido: ";
        cin >> N;
    }while(N < 0 || N > _MAX);

    return N;
}

int main()
{
    int N = lerQtCandidatos();
    Candidato* CANDIDATO[_MAX];

    for(int i=0; i < N; i++) {
        CANDIDATO[i] = criarCandidato(i);
    }

    double media = calcularMedia(CANDIDATO, N);

    listarAcimamedia(CANDIDATO, media, N);

    return 0;
}
