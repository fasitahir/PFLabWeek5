#include<iostream>
#include<cmath>
using namespace std;

bool symmetrical(int number);
main()
{
  int number;
  bool istrue;
  cout<<"Enter a number: ";
  cin>> number;
  
  istrue = symmetrical(number);
 
  if(istrue == true)
  {
    cout<<"Number is symmetrical...";
  }

  if (istrue == false)
  {
    cout<<"Number is not symmetrical....";
  }
}

bool symmetrical(int number)
{
  int number1;
  int number2;
  int number3;


  number3=number%10;


  int division1=number/10;

  number2=division1%10;
  

  number1=division1/10;
  

  if(number1==number3)
  {
    return true;
  }
  
  if (number1!=number3)
  {
    return false;
  }
}




