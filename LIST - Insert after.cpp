#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> lista; //lista para salvar lista
	list<int>::iterator L1; //interator para varrer lista
	int in; // variavel para receber entrada
	int x; //variavel para receber valor a ser procurado
	int y; //variavel para receber valor a ser inserido

	//lendo entradas da lista
	cin >> in;
	while(in != -1)
	{
		lista.push_front(in);
		cin >> in;
	}

	//lendo x e y
	cin >> x >> y;

	//definindo interator para primeira posi��o
	L1 = lista.begin();

	//procurando posi��o do x
	while(*L1 != x)
		L1++;
	
	//definindo posi��o a ser inserida ap�s o X.
	L1++;

	//inserindo elemento y ap�s x
	lista.insert(L1,y);

	//mostrando lista
	for(L1 = lista.begin(); L1 != lista.end(); L1++)
		cout << *L1 << " ";

	return 0;
}
