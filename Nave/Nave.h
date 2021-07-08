#ifndef NAVE_H
#define NAVE_H
#include <string>

//QUESTAO 1 (arquivo .h)
class Nave
{
protected:
	std::string m_numero;

public:
	Nave(const std::string numero = " ");
	virtual ~Nave();

	const std::string& getNumero() const;
	void setNumero(const std::string& numero);
	virtual void informe_natureza() const = 0;
};

//QUESTAO 3 (arquivo .h)
class Aviao : public Nave
{
private:
	bool m_supersonico;

public:
	Aviao(bool s = false);
	~Aviao();

	void setSuper(const bool s);
	const bool getSuper() const;
	virtual void informe_natureza() const;
};

class Navio : public Nave
{
private:
	int m_capacidade;

public:
	Navio(int capacidade = 0);
	~Navio();

	void setCapacidade(const int c);
	const int getCapacidade() const;
	virtual void informe_natureza() const;
	bool operator ==(Navio& n) const;
};
#endif