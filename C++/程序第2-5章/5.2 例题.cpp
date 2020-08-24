class Test{
    static int x;            //声明静态数据成员
    int n;
public:
    Test( ){ }      //定义无参数的Test类的构造函数
    Test(int a,int b){x=a;n=b;}  //定义含两个参数的Test类的构造函数Test为内联函数
    static int func( ){return x;}  //定义静态成员函数func为内联函数
    static void sfunc(Test&r,int a){r.n=a;}  //定义静态成员函数sfunc为内联函数,函数以Test类的引用r和整形数a为参数
    int Getn( ){return n;}  //定义成员函数Getn为内联函数
};                    //类Test的声明结束
int Test::x=25;    //初始化静态数据成员
#include <iostream>
using namespace std;
void main( ){
    cout<<Test::func( );    //x在对象产生之前就存在，输出"25"
    Test b,c;       //利用无参数的构造函数产生Test类的对象b和c
    b.sfunc(b,58);  //设置对象b的数据成员n，n值为58，r为b的引用
    cout<<" "<<b.Getn( );  //输出" 58"
    cout<<" "<<b.func( );  //x属于所有对象，输出" 25"
    cout<<" "<<c.func( );  //x属于所有对象，输出" 25"
    Test a(24,56);  //利用含两个参数的构造函数产生Test类的对象a，并将x的值改为24，给a的私有数据成员n赋值56
    cout<<" "<<a.func( )<<" "<<b.func( )<<" "<<c.func( )<<endl; 
}