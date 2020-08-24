#include <iostream>
using namespace std;
typedef double array[12];      //自定义数组标识符array
void avecount(array& b,int n)  //定义函数avecount，其形参一个使用引用，一个使用对象
{                                                  
    double ave(0);
    int count(0);  //累加器初始化0
    for(int j=0;j<n-2;j++){
        ave=ave+b[j];
        if(b[j]<60) count++; }
    b[n-2]=ave/(n-2);  //平均成绩
    b[n-1]=count;      //不及格人数
}
void main( ){
    array b={12,34,56,78,90,98,76,85,64,43};
    array &a=b;
    avecount(a,12);
    cout<< "平均成绩为"<<a[10]<<"分，不及格人数为"<<int(a[11])<<"人。"<<endl;
}