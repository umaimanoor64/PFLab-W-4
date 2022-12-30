#include<iostream>
using namespace  std;
void greaterNumber(int number1,int number2);

main()
{
int num1,num2;
while(true)
{
cout<<"enter number 1= ";
cin>>num1;
cout<<"enter number 2= ";
cin>>num2;
greaterNumber(num1,num2);
}


}



void greaterNumber(int number1,int number2)
   
{
if(number1<number2)
{
cout<<"num2 is greater"<<endl;
}
if(number1>number2)
{
cout<<"num1 is greater"<<endl;
}



}