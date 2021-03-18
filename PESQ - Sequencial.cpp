#include <iostream>

using namespace std;


int main ()
{

	int vetor[100]; //vetor de dados
	int N; //numeros a serem inseridos
	int key; //elemento a ser procurado
	int i; //contador
	int posi; //posição do elemento quando for encontrado
	bool verif = false; //verificador caso o elemento for encontrado


	//lendo	elementos e salvando nos vetores
	cin >> N;
	i = 0;
	while(N != -1)
	{

		vetor[i] = N;
		cin >> N;
		i++;

	}

	//lendo elementos a ser procurado
	cin >> key;

	//procurando no vetor
	for(i = 0; i < 100; i++)
	{
		if (vetor[i] == key)
		{
			verif = true;
			posi = i;
			break;
		}
	}

	//apresentando resultado
	if (verif == true)
		cout << key << " encontrado na posicao " << posi << endl;
	else
		cout << key << " nao encontrado" << endl;

	return 0;
}
