#include<iostream>
#include<fstream>
using namespace std;
main()
{

fstream f;
char ch;
f.open("file7.txt",ios::out);
cout<<"Enter the string "<<endl;
while(ch!='.')
{
cin>>ch;
f.put(ch); //writes data from ch to file
}
f.close();

f.open("file7.txt",ios::in);
string s;
while(!f.eof())
{
	getline(f,s);
cout<<s;
}
f.close();
}
