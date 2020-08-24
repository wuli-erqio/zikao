#include <iostream>
using namespace std;
class Base{
private:
    int x;
    const int a;          //常数据成员只能通过初始化列表来获得初值
    static const int b;  //静态常数据成员需在类外初始化
    const int& r;        //常引用只能通过初始化列表来获得初值
public:
    Base(int,int);  //声明含两个整型参数的Base类的构造函数
    void Show( ){cout<<x<<","<<a<<","<<b<<","<<r<<endl;} 
    void Display(const double& r){cout<<r<<endl;}   
};
const int Base::b=125;    //静态常数据成员在类外初始化
Base::Base(int i,int j):x(i),a(j),r(x){ }  //初始化列表

void main( ){
    Base a1(104,118),a2(119,140);  
    a1.Show( );    
    a2.Show( );    
    a2.Display(3.14159);    
}
