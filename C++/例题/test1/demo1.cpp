#include<iostream.h>
void main()
{
	int a=5;
	int &x=a;
	int &y=x;
	y=6;
	cout<<"y="<<y<<endl<<"x="<<x<<endl;
}