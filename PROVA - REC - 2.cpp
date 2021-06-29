#include <iostream>

using namespace std;

int Comb(int n, int k) //fun��o Comb
{
	if (k == 1) //retornando n para k = 1
		return n;
	if (k == n) //retornando 1 para k = n
		return 1;
	else //realizando recursividade caso contrario
		return Comb(n - 1, k - 1) + Comb(n - 1, k); //recursividade
}

int main()
{
	int n; //variavel para n�mero de pessoas
	int k; //variavel para numero de pessoas por grupo

	//lendo numero de pessoas e pessoas por grupo
	cin >> n;
	cin >> k;

	//mostrando quantidade de grupos poss�veis
	cout << Comb(n, k);

	return 0;
}
