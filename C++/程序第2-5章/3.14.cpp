#include <iostream>
using namespace std;
template <class T>
T max(T m1,T m2) {return (m1>m2)?m1:m2;}
void main( )
{
    cout<<max(2,5)<<"\t"<<max(2.0,5.)<<"\t"
    <<max('w','a')<<"\t"<<max("ABC","ABD")<<endl;  
}