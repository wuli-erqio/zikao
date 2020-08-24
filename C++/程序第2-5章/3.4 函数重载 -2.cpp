#include <iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
int add(int,int,int,int);

void main( )
{cout<<add(1,3)<<","<<add(1,3,5)<<","<<add(1,3,5,7)<<endl;}
int add(int m1,int m2){return m1+m2;}
int add(int m1,int m2,int m3){return m1+m2+m3;}
int add(int m1,int m2,int m3,int m4){return m1+m2+m3+m4;}