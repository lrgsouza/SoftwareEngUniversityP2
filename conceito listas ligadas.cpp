#include<iostream>
#include<list>

using namespace std;

int main()

{
	int i;
	list<int> fila;
	fila.push_back(1);
	fila.push_back(2);
	fila.push_back(3);

	/* CONCEITO PILHA
	list<int> pilha;
	int i;
	pilha.push_back(1);
	pilha.push_back(2);
	pilha.push_back(3);
	*/


	//CONCEITO FILA
	for(i = 0; i < 3; i++)
	{

		cout << *fila.begin() << endl; //mostra primeiro nó
		fila.pop_back(); //removendo primero nó


	}

	while(!fila.empty())
	{

		cout << *fila.begin() << endl; //mostra primeiro nó
		fila.pop_front(); //removendo primero nó

	}


	// CONCEITO PILHA
	/*
	for(i = 0; i < 3; i++)
	{
		cout << *pilha.begin() << endl; //mostra primeiro nó
		pilha.pop_front(); //removendo primero nó

	}

	while(!pilha.empty())
	{

		cout << *pilha.begin() << endl; //mostra primeiro nó
		pilha.pop_front(); //removendo primero nó

	}
	*/



	return 0;
}
