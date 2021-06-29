#include<iostream>

using namespace std;

int main()

{
	int vetor[100]; //variavel vetor
	int *n; //ponteiro para receber inteiros
	int i; //contador
	int N; //tamanho do vetor
	int maior; //variavel para achar maior numero

	//definindo base para achar maior numero
	maior = -100000;

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

	//voltando ponteiro para primeira posição e achando maior valor
	n = vetor;
	for(i = 0; i < N; i++)
	{
		if (*n > maior)
		maior = *n;
		n++;
	}
	
	//mostrando maior numero
	cout  << maior << endl;

	return 0;
}
