#include<iostream>
using namespace std;

int main()
{
	int a, b,c;
	char d;
	cin >> a >> d >> b;
	if (d == '+')
	{
		c = a + b;
		cout << a << "+" << b << "=" << c << endl;
	}
	if (d == '-')
	{
		c = a - b;
		cout << a << "-" << b << "=" << c << endl;
	}
	if (d == '*')
	{
		c = a * b;
		cout << a << "*" << b << "=" << c << endl;
	}
	if (d == '/')
	{
		if (b == 0)
		{
			cout << "��������Ϊ��"<<endl;
	    }
		else {
			c = a / b;
			cout << a << "/" << b << "=" << c << endl;
		}
		
	}
	if (d == '%')
	{
		c = a % b;
		cout << a << "%" << b << "=" << c << endl;
	}
	else {
		cout << "������Ƿ�" << endl;
	}

	return 0;
}