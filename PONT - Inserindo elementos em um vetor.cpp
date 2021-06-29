#include<iostream>

using namespace std;

int main()

{
	int vetor[100]; //variavel vetor
	int *n; //ponteiro para receber inteiros
	int i; //contador
	int N; //tamanho do vetor

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
	
	//voltando ponteiro para primeira posição do vetor mostrando 
	n = vetor;
	for(i = 0; i < N; i++)
	{
		cout  << *n << endl;
		n++;
	}
	
	return 0;
}
