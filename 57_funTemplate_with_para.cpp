#include<iostream>
using namespace std;
// when template isnt used:

// float funcavg(int a, int b){
//     float avg=(a+b)/2;
//     return avg;
// }
// float funcavg1(int a, float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

// int main(){
//     float a;
//     a= funcavg1(2,3.4);
//     cout<<"avg of these 2 nos is :"<<a;

//-----------------------------------------------------------------------------------------------------------------------------------
// using template

// template <class T1,class T2>
// float funcavg(T1 a, T2 b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// int main(){
//     float a;
//     a=funcavg(5,2);
//     cout<<"avg of 2 nos is : "<<a;

//------------------------------------------------------------------------------------------------------------------------------------------
// example to swap :
template <class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=3,y=5;
    swapp(x,y);
    cout<<x<<endl<<y;

    return 0;
}