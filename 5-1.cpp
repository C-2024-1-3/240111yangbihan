#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�
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
	Time tl;           //����t1ΪTime�����
	tl.time();     
	tl.timeprint();
	return 0;
}
//��д����Ҫ��
//(1)�����ݳ�Ա��Ϊ˽�еģ�
//(2)�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
//(3)�������ڶ����Ա������
//Ȼ���������г��������ʲô��ԱӦָ��Ϊ���õ� ? ʲô��ԱӦָ��Ϊ˽�е� ? ʲô������÷������ж��� ? ʲô������������ⶨ�� ?