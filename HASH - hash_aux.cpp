#include <iostream>

using namespace std;


int hash_aux(int k, int m) //fun��o hash
{

	int hash; //auxiliar para calculo do hash

	hash = k % m; //calculando hash

	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;

	//retornando valor de hash para main
	return hash;
}

int main ()
{

	int k; //vari�vel para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int pos_hash; //variavel respons�vel em receber retorno da fun��o

	//lendo chave e tamanho do vetor
	cin >> k >> m;

	//estrutura para determinar final do processo (0,0)
	while(k != 0 && m != 0)
	{

		//chamando fun��o para calcular o hash
		pos_hash = hash_aux(k, m);

		//mostrando posi��o
		cout << pos_hash << endl;

		//lendo chave e tamanho do vetor
		cin >> k >> m;
	}

	return 0;
}
