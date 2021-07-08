#include "Lista.h"
#include <iostream>

Lista_Naves::~Lista_Naves()
{
	limpar();
	p_primeiro = NULL;
	p_atual = NULL;
	m_quantidade = 0;
}

void Lista_Naves::incluir(Nave* p)
{
	if (p != NULL)
	{
		Elemento_Nave* aux = new Elemento_Nave();
		m_quantidade++;
		aux->setInfo(p);

		if (p_primeiro == NULL)
		{
			p_primeiro = aux;
			p_atual = aux;
		}
		else
		{
			p_atual->setProximo(aux);
			p_atual = aux;
		}
	}
}

void Lista_Naves::excluir(int posicao)
{
	if (posicao == -1) { posicao = m_quantidade; }

	Elemento_Nave* aux = p_primeiro;

	int contador = 1;

	while (contador < (posicao - 1))
	{
		aux = aux->getProximo();
		contador++;
	}

	if (posicao == 1)
	{
		p_primeiro = aux->getProximo();
		aux->setProximo(NULL);
		delete(aux);
	}
	else
	{
		Elemento_Nave* aux2 = aux->getProximo();
		aux->setProximo(aux2->getProximo());
		aux2->setProximo(NULL);
		delete(aux2);
	}

	m_quantidade--;
}

void Lista_Naves::listagem()
{
	if (p_primeiro == NULL)
	{
		Elemento_Nave* aux = p_primeiro;
		int posicao{ 1 };

		while (aux != NULL)
		{
			std::cout << " " << posicao << " - ";
			aux->getInfo()->informe_natureza();
			std::cout << std::endl;
			aux = aux->getProximo();
			posicao++;
		}
	}
	else std::cout << "Lista Vazia!" << std::endl << std::endl;
}

void Lista_Naves::limpar()
{
	Elemento_Nave* aux = p_primeiro;

	while (aux != NULL)
	{
		p_primeiro = p_primeiro->getProximo();
		aux->setProximo(NULL);
		aux->setInfo(NULL);
		delete(aux);
		aux = p_primeiro;
	}

	p_primeiro = NULL;
	p_atual = NULL;
	std::cout << std::endl << std::endl << "Lista Limpa!" << std::endl;
}
