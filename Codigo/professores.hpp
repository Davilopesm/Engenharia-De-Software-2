#ifndef PROFESSORES_H
#define PROFESSORES_H
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

class professores{
	private:
		int CPF;
		string nome, nascimento, RG, disciplina;
		
		
	public:
		professores();
		professores(int CPF, string nome, string nascimento, string RG, string disciplina);
		
		int getCPF();
		void setCPF(int CPF);
		
		string getNome();
		void setNome(string nome);
		
		string getNascimento();
		void setNascimento(string nascimento);
		
		string getRG();
		void setRG(string RG);
		
		string getDisciplina();
		void setDisciplina(string disciplina);
		
		void exibirDadosDisciplina();
		void exibirDadosProfessor();
			
		
};


#endif
