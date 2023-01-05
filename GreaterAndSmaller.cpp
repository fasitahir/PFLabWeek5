#include <iostream>
#include <cmath>
using namespace std;

main()
{
  float number1;
  float number2;

  float total;
  float greaternumber;  

  cout<<"Enter Number: ";
  cin>> number1;
  
  cout<<"Enter Number: ";
  cin>> number2;



  total=max(number1, number2);
  cout<< total << " is greater number!!!!"<< endl;

  total=min(number1 , number2);
  cout<< total << " is smaller number!!!!"<< endl;
  
}

