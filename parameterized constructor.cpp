#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l , b;
	public:
		rectangle(int x , int y)
		{
			l=x;
			b=y;	
		}
		void area()
		{
			int area;
			area=l*b;
			cout<<" area = "<<area<<endl;
		}
};
main()
{
	rectangle obj(5,6);
	obj.area();
}
