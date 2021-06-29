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

		cout << *fila.begin() << endl; //mostra primeiro n�
		fila.pop_back(); //removendo primero n�


	}

	while(!fila.empty())
	{

		cout << *fila.begin() << endl; //mostra primeiro n�
		fila.pop_front(); //removendo primero n�

	}


	// CONCEITO PILHA
	/*
	for(i = 0; i < 3; i++)
	{
		cout << *pilha.begin() << endl; //mostra primeiro n�
		pilha.pop_front(); //removendo primero n�

	}

	while(!pilha.empty())
	{

		cout << *pilha.begin() << endl; //mostra primeiro n�
		pilha.pop_front(); //removendo primero n�

	}
	*/



	return 0;
}
