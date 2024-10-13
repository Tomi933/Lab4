#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = -R;
		else
			if (-8 - R < x && x < -8 + R)
				y = -R + sqrt(R * R - (x + 8) * (x + 8));
			else
				if (x >= -8 + R && x < 2)
					y = (x + 8 - R) * (2 + R) / (10 - R) - R;
				else
					if (x >= 2 && x < 6)
						y = 0;
					else
						y = (x - 6) * (x - 6);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}