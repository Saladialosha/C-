#include<iostream>
using namespace std;
class student
{
int roll_no;
int marks[5];
public:
void getdata()
 {
cout<<"\nEnter roll no: "<<endl;
cin>>roll_no;
for(int i=0; i<5; i++)
 {
  cout<<"Enter marks in subject"<<(i+1)<<": ";
   cin>>marks[i] ;
 }
 }
void tot_marks()
{
int total=0;
for(int i=0; i<5; i++)
total+= marks[i];
cout<<"\n\nTotal marks "<<total;
}
} ;
main()
{
student obj;
obj.getdata() ;
obj.tot_marks() ;
}
