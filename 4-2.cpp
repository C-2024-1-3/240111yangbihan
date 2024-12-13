//算法可描述如下：
//bool changed = true;
//do
//{
//	changed = false;
//	for (int j = 0; j < listSize – 1; j++)
//		if (list[j] > list[j + 1])
//		{
//			swap list[j] with list[j + 1];
//			changed = true;
//		}
//} while (changed);
//很明显，循环结束后，列表变为升序。容易证明do循环最多执行listSize – 1次。
//编写测试程序，读入一个含有10个双精度数字的数组，调用函数并显示排列后的数字。
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
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> list[i];
    }
    bubbleSort(list, 10);
    cout << "排序后的数组：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}