#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int biom(int k, int n)
{
	if (n > 0)
		return biom(k - 1, n - 1) + biom(k, n - 1);
	if (k == n || k == 0)
		return 1;
	return 0;
}

int fib(int number)
{
	if (number == 0)
		return 1;
	if (number == 1)
		return 1;
	return fib(number - 1) + fib(number - 2);
}

int F(int n)
{
	int S = 0;
	for (int k = 0; k <= n / 2; k++)
	{
		S += biom(k, n - k);
	}
	return S;
}

int main()
{
	int S1 = 0;
	int S2 = 0;
	
	for (int n = 0; n < 13; ++n)
	{
		S1 = F(n);
		S2 = fib(n);
		cout << "n = " << n << "   S1 = " << S1 << "   S2 = " << S2 << endl;
	}
	
	system("pause");
	return 0;
}
