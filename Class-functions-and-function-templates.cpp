#include<iostream>
using namespace std;

//模板函数格式
template<class T>
int MyAdd(T a,T b){
  return a + b;
}
//函数重载
int MyAdd(int a,int b){
  return a + b;
}
void test01(){
  int a = 10;
  int b = 20;
  MyAdd(a,b);//使用时系统优先考虑普通函数
  MyAdd<>(a,b);//强制调用模板函数
}





int main(){
  
}
