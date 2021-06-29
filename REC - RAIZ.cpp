#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double root(double x, double xZero, double e) //função de raiz
{
	double Aux;// auxiliar para calcular modulo
	
	Aux = (pow(xZero, 2) - x); //calculando auxiliar limietante
	if (Aux < 0) //caso negativo transforma em positivo
		Aux *= -1;
	if (Aux <= e) //retorna a estimativa se a auxiliar for menor q o limitante
		return xZero;
	else
		return root(x, (pow(xZero, 2) + x) / (2 * xZero) , e); //recursividade
}

int main()
{
	double x;     //numero da raiz
	double xZero; //estimativa inicial para raiz
	double e; 	  //limitante superior para o erro

	//lendo inputs (raiz, estimativa, limitante)
	cin >> x;
	cin >> xZero;
	cin >> e;

	//mostrando resultado com 4 casas decimais
	cout << fixed << setprecision(4);
	cout << root(x, xZero, e);

	return 0;
}
