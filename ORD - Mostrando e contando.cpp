#include <iostream>

using namespace std;

void bubbleSort(int vetor[], int tamanho)
{
	int i;		// contador
	int j; 		// contador
	int trab;   //Auxiliar para troca
	bool troca; //check de swap
	int limite; //Auxiliar para tamanho do vetor
	int counter; //contador para troca

	//valores default
	troca = true;
	limite = tamanho - 1;
	counter = 0;

	while (troca) //função para ordenação
	{
		troca = false;
		for (i = 0; i < limite; i++)
			if (vetor[i] > vetor[i + 1])
			{
				trab = vetor[i];
				cout << "New trab:" << trab << endl;//mostrando valores de trab
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
				counter++;
			}
		limite = j;
	}
	//mostrando contador
	cout << "Contador:" << counter << endl;
}

int main()
{
	int size; //tamanho do vetor
	int c; //contador
	int num_array[100]; //vetor para receber numeros

    //lendo tamanho do vetor
	cin >> size;
    
    //armazenando valores no vetor
	for(c = 0; c < size; c++)
	{
		cin >> num_array[c];
	}

    //chamando a função bubble
	bubbleSort(num_array, size);

	return 0;
}
