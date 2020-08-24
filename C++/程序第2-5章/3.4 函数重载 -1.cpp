#include <iostream>
using namespace std;

int add1(int,int);                  //声明两个整数相加的函数add1
int add2(int,int,int);              //声明三个整数相加的函数add2
int add3(int,int,int,int);          //声明四个整数相加的函数add3

void main( )
{cout<<add1(1,3)<<","<<add2(1,3,5)<<","<<add3(1,3,5,7)<<endl;}
int add1(int m1,int m2){return m1+m2;}
int add2(int m1,int m2,int m3){return m1+m2+m3;}
int add3(int m1,int m2,int m3,int m4){return m1+m2+m3+m4;}
