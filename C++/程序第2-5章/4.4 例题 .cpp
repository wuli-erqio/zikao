#include <iostream>
using namespace std;
class Point {
private:
	 int X,Y;
public:
	 Point(int a=0,int b=0){X=a;Y=b;cout<<"初始化中"<<endl;}
          //定义有默认参数的构造函数（且为内联公有成员函数）
Point(const Point &p);      //声明复制构造函数
int GetX( ){return X;}
int GetY( ){return Y;}
void Show( ){cout<<"X="<<X<<",Y="<<Y<<endl;}  
~Point( ){cout<<"删除…"<<X<<","<<Y<<endl;}  
};
Point::Point(const Point &p){X=p.X;Y=p.Y;cout<<"拷贝初始化中"<<endl;}
      //定义必须使用对象的引用做形参的复制构造函数
void display(Point p){p.Show( );}    //点类对象做函数形参
void disp(Point &p){p.Show( );}      //点类对象的引用做函数形参
Point fun( ){Point A(101,202);return A;}  //函数返回值为点类对象

void main( ){
   Point A(42,35);    //定义点类对象A并赋值
   Point B(A);       //定义点类对象B，调用复制构造函数用A初始化B
   Point C(58,94);   //定义点类对象C并赋值
   cout<<"called display(B)"<<endl;
   display(B);    
   cout<<"下一个…"<<endl;
   cout<<"called disp(B)"<<endl;
   disp(B);
   cout<<"call C ＝ fun( )"<<endl;
   C=fun( );
   cout<<"called disp( C )"<<endl;
   disp(C);
   cout<<"out…"<<endl;
}
