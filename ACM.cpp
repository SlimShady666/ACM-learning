#include<iostream>
//前缀和
//用连续的和去求部分的值
int sum[], dt[];
int main()
{
  int i;
  while(i--){
    cin >> dt[i]
    sum[i] += sum[i - 1];
  }
  dt[i] = sum[i] - sum[i - 1];
}

//双指针
