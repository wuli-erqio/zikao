#include <iostream>
using namespace std;
class Point {
private:
	int x,y;
public:
	Point(int=0,int=0);  //声明两个参数均为默认参数
};
Point::Point(int a,int b):x(a),y(b)  //定义构造函数
{cout<<"Initializing"<<a<<","<<b<<endl;}

void main( ){
	Point A;          //构造函数产生对象A
	Point B(15,25);   //构造函数产生对象B
	Point C[2];       //构造函数产生对象数组C
}