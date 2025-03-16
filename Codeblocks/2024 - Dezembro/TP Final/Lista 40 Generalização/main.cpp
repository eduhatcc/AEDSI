#include <iostream>

using namespace std;

class Pessoa {
private:
    string nome;
public:
    void setNome(string nome){
        this->nome = nome;
    }
    string getNome(){
        return this->nome;
    }
};

class PessoaFisica : public Pessoa {
private:
    string CPF;
public:
    void setCpf(string CPF){
        this->CPF = CPF;
    }
    string getCpf(){
        return this->CPF;
    }
};

class PessoaJuridica : public Pessoa {
private:
    string CNPJ;
public:
    PessoaJuridica(){}
    PessoaJuridica(string nome, string CNPJ){
        setNome(nome);
        setCnpj(CNPJ);
    }
    void setCnpj(string CNPJ){
        this->CNPJ = CNPJ;
    }
    string getCnpj(){
        return this->CNPJ;
    }
};

int main()
{
    Pessoa* P = new Pessoa->setNome("Eduardo");
    PessoaFisica* PF = new PessoaFisica->setCpf("111.111.111-11");
    PessoaJuridica* PJ = new PessoaJuridica->setCnpj("")

    return 0;
}
