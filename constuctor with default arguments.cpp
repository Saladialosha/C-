#include<iostream>
using namespace std;

class check
{
    int a,b;
    public:
        check(int x=150, int y=200)
        {
        a=x;
        b=y;
        }
        void test()
        {
          if(a>b)
            {
                cout<<"a is greater"<<a<<endl;
            }
            else
                {
                cout<<"b is greater"<<b<<endl;
                }
        }
};
main()
{
        check c(5,15);
        c.test();
        
        cout<<endl;
        check c1(100);
        c1.test();
        
        cout<<endl;
        check c2;
        c2.test();
        
}
