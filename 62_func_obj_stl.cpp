#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    //function objects/functors:func wrapped in a class so that it is available like a object
int arr[]={11,3,6,1,67,344};
sort(arr,arr+6);     //+5 is written so it it sorts the array upto 5th element only
sort(arr,arr+6,greater<int>());     //greater is used to sort in descending order.... and by default it sorts in ascending
for (int i = 0; i < 6; i++)
{
  cout<<arr[i]<<endl;
}

    return 0;
}