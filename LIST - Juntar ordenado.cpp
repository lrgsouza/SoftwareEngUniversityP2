#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> lista1; //lista para salvar lista 1
	list<int>::iterator L1; //interator para varrer a lista 1
	list<int> lista2; //lista para salvar lista 2
	list<int>::iterator L2; //interator para varrer a lista 2
	list<int> lista3; //lista para salvar lista 3
	list<int>::iterator L3; //interator para varrer a lista 3
	int i; //contador
	int in; // variavel para receber entrada

	//zerando contador
	i = 0;

	//lendo entradas da lista 1
	cin >> in;
	while(in != 0)
	{
		lista1.push_back(in);
		cin >> in;
	}

	//lendo entradas da lista 2
	cin >> in;
	while(in != 0)
	{
		lista2.push_back(in);
		cin >> in;
	}

	//jogando itens das listas 1 e 2 para 3
	while(!lista1.empty() || !lista2.empty())
	{
		//definindo interators para listas 1 e 2
		L1 = lista1.begin();
		L2 = lista2.begin();

		if (*L1 < *L2)
		{
			lista3.push_back(*L1);
			lista1.pop_front();
		}
		else
		{
			lista3.push_back(*L2);
			lista2.pop_front();		
		}
	}

	//mostrando lista 3
	for(L3 = lista3.begin(); L3 != lista3.end(); L3++)
		cout << *L3 << " ";

	return 0;
}
