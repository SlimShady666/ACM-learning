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
//对于i不用回退的情况，i先固定一个值，j往前走，走到满足条件就break，i前移，j再前移......
for(i = 0; i < n; i++)
  for(j = 1; 条件 ; j++)

//位运算 & bitset
//只有2种状态的时候使用。
//^ 同0异1
//| 有1为1
//& 全1为1
//>> / << 右 / 左移    
#include<bitset>
bitset<> bst[];//与二维数组调用类似，需要很长的位运算时使用
