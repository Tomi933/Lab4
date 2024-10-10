#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	int k, N, i;
	double S;
	cout << "N = "; cin >> N;
	cout << "i = "; cin >> i;
	S = 0;
	k = N;
	while (k <= i)
	{
		S += sqrt(sin(1.0 * k) * sin(1.0 * k) + cos(1.0 * N/k) * cos(1.0 * N / k));
		k++;
	}
	cout << S << endl;
	S = 0;
	k = N;
	do {
		S += sqrt(sin(1.0 * k) * sin(1.0 * k) + cos(1.0 * N / k) * cos(1.0 * N / k));
		k++;
	} while (k <= i);
	cout << S << endl;
	S = 0;
	for (k = N; k <= i; k++)
	{
		S += sqrt(sin(1.0 * k) * sin(1.0 * k) + cos(1.0 * N / k) * cos(1.0 * N / k));
	}
	cout << S << endl;
	S = 0;
	for (k = i; k >= N; k--)
	{
		S += sqrt(sin(1.0 * k) * sin(1.0 * k) + cos(1.0 * N / k) * cos(1.0 * N / k));
	}
	cout << S << endl;

	return 0;
}