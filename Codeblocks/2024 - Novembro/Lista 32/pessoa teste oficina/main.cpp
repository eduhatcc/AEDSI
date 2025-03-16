#include <iostream>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    Pessoa(){
        this->nome = "Sem nome";
        this->idade = 0;
    }
    Pessoa(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
    }

    string getNome() {
        return this->nome;
    }

    int getIdade() {
        return this->idade;
    }
};

class PessoaFisica : public Pessoa{
private:
    string CPF;
};

class PessoaJuridica : public Pessoa{
private:
    string CNPJ;
};

int main()
{
    Pessoa pessoa;

    cout << pessoa.getNome();
    cout << pessoa.getIdade();

    return 0;
}
