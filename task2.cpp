#include<iostream>
using namespace std;

void ifPass(int marks);

main()
{
int marks;
while(true)
{
cout<<"enter ur marks= ";
cin>> marks;
ifPass(marks);
}
}

void ifPass(int marks)
{

if(marks>50)
	{
	cout<<"u have passed first quiz of pf "<<endl;
	}
if(marks==50)
	{
	cout<<" marks are 50"<<endl;
	}
if(marks<50)
	{
	cout<<"sorry you lose"<<endl;
	}
}

