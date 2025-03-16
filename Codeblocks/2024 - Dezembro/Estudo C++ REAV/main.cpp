#include <iostream>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(){
        setNome("Sem nome");
        setIdade(0);
    }

    Pessoa(string nome, int idade){
        setNome(nome);
        setIdade(idade);
    }

    void setNome(string nome){
        this->nome = nome;
    }

    void setIdade(int idade){
        this->idade = idade;
    }

    string getNome(){
        return this->nome;
    }

    int getIdade(){
        return this->idade;
    }

    virtual void escreve(){}
};

class PessoaFisica : public Pessoa {
private:
    string CPF;
public:
    PessoaFisica() : Pessoa() {
        setCpf("000.000.000-00");
    }

    PessoaFisica(string nome, int idade, string CPF) : Pessoa(nome, idade){
        setCpf(CPF);
    }

    void setCpf(string CPF){
        this->CPF = CPF;
    }

    string getCpf(){
        return this->CPF;
    }

    void escreve() override{
        cout << "Nome: " << this->getNome() << endl;
        cout << "Idade: " << this->getIdade() << endl;
        cout << "CPF: " << this->getCpf() << endl << endl;
    }
};

class PessoaJuridica : public Pessoa {
private:
    string CNPJ;
public:
    PessoaJuridica() : Pessoa(){
        setCnpj("00.000.000/0000-00");
    }

    PessoaJuridica(string nome, int idade, string CNPJ) : Pessoa(nome, idade){
        setCnpj(CNPJ);
    }

    void setCnpj(string CNPJ){
        this->CNPJ = CNPJ;
    }

    string getCnpj(){
        return this->CNPJ;
    }

    void escreve() override{
        cout << "Nome: " << this->getNome() << endl;
        cout << "Idade: " << this->getIdade() << endl;
        cout << "CNPJ: " << this->getCnpj() << endl << endl;
    }
};

int main()
{
    Pessoa* pessoas[10];

    pessoas[0] = new PessoaFisica("Eduardo", 20, "111.111.111-11");
    pessoas[1] = new PessoaJuridica("ONG", 50, "11.111.111/1111-11");
    pessoas[2] = new PessoaFisica("Patricia", 21, "222.222.222-22");
    pessoas[3] = new PessoaJuridica("Planet Card", 17, "00.000.000/0000-00");
    pessoas[4] = new PessoaFisica();
    pessoas[5] = new PessoaJuridica();
    pessoas[6] = new PessoaJuridica();
    pessoas[7] = new PessoaFisica("Sonia", 61, "333.333.333-33");
    pessoas[8] = new PessoaFisica();
    pessoas[9] = new PessoaJuridica();


    for(int i=0; i < 10; i++){
        pessoas[i]->escreve();
    }

    return 0;
}
