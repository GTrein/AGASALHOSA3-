#include "Usuario.h"
#include "Estoque.h"
#include <vector>
using namespace std;

class App
{
public:
	App();
	void Executar();//fun��o para executar o programa pelo main
	void Exemplo();//cria 3 usuarios de exemplo
	void ListarUsuarios();//mostra uma lista de nome email senha de usuarios
	int MenuInicial();//mostra o menu inicial
	int MenuJaLogado(int Posicao);//mostra o menu principal
	void Login();//fun��o para fazer login
	void CriarConta();//fun��o para criar conta
	void ExecutarMenuPrincipal(int Posicao);//fun��o para chamar o menu principal
	bool EmailUso(string email); //verifica se o email est� em uso no vetor
	
		
	

private:
	
	
	Estoque estoque;

	vector<Usuario> usuarios;
	
};
