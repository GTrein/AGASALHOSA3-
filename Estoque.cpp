#include "Estoque.h"
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
		cout << itens[i].getCor() << endl;
		cout << "===============\n";
	}

	system("pause");

}

void Estoque::DoarItens()//fun��o para adicionar itens ao vetor
{
	string tipo, tamanho, cor;

	cout << "O que voc� vai doar?\n";
	cout << "Use s� uma palavra Ex:T�nis, Moletom, Cobertor.\n";
	cin >> tipo;
	cout << "Qual o tamanho do item?\n";
	cout << "Use s� uma palavra Ex:P, GG, 42.\n";
	cin >> tamanho;
	cout << "Qual a cor do item?\n";
	cout << "Use s� uma palavra Ex:Azul, Verde, Preto.\n";
	cin >> cor;
	Item ItemTemp(tipo, tamanho, cor);
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
		cout << itens[i].getCor() << endl;
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
	
	cout << escolha << "-" << endl;
	cout << itens[escolha-1].getTipo() << endl;
	cout << itens[escolha-1].getDescricao() << endl;
	cout << itens[escolha-1].getCor() << endl;
	cout << "O item escolhido foi reservado com sucesso!\n";
	cout << "As informa��es de retirada ser�o encaminhadas por email.\n";

	itens.erase(itens.begin() + escolha - 1);
	system("pause");
	
}

void Estoque::Exemplo2()//fun��o para adicionar 3 itens de exemplo a lista toda vez que o programa for inciado
{

	string tipo, descricao, cor;

	Item ItemTemp1("T�nis", "42", "Vermelho");
	itens.push_back(ItemTemp1);

	Item ItemTemp2("Casaco", "PP", "Preto");
	itens.push_back(ItemTemp2);

	Item ItemTemp3("Moletom", "M", "Azul");
	itens.push_back(ItemTemp3);


}