#include<iostream>
using namespace std;
#include<fstream>
main()
{
	ifstream x("file4.txt");
	string ch;
	string s;
	getline(x, s);
	cout<<s<<endl;
}
