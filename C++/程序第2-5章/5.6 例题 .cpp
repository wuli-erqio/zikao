#include <iostream>
using namespace std;
class A{
private:
    int val;
public:
    A(int i){val=i;}    //含一个整型参数的类A的构造函数
    int value(int a){return val+a;}
};
void main( ){
    int(A::*pfun)(int);    //声明指向类A的成员函数的指针pfun
    pfun=A::value;    //指针指向A的具体的成员函数value
    A obj(10);    //创建类A的对象obj，并调用构造函数初始化
    cout<<(obj.*pfun)(15)<<endl;  //对象obj调用指针指向的成员函数value，输出25
    A *pc=&obj;    //创建类型为A的指针pc，该指针指向类A的对象obj
    cout<<(pc->*pfun)(15)<<endl;  //指针pc调用成员函数value，输出25
}
