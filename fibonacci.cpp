#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	cout << "Unesite broj koliko puta zelite izvrsiti fibonaccijev niz: " << endl;
	int broj;
	cin >> broj;
	int fib[100];
	fib[0] = 0;
	fib[1] = 1;
	cout<<fib[0]<<", " << fib[1] << ", ";
	for (int i = 2; i < broj; i++)
	{
		fib[i] = fib[i-1] + fib[i - 2];
		cout << fib[i] << ", ";
	}
	system("pause");
	return 0;
}