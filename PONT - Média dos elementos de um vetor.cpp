#include<iostream>
#include <iomanip>

using namespace std;

int main()

{
	double vetor[100]; //variavel vetor
	double *n; //ponteiro para receber inteiros
	int i; //contador
	int N; //tamanho do vetor
	double soma; //variavel auxiliar para soma/media

	//zerando soma
	soma = 0;

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

	//voltando ponteiro para primeira posição e calculando média
	n = vetor;
	for(i = 0; i < N; i++)
	{
		soma += *n;
		n++;
	}
	
	//mostrando média
	cout << fixed << setprecision (2);
	cout  << soma / N << endl;

	return 0;
}
