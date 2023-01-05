#include <iostream>
using namespace std;

string digittwo(int number);
string digitone(int number);
main()
{

  int number;

  while(true)
  {
    cout<<"Enter a number between 1 to 99 (Except 11 to 19): ";
    cin>> number;
  
    digittwo(number);
    digitone(number);
  
    cout<<"The number you entered is: "<<digitone(number)<<digittwo(number)<<endl;
  }
}

string digittwo(int number)
{
  
  int digit2;
  string result2;  

  digit2=number%10;
  
  if(digit2==1)
  {
     result2="-ONE...";
     return result2;
  }

  if(digit2==2)
  {
     result2="-TWO...";
     return result2;
  }  

  if(digit2==3)
  {
     result2="-THREE...";
     return result2;
  }  

  if(digit2==4)
  {
     result2="-FOUR...";
     return result2;
  }

  if(digit2==5)
  {
     result2="-FIVE...";
     return result2;
  }

  if(digit2==6)
  {
     result2="-SIX...";
     return result2;
  }

  if(digit2==7)
  {
     result2="-SEVEN...";
     return result2;
  }

  if(digit2==8)
  {
     result2="-EIGHT...";
     return result2;
  }

  if(digit2==9)
  {
     result2="-NINE...";
     return result2;
  }
}

string digitone(int number)
{
  int digit1;
  string result1;  

  digit1=number/10;
  
  if(digit1==1)
  {
   result1="Number you entered is TEN";
   return result1;     
  }

  if(digit1==2)
  {
   result1="Number you entered is TEWENTY";
   return result1;     
  }

  if(digit1==3)
  {
   result1="Number you entered is THIRTY";
   return result1;     
  }

  if(digit1==4)
  {
   result1="Number you entered is FORTY";
   return result1;     
  }  

  if(digit1==5)
  {
   result1="Number you entered is FIFTY";
   return result1;     
  }

  if(digit1==6)
  {
   result1="Number you entered is SIXTY";
   return result1;     
  }

  if(digit1==7)
  {
   result1="Number you entered is SEVENTY";
   return result1;     
  }

  if(digit1==8)
  {
   result1="Number you entered is EIGHTY";
   return result1;     
  }

  if(digit1==9)
  {
   result1="Number you entered is NINETY";
   return result1;     
  }

}    
  




