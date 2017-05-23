#include "professores.hpp"
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

professores::professores(){
	CPF=0;
	nome="";
	nascimento="";
	RG="";
	disciplina="";
}

professores::professores(int CPF, string nome, string nascimento, string RG, string disciplina){
	this->disciplina = disciplina;
	this->CPF = CPF;
	this->RG = RG;
	this->nome = nome;
	this->nascimento = nascimento;
}

void professores::setCPF(int CPF){
	this->CPF = CPF;
} 

int professores::getCPF(){
	return CPF;
}

void professores::setNome(string nome){
	this->nome = nome;
}

string professores::getNome(){
	return nome;
} 

void professores::setNascimento(string nascimento){
	this->nascimento = nascimento;
}
string professores::getNascimento(){
	return nascimento;
}

void professores::setRG(string RG){
	this->RG = RG;
} 
string professores::getRG(){
	return RG;
}

void professores::setDisciplina(string disciplina){
	this->disciplina = disciplina;
}
string professores::getDisciplina(){
	return disciplina;
}

void professores::exibirDadosDisciplina(){
	cout<<"Nome: " <<getNome() <<endl;
	cout<<"Disciplina: " <<getDisciplina() <<endl;
	
}

void professores::exibirDadosProfessor(){
	cout<<"Nome: "<< getNome() <<endl;
	cout<<"CPF: "<<getCPF() <<endl;
	cout<<"Nascimento: "<<getNascimento() <<endl;
	cout<<"RG: "<<getRG() <<endl;
	
}


