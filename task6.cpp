#include<iostream>
using namespace std;

void after15(int hours, int minutes);

main()
{
  int hours,minutes,result;
  char key;
  while(true)
  {
     system("cls");
     cout<<"Enter Number of hours (from 0 to 23): ";
     cin>> hours;

     cout<<"Enter Number of minutes (from 0 to 59): ";
     cin>> minutes;

     after15( hours, minutes);

     cout<<"\nPress any key for next calculation....";
     cin>> key;     
  }
}


void after15(int hours, int minutes)
{
  string result;    

  int sum = minutes + 15;

  if(sum<59)
  {
    minutes=minutes+15;
    cout<<"Time after 15 minutes is: "<<hours<<":"<<minutes<<endl;  
  }

  if(sum>=59)
  {
    hours = hours + 1 ;
    minutes = minutes + 14;

    if(minutes>59)
    {
       minutes=minutes-59;
       if(hours>23)
       {
         hours=0;
       }

       cout<<"Time after 15 mintes is: "<<hours<<":"<<minutes<<endl;
    }
  }
   
}