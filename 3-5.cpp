#include<iostream>
using namespace std;

int peach(int n)
{
	if (n == 10)
	{
		return 1;
	}
	return  (peach(n + 1) + 1) * 2;
}
int main()
{
	int Total = peach(1);
	cout << "总数量为：" << Total << "个" << endl;
	return 0;
}