#include<iostream>
using namespace std;
#include<fstream>
main()
{
	ifstream x("file5.txt");
	string ch;
	string s;
	while(!x.eof())
	{
		getline(x,s);
		cout<<x<<endl;
	}
}
