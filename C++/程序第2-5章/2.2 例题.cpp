#include <iostream>
using namespace std;

class Point
{      //定义类Point
private:
	double x,y;  //类Point的数据成员
public:
	Point( ){ };  //类Point的无参数构造函数
	Point(double a,double b) {x=a;y=b;}   //具有两个参数的构造函数
	void Setxy(double a,double b) {x=a;y=b;} //成员函数，用于重新设置数据成员
	void Display( ){cout<<x<<"\t"<<y<<endl;} //成员函数，按指定格式输出数据成员
};
void main( )
{
	Point a;  //定义类Point的对象a
	Point b(18.5,10.6);  //定义类Point的对象b并初始化
	a.Setxy(10.6,18.5);  //为对象a的数据成员赋值
	a.Display();  //显示对象a的数据成员
	b.Display();  //显示对象b的数据成员
}