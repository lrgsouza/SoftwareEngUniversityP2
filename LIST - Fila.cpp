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

	//mostrando lista e removendo n�s
	while(!fila.empty())
	{
		cout << *fila.begin() << endl; //mostra primeiro n�
		fila.pop_front(); //removendo primero n�
	}

	return 0;
}
