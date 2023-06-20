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
	Item(string tipo, string descricao);
	void setTipo(string tipo);
	void setDescricao(string descricao);
	string getTipo();
	string getDescricao();

private:
	string tipo;
	string descricao;


};
#endif