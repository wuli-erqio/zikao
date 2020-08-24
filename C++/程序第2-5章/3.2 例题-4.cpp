#include <iostream>
using namespace std;

int max(int,int);    //声明含有两个整型参数的函数原型

void main( )
{   cout <<max(55,max(25,39))<<endl;}

int max(int m1,int m2)    //定义含有两个整型参数的函数原型
{return (m1>m2)?m1:m2;}