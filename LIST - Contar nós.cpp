#include<iostream>
#include<list>

using namespace std;

//fun��o para contar n�s
int contar(list<int> lista)
{
	int count; //variavel contador para n�s
	list<int>::iterator p; //interator para varrer a lista
	
	//zerando soma
	count = 0;

	//contando quantidade de n�s
	for(p = lista.begin() ; p != lista.end() ; p++)
		count++;

	return count;
}

int main()
{
	list<int> lista; //lista para salvar lista
	int in; //variavel para entrada dos numeros
	int qnt; //variavel para receber retorno da fun��o

	//zerando contador
	qnt = 0;

	//lendo primeira entrada e demais em sequencia
	cin >> in;

	while(in != 0)
	{
		lista.push_back(in);
		cin >> in;
	}

	//chamando fun��o para somar
	qnt = contar(lista);

	//mostrar soma
	cout << qnt << endl;

	return 0;
}
