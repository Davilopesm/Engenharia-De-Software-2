#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

struct {
    string nome;
    int anoIngresso, idade;
    double RG, RA, CPF;
    double notasMat, notasGeo, notasFis, notasPor;
    int faltasMat, faltasGeo, faltasFis, faltasPor;
}aluno[100];

struct{
    string nome, disciplina;
    double RG, CPF;
    int idade;
}professor[100];


int a=0; //contador struct
int p=0;

int main(){
    int op, opCadastrar, opNF, opAlterar;
    int opConsultar;
int parar=0;
      do{
    cout<<"Menu principal"<<endl;
    cout<<"1 - Cadastrar"<<endl;
    cout<<"2 - Consultar"<<endl;
    cout<<"3 - Alterar"<<endl;
    cout<<"4 - Sair"<<endl;


        cin>> op;
        switch (op){
            case 1:
                cout<<"1 - Cadastrar Aluno"<<endl;
                cout<<"2 - Cadastrar Notas e Faltas"<<endl;
                cout<<"3 - Cadastrar Professor"<<endl;
                cout<<"4 - Voltar"<<endl;
                cin>>opCadastrar;

                switch (opCadastrar){
                case 1:
                    //system("cls");
                    cout<<"Digite os Dados do Aluno" << endl;
                    cout<<"RA: ";
                    cin>> aluno[a].RA;
                    cout<<endl<<"Nome: ";
                    cin>>aluno[a].nome;
                    cout<<endl<<"CPF: ";
                    cin>> aluno[a].CPF;
                    cout<<endl<<"RG: ";
                    cin>>aluno[a].RG;
                    cout<<endl<<"Idade: ";
                    cin>>aluno[a].idade;
                    cout<<endl<<"Ano de Ingresso: ";
                    cin>>aluno[a].anoIngresso;
                  //  system("cls");
                    cout<<endl<<"Dados Cadastrados com Sucesso!"<<endl<<endl;

                    break;

                case 2:
                        int x;
                        double ra_procurar;
                        cout<<"Digite o RA do Aluno: "<<endl;
                        cin>>ra_procurar;

                        for(x=0; x<=100; x++){
                                if(ra_procurar == aluno[x].RA){

                        cout<<"Insira Faltas"<<endl;
                        cout<<"Matematica: ";
                        cin>> aluno[a].faltasMat;
                        cout<<endl<<"Geografia: "<<endl;
                        cin>> aluno[a].faltasGeo;
                        cout<<endl<<"Fisica: "<<endl;
                        cin>> aluno[a].faltasFis;
                        cout<<endl<<"Portugues: "<<endl;
                        cin>>aluno[a].faltasPor;

                        cout<<endl<<endl<<"Notas"<<endl;
                        cout<<"Digite a nota de matematica"<<endl;
                        cin>> aluno[a].notasMat;
                        cout<<"Digite a nota de geografia"<<endl;
                        cin>> aluno[a].notasGeo;
                        cout<<"Digite a nota de fisica"<<endl;
                        cin>> aluno[a].notasFis;
                        cout<<"Digite a nota de portugues"<<endl;
                        cin>> aluno[a].notasPor;
                        a++;

                                }
                        }

                        break;

                case 3: //cadastrar profess0r
                    cout<<"Digite os dados do professor"<<endl;
                    cout<<"Nome: "<<endl;
                    cin>>professor[p].nome;
                    cout<<"Idade: "<<endl;
                    cin>>professor[p].idade;
                    cout<<"RG: "<<endl;
                    cin>>professor[p].RG;
                    cout<<"CPF: "<<endl;
                    cin>>professor[p].CPF;
                    cout<<"Disciplina Ministrada: "<<endl;
                    cin>>professor[p].disciplina;
                    cout<<"Dados cadastrados com sucesso"<<endl;
                    p++;

                    break;

                case 4:
                    break;





                    }
                    break;//fim case cadastrar






        case 2://consultar

            cout<<"1 - Consultar Aluno"<<endl;
            cout<<"2 - Consultar Professor"<<endl;
            cout<<"3 - Voltar"<<endl;
            cin>>opConsultar;


            if(opConsultar == 1){
                int x;
                int cod_aluno;
                cout<<"Digite o RA do Aluno: "<<endl;
                cin>>cod_aluno;
                for(x=0; x<=100; x++){
                        if(cod_aluno == aluno[x].RA){
                                cout << "Nome: "<< aluno[x].nome<<endl;
                                cout<<"RG: "<< aluno[x].RG<<endl;
                                cout<<"CPF: "<< aluno[x].CPF<<endl;
                                cout<<"Idade: "<< aluno[x].idade<<endl;
                                cout<<"Ano de Ingresso: "<< aluno[x].anoIngresso<<endl;
                                cout<<"Nota Matematica :"<< aluno[x].notasMat <<endl;
                                cout<<"Nota Geografia:"<< aluno[x].notasGeo <<endl;
                                cout<<"Nota Fisica:"<< aluno[x].notasFis <<endl;
                                cout<<"Nota Portugues:"<< aluno[x].notasPor <<endl;
                                cout<<"Faltas Matematica:"<< aluno[x].faltasMat <<endl;
                                cout<<"Faltas Grografia:"<< aluno[x].faltasGeo <<endl;
                                cout<<"Faltas Fisica:"<< aluno[x].faltasFis <<endl;
                                cout<<"Faltas Portugues:"<< aluno[x].faltasPor <<endl;

                        }
                }
            }

            if(opConsultar == 2){
                    int y;
                    double cod_professor;
                    cout<<"Digite o CPF do professor a ser consultado: "<<endl;
                    cin>>cod_professor;

                    for(y=0; y<=100; y++){
                        if(cod_professor == professor[y].CPF){
                            cout<<"Nome :"<<professor[y].nome<<endl;
                            cout<<"Idade :"<<professor[y].idade<<endl;
                            cout<<"RG :"<<professor[y].RG<<endl;
                            cout<<"Disciplina Ministrada: "<<professor[y].disciplina<<endl;
                        }
                    }
            }

            break;


       } //case Menu
    }while(op!=4);


}//main


