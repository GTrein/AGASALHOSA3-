#include "App.h"
#include "Estoque.h"
#include <string>
using namespace std;

App::App()
{
	this-> estoque = estoque;
}

void App::Exemplo()
{
	
		string username, email, senha;

		Usuario usuarioTemp1("Gabriel Trein", "gabriel@gmail.com", "0000");
		usuarios.push_back(usuarioTemp1);

		Usuario usuarioTemp2("Ana Sofia","ana@gmail.com", "1234");
		usuarios.push_back(usuarioTemp2);

		Usuario usuarioTemp3("Wellington", "well@gmail.com", "senha");
		usuarios.push_back(usuarioTemp3);
	
	estoque.Exemplo2();
}

int App::MenuInicial()
{
	int escolha;
	system("cls");
	cout << "Programa de doação e distribuição de agasalhos.\n\n";
	cout << "==== Menu Inicial ====\n";
	cout << "1 - Criar Conta\n";
	cout << "2 - Fazer Login\n";
	cout << "3 - Sair\n";

	cout << "Informe a opção desejada: ";
	cin >> escolha;
	
	return escolha;
}

void App::Executar()
{
	int escolha;
	do
	{
		escolha = MenuInicial();
		switch(escolha)
		{
		case 1:
			CriarConta();
			
			break;
		case 2:
			Login();
			break;
		case 3:
			cout << "Programa Encerrado.\n";
			break;
		case 4:
			ListarUsuarios();
			break;
		default:
			cout << "Escolha Inválida.\n";
			Sleep(2000);
			
		}

	} while (escolha != 3);
	
}

void App::Login()
{
	string email, senha;
	cout << "Para fazer login digite seu email e sua senha.\n";

	cout << "Email: ";
	cin >> email;

	cout << "Senha: ";
	cin >> senha;

	bool userAutenticado = false;
	for (int i = 0; i < usuarios.size(); i++)
	{
		if (usuarios[i].getEmail() == email && usuarios[i].getSenha() == senha)
		{
			userAutenticado = true;
			cout << "Usuario " << usuarios[i].getNome() << " Autenticado!\n";
			
			system("pause");

			ExecutarMenuPrincipal(i);
		}
		
	}
	if (!userAutenticado)
	{
		cout << "Dados Inválidos. Falha no login!\n";
	}
	
	

	Sleep(1500);
}
void App::CriarConta()
{
	string email, username, senha;
	cout << "Para se registrar use um email, nome de usuario e senha.\n";
	cout << "Email: ";
	cin >> email;

	cout << "Nome de usuario: ";
	cin >> username;

	cout << "Senha: ";
	cin >> senha;

	if (EmailUso(email))
	{
		Usuario usuarioTemp(username, email, senha);
		usuarios.push_back(usuarioTemp);
		
			cout << "Usuario " << username << " registrado com sucesso!\n";
			cout << "O Sistema está com um total de " << usuarios.size() << " usuarios!\n";
		
			Sleep(2000);
	}
	else
	{
		cout << "Esse email já está em uso!\n";
		Sleep(2000);
	}


}
bool App::EmailUso(string email)
{
	for (int i = 0; i < usuarios.size(); i++)
	{
		if (usuarios[i].getEmail() == email)//email ja cadastrado
			return false;
		
	}
	return true;//email disponivel para uso
}

int App::MenuJaLogado(int PosicaoUsuario)
{
	int escolha;
	system("cls");
	cout << "Bem vindo(a) " << usuarios[PosicaoUsuario].getNome() << "!\n\n";
	cout << "==== Menu Principal ====\n";
	cout << "1 - Ver Estoque\n";
	cout << "2 - Doar\n";
	cout << "3 - Rececber doação\n";
	cout << "4 - Sair da conta\n";

	cout << "Informe a opção desejada: ";
	cin >> escolha;
	
	return escolha;
}

void App::ExecutarMenuPrincipal(int PosicaoUsuario)
{

	int escolha;

	do
	{

		escolha = MenuJaLogado(PosicaoUsuario);
		switch (escolha)
		{

		case 1:
			estoque.ListarItens();
			break;
		case 2:
			estoque.DoarItens();
			break;
		case 3:
			estoque.ReceberDoacao();
			break;
		case 4:
			cout << "Saindo da conta...";
			Sleep(1500);
			break;
		default:
			cout << "Escolha Inválida.\n";
			Sleep(1500);
		}

	} while (escolha != 4);

	
}
		

void App::ListarUsuarios()
{
	for (int i = 0; i < usuarios.size(); i++)
	{
		cout << "Usuario número " << i + 1 << endl;
		cout << "Email: " << usuarios[i].getEmail() << endl;
		cout << "Nome: " << usuarios[i].getNome() << endl;
		cout << "Senha: " << usuarios[i].getSenha() << endl;
	}

	system("pause");

}
