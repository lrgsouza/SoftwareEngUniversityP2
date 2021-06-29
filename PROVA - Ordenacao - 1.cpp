#include <iostream>

using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j) //fun��o para ordena��o - m�todo quicksort
{
	int aux; //auxiliar para troca de valores
	int esq;  //recebe posi��o do vetor da esquerda
	int dir; //recebe posi��o do vetor da direita
	int pivo; //recebe valor do vetor pivo

	//definindo esquerda e direitta
	esq = i;
	dir = j;

	//definindo pivo
	pivo = vetor[(int)((esq + dir) / 2)];

	do //encontrando vetores a serem ordenados e ordenando
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			aux = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = aux;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);

	//usando recursividade para ordenar restante dos vetores
	if (dir - i >= 0)
		quickSort(vetor, tamanho, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, tamanho, esq, j);
}

int main()
{
	int size; //tamanho do vetor
	int c; //contador
	int num_array[100]; //vetor para receber numeros
	int num; //variavel para receber numeros
	int i; // primeira posi��o do vetor
	int j; // ultima posi��o do vetor

	//zerando auxiliares
	c = 0;
	i = 0;
	j = 0;

	//lendo primeiro numero
	cin >> num;

	//lendo demais entradas at� ser digitado -1
	while(num != -1)
	{
		num_array[c] = num;
		cin >> num;
		c++;
	};

	//definindo ultima posi��o do vetor
	j = c - 1;

	//copiando tamanho para variavel auxiliar
	size = c;

	//chamando a fun��o quicksort
	quickSort(num_array, c, i, j);

	//mostrando tabela
	for(c = 0; c < size - 1; c++)
		cout << num_array[c] << " ";
	cout << num_array[c];

	return 0;
}
