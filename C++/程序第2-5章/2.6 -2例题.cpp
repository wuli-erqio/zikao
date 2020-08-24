#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

void main( )
{
    string str1="wearehere!",str2(str1);
    reverse(str1.begin( ),str1.end( ));  //str1逆向
    cout<<str1<<endl;     //输出str1="!ereheraew"

    copy(str1.begin( ),str1.end( ),str2.begin( ));
    sort (str1.begin( ),str1.end( ));  //按默认升幂排序str1
    cout<<str1<<endl;            //输出str1＝"!aeeeehrrw"
    cout<<str2<<endl;            //输出str2＝"!ereheraew"

    reverse_copy(str1.begin( ),str1.end( ),str2.begin( ));
    cout<<str2<<endl;            //输出str2＝"wrrheeeea!"

    reverse(str2.begin( )+2,str2.begin( )+8); //此时str2＝"wreeeehra!"
    copy(str2.begin( )+2,str2.begin( )+8,ostream_iterator<char>(cout));  
    //输出"eeeehr"

    sort(str1.begin( ),str1.end( ),greater<char>( ));  //str1降幂排列
    cout<<str1<<endl;            //输出str1＝"wrrheeeea！"

    str1.swap(str2);             //互换内容
    cout<<str1<<" "<<str2<<endl;
      //输出wreeeehra!(str1)  wrrheeeea!(str2)

    cout<<(*find(str1.begin( ),str1.end( ),'e')=='e')<<" "
        <<(*find(str1.begin( ),str1.end( ),'e')=='o')<<endl;
}            //输出1 0 ，注意上面的find不是成员函数find
