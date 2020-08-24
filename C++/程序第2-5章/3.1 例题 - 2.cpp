#include <iostream>
#include <string>
using namespace std;
void swap(string *,string *); //定义函数swap，使用string类的指针作为函数形参
void main( ){
    string str1("现在"),str2("过去");  //定义对象str1和str2
    swap(&str1,&str2);  // 因函数原型中参数的类型是指针，所以string *s1=&str1；
//是完全正确的，即在主调函数中可将对象str1和str2的首地址值&str1和&str2作为实参，并传递给形参
    cout<<"返回后：str1＝"<<str1<<"str2="<<str2<<endl;
}

void swap(string *s1,string *s2) //string类的对象指针s1和s2作为函数形参
{
    string temp=*s1;*s1=*s2;*s2=temp;
    cout<<"交换为：str1＝"<<*s1<<"str2="<<*s2<<endl;
}