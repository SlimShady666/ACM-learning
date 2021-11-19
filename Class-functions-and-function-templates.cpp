#include<iostream>
using namespace std;

//内联函数格式
inline int myFunc(int a){ return a*a; }//用处与注意：提高运行效率，不可用于过长的函数与递归函数


//递归函数求阶乘实例
int Myfunc(int a){
  return a == 1 ? 1 : a * return Myfunc(a - 1);
}


//默认参数初始化
//从右向左添加默认值，若输入了参数则覆盖默认值
int InitialParameter1(int a, int b = 1, int c = 5);
int InitialParameter2(int a, int b = 1, int c);//不合法
//调用
InitialParameter1(1, 7, 4);//合法
InitialParameter1(1, 7);//合法
InitialParameter1(1, , 4)//不合法

  
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


//模板的具体化与实例化:只有模板是没有函数定义的，为特定数据类型生成定义时得到实例.
template<class T> int MyAdd(T a,T b);
template<> int MyAdd<double>(double a,double b);//显式实例化
  



int main(){
  
}
