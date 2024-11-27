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
	cout <<"总天数:"<< day << endl;
	cout <<"购买苹果总数:"<< totalapple << endl;
	cout << "每天平均花："<<pricetotal/day<<endl;

	return 0;
}