#ifndef NAVE_H
#define NAVE_H
#include <string>

class Nave
{
protected:
	std::string m_numero;

public:
	Nave();
	virtual ~Nave();

	const std::string& getNumero() const;
	void setNumero(const std::string& numero);
	virtual void informe_natureza() const = 0;
};

class Aviao : public Nave
{
private:
	bool m_supersonico;

public:
	Aviao();
	~Aviao();

	void setSuper(const bool supersonico);
	const bool getSuper() const;
	virtual void informe_natureza() const;
};

class Navio : public Nave
{
private:
	int m_capacidade;

public:
	Navio();
	~Navio();

	void setCapacidade(const int capacidade);
	const int getCapacidade() const;
	virtual void informe_natureza() const;
	bool operator ==(Navio& n) const;
};
#endif