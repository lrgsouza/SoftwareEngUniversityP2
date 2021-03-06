#include <iostream>
#include <cmath>

using namespace std;

int h1(int k, int m) //fun??o hash auxiliar h1
{
	int hash; //auxiliar para calculo do hash

	hash = k % m; //calculando hash

	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;

	//retornando valor de hash para fun??o hash
	return hash;
}

int h2(int k, int m) //fun??o hash auxiliar h2
{
	int hash; //auxiliar para calculo do hash

	hash = 1 + (k % (m - 1)); //calculando hash

	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;

	//retornando valor de hash para fun??o hash
	return hash;
}


int hash(int k, int i, int m) //fun??o double hash
{
	int pos_; //variavel auxiliar

	//chamando fun??o auxiliar
	pos_ = (h1(k, m) + (i * h2(k, m))) % m;

	//retornando valor de hash de songadem linear
	return pos_;
}

int main ()
{
	int k; //vari?vel para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int i; //contador pra sondagem linear
	int pos_hash; //variavel respons?vel em receber retorno da fun??o

	//lendo chave e tamanho do vetor
	cin >> k >> m ;

	//estrutura para determinar posi??es
	for(i = 0; i < m; i++)
	{
		//chamando fun??o para calcular o hash (double hash)
		pos_hash = hash(k, i, m);
		//mostrando posi??o
		cout << pos_hash << " ";
	}
	return 0;
}
