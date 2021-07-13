#include<iostream>
using namespace std;
int c =5;
int main()                      
{ 
                                  // topic : understanding datatypes 
                                  // build in datatypes
    /*
    int a,b,c;
    cout<<"enter value of a :"<<endl;
    cin>>a;
    cout<<"enter value of b :"<<endl;
    cin>>b;
    c=a+b;
    cout<< "sum of a and b is :" <<c<<endl;
    cout<< "global var c is :" <<::c<<endl;                                     // use scope resolution ope :: to print value of global var.
    */
                                  // literals (Float, double and long double)
    /* float d=22.5f;
    long double e = 22.5L;  
    cout<<"size of 22.5 is "<<sizeof(22.5)<<endl;
    cout<<"size of 22.5 is "<<sizeof(d)<<endl;
    cout<<"size of 22.5f is "<<sizeof(22.5f)<<endl;
    cout<<"size of 22.5F is "<<sizeof(22.5F)<<endl;
    cout<<"size of 22.5l is "<<sizeof(22.5l)<<endl;
    cout<<"size of 22.5L is "<<sizeof(22.5L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;                            
*/
                                 //Reference Variables helps to give one value more than one name
    /* float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl; 
    */
                                 //Typecasting : converting 1 datatype to other
    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    int d = float(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    cout<<"The expression is "<<a + (float)b<<endl;
    cout<<"The expression is "<<a + d<<endl;

    
    return 0;
}