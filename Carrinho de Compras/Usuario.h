#ifndef USUARIO_H
#define USUARIO_H
#include "Compras.h"
#include <string>

class Usuario
{
private:
	std::string m_numUsar;
	std::string m_senha;
	std::string m_estadLogin;
	std::string m_data;

public:

	bool verifLogin();
};

class Administrador : public Usuario
{
private:
	std::string m_nomeAdm;
	std::string m_email;

public:
	bool atualizCatalogo();
};

class Cliente : public Usuario
{
private:
	std::string m_nomeCliente;
	std::string m_endereco;
	std::string m_email;
	std::string m_infoCartaoCred;
	std::string m_infoEnvio;
	std::string m_saldoConta;
	Carrinho m_carrinho;
	Pedido m_pedido;

public:
	void cadastro();
	void login();
	void atualizarPerfil();
};

#endif