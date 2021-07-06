#ifndef COMPRAS_H
#define COMPRAS_H
#include <string>

class Carrinho
{
private:
	int m_numCarrinho;
	int m_numProduto;
	int m_quantidade;
	int m_dataAdd;

public:
	void addItemCarrinho();
	void atualizarQuantidade();
	void verDetalhesCarrinho();
	void finalizarPedido();
};

class Envio
{
private:
	std::string m_tipoFrete;
	int m_precoFrete;
	int m_numRegiaoFrete;

public:
	void atualizarInfoFrete();
};

class Pedido
{
private:
	int m_numPedido;
	std::string m_dataCriacao;
	std::string m_dataFrete;
	std::string m_status;
	Envio m_envio;

public:
	void efetuarPedido();
};

#endif
