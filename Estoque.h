#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Item.h"
#include <vector>
using namespace std;

class Estoque
{
public:
	Estoque() {};
	void ListarItens();//fun��o para listar os itens
	void DoarItens();//fun��o para adicionar itens ao vetor
	void Exemplo2();//fun��o para adicionar 3 itens de exemplo a lista toda vez que o programa for inciado
	void ReceberDoacao();//fun��o para escolher e remover itens do vetor

	vector<Item> itens;

private:
	
	
	


};
#endif