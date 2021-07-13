#include<iostream>
using namespace std;
                                     // inline function
 /*When one function is being called multiply times in the program it increases the execution time, 
 so inline function is used to reduce time and increase program efficiency
 Inline functions are considered to be used when the function is small otherwise it will not perform well. 
 Inline is not recommended when static variables are being used in the function          */           

                                   
//inline int product(int a, int b){

    // Not recommended to use below lines(static func) with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained

//     return a*b;
// }  

                                    //Default Arguments in C++
/*Default arguments are those values which are used by the function if we don’t input our value. 
It is recommended to write default arguments after the other arguments.*/

float moneyReceived(int currentMoney, float factor=1.04){            
    return currentMoney * factor;
}
                                         
                                                  //constant arg
//Constant arguments are used when you don’t want your values to be changed or modified by the function
// int strlen(const char *p){                                         

// }


    int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;                         //inline
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;                                                //def arg 
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";


    return 0;
}
    