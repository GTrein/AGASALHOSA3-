#include "item.h"

Item::Item() {};

Item::Item(string tipo, string descricao)
{
	this->tipo = tipo;
	this->descricao = descricao;

}

void Item::setTipo(string tipo)
{
	this->tipo = tipo;
}
void Item::setDescricao(string descricao)
{
	this->descricao = descricao;
}


string Item::getTipo()
{
	return tipo;
}
string Item::getDescricao()
{
	return descricao;
}

