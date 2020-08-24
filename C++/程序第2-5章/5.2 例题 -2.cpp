#include <iostream>
using namespace std;
class test{
private:
    int n;    //声明test类的私有数据成员n
public:
    test(int i){ n=i;cout<<"构造:"<<i<<endl;}  //定义含一个整型参数的test类的内联构造函数为公有成员函数
    ~test( ){cout<<"析构:"<<n<<endl;}  //定义test类的内联析构函数
    int getn( ){return n;}     //定义test类的内联函数getn
    void inc( ){++n;}    //函数作用为：使用n之前，使n的值加1
};
void main( )
{
    cout<<"循环开始:"<<endl;
    for(int i=0;i<3;i++){
      static test a(3);  //定义test类的静态对象a并初始化
      test b(3);  //定义test类的普通对象b并初始化
      a.inc( );  //test类的静态对象a调用其同类的成员函数inc
      b.inc( );  //test类的普通对象b调用其同类的成员函数inc
      cout<<"a.n="<<a.getn( )<<endl;
      cout<<"b.n="<<b.getn( )<<endl; 
	}
    cout<<"循环结束"<<endl;
    cout<<"退出主程序"<<endl;
}
