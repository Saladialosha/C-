#include<iostream>
using namespace std;
class account
{
int acc_no;
double balance;
public:
account ( int x , double y); 
void show()
{
	cout<<" acc_no = "<<acc_no<<endl;
	cout<<" balance = "<<balance<<endl;
}
};
account::account(int x, double y):acc_no(x), balance(y) 
{
	cout<<" initializer list"<<endl;
 }
main()
{
account obj(12002400, 100000);
obj.show();
}
