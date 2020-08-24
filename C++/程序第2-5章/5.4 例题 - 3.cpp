#include <iostream>
using namespace std;
class ConstFun{
public:
    int f5( ) const{return 5;}    //常成员函数，返回常量对象
    int Obj( ){return 45;}        //一般成员函数
};
void main( ){
    ConstFun s;  //声明ConstFun类的一般对象s
    const int i=s.f5( );  //对象s使用常成员函数f5( )初始化常整数i
    const int j=s.Obj( ); //对象s使用一般成员函数Obj( )初始化常整数j
    int x=s.Obj( );  //对象s使用一般成员函数Obj( )初始化整数x
    int y=s.f5( );  //对象s使用常成员函数f5( )初始化整数y
    cout<<i<<" "<<j<<" "<<x<<" "<<y<<endl;  //输出"5 45 45 5"
    ConstFun const d;  //声明ConstFun类的常对象d
    int k=d.f5( );    //常对象d只能调用常成员函数f5( )
    cout<<"k="<<k<<endl;    //输出"k=5"
}
