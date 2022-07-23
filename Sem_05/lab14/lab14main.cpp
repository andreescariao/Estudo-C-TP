/* Aluno:André K Escarião Me / 119210793 / Unidade(05) / Laboratório(14)
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
    
    
    cout << "Criação da empresa..." << endl;
    cout << "Digite a quantidade de funcionários: " << endl;	//Solicitar quantidade de funcionarios
    cin >> qntmax;
    cout << "Digite o nome da empresa: " << endl;	//Solicita nome da empresa
    cin >> nomeempresa;
	cout <<"Digite o CNPJ da empresa: " << endl;	//Solicita CNPJ
	cin >> cnpj;
	
	
    Empresa empresa1(qntmax, nomeempresa, cnpj);	//Objeto Empresa 'empresa1' criado

    while(1){
        system("cls");
        cout << "1 - Adiconar funcionário" << endl
             << "2 - Dar aumento de 10% a todos os funcionarios de um departamento" << endl
             << "3 - Imprimir folha" << endl
             << "4 - Sair..." << endl;

        cout << endl << "Digite a opção: ";
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
            cout << "Digite o nome do funcionário: ";
            cin >> aux;
            auxiliar.setNome(aux);
            
            //Salario
            cout << endl << "Digite o salário de " << auxiliar.getNome() << ": ";
            cin >> aux6;
            auxiliar.setSal(aux6);

            //Data de admissão
            cout << endl << "Digite a data de admissão: " << endl;
            cout <<"Dia: " << endl;
            cin >> aux3;
            cout <<"Mês: " << endl;
            cin >> aux4;
            cout <<"Ano: " << endl;
            cin >> aux5;
            auxiliar.setDataadmissao(aux3,aux4,aux5);
            
            //Departamento
            cout << endl << "Digite o departamento de " << auxiliar.getNome() << ": ";
            cin >> aux2;
            auxiliar.setDep(aux2);
            
            //Adiciona um funcionário ao cadastro
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
                cout << "Não há Funcionários!" << endl;
                break;
            }
            cout << "Folha da Empresa: " << endl;
            empresa1.imprimedados();
            break;
        default:
            cout << "Opção inválida!!!" << endl;
            break;
        }
        system("pause");
    }
    return 0;
}
