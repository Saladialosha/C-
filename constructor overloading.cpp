#include<iostream>
using namespace std;
class check
{
	int a,b;
	public: 
	    check()
	    {
	    	cout<<" enter the values for a and b "<<endl;
	    	cin>>a>>b;
		}
		check(int x,int y)
		{
			a=x;
			b=y;
		}
		check(check &obj)
		{
			a=obj.a;
			b=obj.b;
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
	check c;
	c.test();
	check c1(5,15);
	c1.test();
	check c2(c1);
    c2.test();
	
}
