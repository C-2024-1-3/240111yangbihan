//�㷨���������£�
//bool changed = true;
//do
//{
//	changed = false;
//	for (int j = 0; j < listSize �C 1; j++)
//		if (list[j] > list[j + 1])
//		{
//			swap list[j] with list[j + 1];
//			changed = true;
//		}
//} while (changed);
//�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
//��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�
#include <iostream>
using namespace std;

void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}
int main() {
    double list[10];
    cout << "������10��˫�������֣�" << endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> list[i];
    }
    bubbleSort(list, 10);
    cout << "���������飺" << endl;
    for (int i = 0; i < 10; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}