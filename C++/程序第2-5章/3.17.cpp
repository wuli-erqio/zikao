#include <iostream>
using namespace std;
template <typename T>                         //使用typename代替class
T max(T m1,T m2) {return (m1>m2)?m1:m2;}      //求二者最大值
template <typename T>                         //必须重写
T min(T m1,T m2) {return (m1<m2)?m1:m2;}      //求二者最小值
void main( ) 
{
  /* cout<<max("ABC","ABD")<<","<<min("ABC","ABD")<<","
   <<min ('W','T')<<","<<min(2.0,5.); //输出ABD，ABC，T，2
    cout<<"\t"<<min<double>(8.5,6)<<","<<min(8.5,(double)6)
   <<","<<max((int)8.5,6); //输出6，6，8
    cout<<"\t"<<min<int>(2.3,5.8)<<","<<max<int>('a','y')
   <<","<<max<char>(95,121)<<endl; //输出2，y，121
   */
	cout<<"\t"<<min<double>(8.5,6.1)<<","<<min(8.5,6.0);
}
