#include <iostream>

using namespace std;

int fatorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fatorial(n - 1);
}

int main()
{
	int n;
	int f;
	
	cin >> n;
	cout << n << "! = " << fatorial(n);

	return 0;
}
