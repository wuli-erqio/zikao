#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    double X,Y;
public:
    Point( double xi,double yi){X=xi,Y=yi;}  //类Point的构造函数
    double GetX( ){return X;}
    double GetY( ){return Y;}
    friend double distances( Point&, Point&);  //声明友元函数
};
double distances( Point& a, Point& b)  //像普通函数一样定义友元函数
{   double dx=a.X-b.X;  //因是友元函数，所以可以直接访问对象的私有数据成员
    double dy=a.Y-b.Y;  //因是友元函数，所以可以直接访问对象的私有数据成员
    return sqrt( dx*dx + dy*dy );
}
void main( ){
    Point p1(3.5,5.5),p2(4.5,6.5);  
    cout<<"距离是"<<distances(p1,p2)<<endl;  
}
