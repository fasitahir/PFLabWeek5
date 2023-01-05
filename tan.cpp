#include <iostream>
#include <cmath>
using namespace std;
float heightf(float base , float angle,float height); 

main()
{
  float base;
  float angle;
  float height;
  float result;

  cout<<"Base is: ";
  cin>> base;
  
  cout<<"Angle in radian is: ";
  cin>> angle;
   
  result = heightf( base , angle,height);

  cout<<"Height is: "<<result;
}

float heightf(float base , float angle,float height)
{

  height = tan(angle)*base;
  return height;
}
  

  