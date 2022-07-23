#include "Empresa.h"

//Construtor. Armazena nome, Cnpj e cria a lista de funcionários
Empresa::Empresa(int n, string nome, double cnpj){	
	
    Funcionarios = new Funcionario[n];
    this->nome = nome;
    this->cnpj = cnpj;
    num = 0;
    
}
//Armazena funcionarios
void Empresa::addFunc(Funcionario f){	
        Funcionarios[num] = f;
        num++;
}

//Função para 10% aumento de salário a todos os func. de um departamento
void Empresa::aumento(int setor){
	
	for(unsigned i = 0; i < num; i++){
        if(Funcionarios[i].getDep() == setor){
	Funcionarios[i].setSal(Funcionarios[i].getSal() + Funcionarios[i].getSal()*0.1);
    }
}
}




void Empresa::imprimedados(){
	
    for(unsigned i = 0; i < num; i++){
        cout << endl << "Nome: " << Funcionarios[i].getNome() << endl;
        cout << "Salário: R$" << Funcionarios[i].getSal() << endl;
        cout <<"Departamento: " << Funcionarios[i].getDep() << endl;
    }
    
}

//Destrutor
Empresa::~Empresa(){
    delete []Funcionarios;
}

