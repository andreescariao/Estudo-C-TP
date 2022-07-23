/* Aluno:Andr� K Escari�o Me / 119210793 / Unidade(05) / Laborat�rio(14)
Compilador Falcon C++
Programa de duas Classes, Empresa e Funcionario 
*/

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;
#include "Empresa.cpp"

int main()
{
    setlocale(LC_ALL, "");

    Funcionario auxiliar; //Objeto Funcionario 'auxiliar' criado
    
    string aux;
    int aux2,aux3,aux4,aux5;
    float aux6;
    int qnt = 0, qntmax, setor, opc;
    
    string nomeempresa;
    double cnpj;
    
    
    cout << "Cria��o da empresa..." << endl;
    cout << "Digite a quantidade de funcion�rios: " << endl;	//Solicitar quantidade de funcionarios
    cin >> qntmax;
    cout << "Digite o nome da empresa: " << endl;	//Solicita nome da empresa
    cin >> nomeempresa;
	cout <<"Digite o CNPJ da empresa: " << endl;	//Solicita CNPJ
	cin >> cnpj;
	
	
    Empresa empresa1(qntmax, nomeempresa, cnpj);	//Objeto Empresa 'empresa1' criado

    while(1){
        system("cls");
        cout << "1 - Adiconar funcion�rio" << endl
             << "2 - Dar aumento de 10% a todos os funcionarios de um departamento" << endl
             << "3 - Imprimir folha" << endl
             << "4 - Sair..." << endl;

        cout << endl << "Digite a op��o: ";
        cin >> opc;

        if(opc == 4)
            break;

        system("cls");

        switch(opc){
        case 1:
            if(qnt >= qntmax){
                cout << "Setor cheio!" << endl;
                break;
            }
            
            //Nome do funcionario
            cout << "Digite o nome do funcion�rio: ";
            cin >> aux;
            auxiliar.setNome(aux);
            
            //Salario
            cout << endl << "Digite o sal�rio de " << auxiliar.getNome() << ": ";
            cin >> aux6;
            auxiliar.setSal(aux6);

            //Data de admiss�o
            cout << endl << "Digite a data de admiss�o: " << endl;
            cout <<"Dia: " << endl;
            cin >> aux3;
            cout <<"M�s: " << endl;
            cin >> aux4;
            cout <<"Ano: " << endl;
            cin >> aux5;
            auxiliar.setDataadmissao(aux3,aux4,aux5);
            
            //Departamento
            cout << endl << "Digite o departamento de " << auxiliar.getNome() << ": ";
            cin >> aux2;
            auxiliar.setDep(aux2);
            
            //Adiciona um funcion�rio ao cadastro
            empresa1.addFunc(auxiliar);
            qnt++; 
            
            break;
        case 2:
            //Aumento 
            cout << "Digite o setor que deseja dar um aumento de 10%: " << endl;
            cin >> setor;
			empresa1.aumento(setor);
            break;
        case 3:
            //imprimir salarios dos funcionarios
            if(qnt == 0){
                cout << "N�o h� Funcion�rios!" << endl;
                break;
            }
            cout << "Folha da Empresa: " << endl;
            empresa1.imprimedados();
            break;
        default:
            cout << "Op��o inv�lida!!!" << endl;
            break;
        }
        system("pause");
    }
    return 0;
}
