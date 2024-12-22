#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
		int hour;
	int minute;
	int sec;
public:
	void time()
	{
		cin >> hour>>minute>>sec;
	}
	void timeprint()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main51()
{
	Time tl;           //定义t1为Time类对象
	tl.time();     
	tl.timeprint();
	return 0;
}
//改写程序，要求：
//(1)将数据成员改为私有的；
//(2)将输入和输出的功能改为由成员函数实现；
//(3)在类体内定义成员函数。
//然后编译和运行程序。请分析什么成员应指定为公用的 ? 什么成员应指定为私有的 ? 什么函数最好放在类中定义 ? 什么函数最好在类外定义 ?