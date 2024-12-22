#include <iostream>
#include "student.h"
using namespace std;
void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strncpy_s(name, sizeof(name), nm, sizeof(name) - 1);
    sex = s;
}
int main52() {
    Student stud;
    stud.set_value(007, "tcg", 'm');
    stud.display();

    return 0;
}