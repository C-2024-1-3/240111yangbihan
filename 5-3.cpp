//需要求3个长方柱的体积，请编一个基于对象的程序。数据成员包括length(长)、width(宽)、height(高)。要求用成员函数实现以下功能：
//(1)由键盘分别输入3个长方柱的长、宽、高；
//(2)计算长方柱的体积；
//(3)输出3个长方柱的体积。
#include<iostream>
using namespace std;

class Cubiod
{
private:
	int length;
	int width;
	int height;
	int volume = 0;
	
public:
	void lengthofside()
	{
		cout << "长：";
		cin >> length;
		cout << "宽：";
		cin >> width;
		cout << "高：";
		cin >> height;
	}
	void Volume()
	{
		volume = length * width * height;
		cout << "长方体的体积为：" << volume << endl;
	}
};
int main53()
{
	Cubiod c1, c2, c3;
	c1.lengthofside();
	c2.lengthofside();
	c3.lengthofside();
	c1.Volume();
	c2.Volume();
	c3.Volume();
	return 0;
}