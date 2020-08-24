#include <iostream>
#include <complex>
#include <string>
using namespace std;
void printer(complex <int> );
void printer(complex <double> );
void main( ){
    int i(0);
    complex <int> num1(2,3);
    complex <double> num2(3.5,4.5);//用构造函数complex初始化num2并赋值
    printer(num1);
    printer(num2);
}
void printer(complex <int> a)
{
    string str1("real is "),str2="imag is ";
    cout<<str1<<a.real( )<<','<<str2<<a.imag( )<<endl;
}
void printer(complex <double> a)
{
    string str1("real is "),str2="imag is ";
    cout<<str1<<a.real( )<<','<<str2<<a.imag( )<<endl;
}
