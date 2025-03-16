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
    virtual void imprime(){};
};

class PessoaFisica : public Pessoa{
private:
    string CPF;
public:
    PessoaFisica(){
        Pessoa();
        setCPF("000.000.000-00");
    }
    PessoaFisica(string nome, int idade, string CPF) : Pessoa(nome, idade){
        setCPF(CPF);
    }
    void setCPF(string CPF){
        this->CPF = CPF;
    }
    string getCPF(){
        return this->CPF;
    }
    void imprime() override{
        cout << "Pessoa Fisica" << ":" << endl;
        cout << "Nome: " << this->getNome() << endl;
        cout << "Idade: " << this->getIdade() << endl;
        cout << "CPF: " << this->getCPF() << endl << endl;
    }
};

class PessoaJuridica : public Pessoa{
private:
    string CNPJ;
public:
    PessoaJuridica(){
        Pessoa();
        setCNPJ("00.000.000/0000-00");
    }
    PessoaJuridica(string nome, int idade, string CNPJ) : Pessoa(nome, idade){
        Pessoa(nome, idade);
        setCNPJ("11.111.111/1111-11");
    }
    void setCNPJ(string CNPJ){
        this->CNPJ = CNPJ;
    }
    string getCNPJ(){
        return this-> CNPJ;
    }
    void imprime() override{
        cout << "Pessoa Juridica" << ":" << endl;
        cout << "Nome: " << this->getNome() << endl;
        cout << "Idade: " << this->getIdade() << endl;
        cout << "CNPJ: " << this->getCNPJ() << endl << endl;
    }
};

    /*void imprimePessoa(PessoaFisica* PF[], PessoaJuridica* PJ[]){
        for(int i=0; i < 3; i++){
            cout << "Pessoa Fisica " << i+1 << ":" << endl;
            cout << "Nome: " << PF[i]->getNome() << endl;
            cout << "Idade: " << PF[i]->getIdade() << endl;
            cout << "CPF: " << PF[i]->getCPF() << endl << endl;
        }
    }*/


/*void escrevePessoas(Pessoa* pessoa[]){
    for(int i=0; i < 2; i++){
        cout << "Pessoa " << i+1 << ":" << endl;
        cout << "Nome: " << pessoa[i]->getNome() << endl;
        cout << "Idade: " << pessoa[i]->getIdade() << endl << endl;
    }
}*/

int main()
{
    PessoaFisica* PF[3];
    PF[0] = new PessoaFisica("Eduardo", 20, "111.111.111-11");
    PF[1] = new PessoaFisica("Patricia", 21, "222.222.222-22");
    PF[2] = new PessoaFisica();

    PessoaJuridica* PJ[2];
    PJ[0] = new PessoaJuridica("Planet Card", 0, "33.333.333/3333-33");
    PJ[1] = new PessoaJuridica("Kon Eletronicos", 0, "44.444.444/4444-44");

    PF[0]->imprime();
    PJ[0]->imprime();
    return 0;
}
