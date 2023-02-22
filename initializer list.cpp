#include<iostream>
using namespace std;
class check
{
	int a,b;
	public: 
		check(int x,int y);
		void test()
		{
			if(a>b)
			{
				cout<<" a is greater "<<a<<endl;
			}
			else
			{
				cout<<" b is greater "<<b<<endl;
			}
			
		}
};
check::check(int x ,int y):a(x),b(y)
{
	cout<<" initializer list "<<endl;
}
main()
{
	check c1(5,15);
	c1.test();
}
