#include<iostream>
using namespace std;
class counter
{
	private:
		int c;
	public:
		counter(int a)
		{
			c=a;
		}
		counter(counter &obj)
		{
			cout<<" copy constructor "<<endl;
			c=obj.c;
		}
		void show()
		{
			cout<<" c = "<<c<<endl;
		}
		
};
main()
{
counter c1(5);
counter c2(c1);
c1.show();
c2.show();	
}
