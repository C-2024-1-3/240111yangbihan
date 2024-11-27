#include<iostream>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, x1, x2;
	cin >> a;
	if (a >= 0)
	{
		x1 = a;
		x2 = (x1 + a / x1) / 2;
		while (abs(x1 - x2) >= 1e-5)
		{
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << fixed << setprecision(10) << x1 << endl;
	}
	if (a < 0)
	{
		a = a * (-1);
		x1 = a;
		x2 = (x1 + a / x1) / 2;
		while (abs(x1 - x2) >= 1e-5)
		{
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << fixed << setprecision(10) << x1 << "i" << endl;
	}

	return 0;
}