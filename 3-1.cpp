#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);

}
int main()
{
	int num1, num2;
	cout << "��������������" << endl;
	cin >> num1 >> num2;
	int G = gcd(num1, num2);
	int L = lcm(num1, num2);
	cout << "���Լ��Ϊ:" << G << endl;
	cout << "��С������Ϊ��" << L << endl;

	system("pause");
	return 0;

}