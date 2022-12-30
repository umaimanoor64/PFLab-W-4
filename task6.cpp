#include<iostream>
using namespace std;
void totalamount(string day,int amount);



main()
{
int amount;
string day;
while(true)
{
cout<<"enter day of shopping= ";
cin>>day;
totalamount(day,amount);
}
}

void totalamount(string day,int amount)
{

if(day=="sunday")
	{
	int paisy,amount1;
	cout<<"enter shpping amount= ";
	cin>>paisy;
	amount=(paisy*10)/100;
	amount1=paisy-amount;
	cout<<"payable amount is= "<<amount1<<endl;
	}
if(day!="sunday")
	{
	cout<<" sorry we have no discount for u today"<<endl;
	}
}