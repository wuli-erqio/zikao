#include <iostream>
using namespace std;
class Two{
    int y;
public:
    friend class One;  //声明类One为类Two的友元
};
class One{                 //类One的成员函数均是类Two的友元函数
    int x;
public:
    One(int a,Two&r,int b){x=a;r.y=b;}  //利用类One的构造函数给本类及类Two的对象赋值
    void Display(Two&);  //声明类Ont的成员函数，它能访问类Two的成员
};
void One::Display(Two&r){cout<<x<<" "<<r.y<<endl;}   
void main( ){
    Two Obj2;  
    One Obj1(23,Obj2,55);  
    Obj1.Display(Obj2);    
}
