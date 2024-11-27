#include<iostream>
using namespace std;

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入边长" ;
	cin >> a >> b >> c;
	if ((a + b) > c &&( b + c) > a &&( a + c )> b)
	{
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "不能构成三角形" << endl;
	}


	return 0;
}