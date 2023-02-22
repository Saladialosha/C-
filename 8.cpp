#include<iostream> // copy
using namespace std;
#include<fstream>
main()
{

ifstream x(" file8.txt", ios::app);
ofstream x1(" file8.1.txt", ios::app);
char ch;
while (!x.eof())
{
x.get(ch);
x1<<ch;
}

}
