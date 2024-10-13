#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int k, i;
	P = 1;
	i = 2;
	while (i <= 10)

	{
		S = 0;
		k = 1;
		while (k <= 20 - i)

		{
			S += i / k;
			k++;

		}
		P *= (1 + S) / (1 + S * S);
		i++;

	}
	cout << P << endl;
	P = 1;
	i = 2;
	do
	{
		S = 0;
		k = 1;
		do
		{
			S += i / k;
			k++;
		} while (k <= 20 - i);
		P *= (1 + S) / (1 + S * S);
		i++;
	} while (i <= 10);
	cout << P << endl;

	P = 1;
	for (i = 2; i <= 10; i++)

	{
		S = 0;
		for (k = 1; k <= 20 - i; k++)

		{
			S += i / k;

		}
		P *= (1 + S) / (1 + S * S);

	}
	cout << P << endl;
	P = 1;
	for (i = 10; i >= 2; i--) 
	
	{
		S = 0;
		for (k = 20 - i; k >= 1; k--)

		{
			S += i / k;

		}
		P *= (1 + S) / (1 + S * S);
	}
	cout << P << endl;
	return 0;
}