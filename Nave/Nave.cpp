#include "Nave.h"
#include <string>
#include <iostream>

//QUESTAO 1 (arquivo .cpp)
Nave::Nave(const std::string numero) : m_numero{ numero }
{
}
Nave::~Nave() {}

const std::string& Nave::getNumero() const { return m_numero; }
void Nave::setNumero(const std::string& numero) { m_numero = numero; }

//QUESTAO 3 (arquivo .cpp)
//Classe Aviao
Aviao::Aviao(bool s) : Nave(), m_supersonico{ s }
{
}
Aviao::~Aviao() { m_supersonico = false; }

void Aviao::setSuper(const bool supersonico) { m_supersonico = supersonico; }
const bool Aviao::getSuper() const { return m_supersonico; }

void Aviao::informe_natureza() const
{
	std::cout << "Transporte Aerio" << std::endl;
}


//Classe Navio
Navio::Navio(int capacidade) : Nave(), m_capacidade{ capacidade }
{
}
Navio::~Navio() { m_capacidade = 0; }

void Navio::setCapacidade(const int c) { m_capacidade = c; }
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