#include "alunos.hpp"
#include "alunos.cpp"
#include "professores.hpp"
#include "professores.cpp"
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
	int nCadastroProfessor=0;
	int op;
	int professorOp;
	int cadastrarAluno;
	int cadastrarProfessor;
	
	alunos a1[100];
	professores p1[100];
	
	do{
	
	
	cout <<"--------------------- MENU --------------------" <<endl;
	cout <<"1 - Cadastrar aluno" <<endl;
	cout <<"2 - Cadastrar professor" <<endl;
	cout <<"3 - Cadastrar notas" <<endl;
	cout <<"4 - Cadastrar faltas" <<endl;
	cout <<"5 - Consultar notas" <<endl;
	cout <<"6 - Consultar faltas" <<endl;
	cout <<"7 - Consultar professores" <<endl;
	//cout <<"Alterar";
	cout <<"8 - Sair"<<endl;
	
	cin >>op; 
	
	
		switch(op){
		
			case 1:{
				do{
			
				int RA, anoIngresso, CPF;
				string nome, nascimento, RG;
				int numero, x;
			
				cout<<"Digite o numero de alunos a serem cadastrados:"<<endl;
				cin>>numero;
				
					for(x=0; x<numero; x++){

					cout<<"Digite o nome do aluno: " <<endl;
					cin >>nome;
					a1[x].setNome(nome);
			
					cout<<"Digite o RA do aluno: "<<endl;
					cin>>RA;
					a1[x].setRA(RA);
			
					cout<<"Digite a data de nascimento do aluno"<<endl;
					cin>>nascimento;
					a1[x].setNascimento(nascimento);
			
					cout<<"Digite o numero do RG do aluno: "<<endl;
					cin>>RG;
					a1[x].setRG(RG);
			
					cout<<"Digite o ano de ingresso do aluno" <<endl;
					cin>>anoIngresso;
					a1[x].setAnoIngresso(anoIngresso);
			
					cout<<"Digite o numero do CPF do aluno" <<endl;
					cin>>CPF;
					a1[x].setCPF(CPF);
					cout<<endl <<endl;
					}
			
			
				cout<<"Cadastro efetuado com sucesso!" <<endl <<endl;
			
				cout<<"1 - Cadastrar um novo aluno"<<endl;
				cout<<"2 - Voltar para o menu principal"<< endl;
				cin>>cadastrarAluno;
			
				}while(cadastrarAluno!=2);
			
				break;
				
			}
		
			case 2:{
				do{
				
				int x, numero;
				int CPF;
				string nome, nascimento, RG, disciplina;
				
				cout<<"Digite o numero de professores a serem cadastrados:" <<endl;
				cin>>numero;
				
					for(x=0; x<numero; x++){
				
					cout<<"Digite o nome do professor: "<<endl;
					cin>>nome;
					p1[x].setNome(nome);
			
					cout<<"Digite o CPF: "<<endl;
					cin>>CPF;
					p1[x].setCPF(CPF);
			
					cout<<"Digite a data de nascimento: "<<endl;
					cin>>nascimento;
					p1[x].setNascimento(nascimento);
			
					cout<<"Digite  o numero do RG: "<<endl;
					cin>>RG;
					p1[x].setRG(RG);
			
					cout<<"Digite a disciplina ministrada pelo professor: "<<endl;
					cin>>disciplina;
					p1[x].setDisciplina(disciplina);
					cout<<endl<<endl;
					nCadastroProfessor++;
					}
						
				cout<<"Cadastro efetuado com sucesso!" <<endl<<endl;
							
				cout<<"1 - Cadastrar um novo professor"<<endl;
				cout<<"2 - Voltar para o menu principal"<< endl;
				cin>>cadastrarProfessor;
			
			
				}while(cadastrarProfessor !=2);
			
				break;
			
				
			}
			
			case 7:{
				int x;
				cout<<"1 - Consultar professores e disciplinas"<<endl;
				cout<<"2 - Consultar dados dos professores"<<endl;
			
				cin>>professorOp;
			
				
				if(professorOp==1){
					for(x=0;x<nCadastroProfessor; x++){
					
					p1[x].exibirDadosDisciplina();
					cout<<endl;
					}
				}
			
				if(professorOp==2){
					for(x=0;x<nCadastroProfessor; x++){
					
					p1[x].exibirDadosProfessor();
					cout<<endl;
					}
				}
		
			
				break;
			
			}
			
		
		}
	
	}while(op !=8);
	
	
}
