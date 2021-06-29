#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> estoque; //lista para salvar estoque
	list<int>::iterator e; //interator para varrer a lista estoque
	list<int> venda; //lista para salvar venda
	list<int>::iterator v; //interator para varrer a lista venda
	int i; //contador
	int Op; // variavel para operações
	int Product; // variavel para receber codigo do protudo
	int N; //variavel para entrada da quantidade de operações

	//zerando contador
	i = 0;

	//lendo primeira entrada e demais em sequencia
	cin >> N;

	for(i = 0; i < N; i++) 
	{
		//lendo operação
		cin >> Op;

		//verificando Operação: 1 = registra produto estoque, 2 = tira do estoque e joga em venda
		if(Op == 1)
		{
			cin >> Product;
			estoque.push_back(Product);

		}
		else if (Op == 2)
		{
			e = estoque.begin();
			venda.push_front(*e);
			estoque.pop_front();
		}
	}

	//mostrar estoque
	cout << "Estoque: ";
	for(e = estoque.begin(); e != estoque.end(); e++)
		cout << *e << " ";

	//mostrar venda
	cout << endl;
	cout << "Venda: ";
	for(v = venda.begin(); v != venda.end(); v++)
		cout << *v << " ";

	return 0;
}
