#include <iostream>

using namespace std;

int potencia(int a,int n) //função de potenciação
{
	if (n == 0)
		return 1;
	else
		return a*potencia(a,n -1) ;
}

int main()
{
	int a; //base
	int n; //expoente
	
	//lendo base e expoente
	cin >> a;
	cin >> n;
	
	//mostrando resultado
	cout << potencia(a,n);

	return 0;
}
