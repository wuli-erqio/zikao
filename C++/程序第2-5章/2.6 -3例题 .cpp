#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main( )
{
     string str[ ]={"we are here!","where are you?","welcome"};
     for(int i = 0;i<3;i++)
	 {
        copy(str[i].begin( ),str[i].end( ),ostream_iterator<char>(cout));
        cout<<endl;
	 }    //for循环，换行分别输出we are here!  Where are you?  Welcome!
     
	 str[0].swap(str[2]);  //互换，str[0]＝"Welcome!" str[2]＝"we are here!"
     str[0].swap(str[1]);  //互换，str[0]＝"Where are you?" str[1]＝"Welcome!"
     
	 for(i=0;i<3;i++)
        cout<<str[i]<<endl;      //for循环，换行分别输出Where are you?
}      
