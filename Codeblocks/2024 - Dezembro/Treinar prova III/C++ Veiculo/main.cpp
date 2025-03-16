#include <iostream>

using namespace std;

class Veiculo{
private:
    string modelo;
    int ano;
public:
    Veiculo(){
        setModelo("Nao informado");
        setAno(0);
    }
    Veiculo(string modelo, int ano){
        setModelo(modelo);
        setAno(ano);
    }
    void setModelo(string modelo){
        this->modelo = modelo;
    }
    void setAno(int ano){
        this->ano = ano;
    }
    string getModelo(){
        return this->modelo;
    }
    int getAno(){
        return this->ano;
    }
    virtual void escreve(){}
};

class Carro : public Veiculo{
private:
    string tracao;
public:
    Carro(){
        Veiculo();
        setTracao("Nao informado");
    }
    Carro(string modelo, int ano, string tracao) : Veiculo(modelo, ano){
        setTracao(tracao);
    }
    void setTracao(string tracao){
        this->tracao = tracao;
    }
    string getTracao(){
        return this->tracao;
    }
    void escreve() override{
        cout << "\nModelo: " << this->getModelo();
        cout << "\nAno: " << this->getAno();
        cout << "\nTracao: " << this->getTracao() << endl;
    }
};

class Moto : public Veiculo{
private:
    int cilindrada;
public:
    Moto(){
        Veiculo();
        setCilindrada(0);
    }
    Moto(string modelo, int ano, int cilindrada) : Veiculo(modelo, ano){
        setCilindrada(cilindrada);
    }
    void setCilindrada(int cilindrada){
        this->cilindrada = cilindrada;
    }
    int getCilindrada(){
        return this->cilindrada;
    }
    void escreve() override{
        cout << "\nModelo: " << this->getModelo();
        cout << "\nAno: " << this->getAno();
        cout << "\nCilindrada: " << this->getCilindrada() << endl;
    }
};

void escreve(Veiculo* veiculo){
    veiculo->escreve();
}

int main()
{
    Veiculo* veiculo[4];
    veiculo[0] = new Carro("Gol", 2020, "dianteira");
    veiculo[1] = new Carro();
    veiculo[2] = new Moto();
    veiculo[3] = new Moto("XTZ Crosser 150", 2019, 150);

    for(int i=0; i < 4; i++){
        veiculo[i]->escreve();
    }

    return 0;
}
