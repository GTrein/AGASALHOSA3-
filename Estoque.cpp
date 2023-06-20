#include "Estoque.h"
using namespace std;


void Estoque::ListarItens()//função para listar os itens
{
	if (itens.empty()) {
		cout << "Não há itens no estoque.\n";
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

void Estoque::DoarItens()//função para adicionar itens ao vetor
{
	string tipo, tamanho, cor;

	cout << "O que você vai doar?\n";
	cout << "Use só uma palavra Ex:Tênis, Moletom, Cobertor.\n";
	cin >> tipo;
	cout << "Qual o tamanho do item?\n";
	cout << "Use só uma palavra Ex:P, GG, 42.\n";
	cin >> tamanho;
	cout << "Qual a cor do item?\n";
	cout << "Use só uma palavra Ex:Azul, Verde, Preto.\n";
	cin >> cor;
	Item ItemTemp(tipo, tamanho, cor);
	itens.push_back(ItemTemp);
}
void Estoque::ReceberDoacao()//função para escolher e remover itens do vetor
{
	int escolha;
	if (itens.empty()) {
		cout << "Não há itens no estoque.\n";
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
		cout << "Escolha inválida.\n";
		Sleep(1500);
		return;
	}
	
	cout << escolha << "-" << endl;
	cout << itens[escolha-1].getTipo() << endl;
	cout << itens[escolha-1].getDescricao() << endl;
	cout << itens[escolha-1].getCor() << endl;
	cout << "O item escolhido foi reservado com sucesso!\n";
	cout << "As informações de retirada serão encaminhadas por email.\n";

	itens.erase(itens.begin() + escolha - 1);
	system("pause");
	
}

void Estoque::Exemplo2()//função para adicionar 3 itens de exemplo a lista toda vez que o programa for inciado
{

	string tipo, descricao, cor;

	Item ItemTemp1("Tênis", "42", "Vermelho");
	itens.push_back(ItemTemp1);

	Item ItemTemp2("Casaco", "PP", "Preto");
	itens.push_back(ItemTemp2);

	Item ItemTemp3("Moletom", "M", "Azul");
	itens.push_back(ItemTemp3);


}