#include <iostream>
using namespace std;
int add (int number1,int number2);
int isgreater (int number1,int number2);
main()
{
  int number1;
  int number2;
  int total;
  int greaternumber;  

  cout<<"Enter Number: ";
  cin>> number1;
  
  cout<<"Enter Number: ";
  cin>> number2;
 
  total = add(number1 , number2);
  cout<<"The total is: "<<total<<endl;

  greaternumber = isgreater(number1,number2);
  cout<<"greater number is: "<< greaternumber<<endl;

  cout<< "Program ends";
}

int isgreater (int number1,int number2)
{

  if(number1>number2)
  {
    return number1;
  }
  
  if(number2>number1)
  {
    return number2;
  }

  return 0;
}

int add (int number1,int number2)
{

  int sum= number1+number2;
  return sum;
}