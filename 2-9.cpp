#include<iostream>
using namespace std;

int main() {
	int day = 0;
	int totalapple = 0;
	const float priceper = 0.8;
	for (int dailyapple = 2; dailyapple <= 100; dailyapple = 2 * dailyapple)
	{	
		totalapple+=dailyapple;
		day++;
	}	
	float pricetotal = priceper * totalapple;
	cout <<"������:"<< day << endl;
	cout <<"����ƻ������:"<< totalapple << endl;
	cout << "ÿ��ƽ������"<<pricetotal/day<<endl;

	return 0;
}