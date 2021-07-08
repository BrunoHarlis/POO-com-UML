#ifndef LISTA_H
#define LISTA_H
#include "Nave.h"

// QUESTAO 2
class Elemento_Nave
{
private:
	Elemento_Nave* p_proximo;
	Nave* p_info;

public:
	Elemento_Nave()
	{
		p_proximo = NULL;
		p_info = NULL;
	}

	~Elemento_Nave()
	{
		p_proximo = NULL;
		p_info = NULL;
	}

	void setProximo(Elemento_Nave* pp) { p_proximo = pp; }
	Elemento_Nave* getProximo() const { return p_proximo; }

	void setInfo(Nave* pi) { p_info = pi; }
	Nave* getInfo() const { return p_info; }
};

class Lista_Naves
{
private:
	Elemento_Nave* p_primeiro;
	Elemento_Nave* p_atual;
	int m_quantidade;

public:
	Lista_Naves() : p_primeiro{ NULL }, p_atual{ NULL }, m_quantidade{ 0 }
	{
	}

	~Lista_Naves();

	void incluir(Nave* p);
	void excluir(int posicao = -1);
	void listagem();
	void limpar();
};
#endif