#include <iostream>
using namespace std;
class Point {
private:
	int x,y;
public:
	Point(int=0,int=0);  //声明两个参数均为默认参数
   ~Point( );  //声明析构函数
};
Point::Point(int a,int b):x(a),y(b)  //定义构造函数
{cout<<"Initializing"<<a<<","<<b<<endl;}
Point::~Point( ) 
{cout<<"Destructor is active"<<endl;} //定义析构函数
                                
void main( ){
	Point *ptr=new Point[2];  
	delete [ ]ptr;
}