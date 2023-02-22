#include<iostream>
using namespace std;
class check
{
	int a,b;
	public: 
		check(int x,int y)
		{
			a=x;
			b=y;
		}
		check(int x)
		{
		a=x;
		cout<<"enter a value"<<endl;
		cin>>b;
		}
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
main()
{
	check c1(5,15);
	c1.test();
	check c2(100);
    c2.test();
	
}
