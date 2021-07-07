#Prova sobre linguagem de programacao Orientada a Objetos (UTFPR)
  
(Quest�o - 1) Em um programa C++ (para console), crie uma classe abstrata chamada de
Nave com uma �nica fun��o virtual pura chamada �void informe_natureza()=0� podendo,
entretanto, ter outras fun��es que n�o sejam virtuais puras, incluindo construtora e
destrutora. Esta classe ter� um atributo protegido alfanum�rico chamado n�mero,
certamente com seus respectivos m�todos get e set. Ainda, quando pertinente, usar
elementos constantes (i.e. atributos, fun��es, retornos e par�metros constantes) nesta classe,
assim como nas demais classes solicitadas nas demais quest�es. 

(Quest�o - 2) Crie uma classe Lista_Naves (em C++) para ponteiros de objetos de
subclasses de Nave baseando-se nos princ�pios de lista simplesmente encadeada. Ainda, a
classe Lista_Naves dever� ter um m�todo para incluir, um m�todo para excluir e outro para
listar. Particularmente, a cada chamada, o m�todo incluir permitir� incluir (um ponteiro de
objeto de subclasse de Nave) sempre na �ltima posi��o da lista. Por sua vez, o m�todo
excluir permitir� excluir (um ponteiro) de qualquer posi��o da lista conforme par�metro (de
posi��o na lista) dado na chamada do m�todo, sendo o valor default deste par�metro a
�ltima posi��o. Por fim, a listagem apresentar� a �natureza� de cada objeto.

(Quest�o - 3) Em ++, crie uma classe Avi�o (com atributo privado booleano supers�nico e
seus respectivos get e set) e uma classe Navio (com um atributo privado inteiro capacidade
e seus respectivos get e set), ambas derivadas de Nave e cada qual com uma fun��omembro chamada �void informe_natureza()�. No caso de Avi�o tal fun��o-membro
informar� (em tela) �Transporte A�reo�, enquanto que no caso de Navio informar�
�Aqu�tico�. Por fim, sobrecarregue o operador de igualdade (operator==) na classe Navio
de maneira que um objeto desta possa comparar todos seus atributos (inclusive o conjunto
de atributos herdados) para com todos os atributos de outro objeto desta mesma classe. 

(Quest�o - 4) Em C++, crie uma classe Principal cujo �nico objeto (ou inst�ncia) poder�
armazenar em si ponteiros de objetos Avi�o por meio de uma fun��o void incluir_Avi�o
(Avi�o* pa), bem como poder� armazenar em si ponteiros de objetos Navio por meio de
uma fun��o void incluir_Navio (Navio* pn). Entretanto, estes apontamentos de objetos
Avi�o e Navio ser�o armazenados como apontamentos de objetos Nave, por meio de
static_cast, em uma lista para tal. 

![UML-NAVE]()