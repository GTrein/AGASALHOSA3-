#include "Estoque.h"
#include <string>
using namespace std;


void Estoque::ListarItens()//fun��o para listar os itens
{
	if (itens.empty()) {
		cout << "N�o h� itens no estoque.\n";
		Sleep(1500);
			return;
	}
	cout << "===============\n";
	for (int i = 0; i < itens.size(); i++)
	{
		cout << i + 1 << "-" << endl;
		cout << itens[i].getTipo() << endl;
		cout << itens[i].getDescricao() << endl;
		cout << "===============\n";
	}

	system("pause");

}

void Estoque::DoarItens()//fun��o para adicionar itens ao vetor
{
	string tipo, tamanho, cor;

	cout << "O que voc� vai doar?\n";
	getline(cin, tipo);
	cin.ignore();
	cout << "Descreva brevemente o item.\n";
	cout << "Por exemplo: Nike air branco.\n";
	getline(cin, tamanho);
	cin.ignore();
	
	Item ItemTemp(tipo, tamanho);
	itens.push_back(ItemTemp);
}
void Estoque::ReceberDoacao()//fun��o para escolher e remover itens do vetor
{
	int escolha;
	if (itens.empty()) {
		cout << "N�o h� itens no estoque.\n";
		Sleep(1500);
			return;
	}
	cout << "===============\n";
	for (int i = 0; i < itens.size(); i++)
	{
		cout << i + 1 << "-" << endl;
		cout << itens[i].getTipo() << endl;
		cout << itens[i].getDescricao() << endl;
		cout << "===============\n";
	}
	cout << "Escolha um item para receber: ";
	cin >> escolha;
	if (escolha < 1 || escolha > itens.size())
	{
		cout << "Escolha inv�lida.\n";
		Sleep(1500);
		return;
	}
	
	cout << itens[escolha-1].getTipo() << endl;
	cout << itens[escolha-1].getDescricao() << endl;
	cout << "O item escolhido foi reservado com sucesso!\n";
	cout << "As informa��es de retirada ser�o encaminhadas por email.\n";

	itens.erase(itens.begin() + escolha - 1);
	system("pause");
	
}

void Estoque::Exemplo2()//fun��o para adicionar 3 itens de exemplo a lista toda vez que o programa for inciado
{

	string tipo, descricao;

	Item ItemTemp1("T�nis", "T�nis de corrida vermelho tamanho 42");
	itens.push_back(ItemTemp1);

	Item ItemTemp2("Camiseta", "Regata branca tamanho M");
	itens.push_back(ItemTemp2);

	Item ItemTemp3("Moletom", "Moletom preto com capuz tamanho PP");
	itens.push_back(ItemTemp3);


}