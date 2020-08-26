#include<iostream>

//int max(int, int); // 声明含有两个整数参数的函数原型
// 定义含有两个整数参数的函数
int max(int m1, int m2)
{
	return (m1>m2)? m1:m2;
}
//先对比25和39，在用大值和55对比
void main()
{
	cout <<max(55,max(25,39))<<endl;
}
