#ifndef ALUNOS_H
#define ALUNOS_H
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

class alunos{
	private:
		int RA, anoIngresso, CPF;
		string nome, nascimento, RG;
		
		
	public:
		alunos();
		alunos(int RA, int anoIngresso, int CPF,string RG, string nome, string nascimento);
		
		int getRA();
		void setRA(int RA);
		
		int getAnoIngresso();
		void setAnoIngresso(int anoIngresso);
		
		int getCPF();
		void setCPF(int CPF);
		
		string getNome();
		void setNome(string nome);
		
		string getNascimento();
		void setNascimento(string nascimento);
		
		string getRG();
		void setRG(string RG);
	
};

#endif
