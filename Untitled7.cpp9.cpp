#include<iostream>
using namespace std;
#include<fstream>;
main()
{
 char ch ;
ofstream x;
x.open("file9.txt",ios::out| ios::ate);
cout<<x.tellp()<<endl;
x.seekp(2);
int a =x.tellp();
cout<<a<<endl;
}
