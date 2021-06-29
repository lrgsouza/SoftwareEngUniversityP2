#include<iostream>
#include<list>

using namespace std;

int main()

{
	int i;
	int soma = 0;
	list<int> fila;
	list<int>::iterator p;

	fila.push_back(1);
	fila.push_back(2);
	fila.push_back(3);

	for(p = fila.begin() ; p != fila.end() ; p++)
		soma += *p;

	cout << "soma = "  << soma << endl;

	return 0;
}
