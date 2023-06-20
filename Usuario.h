#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <Windows.h>
using namespace std;


class Usuario
{
public:
	Usuario();
	Usuario(string nome,string email,string senha);
	void setNome(string nome);
	void setEmail(string email);
	void setSenha(string senha);
	string getNome();
	string getEmail();
	string getSenha();
private:
	string nome;
	string email;
	string senha;


};
#endif