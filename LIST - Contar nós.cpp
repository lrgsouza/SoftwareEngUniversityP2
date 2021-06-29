#include<iostream>
#include<list>

using namespace std;

//função para contar nós
int contar(list<int> lista)
{
	int count; //variavel contador para nós
	list<int>::iterator p; //interator para varrer a lista
	
	//zerando soma
	count = 0;

	//contando quantidade de nós
	for(p = lista.begin() ; p != lista.end() ; p++)
		count++;

	return count;
}

int main()
{
	list<int> lista; //lista para salvar lista
	int in; //variavel para entrada dos numeros
	int qnt; //variavel para receber retorno da função

	//zerando contador
	qnt = 0;

	//lendo primeira entrada e demais em sequencia
	cin >> in;

	while(in != 0)
	{
		lista.push_back(in);
		cin >> in;
	}

	//chamando função para somar
	qnt = contar(lista);

	//mostrar soma
	cout << qnt << endl;

	return 0;
}
