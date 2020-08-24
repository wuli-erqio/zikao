#include <iostream>
using namespace std;
class Point{                        //定义点类Point
int x,y;                    //没有说明的，默认性质是private
public:
void Set(int a,int b){x=a;y=b;}  //定义内联的公有成员函数
int Getx( ){return x;}           //定义内联的公有成员函数
int Gety( ){return y;}           //定义内联的公有成员函数
};
class Rectangle{                            //定义矩形类Rectangle
Point Loc;                           
int H,W;                            //定义矩形类的高H和宽W
public:
void Set(int x,int y,int h,int w);    
	 Point * GetLoc( );     //声明返回Point类指针的成员函数GetLoc
	 int GetHeight( ){return H;}         //定义内联的公有成员函数
	 int GetWidth( ){return W;}          //定义内联的公有成员函数
};
void Rectangle::Set(int x,int y,int h,int w){Loc.Set(x,y); H=h;W=w;}
Point * Rectangle::GetLoc( ){return &Loc;}        
void main( ){
Rectangle rect;              //定义Rectangle类的对象rect
rect.Set(10,2,25,20);        
cout<<rect.GetHeight( )<<","<<rect.GetWidth( )<<","; //输出"25,20,"
Point * p=rect.GetLoc( );                      
cout<<p->Getx( )<<","<<p->Gety( )<<endl;    //输出"10,2"
}