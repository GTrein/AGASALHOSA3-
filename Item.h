#ifndef ITEM_H
#define ITEM_H

#include "Usuario.h"
#include <iostream>
#include <Windows.h>
using namespace std;


class Item
{
public:
	Item();
	Item(string tipo, string descricao, string cor);
	void setTipo(string tipo);
	void setDescricao(string descricao);
	void setCor(string cor);
	string getTipo();
	string getDescricao();
	string getCor();

private:
	string tipo;
	string descricao;
	string cor;


};
#endif