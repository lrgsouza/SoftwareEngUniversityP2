#include <iostream>

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

int hash(int k, int i, int m) //função hash sondagem linear
{
	int pos_; //variavel auxiliar
	
	//chamando função auxiliar
	pos_ = (hash_aux(k, m) + i) % m;
	
	//retornando valor de hash de songadem linear
	return pos_;
}

int main ()
{
	int k; //variável para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int i; //contador pra sondagem linear
	int pos_hash; //variavel responsável em receber retorno da função
	
	//lendo chave e tamanho do vetor
	cin >> k >> m;
	
	//estrutura para determinar posições
	for(i = 0; i < m; i++)
	{
		//chamando função para calcular o hash (sondagem linear)
		pos_hash = hash(k, i, m);
		//mostrando posição
		cout << pos_hash << " ";
	}
	return 0;
}
