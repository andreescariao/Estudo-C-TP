#include "Lista.h"

//Construtor
Lista::Lista(int tam){	
	tamanho = tam;
	v = new string[tamanho];	//Aloca um vetor string de tamanho tam
}

void Lista::ordem(){	//Metodo que ordena os nomes da lista em ordem alfabetica
	

//Metodo bubble sort
for (int fim = tamanho-1; fim > 0; --fim)
{
        for (int i = 0; i < fim; ++i) 
		{
            if (v[i] > v[i+1])
			{
                string aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
}
	
	cout << endl <<"Ordenando em ordem alfabética..." << endl;
	
}

//Metodo que insere um nome na lista
void Lista::setInsereNome(string nome,int i){
		v[i]=nome;
}

//Metodo que imprime os nomes da lista
void Lista::ImprimeLista(){ 
	cout <<endl<<"Vetor gerado: "<<endl;
	for(int i=0;i<tamanho;i++){
		cout << v[i] << endl;
	}
}

//Destrutor
Lista::~Lista(){
	delete []v;
	cout <<endl<<"Vetor deletado...";
}