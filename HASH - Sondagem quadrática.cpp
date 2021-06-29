#include <iostream>
#include <cmath>

using namespace std;

int hash_aux(int k, int m) //função hash auxiliar
{
	int hash; //auxiliar para calculo do hash
	
	hash = k % m; //calculando hash
	
	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;
	
	//retornando valor de hash para função hash
	return hash;
}

int hash(int k, int i, int m, int c1, int c2) //função hash sondagem quadratica
{
	int pos_; //variavel auxiliar
	
	//chamando função auxiliar
	pos_ = (hash_aux(k, m) + (c1 * i) + (c2 * (i*i))) % m;
	
	//retornando valor de hash de songadem linear
	return pos_;
}

int main ()
{
	int k; //variável para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int c1; //auxiliar para sondagem quadratica
	int c2; //auxiliar para sondagem quadratica
	
	int i; //contador pra sondagem linear
	int pos_hash; //variavel responsável em receber retorno da função
	
	//lendo chave e tamanho do vetor
	cin >> k >> m >> c1 >> c2;
	
	//estrutura para determinar posições
	for(i = 0; i < m; i++)
	{
		//chamando função para calcular o hash (sondagem quadratica)
		pos_hash = hash(k, i, m, c1, c2);
		//mostrando posição
		cout << pos_hash << " ";
	}
	return 0;
}
