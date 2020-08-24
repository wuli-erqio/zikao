#include <iostream>
using namespace std;
int add(int,int,int);                       //ĞÎÌ¬1
int add(int m1=0,int m2=0,int m3=0,int m4=0)//ĞÎÌ¬2
{return m1 + m2 + m3 + m4;}                            

void main( )
{cout<<add(1,3)<<","<<add(1,3,5)<<","<<add(1,3,5,7)<<endl;}
int add(int m1,int m2,int m3){return m1+m2+m3;}