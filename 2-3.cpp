#include<iostream>
using namespace std;

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "������߳�" ;
	cin >> a >> b >> c;
	if ((a + b) > c &&( b + c) > a &&( a + c )> b)
	{
		if (a == b || a == c || b == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "���ܹ���������" << endl;
	}


	return 0;
}