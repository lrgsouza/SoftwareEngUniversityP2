#include <iostream>

using namespace std;


int hash_aux(int k, int m) //função hash
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

	int k; //variável para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int pos_hash; //variavel responsável em receber retorno da função

	//lendo chave e tamanho do vetor
	cin >> k >> m;

	//estrutura para determinar final do processo (0,0)
	while(k != 0 && m != 0)
	{

		//chamando função para calcular o hash
		pos_hash = hash_aux(k, m);

		//mostrando posição
		cout << pos_hash << endl;

		//lendo chave e tamanho do vetor
		cin >> k >> m;
	}

	return 0;
}
