#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Item.h"
#include <vector>
using namespace std;

class Estoque
{
public:
	Estoque() {};
	void ListarItens();//função para listar os itens
	void DoarItens();//função para adicionar itens ao vetor
	void Exemplo2();//função para adicionar 3 itens de exemplo a lista toda vez que o programa for inciado
	void ReceberDoacao();//função para escolher e remover itens do vetor

	vector<Item> itens;

private:
	
	
	


};
#endif