#include <iostream>
#include <string>
using namespace std;
void display(string s1,string s2=" ",string s3=" "); 
void main( ){
    string str1("现在"),str2("过去"),str3("未来");  
    display(str1);              
    display(str1,str2,str3);     
    display(str3,str1);          
    display(str2,str3);         
}
void display(string s1,string s2,string s3)
{
   if(s2==" "&s3==" ")        
       cout<<s1<<endl;
   else if(s3==" "&s2!=" ")   
	   cout<<s1<<"、 "<<s2<<endl;
   else                     
	   cout<<s1<<"、 "<<s2<<"、 "<<s3<<endl;
}