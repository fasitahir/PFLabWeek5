#include <iostream>
using namespace std;
float divide (float number1,float number2);
main()
{
  float number1;
  float number2;
  float total;

  cout<<"Enter Number: ";
  cin>> number1;
  
  cout<<"Enter Number: ";
  cin>> number2;
 
  total = divide(number1 , number2);
  cout<<"The total is: "<<total<<endl;

  cout<< "Program ends";
}

float divide (float number1,float number2)
{

  float division= number1/number2;
  return division;
}