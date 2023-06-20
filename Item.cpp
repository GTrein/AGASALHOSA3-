#include "item.h"

Item::Item() {};

Item::Item(string tipo, string descricao, string cor)
{
	this->tipo = tipo;
	this->descricao = descricao;
	this->cor = cor;

}

void Item::setTipo(string tipo)
{
	this->tipo = tipo;
}
void Item::setDescricao(string descricao)
{
	this->descricao = descricao;
}
void Item::setCor(string cor)
{
	this->cor = cor;
}

string Item::getTipo()
{
	return tipo;
}
string Item::getDescricao()
{
	return descricao;
}
string Item::getCor()
{
	return cor;
}
