// file handling  
#include<iostream>
using namespace std;
#include<fstream>
main()
{
	ofstream x;
	x.open("file3.txt");
	char ch;
	//string s;
	cin.get(ch);
	//getline(cin,s)
	while (ch!='.')
	{
		x<<ch;
		cin.get(ch);
	}
}
