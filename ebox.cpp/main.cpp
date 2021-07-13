#include<iostream>
#include "Time.cpp"
using namespace std;
// fill the code here
Time operator+(Time& t1,Time& t2)
{
  Time T1;
  T1.hours=t1.hours+t2.hours;
  T1.minutes=t1.minutes+t2.minutes;
  T1.seconds=t1.seconds+t2.seconds;
  int min1=T1.seconds/60;
  T1.seconds%=60;
  T1.minutes+=min1;
  int hour1=T1.minutes/60;
  T1.minutes%=60;
  T1.hours+=hour1;
  T1.hours%=24;
  cout<<"The sum of given time is:"<<endl;
  printf("%02d:%02d:%02d\n",T1.hours,T1.minutes,T1.seconds);
return T1;
}

int main()
{
       Time t,t1,t2;
        int hr,min,sec;
        cout<<"Enter the first time:\n";
        cin>>hr;
        cin>>min;
        cin>>sec;
        t1.setHours(hr);
        t1.setMinutes(min);
        t1.setSeconds(sec);
        cout<<"Enter the second time:\n";
        cin>>hr;
        cin>>min;
        cin>>sec;
        t2.setHours(hr);
        t2.setMinutes(min);
        t2.setSeconds(sec);
        t=t1+t2;
// fill the code here       
return 0;
}
