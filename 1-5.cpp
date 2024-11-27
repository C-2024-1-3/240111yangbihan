#include<iostream>
using namespace std;

int main()
{
	float F = 0;
	float C = (F-32)/1.8;
	cout << "请输入华氏温度：" << endl;
	cin >> F;
	cout << "对应的摄氏温度为：" << C << endl;

	return 0;
}