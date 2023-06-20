#include "Usuario.h"
#include "Estoque.h"
#include <vector>
using namespace std;

class App
{
public:
	App();
	void Executar();//função para executar o programa pelo main
	void Exemplo();//cria 3 usuarios de exemplo
	void ListarUsuarios();//mostra uma lista de nome email senha de usuarios
	int MenuInicial();//mostra o menu inicial
	int MenuJaLogado(int Posicao);//mostra o menu principal
	void Login();//função para fazer login
	void CriarConta();//função para criar conta
	void ExecutarMenuPrincipal(int Posicao);//função para chamar o menu principal
	bool EmailUso(string email); //verifica se o email está em uso no vetor
	
		
	

private:
	
	
	Estoque estoque;

	vector<Usuario> usuarios;
	
};
