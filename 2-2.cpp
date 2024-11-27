#include<iostream>
using namespace std;

int main() {
	float x, y;
	cout << "x=" ;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
	}
	if (x >= 1 && x < 5)
	{
		y = 1 + 1 / (2 * x);
	}
	if (x >= 5 && x < 10)
	{
		y = x * x;
	}
	cout << "y=" << y;



	return 0;
}