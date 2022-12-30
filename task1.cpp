#include<iostream>
using namespace std;

void add(int var1,int var2);
void multiplication(int number1,int number2);
void subtraction(int num1,int num2);

main()

{
int var1,var2;
int sum;
char operation;
while(true)
{
cout<<" enter any number= ";
cin>>var1;
cout<<" enter any nmber= ",
cin>>var2;
cout<<"operation(+,-,*,/)= ";
cin>>operation;
if(operation=='+')
	{
	 add(var1,var2);
	}
if(operation=='*')
	{
	multiplication(var1,var2);
	}
if(operation=='-')
	{
	subtraction(var1,var2);
	}
}
}

void add(int var1,int var2)

{
int sum;
sum=var1+var2;
cout<<"sum is = "<<sum<<endl;
}


void multiplication(int number1,int number2)

{
int multiply;
multiply=number1*number2;
cout<<"product is = "<<multiply<<endl;
}


void subtraction(int num1,int num2)
{
int subtract=num1-num2;
cout<<"subtract is = "<<subtract<<endl;
}