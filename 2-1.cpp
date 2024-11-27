#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch='a';
	cin >>ch;

	if (islower(ch)) {
		char uppercase = toupper(ch);
		cout << "Uppercase:" << uppercase << endl;

	}
	else {
		cout << int(ch) << endl;
	}




	return 0;
}