#include <iostream>

using namespace std;

void InsertionSort(int vetor[], int tamanho)
{
	int i; // contador
	int j; // contador
	int chave; //auxiliar

	//ordenando
	for (j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while ((i >= 0) && (vetor[i] > chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}

int main()
{
	int size; //tamanho do vetor
	int c; //contador
	int num_array[100]; //vetor para receber numeros
	int num; //variavel para receber valor

	//zerando auxiliares
	c = 0;

	//lendo primeiro numero
	cin >> num;

	//lendo entradas até ser digitado zero
	while(num != 0)
	{
		num_array[c] = num;
		cin >> num;
		c++;
	};

	//chamando a função bubble
	InsertionSort(num_array, c);
	
	//definindo tamanho
	size = c;
	
	//mostrando tabela
	for(c = 0; c < size; c++)
		cout << num_array[c] << " ";


	return 0;
}
