#include<stdio.h>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<windows.h>
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
    int contador_aluno=0;
    int contador_professor=0;
    int contador_aluno_alterar=0;
    int contador_aluno2_alterar=0;
    int contador_professor_alterar=0;
    int parar=0;
    cout<<"Sistema de Gerenciamento Escolar"<<endl;
      do{
    cout<<endl<<"Menu principal"<<endl;
    cout<<"1 - Cadastrar"<<endl;
    cout<<"2 - Consultar"<<endl;
    cout<<"3 - Alterar"<<endl;
    cout<<"4 - Sair"<<endl;


        cin>> op;

        switch (op){
            case 1://cadastrar
                system("cls");
                cout<<"Menu Principal > Cadastrar"<<endl<<endl;
                cout<<"1 - Cadastrar Aluno"<<endl;
                cout<<"2 - Cadastrar Professor"<<endl;
                cout<<"3 - Voltar"<<endl;
                cin>>opCadastrar;

                switch (opCadastrar){
                case 1:
                    system("cls");
                    a++;
                    cout << "Menu Principal > Cadastrar > Aluno"<<endl<<endl;
                    cout<<"Digite os Dados do Aluno" << endl;
                    cout<<"RA: ";
                    cin>> aluno[a].RA;
                    cout<<endl<<"Nome: ";
                    cin.ignore();
                    getline(cin, aluno[a].nome);
                    cout<<endl<<"CPF: ";
                    cin>> aluno[a].CPF;
                    cout<<endl<<"RG: ";
                    cin>>aluno[a].RG;
                    cout<<endl<<"Idade: ";
                    cin>>aluno[a].idade;
                    cout<<endl<<"Ano de Ingresso: ";
                    cin>>aluno[a].anoIngresso;
                    system("cls");

                    cout<<endl<<"Dados Cadastrados com Sucesso!"<<endl<<endl;


                    cout<<"Deseja Inserir Notas e Faltas?";
                    cout<<endl<<"1-Sim  2-Nao"<<endl;
                    cin>>opNF;
                        switch (opNF){
                        case 1:
                            cout<<"Insira Faltas"<<endl;
                            cout<<"Matematica: "<<endl;
                            cin>> aluno[a].faltasMat;
                            cout<<endl<<"Geografia: "<<endl;
                            cin>> aluno[a].faltasGeo;
                            cout<<endl<<"Fisica: "<<endl;
                            cin>> aluno[a].faltasFis;
                            cout<<endl<<"Portugues: "<<endl;
                            cin>>aluno[a].faltasPor;

                            cout<<endl<<endl<<"Insira Notas:"<<endl;
                            cout<<"Digite a nota de matematica"<<endl;
                            cin>> aluno[a].notasMat;
                            cout<<"Digite a nota de geografia"<<endl;
                            cin>> aluno[a].notasGeo;
                            cout<<"Digite a nota de fisica"<<endl;
                            cin>> aluno[a].notasFis;
                            cout<<"Digite a nota de portugues"<<endl;
                            cin>> aluno[a].notasPor;
                            system("cls");
                            cout<<"Notas e Faltas cadastradas com sucesso!"<<endl<<endl;
                            break;
                        case 2:
                            system("cls");
                            break;
                        default:
                            system("cls");
                            cout<<"Opcao Invalida"<<endl;

                        }


                        break;

                case 2: //cadastrar profess0r
                    system("cls");
                    cout << "Menu Principal > Cadastrar > Professor"<<endl << endl;
                    cout<<"Digite os dados do professor";
                    cout<<endl<<"Nome: ";
                    cin.ignore();
                    getline(cin, professor[p].nome);
                    cout<<endl<<"Idade: ";
                    cin>>professor[p].idade;
                    cout<<endl<<"RG: ";
                    cin>>professor[p].RG;
                    cout<<endl<<"CPF: ";
                    cin>>professor[p].CPF;
                    cout<<endl<<"Disciplina Ministrada: ";
                    cin.ignore();
                    getline(cin, professor[p].disciplina);
                    system("cls");
                    cout<<"Dados cadastrados com sucesso"<<endl<<endl;
                    p++;

                    break;

                case 3:
                    system("cls");
                    break;

                default:
                    system("cls");
                    cout<<"Opcao Invalida!";
                    break;
                }

                break;//fim case cadastrar



            case 2://consultar
                system("cls");
                cout<<"Menu Principal > Consultar"<<endl<<endl;
                cout<<"1 - Consultar Aluno"<<endl;
                cout<<"2 - Consultar Professor"<<endl;
                cout<<"3 - Voltar"<<endl;
                cin>>opConsultar;

                switch(opConsultar){
                    case 1:
                        int x,f;
                        f = contador_aluno;
                        int cod_aluno;
                        system("cls");
                        cout<<"Menu Principal > Consultar > Aluno"<<endl<<endl;
                        cout<<"Digite o RA do Aluno: ";
                        cin>>cod_aluno;
                        for(x=0; x<=100; x++){
                            if(cod_aluno == aluno[x].RA){
                                cout << endl<<"Nome: "<< aluno[x].nome<<endl;
                                cout<<"RG: "<< setprecision(9) << aluno[x].RG<<endl;
                                cout<<"CPF: "<< setprecision(11) << aluno[x].CPF<<endl;
                                cout<<"Idade: "<< aluno[x].idade<<endl;
                                cout<<"Ano de Ingresso: "<< aluno[x].anoIngresso<<endl;
                                cout<<"Nota Matematica :"<< aluno[x].notasMat <<endl;
                                cout<<"Nota Geografia:"<< aluno[x].notasGeo <<endl;
                                cout<<"Nota Fisica:"<< aluno[x].notasFis <<endl;
                                cout<<"Nota Portugues:"<< aluno[x].notasPor <<endl;
                                cout<<"Faltas Matematica:"<< aluno[x].faltasMat <<endl;
                                cout<<"Faltas Grografia:"<< aluno[x].faltasGeo <<endl;
                                cout<<"Faltas Fisica:"<< aluno[x].faltasFis <<endl;
                                cout<<"Faltas Portugues:"<< aluno[x].faltasPor <<endl<<endl;


                                f++;

                            }
                        }

                        if(f==0){
                            cout<<"Aluno Nao Cadastrado!!"<<endl;
                        }





                            break;
                    case 2:
                        int y, top;
                        double cod_professor;
                        top = contador_professor;
                        system("cls");
                        cout<<"Menu Principal > Consultar > Aluno"<<endl<<endl;
                        cout<<"Digite o CPF do professor a ser consultado: "<<endl;
                        cin>>cod_professor;

                        for(y=0; y<=100; y++){
                            if(cod_professor == professor[y].CPF){
                                cout<<"Nome :"<<professor[y].nome<<endl;
                                cout<<"Idade :"<<professor[y].idade<<endl;
                                cout<<"RG :"<< setprecision(9) <<professor[y].RG<<endl;
                                cout<<"Disciplina Ministrada: "<<professor[y].disciplina<<endl<<endl;
                                top++;
                            }
                        }

                        if(top==0){
                            cout<<"Professor Nao Cadastrado!!"<<endl;
                        }
                        break;

                    case 3:
                        system("cls");
                        break;

                        default:
                    cout<<"Opcao Invalida!"<<endl;
                    break;
                }

                        break;


        case 3:
            int i, aluno1;
            system("cls");
            aluno1 = contador_aluno_alterar;
            cout<<"Menu Principal > Alterar"<<endl<<endl;
            cout<<"1 - Alterar dados Aluno"<<endl;
            cout<<"2 - Alterar notas e faltas do Aluno"<<endl;
            cout<<"3 - Alterar dados Professor"<<endl;
            cout<<"4 - Voltar"<<endl;
            cin>>opAlterar;
            double alterar_aluno, alterar_professor;

            system("cls");



                switch (opAlterar){

                case 1:
                     cout<<"Menu Principal > Alterar > Alterar Dados Aluno"<<endl<<endl;

                        cout<<"Digite o RA do Aluno a ser alterado: "<<endl;
                        cin>>alterar_aluno;

                    for(i=0; i<=100; i++){
                        if(alterar_aluno == aluno[i].RA){
                            cout<<"Digite os Dados atualizados do Aluno" << endl;
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
                            cout<<endl<<"Novos Dados Cadastrados com Sucesso!"<<endl<<endl;
                            aluno1++;

                            }

                }

                if(aluno1==0){
                    cout<<"Aluno Nao Cadastrado"<<endl;
                }
                break;

                case 2:
                    int ra_alterar,aluno2;
                    aluno2= contador_aluno2_alterar;
                     cout<<"Menu Principal > Alterar > Alterar Notas e Faltas Aluno"<<endl<<endl;
                    cout<<"RA: "<<endl;
                    cin>>ra_alterar;

                    for(i=0; i<=100; i++){
                        if(ra_alterar == aluno[i].RA){
                            cout<<"Digite os Dados atualizados do Aluno" << endl;
                            cout<<"Insira Faltas"<<endl;
                            cout<<"Matematica: "<<endl;
                            cin>> aluno[a].faltasMat;
                            cout<<endl<<"Geografia: "<<endl;
                            cin>> aluno[a].faltasGeo;
                            cout<<endl<<"Fisica: "<<endl;
                            cin>> aluno[a].faltasFis;
                            cout<<endl<<"Portugues: "<<endl;
                            cin>>aluno[a].faltasPor;

                            cout<<endl<<endl<<"Insira Notas:"<<endl;
                            cout<<"Digite a nota de matematica"<<endl;
                            cin>> aluno[a].notasMat;
                            cout<<"Digite a nota de geografia"<<endl;
                            cin>> aluno[a].notasGeo;
                            cout<<"Digite a nota de fisica"<<endl;
                            cin>> aluno[a].notasFis;
                            cout<<"Digite a nota de portugues"<<endl;
                            cin>> aluno[a].notasPor;
                            //  system("cls");
                            cout<<endl<<"Novos Dados Cadastrados com Sucesso!"<<endl<<endl;
                            aluno2++;
                        }
                    }

                    if(aluno2 == 0){
                        cout<<"Aluno Nao Cadastrado"<<endl;
                    }



                    break;

                case 3:
                     cout<<"Menu Principal > Alterar > Alterar Dados Professor"<<endl<<endl;
                    cout<<"CPF: "<<endl;
                    cin>>alterar_professor;
                    int z, professor1;
                    professor1 = contador_professor_alterar;
                    for(z=0; z<=100; z++){
                        if(alterar_professor == professor[z].CPF){
                            cout<<"Digite os dados atualizados do professor"<<endl;
                            cout<<"Nome: "<<endl;
                            cin>>professor[z].nome;
                            cout<<"Idade: "<<endl;
                            cin>>professor[z].idade;
                            cout<<"RG: "<<endl;
                            cin>>professor[z].RG;
                            cout<<"CPF: "<<endl;
                            cin>>professor[z].CPF;
                            cout<<"Disciplina Ministrada: "<<endl;
                            cin>>professor[z].disciplina;
                            cout<<"Novos Dados cadastrados com sucesso"<<endl;
                            professor1++;
                        }
                    }

                    if(professor1 == 0){
                        cout<<"Professor Nao Cadastrado"<<endl;
                    }

                break;
                }



                case 4:
                    break;


                break;

               default:
                    cout<<"Opcao Invalida!";
                    break;

      }
     //case Menu
    }while(op<4 && op>0);

}




