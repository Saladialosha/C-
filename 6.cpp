// file handling 
#include<iostream>
#include<fstream>
using namespace std;
main()
{

ofstream outf("file6.txt");
cout<<"Enter name"<<endl;
string name;
getline(cin,name);
outf<<name;
cout<<"Enter rollno"<<endl;
int roll_no;
cin>>roll_no;
outf.close();

ifstream inf("file6.txt");
string s1;
while(!inf.eof())
{
	getline(inf,s1);
	cout<<s1<<endl;
}
inf.close();
}
