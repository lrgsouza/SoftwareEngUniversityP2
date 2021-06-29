#include <iostream>
#include <cmath>

using namespace std;

int hash_aux(int k, int m) //fun��o hash auxiliar
{
	int hash; //auxiliar para calculo do hash
	
	hash = k % m; //calculando hash
	
	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;
	
	//retornando valor de hash para fun��o hash
	return hash;
}

int hash(int k, int i, int m, int c1, int c2) //fun��o hash sondagem quadratica
{
	int pos_; //variavel auxiliar
	
	//chamando fun��o auxiliar
	pos_ = (hash_aux(k, m) + (c1 * i) + (c2 * (i*i))) % m;
	
	//retornando valor de hash de songadem linear
	return pos_;
}

int main ()
{
	int k; //vari�vel para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int c1; //auxiliar para sondagem quadratica
	int c2; //auxiliar para sondagem quadratica
	
	int i; //contador pra sondagem linear
	int pos_hash; //variavel respons�vel em receber retorno da fun��o
	
	//lendo chave e tamanho do vetor
	cin >> k >> m >> c1 >> c2;
	
	//estrutura para determinar posi��es
	for(i = 0; i < m; i++)
	{
		//chamando fun��o para calcular o hash (sondagem quadratica)
		pos_hash = hash(k, i, m, c1, c2);
		//mostrando posi��o
		cout << pos_hash << " ";
	}
	return 0;
}
