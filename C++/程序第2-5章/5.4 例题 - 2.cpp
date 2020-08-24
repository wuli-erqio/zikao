#include <iostream>
using namespace std;
class Base{
private:
    double x,y;
    const double p;
public:
    Base(double m,double n,double d):p(d) {x=m;y=n;}  
//语句1，常数据成员只能通过初始化列表来获得初值
    void Show( );
    void Show( ) const;    //声明常成员函数
};
    void Base::Show( ){cout<<x<<","<<y<<" p="<<p<<endl;}  //语句2
    void Base::Show( ) const {cout<<x<<","<<y<<" const p="<<p<<endl;}  //语句3

void main( ){
    Base a(8.9,2.5,3.1416);    //语句4，调用语句1进行初始化
    const Base b(2.5,8.9,3.14);      //语句5，调用语句1进行初始化
    b.Show( );       //语句6，调用语句3，输出"2.5,8,9 const p=3.14"
    a.Show( );       //语句7，调用语句2，输出"2.5,8,9 p=3.1416"
}
