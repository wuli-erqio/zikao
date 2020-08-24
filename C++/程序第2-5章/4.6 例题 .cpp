#include <iostream>
using namespace std;
class Max{  //声明类
private:  //封装数据成员和成员函数
	int a,b,c,d;  //数据成员
	int Maxi(int,int);  //声明Maxi只允许类内部的成员函数调用
public:  //对外部的接口
	void Set(int,int,int,int);  //公有成员函数Set的原型声明
	int Maxi( );  //求最大值
}A[3];  //声明类的对象数组，作用与主程序中语句“Max A[3]；”相同
//类中成员函数的实现
int Max::Maxi(int x,int y) {return(x>y)?x:y;}  //求两个数的最大值
void Max::Set(int x1,int x2,int x3=0,int x4=0) {a=x1;b=x2;c=x3;d=x4;} //使用两个默认参数
int Max::Maxi( ){int x=Maxi(a,b);int y=Maxi(c,d);return Maxi(x,y);}
//Maxi函数重载，用于求自己类中四个数的最大值，x和y为Maxi（）函数的局部整数对象，如x和y，C＋＋中允许变量便使用便定义。
void main(){
	A[0].Set(12,45,76,89);  //为数组对象A[0]置初值
	A[1].Set(12,45,76);  //为数组对象A[1]置初值
	A[2].Set(12,45);  //为数组对象A[2]置初值
	for(int i=0;i<3;i++)
		cout<<A[i].Maxi( )<<" ";  //输出对象求值结果
}