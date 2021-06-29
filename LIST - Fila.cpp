#include<iostream>
#include<list>

using namespace std;

int main()

{
	list<int> fila; //lista para salvar fila
	int i; //variavel para contador
	int in; //variavel

	//lendo entradas e salvando no modelo fila
	for(i = 0; i < 4; i++)
	{
		cin >> in;
		fila.push_back(in);
	}

	//mostrando lista e removendo nós
	while(!fila.empty())
	{
		cout << *fila.begin() << endl; //mostra primeiro nó
		fila.pop_front(); //removendo primero nó
	}

	return 0;
}
