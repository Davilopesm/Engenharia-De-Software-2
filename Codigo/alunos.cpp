#include "alunos.hpp"
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

alunos::alunos(){
	RA=0;
	anoIngresso=0;
	CPF=0;
	nome="";
	nascimento="";
	RG="";
}

alunos::alunos(int RA, int anoIngresso, int CPF, string RG, string nome, string nascimento){
	this->RA = RA;
	this->anoIngresso = anoIngresso;
	this->CPF = CPF;
	this->RG = RG;
	this->nome = nome;
	this->nascimento = nascimento;
}

void alunos::setRA(int RA){
	this->RA = RA;
} 

int alunos::getRA(){
	return RA;
}

void alunos::setAnoIngresso(int anoIngresso){
	this->anoIngresso = anoIngresso;
}

int alunos::getAnoIngresso(){
	return anoIngresso;
} 

void alunos::setCPF(int CPF){
	this->CPF = CPF;
} 
int alunos::getCPF(){
	return CPF;
}

void alunos::setRG(string RG){
	this->RG = RG;
} 
string alunos::getRG(){
	return RG;
}

void alunos::setNome(string nome){
	this->nome = nome;
}
string alunos::getNome(){
	return nome;
}

void alunos::setNascimento(string nascimento){
	this->nascimento = nascimento;
}
string alunos::getNascimento(){
	return nascimento;
}



