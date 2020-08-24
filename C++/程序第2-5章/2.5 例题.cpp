#include <iostream>
#include <string>       //在程序中包含string类的头文件
using namespace std;

void main( )
{
	string str1("We are here!"); //用构造函数string定义对象str1并赋值
	string str2="Where are you?";//用构造函数string定义对象str2并赋值
	cout<<str1[0]<<str1[11]<<","<<str1<<endl;
	cout<<str2[0]<<str2[13]<<","<<str2<<endl;
	cout<<"please input a word:";
	cin>>str1;    //输入good
	cout<<"lenght of the "<<str1<<" is "<<str1.size( )<<"."<<endl;
}