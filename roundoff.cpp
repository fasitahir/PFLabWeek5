#include <iostream>
#include <cmath>
using namespace std;

main()
{
  float number;

  float total;
  float greaternumber;  

  cout<<"Enter Number: ";
  cin>> number;
  
  total=ceil(number);

  cout<<"ceiling of number is : "<< total<<endl;

  total=floor(number);

  cout<<"floor of number is : "<< total<<endl;
  
  
}

