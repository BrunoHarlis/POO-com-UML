#include "Nave.h"
#include <string>
#include <iostream>

Nave::Nave(){	m_numero = " ";}
Nave::~Nave(){}

const std::string& Nave::getNumero() const { return m_numero; }
void Nave::setNumero(const std::string& numero) { m_numero = numero; }


//Classe Aviao
Aviao::Aviao() : Nave() { m_supersonico = false; }
Aviao::~Aviao() { m_supersonico = false; }

void Aviao::setSuper(const bool supersonico) { m_supersonico = supersonico; }
const bool Aviao::getSuper() const { return m_supersonico; }

void Aviao::informe_natureza() const
{
	std::cout << "Transporte Aerio" << std::endl;
}


//Classe Navio
Navio::Navio() : Nave(){	m_capacidade = 0;}
Navio::~Navio(){	m_capacidade = 0;}

void Navio::setCapacidade(const int capacidade) { m_capacidade = capacidade; }
const int Navio::getCapacidade() const { return m_capacidade; }

void Navio::informe_natureza() const
{
	std::cout << "Transporte Aquatico" << std::endl;
}

bool  Navio::operator ==(Navio& n) const
{
	if ((n.getCapacidade() == getCapacidade()) && n.getNumero() == getNumero())
	{
		return true;
	}
	else
		return false;
}