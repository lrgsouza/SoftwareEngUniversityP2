#include <iostream>

using namespace std;

struct dado //struct para salvar dados
{
	int k;
	int status; // 0-vazio, 1-ocupado, 2-removido
};

int h1(int k, int m) //função hash auxiliar h1
{
	int hash; //auxiliar para calculo do hash

	hash = k % m; //calculando hash

	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;

	//retornando valor de hash para função hash
	return hash;
}

int h2(int k, int m) //função hash auxiliar h2
{
	int hash; //auxiliar para calculo do hash

	hash = 1 + (k % (m - 1)); //calculando hash

	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;

	//retornando valor de hash para função hash
	return hash;
}

int hash(int k, int i, int m) //função double hash
{
	int pos; //variavel auxiliar

	//chamando função auxiliar
	pos = (h1(k, m) + (i * h2(k, m))) % m;

	//retornando valor de hash de songadem linear
	return pos;
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
		j = hash(k, i, m); //sondagem linear

		if (T[j].status != 1) //salva o valor de k na chave
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

int hash_search(dado T[], int k, int m) //função para busca de dados
{
	int i; //contator auxiliar
	int f; //auxiliar para sondagem linear

	//zerando contador
	i = 0;
	do
	{
		f = hash(k, i, m);

		if (T[f].k == k)
			return f;
		i++;
	}
	while (T[f].status != 0 || i < m);
	return -1;
}

int hash_remove(dado T[], int s, int m)
{
	int j; //auxiliar para chamar a pesquisa

	j = hash_search(T, s, m);

	if(j != -1)
	{
		T[j].status = 2;
		T[j].k = -1;
		return 0; // consegui remover
	}
	else
		return -1; // k nao esta na tabela
}

void Clean(dado T[], int m) //função para inserir status e chaves default
{
	for (int x = 0; x < m; x++)
	{
		T[x].status = 0;
		T[x].k = -1;
	}
}

int main ()
{
	int k; //variável para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int c; //contador para saida
	int o; //variavel para opção
	dado T[100]; //vetor de struct com a chave e o status
	int s; //chave a ser procurada ou removida

	//lendo tamanho do vetor
	cin >> m;
	
	Clean(T, m); //inserindo valores default
	
	//lendo opção da operação
	cin >> o;

	//programa para seleção da função
	while(o != 5)
	{
		switch(o)
		{
		case 1:
			//função para inserção
			cin >> k;
			hash_insert(T, k, m);
			break;

		case 2:
			//função para pesquisar
			//lendo chave a ser procurada
			cin >> s;
			//buscando chave e mostrando resultado
			cout << hash_search(T, s, m) << endl;
			break;

		case 3:
			//função para remover
			//lendo chave a ser removida
			cin >> s;
			//removendo chave
			hash_remove(T, s, m);
			break;

		case 4:
			//função para mostrar a tabela
			//mostrando tabela
			for (c = 0; c < m; c++)
				cout << T[c].k << " ";
			break;

		case 5://encerrando o programa
			return 0;
		}
		//lendo opção novamente
		cin >> o;
	}
	return 0;
}
