#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void main( )
{
    string str1="we are here!",str2=str1;
    reverse(&str1[0],&str1[0]+12);
    copy(&str1[0],&str1[0]+12,&str2[0]);
    cout<<str1<<endl<<str2<<endl;
    reverse_copy(&str2[0],&str2[0]+12,ostream_iterator<char>(cout));
}
