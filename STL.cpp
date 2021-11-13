#include<algorithm>
#include<iostream>
#include<set>
using namespace std;
void STL_iterator(){
  set<int>MySet;
  set<int>::iterator it = MySet.begin();//得到指向第一个的指针
  it++;//得到指向下一位的指针
  set<int>::iterator it1 = MySet.begin()++;//错误，目前不知道为啥，但是报错了
}
