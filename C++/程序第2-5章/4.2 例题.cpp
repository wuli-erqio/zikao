#include <iostream>
using namespace std;
class Point {
private:
	int x,y;
public:
	Point( );  //声明不带参数的构造函数
	Point(int,int);  //声明带两个参数的构造函数
	~Point(){
		cout<<"xigouhanshu"<<endl;}
};
Point::Point( ):x(0),y(0)  {
	cout<<"Initializing default"<<endl;}
//定义不带参数的构造函数
Point::Point(int a,int b):x(a),y(b)  //定义带两个参数的构造函数
{
	cout<<"Initializing"<<a<<","<<b<<endl;}
void main( ){
	Point A;  //使用不带参数的构造函数产生对象A
	Point B(15,25);  //使用带参数的构造函数产生对象B
	Point C[2];  //使用不带参数的构造函数产生对象数组C
	Point D[2]={Point(5,7),Point(8,12)};  //使用带参数的构造函数产生对象数组D
	Point *ptr1=new Point;  //使用不带参数的构造函数产生动态对象ptr1
	Point *ptr2=new Point(5,7);  //使用带参数的构造函数产生动态对象ptr2
	delete ptr1;  //删除动态对象ptr1，释放内存空间
	delete ptr2;  //删除动态对象ptr1，释放内存空间
}