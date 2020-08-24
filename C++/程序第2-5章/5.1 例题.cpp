#include <iostream>
using namespace std;
class object{
private:
    int val;  //声明int型的object类的私有数据成员val
public:
    object( ):val(0) {cout<<"信息一"<<endl;}  //定义不带参数的object类的构造函数object为内联函数
    object(int i):val(i) {cout<<"信息二"<<val<<endl;}  //定义带一个参数的object类的构造函数object为内联函数
    ~object( ) {cout<<"信息三"<<val<<endl;}  //定义object类的析构函数为内联函数
};                               //类object的声明结束
class container{
private:
    object one;  //声明object类的对象one为container类的对象成员，初始化顺序为第一
    object two;  //声明object类的对象two为container类的对象成员，初始化顺序为第二
    int data;    //声明int型的container类的私有数据成员data，初始化顺序为第三
public:
    container( ):data(0) {cout<<"信息四"<<endl;}  //定义不带参数的container类的构造函数container为内联函数
    container(int i,int j,int k);  //声明带3个int型参数的container类的构造函数container
    ~container( ) {cout<<"信息六"<<data<<endl;}  //定义container类的析构函数为内联函数
};                           //类container的声明结束
container::container(int i,int j,int k):two(i),one(j) 
{data=k;cout<<"信息五"<<data<<endl;}  //定义带3个int型参数的container类的构造函数
void main( )
{
	container obj,anObj(5,6,10);
} 