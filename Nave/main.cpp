//QUESTAO 4 (resolução copiada)
//Fonte: https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/Fundamentos2/Provas/ProvaA13.cpp

#include<iostream>
#include "Nave.h"
#include "Lista.h"

using namespace std;

class Principal
{
private:
	Lista_Naves LN;
    Aviao A1, A2, A3;
    Navio N1, N2, N3, N1b, N2b;


public:
	Principal()
	{
		iniciar();
	}
	~Principal()
	{
	}
    void incluir_aviao(Aviao* pa)
        // Método para armazenar aviões na lista;
    {
        Nave* N = NULL;
        if (pa)
        {
            N = static_cast<Nave*>(pa);
            LN.incluir(N);
        }
        else
        {
            cout << "Erro" << endl;
        }
    }
    void incluir_navio(Navio* pn)
        // Método para armazenar navios na lista;
    {
        Nave* N = NULL;
        if (pn)
        {
            N = static_cast<Nave*>(pn);
            LN.incluir(N);
        }
        else
        {
            cout << "Erro" << endl;
        }
    }
    void iniciar()
    {
        A1.setNumero("TecoTeco01");
        A1.setSuper(false);
        incluir_aviao(&A1);

        A2.setNumero("F15");
        A2.setSuper(true);
        incluir_aviao(&A2);

        A3.setNumero("14Bis");
        A3.setSuper(false);
        incluir_aviao(&A3);

        N1.setNumero("Canoa7");
        N1.setCapacidade(2);
        incluir_navio(&N1);

        N2.setNumero("Galeao23");
        N2.setCapacidade(50);
        incluir_navio(&N2);

        N3.setNumero("Frigate17");
        N3.setCapacidade(23);
        incluir_navio(&N3);

        N1b.setNumero("Canoa7");
        N1b.setCapacidade(2);
        incluir_navio(&N1b);

        N2b.setNumero("Galeao23");
        N2b.setCapacidade(50);
        incluir_navio(&N2b);

        executar();

    }

    void executar()
    {
        cout << "---------------------------------------------------------"
            << "\n                   NAVES \n"
            << "---------------------------------------------------------\n\n";

        LN.listagem();

        if (N1 == N1b)
        {
            cout << endl << "A nave 4 eh igual a nave 7";
        }
        else
        {
            cout << endl << "A nave 4 eh diferente da nave 7";
        }

        if (N2 == N2b)
        {
            cout << endl << "A nave 5 eh igual a nave 8";
        }
        else
        {
            cout << endl << "A nave 5 eh diferente da nave 8";
        }

        if (N3 == N1b)
        {
            cout << endl << "A nave 6 eh igual a nave 7";
        }
        else
        {
            cout << endl << "A nave 6 eh diferente da nave 7";
        }

        cout << endl << endl << endl;

        cout << "Excluir ultimo" << endl << endl;
        LN.excluir();
        LN.listagem();

        cout << endl << endl;

        cout << "Excluir nave 2:" << endl << endl;
        LN.excluir(4);
        LN.listagem();

        cout << endl << endl;
        
        cout << "Limpar:" << endl;
        LN.limpar();
        LN.listagem();

        cout << endl << endl << endl;
    }
};

int main()
{
    Principal ObjPrincipal;

    system("PAUSE");
	return 0;
 }