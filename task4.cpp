#include<iostream>
using namespace std;

void isEven(int number);


main()
{
int num;
while(true)
{
cout<<"enter number = ";
cin>>num;
isEven(num);
}
}

void isEven(int number)
{
if(number%2==0)
	{
	 cout<<"the given number is even"<<endl;
	}
if(number%2!=0)
	{
	 cout<<"the given number is odd"<<endl;
	}
}