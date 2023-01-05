#include<iostream>
using namespace std;

string EvenishOddish(int number);

main()
{
  string Result;
  int number;
  cout<<"Enter your number(5 digit only): ";
  cin>> number;

  Result = EvenishOddish(number);
  
  cout<<Result;
 

}



string EvenishOddish(int number)
{  
  string EvenOdd;
  
  int digit5=number%10;

  int number1=number/10;
  int digit4=number1%10;

  int  number2=number1/10;
  int digit3=number2%10;

  int  number3= number2/10;
  int digit2=number3 % 10;

  int number4= number3/10;
  int digit1= number4%10;

  int sum=digit1+digit2+digit3+digit4+digit5;

  int remainder=sum%2;

  if(remainder==0)
  {
    EvenOdd="The Number is Evenish...";
    return EvenOdd; 
  }

  if(remainder!=0)
  {
    EvenOdd="The Number is Oddish...";
    return EvenOdd; 
  }

}

