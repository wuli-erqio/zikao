#include <iostream>
using namespace std;

int isnumber(char c)
{return (c>='0'&&c<='9')?1:0;}
void main( ) 
{
   char c;
   cin>>c;
   if(isnumber( c ))
	   cout<<"你输入了一个数字";
   else 
       cout<<"你输入的不是一个数字";
}