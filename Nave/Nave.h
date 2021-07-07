#ifndef NAVE_H
#define NAVE_H
#include<iostream>
#include <string>

class Nave
{
protected:
	std::string m_numero;
public:
	Nave(const std::string& numero = "") : m_numero{numero}
	{}

	virtual ~Nave() = default;
	const std::string& getNumero() const { return m_numero; }
	void setNumero(const std::string& numero) { m_numero = numero; }
	virtual void informe_natureza() const = 0;
};

class Aviao : public Nave
{
private:
	bool m_supersonico;

public:
	Aviao(const std::string& numero = "", bool supersonico = false)
		: Nave{numero}, m_supersonico{supersonico}
	{
	}

	~Aviao() = default;

	void setSuper(const bool supersonico)
	{
		m_supersonico = supersonico;
	}

	const bool getSuper() const { return m_supersonico; }
	
	virtual void informe_natureza()
	{
		std::cout << "Transporte Aerio" << std::endl;
	}
};

class Navio : public Nave
{
private:
	int m_capacidade;

public:
	Navio(const std::string& numero = "", int capacidade = 0)
		:Nave{numero}, m_capacidade{capacidade}
	{}

	~Navio() = default;

	void setCapacidade(const int capacidade)
	{
		m_capacidade = capacidade;
	}

	const int getCapacidade() const { return m_capacidade; }
	
	virtual void informe_natureza()
	{
		std::cout << "Transporte Aquatico" << std::endl;
	}

	bool operator ==(const Navio& n) const
	{
		if ((n.getCapacidade() == getCapacidade()) && n.getNumero() == getNumero())
		{
			return true;
		}
		else 
			return false;
	}
};

class Lista_Naves
{

};
#endif