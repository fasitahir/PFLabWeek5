#include <iostream>
#include <cmath>
using namespace std;
float heightf(float base ,float degree, float angle,float height); 

main()
{
  float base;
  float angle;
  float degree;
  float height;
  float result;

  cout<<"Base is: ";
  cin>> base;
  
  cout<<"Angle in degree: ";
  cin>> degree;
   
  result = heightf( base ,degree, angle,height);

  cout<<"Height is: "<<result;
}

float heightf(float base ,float degree, float angle,float height)
{

  float radian=57.2958;
  angle = degree/radian;
  height = tan(angle)*base;
  return height;
}
  

  