#include <iostream>
using namespace std;

int percentagevolume(int volumeofpool , float FilledVolume);

float overflow(int volumeofpool , float Filled);

int contribution1(float VolumeduetoP1 , int Volumeofpool);

int contribution2(float VolumeduetoP2 , int Volumeofpool);

main()
{
  int Volumeofpool,P1rate , P2rate ;
  float hours,VolumeduetoP1 , VolumeduetoP2 , FilledVolume  ; 
  char key;
  while(true)
  {
    system("cls");
  
    cout<<"What is the Total volume of your pool: ";
    cin>> Volumeofpool;

    cout<<"Flow rate of Pipe 1 is: ";
    cin>> P1rate;

    cout<<"Flow rate of Pipe 2 is: ";
    cin>> P2rate;

    cout<<"No. of Hour in which the worker was absent: ";
    cin>> hours;

    VolumeduetoP1 = P1rate * hours ; 
  
    VolumeduetoP2 = P2rate * hours ;

    FilledVolume = VolumeduetoP1 + VolumeduetoP2 ;

    if(Volumeofpool >= FilledVolume)
    {
      int result1 = percentagevolume(Volumeofpool , FilledVolume);
      int result2 =  contribution1(VolumeduetoP1 , Volumeofpool);
      int result3 =  contribution1(VolumeduetoP2 , Volumeofpool);

      cout<<"Percentage of pool which was filled: "<<result1<<"%."<<" Contribution due to Pipe1: "<<result2<<"%." << " Contribution due to Pipe2: "<<result3<<"%"<<endl;

    }

    if(Volumeofpool < FilledVolume )
    {
      float result4 = overflow( Volumeofpool , FilledVolume);
      cout<<"The No. of liters of water that overflowed: "<<result4<<endl;
    }

     cout<<"Press any key to do next calculation.....";
     cin>>key;
  }  
}


int percentagevolume(int volumeofpool , float FilledVolume)
{

  int percentageofVolume;

  percentageofVolume = (FilledVolume / volumeofpool) * 100;

  return percentageofVolume;
}

float overflow(int volumeofpool , float FilledVolume)
{
  float litersoverflowed;

  litersoverflowed =FilledVolume - volumeofpool; 

  return litersoverflowed;
}

int contribution1(float VolumeduetoP1 , int Volumeofpool)
{

  int contributionP1 = (VolumeduetoP1/Volumeofpool)*100;
  return contributionP1;

}

int contribution2(float VolumeduetoP2 , int Volumeofpool)
{

  int contributionP2 = (VolumeduetoP2/Volumeofpool)*100;
  return contributionP2;

}



   
  
 



  
