#include<iostream>
#include<list>

using namespace std;

int main()

{
	list<int> pilha; //lista para salvar pilha
	int i; //variavel para contador
	int in; //variavel

	//lendo entradas e salvando no modelo pilha
	for(i = 0; i < 4; i++)
	{
		cin >> in;
		pilha.push_front(in);
	}

	//mostrando lista e removendo nós
	while(!pilha.empty())
	{
		cout << *pilha.begin() << endl; //mostra primeiro nó
		pilha.pop_front(); //removendo primero nó

	}

	return 0;
}
