#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream f;
	f.open("file10.txt",ios::out);
	f<<"my world is too small";
	cout<<"file pointer position is"<<f.tellp()<<endl;
	f.seekp(-2,ios::cur);
	cout<<"file pointer position is"<<f.tellp()<<endl;
	f.close();
	f.open("file10.txt",ios::in);
	cout<<f.tellg();
	f.seekg(5,ios::beg);
	cout<<f.tellg()<<endl;
	f.close();
	
}
