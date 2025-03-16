/***************************************************************************
*                   Trabalho Prático Final - AEDs I                        *
*                                                                          *
*                Aluno: Eduardo Henrique Aniceto Teixeira                  *
*                                                                          *
***************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <cctype>
#include <algorithm>

using namespace std;

/****************
* CLASSE - DATA *
****************/

class Data {
private:
    int dia;
    int mes;
    int ano;
public:
    Data() : dia(1), mes(1), ano(1900) {}
    Data(int dia, int mes, int ano) : dia(dia), mes(mes), ano(ano) {}

    void setData(int dia, int mes, int ano) {
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }

    int getDia() const { return dia; }
    int getMes() const { return mes; }
    int getAno() const { return ano; }

    void leiaData() {
        bool dataOK = false;
        while (!dataOK) {
            try {
                cout << "Digite a data de nascimento no formato [dd/mm/aaaa]: ";
                if (scanf("%d/%d/%d", &dia, &mes, &ano) != 3) {
                    throw invalid_argument("Formato invalido! Tente novamente.");
                }

                if (!dataValida()) {
                    throw invalid_argument("Data invalida! Tente novamente.");
                }
                dataOK = true;
            } catch (const invalid_argument& e) {
                cout << e.what() << endl;
            }
        }
    }

    bool dataValida() {
        bool ehValido;
        int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (mes < 1 || mes > 12) {
            ehValido = false;
        }

        if (dia < 1 || dia > dias[mes - 1]) {
            if (mes == 2 && ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))) {
                if (dia > 29) {
                    ehValido = false;
                }
            } else {
                ehValido = false;
            }
        }

        return ehValido;
    }

    void escreveData() const {
        cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
    }
};

/******************
* CLASSE - CPF    *
******************/

class Cpf {
private:
    string cpf;

public:
    Cpf() {}

    ~Cpf() {}

    void setCpf(const string& cpf) {
        this->cpf = cpf;
    }

    string getCpf() const {
        return this->cpf;
    }

    bool validarCPF(const string& cpf) {
        if (cpf.length() != 11 || cpf.find_first_not_of("0123456789") != string::npos) {
            return false;
        }

        vector<int> cpfDigitos(11);
        for (int i = 0; i < 11; ++i) {
            cpfDigitos[i] = cpf[i] - '0';
        }

        vector<int> pesos1 = {10, 9, 8, 7, 6, 5, 4, 3, 2};
        vector<int> pesos2 = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

        int soma1 = 0;

        for (int i = 0; i < 9; ++i) {
            soma1 += cpfDigitos[i] * pesos1[i];
        }

        int digito1 = (soma1 * 10) % 11;

        if (digito1 == 10) digito1 = 0;

        int soma2 = 0;
        for (int i = 0; i < 10; ++i) {
            soma2 += cpfDigitos[i] * pesos2[i];
        }
        int digito2 = (soma2 * 10) % 11;
        if (digito2 == 10) digito2 = 0;

        return cpfDigitos[9] == digito1 && cpfDigitos[10] == digito2;
    }
};

/******************
* Class | PESSOA  *
******************/

class Pessoa {
protected:
    string nome;
    Data nascimento;
    Cpf identidade;

public:
    Pessoa() : nome("Usuario nao cadastrado!") {}
    virtual ~Pessoa() {}

    void setNome(const string& nome){
        this->nome = nome;
    }

    string getNome() const {
        return this->nome;
    }

    void leiaNome() {
        cout << "Digite o nome: ";
        cin >> nome;
    }

    void escrevaNome() const {
        cout << "Nome: " << getNome() << endl;
    }

    void leiaDataNascimento() {
        nascimento.leiaData();
    }

    void escrevaDataNascimento() const {
        cout << "Data de Nascimento: ";
        nascimento.escreveData();
    }

    void lerCpf() {
        string cpf;
        bool cpfValido = false;
        while (!cpfValido) {
            cout << "Digite o CPF (apenas numeros, sem pontos ou tracos): ";
            cin >> cpf;
            if (identidade.validarCPF(cpf)) {
                identidade.setCpf(cpf);
                cpfValido = true;
                cout << "CPF valido!" << endl;
            } else {
                cout << "CPF invalido. Tente novamente." << endl;
            }
        }
    }

    virtual void ler() = 0; // Método virtual para ler dados específicos de cada classe filha
    virtual void escreverDados() const = 0; // Método virtual para imprimir dados específicos de cada classe filha

    bool aniversarianteDoMes(const string& mesAtual) const {
        const string meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho",
                                "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

        string mesPessoa = meses[nascimento.getMes() - 1];

        transform(mesPessoa.begin(), mesPessoa.end(), mesPessoa.begin(), ::tolower);
        string mesAtualLower = mesAtual;
        transform(mesAtualLower.begin(), mesAtualLower.end(), mesAtualLower.begin(), ::tolower);

        return mesPessoa == mesAtualLower;
    }

    string getCpf() const {
        return identidade.getCpf();
    }
};

/*****************************
* Herança Class | PROFESSOR  *
*****************************/

class Professor : public Pessoa {
private:
    string formacao;

public:
    Professor() {}
    ~Professor() {}

    void setFormacao(const string& formacao){
        this->formacao = formacao;
    }

    string getFormacao() const { return formacao; }

    void ler() override {
        leiaNome();
        leiaDataNascimento();
        lerCpf();
        cout << "Digite a formacao: ";
        cin >> formacao;
    }

    void escreverDados() const override {
        escrevaNome();
        escrevaDataNascimento();
        cout << "Formacao: " << getFormacao() << endl;
        cout << "CPF: " << identidade.getCpf() << endl;
    }
};

/*****************************
* Herança Class | ALUNO      *
*****************************/

class Aluno : public Pessoa {
public:
    Aluno() {}
    ~Aluno() {}

    void ler() override {
        leiaNome();
        leiaDataNascimento();
        lerCpf();
    }

    void escreverDados() const override {
        escrevaNome();
        escrevaDataNascimento();
        cout << "CPF: " << identidade.getCpf() << endl;
    }
};

/****************
* Função | Menu *
****************/

int menu() {
    int escolhaMenu;

    cout << "\tMenu" << endl;
    cout << "1 - Cadastrar uma Pessoa" << endl;
    cout << "2 - Listar todas as Pessoas" << endl;
    cout << "3 - Pesquisar por Nome" << endl;
    cout << "4 - Pesquisar por CPF" << endl;
    cout << "5 - Excluir Pessoa" << endl;
    cout << "6 - Apagar todas as Pessoas Cadastradas" << endl;
    cout << "7 - Aniversariantes do Mes" << endl;
    cout << "\n\tEscolha uma opcao: ";
    cin >> escolhaMenu;

    return escolhaMenu;
}

/*******************
* Função | Submenu *
*******************/

int submenu() {
    int escolhaSubmenu;

    cout << "\tSubmenu" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Professor" << endl;
    cout << "2 - Aluno" << endl;
    cout << "Escolha uma opcao: ";

    cin >> escolhaSubmenu;

    return escolhaSubmenu;
}

// Função para listar aniversariantes do mês
void listarAniversariantes(const vector<Pessoa*>& pessoas, const string& mes) {
    cout << "\nAniversariantes de " << mes << ":" << endl;
    bool encontrou = false;
    for (Pessoa* pessoa : pessoas) {
        if (pessoa->aniversarianteDoMes(mes)) {
            pessoa->escreverDados();
            cout << "-----------------------" << endl;
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhuma pessoa faz aniversario neste mes." << endl;
    }
}

// Função para excluir uma pessoa pelo CPF
void excluirPessoaPorCpf(vector<Pessoa*>& pessoas, const string& cpf) {
    auto it = find_if(pessoas.begin(), pessoas.end(), [&cpf](Pessoa* pessoa) {
        return pessoa->getCpf() == cpf;
    });

    if (it != pessoas.end()) {
        delete *it;
        pessoas.erase(it);
        cout << "Pessoa excluída com sucesso!" << endl;
    } else {
        cout << "Pessoa não encontrada." << endl;
    }
}

// Função para excluir todas as pessoas
void excluirTodasPessoas(vector<Pessoa*>& pessoas) {
    for (Pessoa* pessoa : pessoas) {
        delete pessoa;
    }
    pessoas.clear();
    cout << "Todas as pessoas foram excluídas!" << endl;
}

void salvarDados(Pessoa* pessoas[], Aluno* alunos[], Professor*professores[]) {
    ofstream fileAlunos("alunos.txt");
    ofstream fileProfessores("professores.txt");

    if (!fileAlunos || !fileProfessores) {
        cout << "Erro ao abrir arquivos para salvar dados." << endl;
        return;
    }

    fileAlunos << Aluno::getQuantidade() << endl;
    fileProfessores << Professor::getQuantidade() << endl;

    for (int i = 0; i < Aluno::getQuantidade(); i++) {
        Aluno *aluno = alunos[i];
        fileAlunos << aluno->getNome() << " " << aluno->getNascimento().getDia() << " "
                   << aluno->getNascimento().getMes() << " " << aluno->getNascimento().getAno() << " "
                   << aluno->getMatricula() << endl;
    }

    for (int i = 0; i < Professor::getQuantidade(); i++) {
        Professor *professor = professores[i];
        fileProfessores << professor->getNome() << " " << professor->getNascimento().getDia() << " "
                        << professor->getNascimento().getMes() << " " << professor->getNascimento().getAno() << " "
                        << professor->getTitulacao() << endl;
    }

    fileAlunos.close();
    fileProfessores.close();
}

void carregarDados(Pessoa *pessoas[], Aluno *alunos[], Professor *professores[]) {
    ifstream fileAlunos("alunos.txt");
    ifstream fileProfessores("professores.txt");

    if (!fileAlunos || !fileProfessores) {
        cout << "Arquivos de dados nao encontrados. Criando novos arquivos." << endl;
        return;
    }

    int quantidadeAlunos, quantidadeProfessores;
    fileAlunos >> quantidadeAlunos;
    fileProfessores >> quantidadeProfessores;

    for (int i = 0; i < quantidadeAlunos; i++) {
        Aluno *aluno = new Aluno();
        string nome;
        int dia, mes, ano, matricula;
        fileAlunos >> nome >> dia >> mes >> ano >> matricula;
        aluno->setNome(nome);
        aluno->setNascimento(dia, mes, ano);
        aluno->setMatricula(matricula);
        alunos[i] = aluno;
        pessoas[i] = aluno;
        Aluno::incrementarQuantidade();
        Pessoa::incrementarQuantidade();
    }

    for (int i = 0; i < quantidadeProfessores; i++) {
        Professor *professor = new Professor();
        string nome, titulacao;
        int dia, mes, ano;
        fileProfessores >> nome >> dia >> mes >> ano >> titulacao;
        professor->setNome(nome);
        professor->getNascimento().setData(dia, mes, ano);
        professor->setTitulacao(titulacao);
        professores[i] = professor;
        pessoas[Aluno::getQuantidade() + i] = professor;
        Professor::incrementarQuantidade();
        Pessoa::incrementarQuantidade();
    }

    fileAlunos.close();
    fileProfessores.close();
}



int main() {
    vector<Pessoa*> pessoas;
    bool sair = false;

    try {
        while (!sair) {
            int opcao = menu();

            switch (opcao) {
                case 0:
                system("clear || cls");
                cout << "\nSalvando dados, por favor aguarde." << endl;
                salvarDados(pessoas, alunos, professores);
                cout << "\nSaindo..." << endl;
                sair = true;
                break;
                case 1: {
                    int escolha = submenu();
                    if (escolha == 1) {
                        Professor* professor = new Professor();
                        professor->ler();
                        pessoas.push_back(professor);
                    } else if (escolha == 2) {
                        Aluno* aluno = new Aluno();
                        aluno->ler();
                        pessoas.push_back(aluno);
                    }
                    break;
                }
                case 2: {
                    cout << "\nLista de Pessoas Cadastradas:" << endl;
                    for (Pessoa* pessoa : pessoas) {
                        pessoa->escreverDados();
                        cout << "-----------------------" << endl;
                    }
                    break;
                }
                case 3: {
                    string nome;
                    cout << "Digite o nome para pesquisar: ";
                    cin >> nome;
                    bool encontrado = false;
                    for (Pessoa* pessoa : pessoas) {
                        if (pessoa->getNome() == nome) {
                            pessoa->escreverDados();
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        cout << "Pessoa nao encontrada." << endl;
                    }
                    break;
                }
                case 4: {
                    string cpf;
                    cout << "Digite o CPF para buscar: ";
                    cin >> cpf;
                    bool encontrado = false;
                    for (Pessoa* pessoa : pessoas) {
                        if (pessoa->getCpf() == cpf) {
                            pessoa->escreverDados();
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        cout << "Pessoa nao encontrada." << endl;
                    }
                    system("clear || cls");
                    break;
                }
                case 5: {
                    string cpf;
                    cout << "Digite o CPF para excluir: ";
                    cin >> cpf;
                    excluirPessoaPorCpf(pessoas, cpf);
                    system("clear || cls");
                    break;
                }
                case 6: {
                    excluirTodasPessoas(pessoas);
                    system("clear || cls");
                    break;
                }
                case 7: {
                    string mes;
                    cout << "Digite o mes para buscar aniversariantes: ";
                    cin >> mes;
                    listarAniversariantes(pessoas, mes);
                    system("clear || cls");
                    break;
                }
                default:
                    cout << "Opcao invalida!" << endl;
            }
        }
    // Libera a memória alocada
    } catch (bad_alloc const&) {
        cerr << "Erro: Falha na alocacao de memoria!" << endl;
        return 1;
    }

    return 0;
}
