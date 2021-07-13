#include<iostream>
using namespace std;
//usually we declare the function at start but it sometime we want to declare it at the bottom after main function we use function prototype
// it means we just have to declare just one statement at start to tell that function is there at bottom
// syntax : type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 


int main(){
    int num1,num2;
    cout<<"enter num1 "<<endl;
    cin>>num1;
    cout<<"enter num2 "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b)
// Formal Parameters a and b will be taking values from actual parameters num1 and num2
{
    int c=a+b;
    return c;
}
//example of void function which doesn't need to have parameters or it should return some value
void g(){
    cout<<"\nhello world";
}