#include<iostream>
#include<list>

using namespace std;

//fun��o para somar n�s
int soma(list<int> lista)
{
	int soma; //variavel para somar
	list<int>::iterator p; //interator para varrer a lista
	
	//zerando soma
	soma = 0;

	//varrendo lista e somando
	for(p = lista.begin() ; p != lista.end() ; p++)
		soma += *p;

	return soma;
}

int main()
{
	list<int> lista; //lista para salvar lista
	int in; //variavel para entrada dos numeros
	int sum; //variavel para receber retorno da fun��o

	//zerando variavel sum
	sum = 0;

	//lendo primeira entrada e demais em sequencia
	cin >> in;

	while(in != 0)
	{
		lista.push_back(in);
		cin >> in;
	}

	//chamando fun��o para somar
	sum = soma(lista);

	//mostrar soma
	cout << sum << endl;

	return 0;
}
