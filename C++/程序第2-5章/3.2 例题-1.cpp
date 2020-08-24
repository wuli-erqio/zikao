#include <iostream>
using namespace std;

int a[ ]={2,4,6,8,10,12};    //定义全局数组a
int & index(int i);         //返回引用的函数index的原型声明

void main( ){
index(3)=16;             //将a[3]的值改为16
cout<<index(3)<<endl;    //输出a[3]的值16
}

int &index(int i)            //定义返回引用的函数index
{
	return a[i];}   
