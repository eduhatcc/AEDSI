#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

#define _MAX 50

using namespace std;

class Candidato {
private:
    string nome;
    double nota;

public:
    Candidato(string nome, double nota) {
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
        return nome;
    }

    double getNota()
    {
        return nota;
    }
};

int lerNumCandidatos()
{
    int n;
    do {
        cin >> n;
    }while(n < 0 || n > _MAX);

    return n;
}

Candidato* criarCandidato()
{
    string nome;
    double nota;

    cin >> nome;
    cin >> nota;

    return new Candidato(nome, nota);
}

double calcularMedia(Candidato* CANDIDATO[], int n)
{
    double soma = 0;
    for(int i=0; i < n; i++) {
        soma += CANDIDATO[i]->getNota();
    }

    return soma / n;
}

void listarAcimaMedia(Candidato* CANDIDATO[], int n, double media)
{
    for(int i=0; i < n; i++) {
        if(CANDIDATO[i]->getNota() > media) {
            cout << CANDIDATO[i]->getNome() << " " << CANDIDATO[i]->getNota() << "\n";
        }
    }
}

int main()
{
    int n = lerNumCandidatos();
    Candidato* CANDIDATO[_MAX];

    for(int i=0; i < n; i++) {
        CANDIDATO[i] = criarCandidato();
    }

    double media = calcularMedia(CANDIDATO, n);
    listarAcimaMedia(CANDIDATO, n, media);

    return 0;
}
