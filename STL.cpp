#include<algorithm>
#include<iostream>
#include<set>
#include<vector>
using namespace std;
//迭代器
void STL_iterator(){
  set<int>MySet;
  set<int>::iterator it = MySet.begin();//得到指向第一个的指针
  it++;//得到指向下一位的指针
  set<int>::iterator it1 = MySet.begin()++;//错误，目前不知道为啥，但是报错了
}
//算法函数及其一般实现
//1.nth_element,找第k小的数
void algorithm_nth_element(){
  //STL的函数实现
  vectoe<int>MyVec;
  nth_element(MyVec.begin(),MyVec.begin()+k,MyVec.end());
  //分治算法实现
    
}
