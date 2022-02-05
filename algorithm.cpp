#include <iostream>
using namespace std;

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


//数论
//gcd(最大公因数)
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
} 

//对含n个元素的数组所有子数组的枚举
//原理：二进制下从0000（n个）一直变到1111（n个）
int enumerate(int n)
{
    for(int i = 0; i < ((1 << n) - 1); i++)
    {
        for(int  j = 0; j < n; j++)
        {
            if(((i >> j) & 1) == 1)
                ......;
            else
                ......;
        }
    }
}


//递归思想
//归并排序
void hebin(int l, int mid, int r)
{
    int p1 = l, p2 = mid + 1;
    for (int i = l; i <= r; i++)
    {
        if ((p2 > r) || (p1 <= mid && a[p1] <= a[p2]))
            b[i] = a[p1++];
        else
            b[i] = a[p2++];
    }
    for (int i = l; i <= r; i++)
        a[i] = b[i];
}
void mergeSort(int l, int r)
{
    if (l == r) return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    hebin(l, mid, r);
}

//快速排序
void quickSort(int l, int r)
{
    int i = l, j = r;
    int mid = (l + r) / 2;
    while (i <= j)
    {
        while (a[i] < a[mid]) i++;
        while (a[j] > a[mid]) j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++; j--;
        }
    }
    if (i < r) quickSort(i, r);
    if (j > l) quickSort(l, j);
}
