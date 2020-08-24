class Test{
    int num;
    double f1;
public:
    Test (int n){num=n;}  //语句1，一个参数的构造函数
    Test(int n,double f){num=n;f1=f;}  //语句2，两个参数的构造函数
    int GetNum( ){return num;}
    float GetF( ){return f1;}
};
#include <iostream>
using namespace std;
void main( ){
    Test one[2]={2,4},*p;  //定义含两个元素的Test类对象数组one和一个指向Test类的对象指针p，one的两个元素调用语句1初始化
    Test two[2]={Test(1,3.2),Test(5,9.5)};  //定义含两个元素的Test类的对象数组two，two的两个元素调用语句2初始化
    for (int i=0;i<2;i++)
       cout<<"one["<<i<<"]="<<one[i].GetNum( )<<",";
    p=two;  //因数组名即代表数组首地址，所以可以用数组名给指针p赋值
    for(i=0;i<2;i++,p++)
       cout<<"two["<<i<<"]=("<<p->GetNum( )<<","<<p->GetF( )<<"),";
}