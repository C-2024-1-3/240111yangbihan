//��Ҫ��3������������������һ�����ڶ���ĳ������ݳ�Ա����length(��)��width(��)��height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
//(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
//(2)���㳤�����������
//(3)���3���������������
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
		cout << "����";
		cin >> length;
		cout << "��";
		cin >> width;
		cout << "�ߣ�";
		cin >> height;
	}
	void Volume()
	{
		volume = length * width * height;
		cout << "����������Ϊ��" << volume << endl;
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