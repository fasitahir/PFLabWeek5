#include<iostream>
#include <cmath>
using namespace std;

float positivequadratic(float a , float b , float c);
float negativequadratic(float a , float b , float c);

main()
{

  float a;
  float b;
  float c;
  
  float square;
  float insquareroot;
  float squareroot;
  float positivevalueofx;
  float negativevalueofx;
  float denominator;  

  cout<<"The value of a";
  cin>> a;

  cout<<"The value of b";
  cin>> b;

  cout<<"The value of c";
  cin>> c;


  square=pow(b,2);
 
  insquareroot= square-4*a*c;

  squareroot=sqrt(insquareroot);

  denominator=2*a;
  
  cout<<"The positive value of x is: "<<positivequadratic(a , b , c)<<endl;
  cout<<"The negative value of x is: "<<negativequadratic(a , b , c)<<endl;

}


float positivequadratic(float a , float b , float c)
{
  
  float square;
  float insquareroot;
  float squareroot;
  float positivevalueofx;
  float negativevalueofx;
  float denominator;


  square=pow(b,2);
 
  insquareroot= square-4*a*c;

  squareroot=sqrt(insquareroot);

  denominator=2*a;
  
  positivevalueofx=(-b+squareroot)/denominator ;

  return positivevalueofx;
  
  
}


float negativequadratic(float a , float b , float c)
{
  
  float square;
  float insquareroot;
  float squareroot;
  float positivevalueofx;
  float negativevalueofx;
  float denominator;



  square=pow(b,2);
 
  insquareroot= square-4*a*c;

  squareroot=sqrt(insquareroot);

  denominator=2*a;
  
  negativevalueofx=(-b-squareroot)/denominator ;

  return negativevalueofx;
  
  
}   
  