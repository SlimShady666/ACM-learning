#include <iostream>
using namespace std;
void InsertionSort(int a[], int len);//插入排序

int main() {
    return 0;
}

//插入排序实现
//原理：
//{7 9 2 5 8 3 1 4 6}，从第二个数开始，每个数定义为key值，然后与前一个数字比较，若小于前一个数则
//将其往后移一位，以此类推
void InsertionSort(int a[], int len) {
    int key;
    for (int i = 2; i <= len; i++) {
        key = a[i];
        int j = i - 1;
        while (j > 0 && key < a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
