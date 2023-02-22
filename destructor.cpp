#include<iostream>
using namespace std;
class counter
{
int id;
public:
counter(int i)
{
id=i;
cout<<" constructor with object id "<<id<<endl;
}
~ counter()
{
cout<<" destructor with id= "<<id<<endl;
}
};
main()
{
counter obj1(1);
counter obj2(2);
counter obj3(3);
}
