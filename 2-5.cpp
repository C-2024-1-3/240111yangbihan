#include<iostream>
#include<sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    int letters = 0, spaces = 0, digits = 0, others = 0;

    for (char ch : line) {
        if (isalpha(ch)) {
            letters++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (isspace(ch)) {
            spaces++;
        }
        else {
            others++;
        }
    }
    cout << "英文字母数量: " << letters << endl;
    cout << "数字字符数量: " << digits << endl;
    cout << "空格数量: " << spaces << endl;
    cout << "其他字符数量: " << others << endl;

    return 0;
}