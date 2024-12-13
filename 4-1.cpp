#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> distinctNumbers;
    cout << "Enter ten numbers: ";

    for (int i = 0; i < 10; ++i) {
        int num;
        cin >> num;
        bool isNew = true;

        for (const auto& existingNum : distinctNumbers) {
            if (num == existingNum) {
                isNew = false;
                break;
            }
        }

        if (isNew) {
            distinctNumbers.push_back(num);
        }
    }

    cout << "The distinct numbers are: ";
    for (const auto& num : distinctNumbers) {
        cout << num << " ";
    }

    return 0;
}