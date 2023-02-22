#include <iostream> 
using namespace std;
class employee
{
int id ;
char name [80];
public:
void getdata()
{
cout<<" enter employee id"<<endl;
cin>>id;
cout<<" enter employee name "<<endl;
cin>>name;
}
void putdata()
{
cout<<id<<" "<<name<<endl;
} };
main()
{
int i;
employee *ptr;

ptr=new employee[3];

for ( i=0; i<3; i++)
{
cout<<" enter the details of the "<<i+1<<" employee "<<endl;
ptr[i].getdata();
}
for ( i=0; i<3; i++)
{
cout<<" enter the details of the "<<i+1<<" employee "<<endl;
ptr[i].putdata();
}
}
