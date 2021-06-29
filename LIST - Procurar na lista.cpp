#include<iostream>
#include<list>

using namespace std;

//função para encontrar valor
bool encontrar(list<float> lista, float x)
{

	list<float>::iterator p; //interator para varrer a lista

	//varrendo lista e checando
	for(p = lista.begin() ; p != lista.end() ; p++)
		if (x == *p)
			return true;

	return false;
}

int main()
{
	list<float> lista; //lista para salvar fila
	int in; //variavel para entrada dos numeros
	float num; //variavel para ler numero a ser encontrado
	bool find; //variavel para checar se foi encontrado

	//voltando booleana para false
	find = false;

	//lendo primeira entrada e demais em sequencia
	cin >> in;
	while(in != 0)
	{
		lista.push_back(in);
		cin >> in;
	}

	//lendo numero a ser procurado
	cin >> num;

	//chamando função para encontrar
	find = encontrar(lista, num);

	//mostrar se foi encontrado ou não
	if(find)
		cout << "Encontrado" << endl;
	else
		cout << "Nao Encontrado" << endl;

	return 0;
}
