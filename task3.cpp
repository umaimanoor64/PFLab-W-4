#include <iostream>
using namespace std;
void isEligible(int age);
main()
{
int age;
while(true)
{
cout<<"enter ur age= ";
cin>>age;
isEligible(age);
}
}

void isEligible(int age)
{

if(age==18)
	{
	 cout<<"you are elgigible"<<endl;
	}
if(age!=18)
	{
	 cout<<"you are not elgigible"<<endl;
	}

}