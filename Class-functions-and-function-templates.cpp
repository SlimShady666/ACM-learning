#include<iostream>
using namespace std;

//内联函数格式:
inline int myFunc(int a){ return a*a; }//用处与注意：提高运行效率，不可用于过长的函数与递归函数

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
