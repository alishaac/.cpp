#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34; 
    // cout<<"The value of a was: "<<a;
    // a = 45; 
    // cout<<"The value of a is: "<<a;
                                     // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;                                            // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

                                      // Manipulators in C++
    /*eg. endl,\n,setw....endl ,\n is used to enter......setw is used to provide good alignment ,
    setw is used when we have declared #include<iomanip>              */                
  
    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;


                                     // Operator Precedence and associativity
    /*operator having high presedence is operated first and 
     in case 2 operators have same prese level we use associativity i.e left to right or right to left. */                                
    int a =3, b=4;
    // int c = (a*5)+b;             //*have high pres then +/- so we have put bracket at it first
    int c = ((((a*5)+b)-45)+87);    /*after * , + and - have same pres level so we checked assoc..
                                    which is left to right ,so it will be executed as  written left to right */
    cout<<c;
    return 0;
}
