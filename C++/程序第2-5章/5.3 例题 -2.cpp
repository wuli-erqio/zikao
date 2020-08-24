#include <iostream>
using namespace std;
class Two;  //先声明类Two，以便类One引用Two&
class One {
private:
    int x;
public:
    One(int a){x=a;}  //定义类One的构造函数为内联公有函数
    int Getx( ){return x;}  
    void func(Two&);  //声明本类的成员函数，参数为类Two的引用
};           //类One声明结束
class Two{
private:
    int y;
public:
    Two(int b){y=b;}  //定义类Two的构造函数为内联公有函数
    int Gety( ){return y;} 
    friend void One::func(Two&);  //声明类One的成员函数为本类的友元函数
};            //类Two声明结束
void One::func(Two& r) {r.y=x;}  
void main( ){
    One Obj1(5);    //生成类One的对象Obj1
    Two Obj2(8);    //生成类Two的对象Obj2
    cout<<Obj1.Getx( )<<" "<<Obj2.Gety( )<<endl;  //输出5 8
    Obj1.func(Obj2);   
    cout<<Obj1.Getx( )<<" "<<Obj2.Gety( )<<endl; //输出5 5
}