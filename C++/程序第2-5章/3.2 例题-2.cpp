#include <iostream>
using namespace std;
float * input(int&);      //声明返回指针的函数input

void main( )
{
    int num;
    float *data;          //声明与input类型一致的指针变量data
    data=input(num);      //调用函数，返回指针赋给data
    if(data){             //data不空，返回所指内容
         for(int i=0;i<num;i++)     //使用指针的下标形式
         cout<<data[i]<<" ";    //循环输出data内容
    delete data;               //释放指针占用的内存
	}
}

float *input(int& n)               //语句⑤，定义返回指针的函数input
{   
	cout<<"Input number:";         //询问输入数据的个数
    cin>>n;
    if(n<=0) return NULL;          //输入的个数不合理则退出
    float * buf=new float[n];      //根据输入数据的个数申请所需空间
    if(buf==0) return NULL;       //申请不到空间则退出
    for(int i=0;i<n;i++)
         cin>>buf[i];
    return buf;                    //返回指针
}
