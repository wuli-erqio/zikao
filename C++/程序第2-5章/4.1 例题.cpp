#include <iostream>
using namespace std;
class Point {              //使用内联函数定义类point
private:
	int x,y;              //私有数据成员
public:
	void Setxy(int a,int b)	{x=a;y=b;}
	void Move(int a,int b)	{x=x+a;y=y+b;}
	void Display( )  {cout<<x<<","<<y<<endl;}
	int Getx( ) {return x;}
	int Gety( ) {return y;}
};      //类定义以分号结束
void print(Point *a){a->Display( );}
void print(Point&a){a.Display( );}
void main( ){
	Point A,B,*p;  //声明对象和指针
	Point &RA=A;  //声明对象RA为对象A的引用
	A.Setxy(25,55);           //使用成员函数为对象A赋值
	B=A;         //例如通过int x＝25，y＝55；对类的私有数据赋值是错误的
	p=&B;
	p->Setxy(112,115);  //使用指针调用函数setxy重设B的值
	print (p);          //传递指针显示对象B的属性
	p->Display( );       //使用指针调用display函数显示对象B的属性
	RA.Move(-80,23);
	print(A);           //使用对象和对象指针的效果一样
	print(RA);
}