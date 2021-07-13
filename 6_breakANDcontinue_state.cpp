#include<iostream>
using namespace std;

int main(){
                          //after using  break statement  the program gets out of the loop
    // for (int i = 0; i < 40; i++)
    // {

    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
                           // after using continue statement the program works cont in loop
    for (int i = 0; i < 40; i++)
    {
      
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}