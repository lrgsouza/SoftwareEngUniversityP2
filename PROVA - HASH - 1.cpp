#include <iostream>

using namespace std;

struct dado //struct para salvar dados
{
	int k;
	int status;
};

int hash_aux(int k, int m) //função hash auxiliar
{
	int h_aux; //auxiliar para calculo do hash

	h_aux = k % m; //calculando hash

	//somando M caso calculo de negativo
	if(h_aux < 0)
		h_aux = h_aux + m;

	//retornando valor de hash para função hash
	return h_aux;
}

int hash_main(int k, int i, int m) //função hash sondagem quadratica
{
	int pos_; //variavel auxiliar
	int c1; //auxiliar para sondagem quadratica
	int c2; //auxiliar para sondagem quadratica

	//definindo valores propostos para C1 e C2
	c1 = 1;
	c2 = 3;

	//chamando função auxiliar
	pos_ = (hash_aux(k, m) + (c1 * i) + (c2 * (i * i))) % m;

	//retornando valor de hash de songadem linear
	return pos_;
}

int hash_insert(dado T[], int k, int m) //função para insersão de dados
{
	int i; //contator auxiliar
	int j; //auxiliar para sondagem linear

	//zerando contador
	i = 0;

	//inserindo dados no struct
	do
	{
		j = hash_main(k, i, m); //sondagem linear

		if (T[j].status != 1) //salva o valor de k na chave caso
		{
			T[j].k = k;
			T[j].status = 1;
			return j;
		}
		else
			i++;
	}
	while(i != m);
	return -1;

}

void Clean(dado T[], int m) //função para inserir status e chaves default
{
	for (int x = 0; x < m; x++)
	{
		T[x].status = -1;
		T[x].k = -1;
	}
}

int main ()
{
	int k; //variável para receber valor das chaves
	int m; //variavel para receber tamanho do vetor
	int c; //contador pra saída
	dado T[100]; //vetor de struct com a chave e o status

	//lendo chave e tamanho do vetor
	cin >> m;

	//inserindo -1 em todas as posições
	Clean(T, m);

	//lendo primeira chave a ser inserida
	cin >> k;

	//inserindo chaves na tabela
	while(k != 0)
	{
		//função para inserção
		hash_insert(T, k, m);

		//lendo demais chaves
		cin >> k;
	}

	//mostrando tabela
	for(c = 0; c < m; c++)
		cout << T[c].k << " ";

	return 0;
}
