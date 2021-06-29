#include<iostream>

using namespace std;

int main()

{
	int vetor[100]; //variavel vetor
	int *n; //ponteiro para receber inteiros
	int i; //contador
	int N; //tamanho do vetor
	int cnt; //variavel para contar numeros pares e positivos

	//zerando contador para pares
	cnt = 0;

	//lendo tamanho do vetor
	cin >> N;

	//definindo poteiro para vetor
	n = vetor;

	//lendo valores a serem inseridos no vetor
	for(int i = 0; i < N; i++)
	{
		cin >> *n;
		n++;
	}

	//voltando ponteiro para primeira posição e achando quantidade de pares e positivos
	n = vetor;
	for(i = 0; i < N; i++)
	{
		if (*n % 2 == 0 && *n > 0)
			cnt++;

		n++;
	}

	//mostrando quantos pares
	cout  << cnt << endl;

	return 0;
}
